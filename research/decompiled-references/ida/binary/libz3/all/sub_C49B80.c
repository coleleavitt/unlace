__int64 __fastcall sub_C49B80(_QWORD *a1, __int64 a2, int a3)
{
  __int16 v5; // ax
  __int64 v7; // r12
  __int64 v8; // r14
  __int64 *v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // r13
  __int64 v12; // rdi
  bool v13; // zf
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rax
  int v18; // edx
  int v19; // r13d
  _QWORD *v21; // rdi
  unsigned int v22; // eax
  __int64 v23; // rdx
  int v24; // eax
  __int64 *v25; // rdx
  unsigned __int8 v26; // dl
  __int64 v27; // rax
  int v28; // r12d
  int v29; // r14d
  _QWORD *v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rax
  unsigned int v33; // r12d
  size_t v34; // rsi
  unsigned int *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // r13
  unsigned __int8 v39; // dl
  __int64 v40; // rax
  unsigned int v41; // r15d
  size_t v42; // rsi
  char **exception; // rbp
  unsigned int *v44; // rax
  __int64 v45; // rax
  int v46; // edx
  _QWORD *v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // [rsp+18h] [rbp-60h] BYREF
  __int64 v50[11]; // [rsp+20h] [rbp-58h] BYREF

  if ( !a3 )
  {
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    v21 = (_QWORD *)a1[7];
    if ( v21 )
    {
      v22 = *((_DWORD *)v21 - 1);
      if ( v22 == *((_DWORD *)v21 - 2) )
      {
        v33 = (3 * v22 + 1) >> 1;
        v34 = 8 * v33 + 8;
        if ( 8 * v22 + 8 >= (unsigned int)v34 || v22 >= v33 )
          goto LABEL_57;
        v35 = (unsigned int *)sub_186B300(v21 - 1, v34);
        v36 = v35[1];
        v21 = v35 + 2;
        *v35 = v33;
        a1[7] = v35 + 2;
        LODWORD(v35) = v36;
        v25 = &v21[v36];
        v24 = (_DWORD)v35 + 1;
      }
      else
      {
        v23 = v22;
        v24 = v22 + 1;
        v25 = &v21[v23];
      }
    }
    else
    {
      v47 = (_QWORD *)sub_186B270(0x18u);
      v21 = v47 + 1;
      *v47 = 2;
      v24 = 1;
      a1[7] = v21;
      v25 = v21;
    }
    *v25 = a2;
    *((_DWORD *)v21 - 1) = v24;
    return 1;
  }
  v5 = *(_WORD *)(a2 + 4);
  if ( *(_DWORD *)(a2 + 8) <= 1u || a2 == a1[15] )
  {
    v19 = 0;
  }
  else
  {
    if ( v5 )
    {
      if ( v5 != 2 )
      {
        if ( v5 != 1 )
        {
LABEL_24:
          sub_1872CE0("");
          sub_1873130(114, 226);
        }
        goto LABEL_42;
      }
    }
    else if ( !*(_DWORD *)(a2 + 24) )
    {
      goto LABEL_6;
    }
    v37 = sub_1680FB0(a1[4], a2, 0);
    v38 = v37;
    if ( v37 )
    {
      v50[0] = v37;
      ++*(_DWORD *)(v37 + 8);
      sub_C41DD0(a1 + 7, v50);
      if ( a2 != v38 )
      {
        v45 = a1[5];
        if ( v45 )
        {
          v46 = *(_DWORD *)(v45 - 4);
          if ( v46 )
            *(_BYTE *)(v45 + 16LL * (unsigned int)(v46 - 1) + 8) |= 2u;
        }
      }
      return 1;
    }
    v5 = *(_WORD *)(a2 + 4);
    v19 = 1;
  }
  if ( v5 == 1 )
  {
LABEL_42:
    sub_C49810(a1, a2);
    return 1;
  }
  if ( v5 == 2 )
  {
    v26 = 3;
    if ( a3 != 3 )
      v26 = (a3 - 1) & 3;
    v27 = a1[7];
    v28 = v26;
    if ( v27 )
      v29 = *(_DWORD *)(v27 - 4);
    else
      v29 = 0;
    v30 = (_QWORD *)a1[5];
    if ( !v30 )
    {
LABEL_68:
      v48 = (_QWORD *)sub_186B270(0x28u);
      v30 = v48 + 1;
      *v48 = 2;
      a1[5] = v48 + 1;
      v32 = (__int64)(v48 + 1);
      goto LABEL_39;
    }
    v31 = *((unsigned int *)v30 - 1);
    if ( (_DWORD)v31 != *((_DWORD *)v30 - 2) )
      goto LABEL_38;
    v41 = (unsigned int)(3 * v31 + 1) >> 1;
    v42 = 16 * v41 + 8;
    if ( 16 * (int)v31 + 8 < (unsigned int)v42 && (unsigned int)v31 < v41 )
    {
LABEL_60:
      v44 = (unsigned int *)sub_186B300(v30 - 1, v42);
      v30 = v44 + 2;
      a1[5] = v44 + 2;
      *v44 = v41;
      v32 = (__int64)&v44[4 * v44[1] + 2];
      goto LABEL_39;
    }
LABEL_57:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_C418A0(v50, "Overflow encountered when expanding vector");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v50);
    sub_233E40((__int64)v50);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  if ( v5 )
    goto LABEL_24;
  if ( !*(_DWORD *)(a2 + 24) )
  {
LABEL_6:
    v7 = a1[1];
    v8 = *(_QWORD *)(a2 + 16);
    v9 = a1 + 60;
    v10 = a1[62];
    ++*(_DWORD *)(a2 + 8);
    v11 = a1[18];
    if ( v10 )
    {
      v12 = a1[63];
      v13 = (*(_DWORD *)(v10 + 8))-- == 1;
      if ( v13 )
      {
        sub_15D7BC0(v12, v10);
        v9 = a1 + 60;
      }
    }
    a1[62] = 0;
    if ( (unsigned int)sub_C426E0(v11, v8, nullptr, v9) == 5 )
    {
      ++*(_DWORD *)(a2 + 8);
      v50[0] = a2;
      sub_C41DD0(a1 + 7, v50);
    }
    else
    {
      v14 = a1[60];
      v49 = v14;
      if ( v14 )
        ++*(_DWORD *)(v14 + 8);
      sub_C41DD0(a1 + 7, &v49);
      v15 = a1[60];
      if ( v15 )
      {
        v16 = a1[61];
        v13 = (*(_DWORD *)(v15 + 8))-- == 1;
        if ( v13 )
          sub_15D7BC0(v16, v15);
      }
      a1[60] = 0;
      v17 = a1[5];
      if ( v17 )
      {
        v18 = *(_DWORD *)(v17 - 4);
        if ( v18 )
          *(_BYTE *)(v17 + 16LL * (unsigned int)(v18 - 1) + 8) |= 2u;
      }
    }
    v13 = (*(_DWORD *)(a2 + 8))-- == 1;
    if ( v13 )
      sub_15D7BC0(v7, a2);
    return 1;
  }
  v39 = 3;
  if ( a3 != 3 )
    v39 = (a3 - 1) & 3;
  v40 = a1[7];
  v28 = v39;
  if ( v40 )
    v29 = *(_DWORD *)(v40 - 4);
  else
    v29 = 0;
  v30 = (_QWORD *)a1[5];
  if ( !v30 )
    goto LABEL_68;
  v31 = *((unsigned int *)v30 - 1);
  if ( (_DWORD)v31 == *((_DWORD *)v30 - 2) )
  {
    v41 = (unsigned int)(3 * v31 + 1) >> 1;
    v42 = 16 * v41 + 8;
    if ( 16 * (int)v31 + 8 >= (unsigned int)v42 || (unsigned int)v31 >= v41 )
      goto LABEL_57;
    goto LABEL_60;
  }
LABEL_38:
  v32 = (__int64)&v30[2 * v31];
LABEL_39:
  *(_QWORD *)v32 = a2;
  *(_DWORD *)(v32 + 12) = v29;
  *(_DWORD *)(v32 + 8) = v19 | (16 * v28);
  ++*((_DWORD *)v30 - 1);
  return 0;
}

