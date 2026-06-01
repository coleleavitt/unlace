__int64 __fastcall sub_C8EFD0(_QWORD *a1, __int64 a2, int a3)
{
  __int16 v4; // ax
  __int64 v6; // r12
  __int64 *v7; // r13
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // edx
  int v12; // r13d
  unsigned __int8 v14; // dl
  __int64 v15; // rax
  int v16; // r12d
  int v17; // r14d
  _QWORD *v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // r13
  unsigned __int8 v23; // dl
  __int64 v24; // rax
  unsigned int v25; // r15d
  size_t v26; // rsi
  unsigned int *v27; // rax
  __int64 v28; // rax
  int v29; // edx
  _QWORD *v30; // rax
  char **exception; // rbp
  __int64 v32; // [rsp+8h] [rbp-60h] BYREF
  __int64 v33[11]; // [rsp+10h] [rbp-58h] BYREF

  if ( !a3 )
  {
    v33[0] = a2;
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    sub_C8B2F0(a1 + 7, v33);
    return 1;
  }
  v4 = *(_WORD *)(a2 + 4);
  if ( *(_DWORD *)(a2 + 8) <= 1u || a2 == a1[15] )
  {
    v12 = 0;
  }
  else
  {
    if ( v4 )
    {
      if ( v4 != 2 )
      {
        if ( v4 != 1 )
        {
LABEL_17:
          sub_1872CE0("");
          sub_1873130(114, 226);
        }
LABEL_32:
        sub_C8ED40(a1, a2);
        return 1;
      }
    }
    else if ( !*(_DWORD *)(a2 + 24) )
    {
LABEL_6:
      v6 = a1[1];
      ++*(_DWORD *)(a2 + 8);
      v7 = (__int64 *)a1[18];
      v8 = *(_QWORD *)(a2 + 16);
      sub_C8A9D0(a1[62], a1[63]);
      a1[62] = 0;
      if ( (unsigned int)sub_C8AAA0(v7, v8, nullptr, a1 + 60) == 5 )
      {
        ++*(_DWORD *)(a2 + 8);
        v33[0] = a2;
        sub_C8B2F0(a1 + 7, v33);
      }
      else
      {
        v9 = a1[60];
        v32 = v9;
        if ( v9 )
          ++*(_DWORD *)(v9 + 8);
        sub_C8B2F0(a1 + 7, &v32);
        sub_C8A9F0(a1[60], a1[61]);
        a1[60] = 0;
        v10 = a1[5];
        if ( v10 )
        {
          v11 = *(_DWORD *)(v10 - 4);
          if ( v11 )
            *(_BYTE *)(v10 + 16LL * (unsigned int)(v11 - 1) + 8) |= 2u;
        }
      }
      sub_C8A9D0(a2, v6);
      return 1;
    }
    v21 = sub_1680FB0(a1[4], a2, 0);
    v22 = v21;
    if ( v21 )
    {
      v33[0] = v21;
      ++*(_DWORD *)(v21 + 8);
      sub_C8B2F0(a1 + 7, v33);
      if ( a2 != v22 )
      {
        v28 = a1[5];
        if ( v28 )
        {
          v29 = *(_DWORD *)(v28 - 4);
          if ( v29 )
            *(_BYTE *)(v28 + 16LL * (unsigned int)(v29 - 1) + 8) |= 2u;
        }
      }
      return 1;
    }
    v4 = *(_WORD *)(a2 + 4);
    v12 = 1;
  }
  if ( v4 == 1 )
    goto LABEL_32;
  if ( v4 != 2 )
  {
    if ( v4 )
      goto LABEL_17;
    if ( !*(_DWORD *)(a2 + 24) )
      goto LABEL_6;
    v23 = 3;
    if ( a3 != 3 )
      v23 = (a3 - 1) & 3;
    v24 = a1[7];
    v16 = v23;
    if ( v24 )
      v17 = *(_DWORD *)(v24 - 4);
    else
      v17 = 0;
    v18 = (_QWORD *)a1[5];
    if ( v18 )
    {
      v19 = *((unsigned int *)v18 - 1);
      if ( (_DWORD)v19 == *((_DWORD *)v18 - 2) )
      {
        v25 = (unsigned int)(3 * v19 + 1) >> 1;
        v26 = 16 * v25 + 8;
        if ( 16 * (int)v19 + 8 >= (unsigned int)v26 || (unsigned int)v19 >= v25 )
          goto LABEL_56;
LABEL_47:
        v27 = (unsigned int *)sub_186B300(v18 - 1, v26);
        v18 = v27 + 2;
        a1[5] = v27 + 2;
        *v27 = v25;
        v20 = (__int64)&v27[4 * v27[1] + 2];
        goto LABEL_29;
      }
      goto LABEL_28;
    }
LABEL_55:
    v30 = (_QWORD *)sub_186B270(0x28u);
    v18 = v30 + 1;
    *v30 = 2;
    a1[5] = v30 + 1;
    v20 = (__int64)(v30 + 1);
    goto LABEL_29;
  }
  v14 = 3;
  if ( a3 != 3 )
    v14 = (a3 - 1) & 3;
  v15 = a1[7];
  v16 = v14;
  if ( v15 )
    v17 = *(_DWORD *)(v15 - 4);
  else
    v17 = 0;
  v18 = (_QWORD *)a1[5];
  if ( !v18 )
    goto LABEL_55;
  v19 = *((unsigned int *)v18 - 1);
  if ( (_DWORD)v19 == *((_DWORD *)v18 - 2) )
  {
    v25 = (unsigned int)(3 * v19 + 1) >> 1;
    v26 = 16 * v25 + 8;
    if ( 16 * (int)v19 + 8 >= (unsigned int)v26 || (unsigned int)v19 >= v25 )
    {
LABEL_56:
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_C8AA10(v33, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v33);
      sub_233E40((__int64)v33);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    goto LABEL_47;
  }
LABEL_28:
  v20 = (__int64)&v18[2 * v19];
LABEL_29:
  *(_QWORD *)v20 = a2;
  *(_DWORD *)(v20 + 12) = v17;
  *(_DWORD *)(v20 + 8) = v12 | (16 * v16);
  ++*((_DWORD *)v18 - 1);
  return 0;
}

