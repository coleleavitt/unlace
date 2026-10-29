void __fastcall sub_2208490(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbx
  unsigned int v7; // r13d
  int v8; // eax
  __int64 v9; // r10
  unsigned __int64 v10; // r13
  __int64 v11; // rax
  unsigned __int64 v12; // r12
  int v13; // eax
  bool v14; // al
  unsigned __int64 v15; // rbx
  unsigned int v16; // eax
  __int64 v17; // rax
  __int64 v18; // r12
  unsigned int v19; // eax
  unsigned __int64 v20; // rdx
  unsigned int v21; // eax
  int v22; // eax
  unsigned __int64 v23; // rtt
  __int64 v24; // rbx
  __int64 v25; // [rsp+8h] [rbp-50h]
  __int64 **v26; // [rsp+8h] [rbp-50h]
  const void **v27; // [rsp+8h] [rbp-50h]
  __int64 v28; // [rsp+8h] [rbp-50h]
  __int64 v29; // [rsp+8h] [rbp-50h]
  __int64 v30; // [rsp+10h] [rbp-48h] BYREF
  int v31; // [rsp+18h] [rbp-40h]

  v6 = *(unsigned int *)(a1 + 8);
  if ( (unsigned int)v6 > 0x40 )
  {
    v7 = v6 - sub_C16760(a1);
    v8 = sub_C16760(a2);
    v9 = a1;
    v10 = ((unsigned __int64)v7 + 63) >> 6;
    v11 = (unsigned int)(*(_DWORD *)(a2 + 8) - v8);
    v12 = (unsigned __int64)(v11 + 63) >> 6;
    if ( !v10 )
    {
      v31 = v6;
      sub_2205470((__int64)&v30, 0, 0);
      if ( *(_DWORD *)(a3 + 8) <= 0x40u )
      {
LABEL_38:
        *(_QWORD *)a3 = v30;
        v22 = v31;
        v31 = v6;
        *(_DWORD *)(a3 + 8) = v22;
        sub_2205470((__int64)&v30, 0, 0);
        if ( *(_DWORD *)(a4 + 8) > 0x40u && *(_QWORD *)a4 )
          operator delete[](*(void **)a4);
        *(_QWORD *)a4 = v30;
        *(_DWORD *)(a4 + 8) = v31;
        return;
      }
LABEL_36:
      if ( *(_QWORD *)a3 )
        operator delete[](*(void **)a3);
      goto LABEL_38;
    }
    if ( (_DWORD)v11 == 1 )
    {
      if ( a1 != a3 )
      {
        sub_2205620(a3, v6);
        v21 = *(_DWORD *)(a3 + 8);
        v9 = a1;
        if ( v21 > 0x40 )
        {
          memcpy(*(void **)a3, *(const void **)a1, 8 * (((unsigned __int64)v21 + 63) >> 6));
          v9 = a1;
        }
        else
        {
          *(_QWORD *)a3 = *(_QWORD *)a1;
        }
      }
      v29 = v9;
      v31 = v6;
      sub_2205470((__int64)&v30, 0, 0);
      v9 = v29;
      if ( *(_DWORD *)(a4 + 8) > 0x40u && *(_QWORD *)a4 )
      {
        operator delete[](*(void **)a4);
        v9 = v29;
      }
      *(_QWORD *)a4 = v30;
      *(_DWORD *)(a4 + 8) = v31;
      if ( (unsigned int)v12 <= (unsigned int)v10 )
      {
LABEL_5:
        v25 = v9;
        v13 = sub_2205DB0((unsigned __int64 *)v9, (unsigned __int64 *)a2);
        v9 = v25;
        if ( v13 >= 0 )
        {
          if ( *(_DWORD *)(v25 + 8) <= 0x40u )
          {
            if ( *(_QWORD *)v25 != *(_QWORD *)a2 )
            {
LABEL_8:
              v26 = (__int64 **)v9;
              sub_2205620(a3, v6);
              sub_2205620(a4, v6);
              if ( (_DWORD)v10 == 1 )
              {
                v23 = **v26;
                v24 = v23 % **(_QWORD **)a2;
                sub_C16580((_DWORD *)a3, v23 / **(_QWORD **)a2);
                sub_C16580((_DWORD *)a4, v24);
              }
              else
              {
                v15 = (unsigned __int64)(v6 + 63) >> 6;
                sub_2206F10(*v26, v10, *(__int64 **)a2, v12, *(_QWORD *)a3, *(_QWORD *)a4);
                memset((void *)(*(_QWORD *)a3 + 8 * v10), 0, (unsigned int)(8 * (v15 - v10)));
                memset((void *)(*(_QWORD *)a4 + 8 * v12), 0, (unsigned int)(8 * (v15 - v12)));
              }
              return;
            }
          }
          else
          {
            v14 = sub_2205D70(v25, (const void **)a2);
            v9 = v25;
            if ( !v14 )
              goto LABEL_8;
          }
          v31 = v6;
          sub_2205470((__int64)&v30, 1, 0);
          if ( *(_DWORD *)(a3 + 8) <= 0x40u )
            goto LABEL_38;
          goto LABEL_36;
        }
      }
    }
    else if ( (unsigned int)v12 <= (unsigned int)v10 )
    {
      goto LABEL_5;
    }
    if ( *(_DWORD *)(a4 + 8) > 0x40u || (v19 = *(_DWORD *)(v9 + 8), v19 > 0x40) )
    {
      if ( v9 != a4 )
      {
        v27 = (const void **)v9;
        sub_2205620(a4, *(_DWORD *)(v9 + 8));
        v16 = *(_DWORD *)(a4 + 8);
        if ( v16 > 0x40 )
          memcpy(*(void **)a4, *v27, 8 * (((unsigned __int64)v16 + 63) >> 6));
        else
          *(_QWORD *)a4 = *v27;
      }
    }
    else
    {
      v20 = *(_QWORD *)v9;
      *(_DWORD *)(a4 + 8) = v19;
      *(_QWORD *)a4 = v20;
    }
    v31 = v6;
    sub_2205470((__int64)&v30, 0, 0);
    if ( *(_DWORD *)(a3 + 8) > 0x40u && *(_QWORD *)a3 )
      operator delete[](*(void **)a3);
    *(_QWORD *)a3 = v30;
    *(_DWORD *)(a3 + 8) = v31;
    return;
  }
  v17 = *(_QWORD *)a1 / *(_QWORD *)a2;
  v18 = *(_QWORD *)a1 % *(_QWORD *)a2;
  if ( *(_DWORD *)(a3 + 8) > 0x40u && *(_QWORD *)a3 )
  {
    v28 = *(_QWORD *)a1 / *(_QWORD *)a2;
    operator delete[](*(void **)a3);
    v17 = v28;
  }
  *(_QWORD *)a3 = v17;
  *(_DWORD *)(a3 + 8) = v6;
  if ( *(_DWORD *)(a4 + 8) > 0x40u && *(_QWORD *)a4 )
    operator delete[](*(void **)a4);
  *(_QWORD *)a4 = v18;
  *(_DWORD *)(a4 + 8) = v6;
}
