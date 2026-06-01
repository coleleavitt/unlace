__int64 __fastcall sub_5D5790(_QWORD *a1, __int64 a2, int a3)
{
  __int16 v4; // ax
  int v6; // r13d
  unsigned __int8 v8; // dl
  __int64 v9; // rax
  int v10; // r12d
  int v11; // r14d
  _QWORD *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r13
  unsigned __int8 v17; // dl
  __int64 v18; // rax
  unsigned int v19; // r15d
  size_t v20; // rsi
  char **exception; // rbp
  unsigned int *v22; // rax
  __int64 v23; // rax
  int v24; // edx
  _QWORD *v25; // rax
  __int64 v26[11]; // [rsp+10h] [rbp-58h] BYREF

  if ( !a3 )
  {
    v26[0] = a2;
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    sub_5C94A0(a1 + 7, v26);
    return 1;
  }
  v4 = *(_WORD *)(a2 + 4);
  if ( *(_DWORD *)(a2 + 8) <= 1u || a2 == a1[15] )
  {
    v6 = 0;
  }
  else
  {
    if ( v4 )
    {
      if ( v4 != 2 )
      {
        if ( v4 != 1 )
        {
LABEL_11:
          sub_1872CE0("");
          sub_1873130(114, 226);
        }
LABEL_26:
        sub_5CE9E0(a1, a2);
        return 1;
      }
    }
    else if ( !*(_DWORD *)(a2 + 24) )
    {
LABEL_6:
      sub_5CE730((__int64)a1, a2);
      return 1;
    }
    v15 = sub_1680FB0(a1[4], a2, 0);
    v16 = v15;
    if ( v15 )
    {
      v26[0] = v15;
      ++*(_DWORD *)(v15 + 8);
      sub_5C94A0(a1 + 7, v26);
      if ( a2 != v16 )
      {
        v23 = a1[5];
        if ( v23 )
        {
          v24 = *(_DWORD *)(v23 - 4);
          if ( v24 )
            *(_BYTE *)(v23 + 16LL * (unsigned int)(v24 - 1) + 8) |= 2u;
        }
      }
      return 1;
    }
    v4 = *(_WORD *)(a2 + 4);
    v6 = 1;
  }
  if ( v4 == 1 )
    goto LABEL_26;
  if ( v4 != 2 )
  {
    if ( v4 )
      goto LABEL_11;
    if ( !*(_DWORD *)(a2 + 24) )
      goto LABEL_6;
    v17 = 3;
    if ( a3 != 3 )
      v17 = (a3 - 1) & 3;
    v18 = a1[7];
    v10 = v17;
    if ( v18 )
      v11 = *(_DWORD *)(v18 - 4);
    else
      v11 = 0;
    v12 = (_QWORD *)a1[5];
    if ( v12 )
    {
      v13 = *((unsigned int *)v12 - 1);
      if ( (_DWORD)v13 == *((_DWORD *)v12 - 2) )
      {
        v19 = (unsigned int)(3 * v13 + 1) >> 1;
        v20 = 16 * v19 + 8;
        if ( 16 * (int)v13 + 8 >= (unsigned int)v20 || (unsigned int)v13 >= v19 )
          goto LABEL_38;
LABEL_41:
        v22 = (unsigned int *)sub_186B300(v12 - 1, v20);
        v12 = v22 + 2;
        a1[5] = v22 + 2;
        *v22 = v19;
        v14 = (__int64)&v22[4 * v22[1] + 2];
        goto LABEL_23;
      }
      goto LABEL_22;
    }
LABEL_47:
    v25 = (_QWORD *)sub_186B270(0x28u);
    v12 = v25 + 1;
    *v25 = 2;
    a1[5] = v25 + 1;
    v14 = (__int64)(v25 + 1);
    goto LABEL_23;
  }
  v8 = 3;
  if ( a3 != 3 )
    v8 = (a3 - 1) & 3;
  v9 = a1[7];
  v10 = v8;
  if ( v9 )
    v11 = *(_DWORD *)(v9 - 4);
  else
    v11 = 0;
  v12 = (_QWORD *)a1[5];
  if ( !v12 )
    goto LABEL_47;
  v13 = *((unsigned int *)v12 - 1);
  if ( (_DWORD)v13 == *((_DWORD *)v12 - 2) )
  {
    v19 = (unsigned int)(3 * v13 + 1) >> 1;
    v20 = 16 * v19 + 8;
    if ( 16 * (int)v13 + 8 >= (unsigned int)v20 || (unsigned int)v13 >= v19 )
    {
LABEL_38:
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v26, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v26);
      sub_233E40((__int64)v26);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    goto LABEL_41;
  }
LABEL_22:
  v14 = (__int64)&v12[2 * v13];
LABEL_23:
  *(_QWORD *)v14 = a2;
  *(_DWORD *)(v14 + 12) = v11;
  *(_DWORD *)(v14 + 8) = v6 | (16 * v10);
  ++*((_DWORD *)v12 - 1);
  return 0;
}

