__int64 __fastcall sub_183EAE0(
        __int64 a1,
        char a2,
        int a3,
        _QWORD *a4,
        unsigned __int64 a5,
        __int64 a6,
        unsigned int *a7,
        int a8,
        __int64 a9,
        __int64 a10)
{
  __int64 result; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r8
  char v16; // al
  __int64 v17; // [rsp+0h] [rbp-98h]
  int v18; // [rsp+0h] [rbp-98h]
  __int64 v19; // [rsp+0h] [rbp-98h]
  __int64 v20; // [rsp+18h] [rbp-80h]
  __int64 v21; // [rsp+28h] [rbp-70h] BYREF
  void *ptr; // [rsp+30h] [rbp-68h]
  __int64 v23; // [rsp+38h] [rbp-60h]
  _BYTE v24[88]; // [rsp+40h] [rbp-58h] BYREF

  result = a10;
  *(_DWORD *)(a9 + 8) = 0;
  *(_DWORD *)a10 = a3;
  if ( a3 == 2 )
  {
    if ( *(unsigned int *)(a9 + 12) < a5 )
    {
      v18 = a5;
      sub_2237220(a9, a9 + 16, a5, 8);
      LODWORD(a5) = v18;
    }
    if ( !(_DWORD)a5 )
    {
LABEL_19:
      result = *(unsigned int *)(a9 + 8);
      *(_QWORD *)(a10 + 8) = *(_QWORD *)a9;
      *(_QWORD *)(a10 + 16) = result;
      return result;
    }
    v17 = (__int64)&a4[(unsigned int)(a5 - 1) + 1];
    while ( 1 )
    {
      v13 = sub_1E5F010(*a4, 0);
      v21 = v13;
      if ( a2 )
      {
        ptr = v24;
        v23 = 0x200000000LL;
        sub_1E4C960(a1, v13);
        if ( (_DWORD)v23 )
        {
          sub_1E50B50(a1, *a7, 14, ptr);
          if ( ptr != v24 )
            free(ptr);
          goto LABEL_10;
        }
        if ( ptr != v24 )
          free(ptr);
      }
      if ( (unsigned __int8)sub_18B53F0(a1, &v21, *(_QWORD *)a7) )
      {
LABEL_10:
        ++a4;
        a7 += 2;
        if ( (_QWORD *)v17 == a4 )
          goto LABEL_19;
      }
      else
      {
        v14 = *(unsigned int *)(a9 + 8);
        v15 = v21;
        if ( v14 + 1 > (unsigned __int64)*(unsigned int *)(a9 + 12) )
        {
          v20 = v21;
          sub_2237220(a9, a9 + 16, v14 + 1, 8);
          v14 = *(unsigned int *)(a9 + 8);
          v15 = v20;
        }
        ++a4;
        a7 += 2;
        *(_QWORD *)(*(_QWORD *)a9 + 8 * v14) = v15;
        ++*(_DWORD *)(a9 + 8);
        if ( (_QWORD *)v17 == a4 )
          goto LABEL_19;
      }
    }
  }
  if ( (unsigned int)(a3 - 6) <= 2 )
  {
    if ( a2 && (v19 = a6, v16 = sub_1E534E0(a1, a6, 0), a6 = v19, v16) )
    {
      *(_DWORD *)a10 = 5;
      return a10;
    }
    else
    {
      result = a10;
      *(_QWORD *)(a10 + 24) = a6;
    }
  }
  return result;
}
