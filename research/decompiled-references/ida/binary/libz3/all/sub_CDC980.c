__int64 __fastcall sub_CDC980(_QWORD *a1, __int64 a2, int a3)
{
  __int16 v5; // ax
  __int64 v7; // rsi
  __int64 v8; // r12
  int v9; // eax
  __int64 v10; // rdi
  bool v11; // zf
  int v12; // r13d
  _QWORD *v14; // rdi
  unsigned int v15; // eax
  __int64 v16; // rdx
  int v17; // eax
  __int64 *v18; // rdx
  unsigned __int8 v19; // dl
  __int64 v20; // rax
  int v21; // r12d
  int v22; // r14d
  _QWORD *v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned int v26; // r12d
  size_t v27; // rsi
  unsigned int *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // r13
  unsigned __int8 v32; // dl
  __int64 v33; // rax
  unsigned int v34; // r15d
  size_t v35; // rsi
  char **exception; // rbp
  unsigned int *v37; // rax
  __int64 v38; // rax
  int v39; // edx
  _QWORD *v40; // rax
  _QWORD *v41; // rax
  __int64 v42[11]; // [rsp+0h] [rbp-58h] BYREF

  if ( !a3 )
  {
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    v14 = (_QWORD *)a1[7];
    if ( v14 )
    {
      v15 = *((_DWORD *)v14 - 1);
      if ( v15 == *((_DWORD *)v14 - 2) )
      {
        v26 = (3 * v15 + 1) >> 1;
        v27 = 8 * v26 + 8;
        if ( 8 * v15 + 8 >= (unsigned int)v27 || v15 >= v26 )
          goto LABEL_49;
        v28 = (unsigned int *)sub_186B300(v14 - 1, v27);
        v29 = v28[1];
        v14 = v28 + 2;
        *v28 = v26;
        a1[7] = v28 + 2;
        LODWORD(v28) = v29;
        v18 = &v14[v29];
        v17 = (_DWORD)v28 + 1;
      }
      else
      {
        v16 = v15;
        v17 = v15 + 1;
        v18 = &v14[v16];
      }
    }
    else
    {
      v40 = (_QWORD *)sub_186B270(0x18u);
      v14 = v40 + 1;
      *v40 = 2;
      v17 = 1;
      a1[7] = v14;
      v18 = v14;
    }
    *v18 = a2;
    *((_DWORD *)v14 - 1) = v17;
    return 1;
  }
  v5 = *(_WORD *)(a2 + 4);
  if ( *(_DWORD *)(a2 + 8) <= 1u || a2 == a1[15] )
  {
    v12 = 0;
  }
  else
  {
    if ( v5 )
    {
      if ( v5 != 2 )
      {
        if ( v5 != 1 )
        {
LABEL_16:
          sub_1872CE0("");
          sub_1873130(114, 226);
        }
        goto LABEL_34;
      }
    }
    else if ( !*(_DWORD *)(a2 + 24) )
    {
LABEL_6:
      v7 = a1[62];
      v8 = a1[1];
      v9 = *(_DWORD *)(a2 + 8) + 1;
      *(_DWORD *)(a2 + 8) = v9;
      if ( v7 )
      {
        v10 = a1[63];
        v11 = (*(_DWORD *)(v7 + 8))-- == 1;
        if ( v11 )
          sub_15D7BC0(v10, v7);
        v9 = *(_DWORD *)(a2 + 8);
      }
      v42[0] = a2;
      a1[62] = 0;
      *(_DWORD *)(a2 + 8) = v9 + 1;
      sub_CD7660(a1 + 7, v42);
      v11 = (*(_DWORD *)(a2 + 8))-- == 1;
      if ( v11 )
        sub_15D7BC0(v8, a2);
      return 1;
    }
    v30 = sub_1680FB0(a1[4], a2, 0);
    v31 = v30;
    if ( v30 )
    {
      v42[0] = v30;
      ++*(_DWORD *)(v30 + 8);
      sub_CD7660(a1 + 7, v42);
      if ( a2 != v31 )
      {
        v38 = a1[5];
        if ( v38 )
        {
          v39 = *(_DWORD *)(v38 - 4);
          if ( v39 )
            *(_BYTE *)(v38 + 16LL * (unsigned int)(v39 - 1) + 8) |= 2u;
        }
      }
      return 1;
    }
    v5 = *(_WORD *)(a2 + 4);
    v12 = 1;
  }
  if ( v5 == 1 )
  {
LABEL_34:
    sub_CDC610(a1, a2);
    return 1;
  }
  if ( v5 == 2 )
  {
    v19 = 3;
    if ( a3 != 3 )
      v19 = (a3 - 1) & 3;
    v20 = a1[7];
    v21 = v19;
    if ( v20 )
      v22 = *(_DWORD *)(v20 - 4);
    else
      v22 = 0;
    v23 = (_QWORD *)a1[5];
    if ( !v23 )
    {
LABEL_60:
      v41 = (_QWORD *)sub_186B270(0x28u);
      v23 = v41 + 1;
      *v41 = 2;
      a1[5] = v41 + 1;
      v25 = (__int64)(v41 + 1);
      goto LABEL_31;
    }
    v24 = *((unsigned int *)v23 - 1);
    if ( (_DWORD)v24 != *((_DWORD *)v23 - 2) )
      goto LABEL_30;
    v34 = (unsigned int)(3 * v24 + 1) >> 1;
    v35 = 16 * v34 + 8;
    if ( 16 * (int)v24 + 8 < (unsigned int)v35 && (unsigned int)v24 < v34 )
    {
LABEL_52:
      v37 = (unsigned int *)sub_186B300(v23 - 1, v35);
      v23 = v37 + 2;
      a1[5] = v37 + 2;
      *v37 = v34;
      v25 = (__int64)&v37[4 * v37[1] + 2];
      goto LABEL_31;
    }
LABEL_49:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_CD6E90(v42, "Overflow encountered when expanding vector");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v42);
    sub_233E40((__int64)v42);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  if ( v5 )
    goto LABEL_16;
  if ( !*(_DWORD *)(a2 + 24) )
    goto LABEL_6;
  v32 = 3;
  if ( a3 != 3 )
    v32 = (a3 - 1) & 3;
  v33 = a1[7];
  v21 = v32;
  if ( v33 )
    v22 = *(_DWORD *)(v33 - 4);
  else
    v22 = 0;
  v23 = (_QWORD *)a1[5];
  if ( !v23 )
    goto LABEL_60;
  v24 = *((unsigned int *)v23 - 1);
  if ( (_DWORD)v24 == *((_DWORD *)v23 - 2) )
  {
    v34 = (unsigned int)(3 * v24 + 1) >> 1;
    v35 = 16 * v34 + 8;
    if ( 16 * (int)v24 + 8 >= (unsigned int)v35 || (unsigned int)v24 >= v34 )
      goto LABEL_49;
    goto LABEL_52;
  }
LABEL_30:
  v25 = (__int64)&v23[2 * v24];
LABEL_31:
  *(_QWORD *)v25 = a2;
  *(_DWORD *)(v25 + 12) = v22;
  *(_DWORD *)(v25 + 8) = v12 | (16 * v21);
  ++*((_DWORD *)v23 - 1);
  return 0;
}

