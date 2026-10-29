__int64 __fastcall sub_637A50(_QWORD *a1, __int64 a2, int a3)
{
  __int16 v5; // ax
  int v6; // r13d
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // rax
  int v10; // edx
  __int16 v11; // ax
  unsigned __int8 v12; // dl
  __int64 v13; // rax
  int v14; // r12d
  int v15; // r14d
  _QWORD *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int8 v20; // dl
  __int64 v21; // rax
  unsigned int v22; // r15d
  size_t v23; // rsi
  unsigned int *v24; // rax
  __int64 v25; // r12
  _QWORD *v26; // rax
  char **exception; // rbp
  __int64 v28[11]; // [rsp+10h] [rbp-58h] BYREF

  if ( !a3 )
  {
    v28[0] = a2;
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    sub_62BD60(a1 + 7, v28);
    return 1;
  }
  if ( *(_DWORD *)(a2 + 8) <= 1u || a2 == a1[15] )
    goto LABEL_12;
  v5 = *(_WORD *)(a2 + 4);
  if ( v5 )
  {
    if ( v5 == 2 )
      goto LABEL_6;
LABEL_12:
    v6 = 0;
    goto LABEL_13;
  }
  if ( !*(_DWORD *)(a2 + 24) )
    goto LABEL_12;
LABEL_6:
  v6 = 1;
  v7 = sub_1680FB0(a1[4], a2, 0);
  v8 = v7;
  if ( v7 )
  {
    v28[0] = v7;
    ++*(_DWORD *)(v7 + 8);
    sub_62BD60(a1 + 7, v28);
    if ( a2 != v8 )
    {
      v9 = a1[5];
      if ( v9 )
      {
        v10 = *(_DWORD *)(v9 - 4);
        if ( v10 )
          *(_BYTE *)(v9 + 16LL * (unsigned int)(v10 - 1) + 8) |= 2u;
      }
    }
    return 1;
  }
LABEL_13:
  if ( (unsigned __int8)sub_6AA8B0(a1[18], a2) )
  {
    v11 = *(_WORD *)(a2 + 4);
    if ( v11 == 1 )
    {
      sub_6378E0(a1, a2);
    }
    else
    {
      if ( v11 == 2 )
      {
        v20 = 3;
        if ( a3 != 3 )
          v20 = (a3 - 1) & 3;
        v21 = a1[7];
        v14 = v20;
        if ( v21 )
          v15 = *(_DWORD *)(v21 - 4);
        else
          v15 = 0;
        v16 = (_QWORD *)a1[5];
        if ( v16 )
        {
          v17 = *((unsigned int *)v16 - 1);
          if ( (_DWORD)v17 != *((_DWORD *)v16 - 2) )
            goto LABEL_24;
          v22 = (unsigned int)(3 * v17 + 1) >> 1;
          v23 = 16 * v22 + 8;
          if ( 16 * (int)v17 + 8 >= (unsigned int)v23 || (unsigned int)v17 >= v22 )
            goto LABEL_49;
          goto LABEL_41;
        }
LABEL_48:
        v26 = (_QWORD *)sub_186B270(0x28u);
        v16 = v26 + 1;
        *v26 = 2;
        a1[5] = v26 + 1;
        v18 = (__int64)(v26 + 1);
        goto LABEL_25;
      }
      if ( v11 )
      {
        sub_1872CE0("");
        sub_1873130(114, 226);
      }
      if ( *(_DWORD *)(a2 + 24) )
      {
        v12 = 3;
        if ( a3 != 3 )
          v12 = (a3 - 1) & 3;
        v13 = a1[7];
        v14 = v12;
        if ( v13 )
          v15 = *(_DWORD *)(v13 - 4);
        else
          v15 = 0;
        v16 = (_QWORD *)a1[5];
        if ( v16 )
        {
          v17 = *((unsigned int *)v16 - 1);
          if ( (_DWORD)v17 != *((_DWORD *)v16 - 2) )
          {
LABEL_24:
            v18 = (__int64)&v16[2 * v17];
LABEL_25:
            *(_QWORD *)v18 = a2;
            *(_DWORD *)(v18 + 12) = v15;
            *(_DWORD *)(v18 + 8) = v6 | (16 * v14);
            ++*((_DWORD *)v16 - 1);
            return 0;
          }
          v22 = (unsigned int)(3 * v17 + 1) >> 1;
          v23 = 16 * v22 + 8;
          if ( 16 * (int)v17 + 8 >= (unsigned int)v23 || (unsigned int)v17 >= v22 )
          {
LABEL_49:
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v28, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v28);
            sub_233E40((__int64)v28);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
LABEL_41:
          v24 = (unsigned int *)sub_186B300(v16 - 1, v23);
          v16 = v24 + 2;
          a1[5] = v24 + 2;
          *v24 = v22;
          v18 = (__int64)&v24[4 * v24[1] + 2];
          goto LABEL_25;
        }
        goto LABEL_48;
      }
      v25 = a1[1];
      *(_DWORD *)(a2 + 8) += 2;
      v28[0] = a2;
      sub_62BD60(a1 + 7, v28);
      sub_629F20(a2, v25);
    }
  }
  else
  {
    ++*(_DWORD *)(a2 + 8);
    v28[0] = a2;
    sub_62BD60(a1 + 7, v28);
  }
  return 1;
}

