unsigned __int64 __fastcall sub_22088A0(_QWORD **a1, unsigned __int64 a2, __int64 a3, unsigned __int64 *a4)
{
  unsigned int v6; // ebx
  unsigned __int64 result; // rax
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rax
  bool v10; // cc
  unsigned int v11; // eax
  unsigned int v12; // ecx
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // [rsp+0h] [rbp-48h]
  unsigned __int64 v16; // [rsp+8h] [rbp-40h] BYREF
  __int64 v17; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v18; // [rsp+18h] [rbp-30h]

  v6 = *((_DWORD *)a1 + 2);
  v16 = a2;
  if ( v6 > 0x40 )
  {
    result = v6 - (unsigned int)sub_C16760((__int64)a1);
    v8 = (result + 63) >> 6;
    if ( v8 )
    {
      if ( v16 == 1 )
      {
        if ( a1 != (_QWORD **)a3 )
        {
          sub_2205620(a3, v6);
          v11 = *(_DWORD *)(a3 + 8);
          if ( v11 > 0x40 )
          {
            result = (unsigned __int64)memcpy(*(void **)a3, *a1, 8 * (((unsigned __int64)v11 + 63) >> 6));
          }
          else
          {
            result = (unsigned __int64)*a1;
            *(_QWORD *)a3 = *a1;
          }
        }
        goto LABEL_21;
      }
      if ( (unsigned int)result > 0x40 )
        goto LABEL_11;
      v9 = **a1;
      if ( v16 > v9 )
      {
        *a4 = v9;
        v18 = v6;
        sub_2205470((__int64)&v17, 0, 0);
        if ( *(_DWORD *)(a3 + 8) > 0x40u )
        {
          if ( *(_QWORD *)a3 )
            operator delete[](*(void **)a3);
        }
        *(_QWORD *)a3 = v17;
        result = v18;
        *(_DWORD *)(a3 + 8) = v18;
        return result;
      }
      if ( v16 != v9 )
      {
LABEL_11:
        sub_2205620(a3, v6);
        if ( v8 == 1 )
        {
          v12 = *(_DWORD *)(a3 + 8);
          v13 = **a1;
          v14 = v13 / v16;
          if ( v12 <= 0x40 )
          {
            *(_QWORD *)a3 = v14;
            sub_CF8100((unsigned __int64 *)a3);
          }
          else
          {
            **(_QWORD **)a3 = v14;
            memset(
              (void *)(*(_QWORD *)a3 + 8LL),
              0,
              8 * ((unsigned int)(((unsigned __int64)v12 + 63) >> 6) + 0x1FFFFFFF));
          }
          result = v13 / v16;
          *a4 = v13 % v16;
        }
        else
        {
          sub_2206F10(*a1, v8, (__int64 *)&v16, 1, *(_QWORD *)a3, (__int64)a4);
          return (unsigned __int64)memset(
                                     (void *)(*(_QWORD *)a3 + 8 * v8),
                                     0,
                                     8 * ((unsigned int)(((unsigned __int64)v6 + 63) >> 6) - (unsigned int)v8));
        }
        return result;
      }
      v18 = v6;
      sub_2205470((__int64)&v17, 1, 0);
      if ( *(_DWORD *)(a3 + 8) > 0x40u )
        goto LABEL_18;
    }
    else
    {
      v18 = v6;
      sub_2205470((__int64)&v17, 0, 0);
      if ( *(_DWORD *)(a3 + 8) > 0x40u )
      {
LABEL_18:
        if ( *(_QWORD *)a3 )
          operator delete[](*(void **)a3);
      }
    }
    *(_QWORD *)a3 = v17;
    result = v18;
    *(_DWORD *)(a3 + 8) = v18;
LABEL_21:
    *a4 = 0;
    return result;
  }
  result = (unsigned __int64)*a1 / a2;
  v10 = *(_DWORD *)(a3 + 8) <= 0x40u;
  *a4 = (unsigned __int64)*a1 % a2;
  if ( !v10 && *(_QWORD *)a3 )
  {
    v15 = result;
    operator delete[](*(void **)a3);
    result = v15;
  }
  *(_QWORD *)a3 = result;
  *(_DWORD *)(a3 + 8) = v6;
  return result;
}
