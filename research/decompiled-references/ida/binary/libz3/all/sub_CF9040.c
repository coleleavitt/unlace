__int64 __fastcall sub_CF9040(_QWORD *a1, __int64 a2, int a3)
{
  char **v3; // rbp
  char **exception; // rbp
  __int16 v6; // ax
  __int64 v8; // r12
  int v9; // r13d
  unsigned __int8 v11; // dl
  __int64 v12; // rax
  int v13; // r12d
  int v14; // r14d
  _QWORD *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // r13
  unsigned __int8 v20; // dl
  __int64 v21; // rax
  unsigned int v22; // r15d
  size_t v23; // rsi
  unsigned int *v24; // rax
  __int64 v25; // rax
  int v26; // edx
  _QWORD *v27; // rax
  __int64 v28[11]; // [rsp+0h] [rbp-58h] BYREF

  if ( !a3 )
  {
    v28[0] = a2;
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    sub_CF8D70(a1 + 7, v28);
    return 1;
  }
  v6 = *(_WORD *)(a2 + 4);
  if ( *(_DWORD *)(a2 + 8) <= 1u || a2 == a1[15] )
  {
    v9 = 0;
  }
  else
  {
    if ( v6 )
    {
      if ( v6 != 2 )
      {
        if ( v6 != 1 )
        {
LABEL_11:
          sub_1872CE0("");
          sub_1873130(114, 226);
        }
LABEL_26:
        sub_CF8E30(a1, a2);
        return 1;
      }
    }
    else if ( !*(_DWORD *)(a2 + 24) )
    {
LABEL_6:
      v8 = a1[1];
      *(_DWORD *)(a2 + 8) += 2;
      v28[0] = a2;
      sub_CF8D70(a1 + 7, v28);
      sub_CF71D0(a2, v8);
      return 1;
    }
    v18 = sub_1680FB0(a1[4], a2, 0);
    v19 = v18;
    if ( v18 )
    {
      v28[0] = v18;
      ++*(_DWORD *)(v18 + 8);
      sub_CF8D70(a1 + 7, v28);
      if ( a2 != v19 )
      {
        v25 = a1[5];
        if ( v25 )
        {
          v26 = *(_DWORD *)(v25 - 4);
          if ( v26 )
            *(_BYTE *)(v25 + 16LL * (unsigned int)(v26 - 1) + 8) |= 2u;
        }
      }
      return 1;
    }
    v6 = *(_WORD *)(a2 + 4);
    v9 = 1;
  }
  if ( v6 == 1 )
    goto LABEL_26;
  if ( v6 != 2 )
  {
    if ( v6 )
      goto LABEL_11;
    if ( !*(_DWORD *)(a2 + 24) )
      goto LABEL_6;
    v20 = 3;
    if ( a3 != 3 )
      v20 = (a3 - 1) & 3;
    v21 = a1[7];
    v13 = v20;
    if ( v21 )
      v14 = *(_DWORD *)(v21 - 4);
    else
      v14 = 0;
    v15 = (_QWORD *)a1[5];
    if ( v15 )
    {
      v16 = *((unsigned int *)v15 - 1);
      if ( (_DWORD)v16 == *((_DWORD *)v15 - 2) )
      {
        v22 = (unsigned int)(3 * v16 + 1) >> 1;
        v23 = 16 * v22 + 8;
        if ( 16 * (int)v16 + 8 >= (unsigned int)v23 || (unsigned int)v16 >= v22 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_CF7210(v28, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v28);
          sub_233E40((__int64)v28);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
LABEL_41:
        v24 = (unsigned int *)sub_186B300(v15 - 1, v23);
        v15 = v24 + 2;
        a1[5] = v24 + 2;
        *v24 = v22;
        v17 = (__int64)&v24[4 * v24[1] + 2];
        goto LABEL_23;
      }
      goto LABEL_22;
    }
LABEL_48:
    v27 = (_QWORD *)sub_186B270(0x28u);
    v15 = v27 + 1;
    *v27 = 2;
    a1[5] = v27 + 1;
    v17 = (__int64)(v27 + 1);
    goto LABEL_23;
  }
  v11 = 3;
  if ( a3 != 3 )
    v11 = (a3 - 1) & 3;
  v12 = a1[7];
  v13 = v11;
  if ( v12 )
    v14 = *(_DWORD *)(v12 - 4);
  else
    v14 = 0;
  v15 = (_QWORD *)a1[5];
  if ( !v15 )
    goto LABEL_48;
  v16 = *((unsigned int *)v15 - 1);
  if ( (_DWORD)v16 == *((_DWORD *)v15 - 2) )
  {
    v22 = (unsigned int)(3 * v16 + 1) >> 1;
    v23 = 16 * v22 + 8;
    if ( 16 * (int)v16 + 8 >= (unsigned int)v23 || (unsigned int)v16 >= v22 )
    {
      v3 = (char **)__cxa_allocate_exception(0x28u);
      sub_CF7210(v28, "Overflow encountered when expanding vector");
      *v3 = (char *)off_1C63128;
      sub_2333C0(v3 + 1, v28);
      sub_233E40((__int64)v28);
      __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    goto LABEL_41;
  }
LABEL_22:
  v17 = (__int64)&v15[2 * v16];
LABEL_23:
  *(_QWORD *)v17 = a2;
  *(_DWORD *)(v17 + 12) = v14;
  *(_DWORD *)(v17 + 8) = v9 | (16 * v13);
  ++*((_DWORD *)v15 - 1);
  return 0;
}

