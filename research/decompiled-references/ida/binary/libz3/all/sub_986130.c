__int64 __fastcall sub_986130(_QWORD *a1, unsigned int **a2, unsigned int **a3, __int64 a4)
{
  char **v4; // rbp
  char **exception; // rbp
  char **v6; // rbp
  unsigned int *v9; // r9
  unsigned int *v10; // r8
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rbx
  _QWORD *v15; // rdi
  unsigned int v16; // eax
  __int64 v17; // rdx
  int v18; // eax
  __int64 *v19; // rdx
  _DWORD *v21; // rax
  unsigned int *v22; // rcx
  unsigned int *v23; // rax
  __int64 v24; // r10
  __int64 v25; // rax
  unsigned int v26; // r12d
  size_t v27; // rsi
  unsigned int *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  _QWORD *v33; // rax
  _QWORD *v34; // r11
  __int64 v35; // rdx
  __int64 v36[7]; // [rsp+10h] [rbp-38h] BYREF

  if ( !a4 )
    return 0;
  v9 = *a2;
  v10 = *a3;
  v12 = *(_QWORD *)(a4 + 8LL * (unsigned int)(*(_DWORD *)(a4 + 24) - 1) + 32);
  if ( *(_WORD *)(v12 + 4)
    || (v21 = *(_DWORD **)(*(_QWORD *)(v12 + 16) + 24LL)) == nullptr
    || *v21
    || v21[1] != 2
    || *(_DWORD *)(v12 + 24) != 2 )
  {
    v13 = a1[1];
    if ( v12 == *(_QWORD *)(v13 + 864) )
    {
      v30 = a1[3];
      if ( a3 != *(unsigned int ***)(v30 + 8640) )
      {
        if ( a3 != *(unsigned int ***)(v30 + 8648) )
          goto LABEL_37;
        goto LABEL_5;
      }
LABEL_34:
      v14 = sub_15DE270(v13);
LABEL_6:
      if ( v14 )
        ++*(_DWORD *)(v14 + 8);
      v15 = (_QWORD *)a1[35];
      if ( v15 )
      {
        v16 = *((_DWORD *)v15 - 1);
        if ( v16 == *((_DWORD *)v15 - 2) )
        {
          v26 = (3 * v16 + 1) >> 1;
          v27 = 8 * v26 + 8;
          if ( 8 * v16 + 8 >= (unsigned int)v27 || v16 >= v26 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v36, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v36);
            sub_233E40((__int64)v36);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          goto LABEL_33;
        }
        goto LABEL_10;
      }
      goto LABEL_45;
    }
LABEL_4:
    if ( a3 != *(unsigned int ***)(a1[3] + 8640LL) )
    {
LABEL_5:
      v14 = sub_15DE2F0(v13);
      goto LABEL_6;
    }
    goto LABEL_34;
  }
  v22 = *(unsigned int **)(v12 + 32);
  v23 = *(unsigned int **)(v12 + 40);
  if ( *((_WORD *)v22 + 2) == 2 )
    v22 = **(unsigned int ***)(*(_QWORD *)(a1[3] + 8656LL) + 8LL * *v22);
  v13 = a1[1];
  v24 = *(_QWORD *)(v13 + 864);
  if ( *((_WORD *)v23 + 2) == 2 )
  {
    v34 = (_QWORD *)a1[3];
    v23 = **(unsigned int ***)(v34[1082] + 8LL * *v23);
    if ( v12 == v24 && a3 != (unsigned int **)v34[1080] && a3 != (unsigned int **)v34[1081] )
    {
LABEL_37:
      v31 = sub_15E1B70(v13);
      v32 = sub_15DFBC0(v13, v31);
      v14 = v32;
      if ( v32 )
        ++*(_DWORD *)(v32 + 8);
      v15 = (_QWORD *)a1[35];
      if ( v15 )
      {
        v16 = *((_DWORD *)v15 - 1);
        if ( v16 == *((_DWORD *)v15 - 2) )
        {
          v26 = (3 * v16 + 1) >> 1;
          v27 = 8 * v26 + 8;
          if ( 8 * v16 + 8 >= (unsigned int)v27 || v16 >= v26 )
          {
            v4 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v36, "Overflow encountered when expanding vector");
            *v4 = (char *)off_1C63128;
            sub_2333C0(v4 + 1, v36);
            sub_233E40((__int64)v36);
            __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
LABEL_33:
          v28 = (unsigned int *)sub_186B300(v15 - 1, v27);
          v29 = v28[1];
          v15 = v28 + 2;
          a1[35] = v28 + 2;
          *v28 = v26;
          LODWORD(v28) = v29;
          v19 = &v15[v29];
          v18 = (_DWORD)v28 + 1;
          goto LABEL_11;
        }
        goto LABEL_10;
      }
LABEL_45:
      v33 = (_QWORD *)sub_186B270(0x18u);
      v15 = v33 + 1;
      *v33 = 2;
      v18 = 1;
      a1[35] = v15;
      v19 = v15;
      goto LABEL_11;
    }
  }
  else if ( v12 == v24 )
  {
    v35 = a1[3];
    if ( a3 != *(unsigned int ***)(v35 + 8640) && a3 != *(unsigned int ***)(v35 + 8648) )
      goto LABEL_37;
  }
  if ( v10 != v22 )
  {
    if ( v10 == v23 )
    {
      if ( v9 != v22 )
        goto LABEL_24;
      return a4;
    }
    goto LABEL_4;
  }
  if ( v10 == v23 && v9 == v10 )
    return a4;
LABEL_24:
  v25 = sub_15E2180(a1[1]);
  v14 = v25;
  if ( v25 )
    ++*(_DWORD *)(v25 + 8);
  v15 = (_QWORD *)a1[35];
  if ( !v15 )
    goto LABEL_45;
  v16 = *((_DWORD *)v15 - 1);
  if ( v16 == *((_DWORD *)v15 - 2) )
  {
    v26 = (3 * v16 + 1) >> 1;
    v27 = 8 * v26 + 8;
    if ( 8 * v16 + 8 >= (unsigned int)v27 || v16 >= v26 )
    {
      v6 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v36, "Overflow encountered when expanding vector");
      *v6 = (char *)off_1C63128;
      sub_2333C0(v6 + 1, v36);
      sub_233E40((__int64)v36);
      __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    goto LABEL_33;
  }
LABEL_10:
  v17 = v16;
  v18 = v16 + 1;
  v19 = &v15[v17];
LABEL_11:
  *v19 = v14;
  *((_DWORD *)v15 - 1) = v18;
  return v14;
}

