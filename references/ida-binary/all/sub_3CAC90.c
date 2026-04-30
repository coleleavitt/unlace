unsigned __int64 __fastcall edit_argloc_dialog_t__::vfunc_4(__int64 a1, __int64 a2)
{
  int v2; // eax
  bool v4; // zf
  const char *v5; // rdi
  int v6; // r12d
  const char *v7; // rdi
  int v8; // r13d
  __int64 tinfo_size; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // r9d
  unsigned int v14; // eax
  unsigned int v15; // r12d
  __int64 v16; // r13
  const char *v17; // rdi
  int v18; // r14d
  const char *v19; // rdi
  int v20; // r13d
  const char *v21; // rdi
  int v22; // r14d
  int v23; // r12d
  int v24; // r9d
  __int64 v25; // r15
  __int64 v26; // r12
  const char *v27; // r14
  _QWORD *v28; // rax
  int v29; // r9d
  unsigned __int64 v30; // rsi
  char *v31; // rax
  const char *v32; // rdx
  unsigned int v33; // ecx
  unsigned int v34; // eax
  __int64 v35; // rdi
  double v36; // xmm0_8
  __int64 v38; // r13
  __int64 v39; // r12
  __int64 v40; // r12
  const char *v41; // rdi
  int v42; // r13d
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rsi
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  int v50; // r9d
  _QWORD *vars0; // [rsp+0h] [rbp+0h] BYREF
  __int128 vars8; // [rsp+8h] [rbp+8h]
  unsigned __int64 vars18; // [rsp+18h] [rbp+18h]

  v2 = *(_DWORD *)(a2 + 12);
  vars18 = __readfsqword(0x28u);
  if ( (unsigned int)(v2 - 2) > 5 )
    goto LABEL_15;
  v4 = *(_BYTE *)(a1 + 403) == 0;
  LODWORD(vars0) = 0;
  *(_QWORD *)&vars8 = 0;
  if ( !v4 )
  {
    v40 = *(_QWORD *)(a1 + 360);
    v41 = &s1;
    if ( *(_QWORD *)(a1 + 320) )
      v41 = *(const char **)(a1 + 312);
    v42 = str2reg(v41);
    cleanup_argloc(&vars0);
    LODWORD(vars0) = 3;
    v4 = *(_BYTE *)(a1 + 404) == 0;
    LODWORD(vars8) = v42 | ((_DWORD)v40 << 16);
    if ( !v4 )
      goto LABEL_4;
LABEL_38:
    if ( *(_BYTE *)(a1 + 401) )
    {
      v39 = *(_QWORD *)(a1 + 360);
      cleanup_argloc(&vars0);
      LODWORD(vars0) = 1;
      *(_QWORD *)&vars8 = v39;
    }
    goto LABEL_9;
  }
  if ( !*(_BYTE *)(a1 + 404) )
    goto LABEL_38;
LABEL_4:
  v5 = &s1;
  if ( *(_QWORD *)(a1 + 344) )
    v5 = *(const char **)(a1 + 336);
  v6 = str2reg(v5);
  v7 = &s1;
  if ( *(_QWORD *)(a1 + 320) )
    v7 = *(const char **)(a1 + 312);
  v8 = str2reg(v7);
  cleanup_argloc(&vars0);
  LODWORD(vars0) = 4;
  LODWORD(vars8) = v8 | (v6 << 16);
LABEL_9:
  tinfo_size = (unsigned int)get_tinfo_size(0, *(_QWORD *)(a1 + 304), 0);
  if ( (unsigned int)verify_argloc(&vars0, tinfo_size, 0) )
  {
LABEL_14:
    cleanup_argloc(&vars0);
    sub_3C9AB0((unsigned __int8 *)a1, tinfo_size, v10, v11, v12, v13);
    goto LABEL_15;
  }
  if ( !*(_BYTE *)(a1 + 403) )
  {
    if ( *(_BYTE *)(a1 + 404) )
    {
      v43 = get_tinfo_size(0, *(_QWORD *)(a1 + 304), 0);
      get_reg_name(a1 + 312, (unsigned __int16)vars8, v43, 0xFFFFFFFFLL);
      v44 = get_tinfo_size(0, *(_QWORD *)(a1 + 304), 0);
      tinfo_size = WORD1(vars8);
      get_reg_name(a1 + 336, WORD1(vars8), v44, 0xFFFFFFFFLL);
    }
    else if ( *(_BYTE *)(a1 + 401) )
    {
      *(_QWORD *)(a1 + 360) = vars8;
    }
    else if ( !*(_BYTE *)(a1 + 402) && *(_BYTE *)(a1 + 400) )
    {
      *(_QWORD *)(a1 + 320) = 0;
      *(_QWORD *)(a1 + 344) = 0;
      *(_QWORD *)(a1 + 360) = 0;
      *(_QWORD *)(a1 + 368) = 0;
    }
    goto LABEL_14;
  }
  v45 = get_tinfo_size(0, *(_QWORD *)(a1 + 304), 0);
  v46 = (unsigned __int16)vars8;
  get_reg_name(a1 + 312, (unsigned __int16)vars8, v45, 0xFFFFFFFFLL);
  *(_QWORD *)(a1 + 360) = WORD1(vars8);
  cleanup_argloc(&vars0);
  sub_3C9AB0((unsigned __int8 *)a1, v46, v47, v48, v49, v50);
LABEL_15:
  sub_3CA800((_QWORD *)a1);
  v14 = get_tinfo_size(0, *(_QWORD *)(a1 + 304), 0);
  v4 = *(_BYTE *)(a1 + 403) == 0;
  LODWORD(vars0) = 0;
  *(_QWORD *)&vars8 = 0;
  v15 = v14;
  if ( !v4 )
  {
    v16 = *(_QWORD *)(a1 + 360);
    v17 = &s1;
    if ( *(_QWORD *)(a1 + 320) )
      v17 = *(const char **)(a1 + 312);
    v18 = str2reg(v17);
    cleanup_argloc(&vars0);
    LODWORD(vars0) = 3;
    LODWORD(vars8) = v18 | ((_DWORD)v16 << 16);
  }
  if ( *(_BYTE *)(a1 + 404) )
  {
    v19 = &s1;
    if ( *(_QWORD *)(a1 + 344) )
      v19 = *(const char **)(a1 + 336);
    v20 = str2reg(v19);
    v21 = &s1;
    if ( *(_QWORD *)(a1 + 320) )
      v21 = *(const char **)(a1 + 312);
    v22 = str2reg(v21);
    cleanup_argloc(&vars0);
    LODWORD(vars0) = 4;
    LODWORD(vars8) = v22 | (v20 << 16);
  }
  else if ( *(_BYTE *)(a1 + 401) )
  {
    v38 = *(_QWORD *)(a1 + 360);
    cleanup_argloc(&vars0);
    LODWORD(vars0) = 1;
    *(_QWORD *)&vars8 = v38;
  }
  v23 = verify_argloc(&vars0, v15, 0);
  cleanup_argloc(&vars0);
  callui(203, 10, a1, 12, v23 == 0, v24, vars0, (_QWORD)vars8);
  vars0 = nullptr;
  if ( v23 )
  {
    v25 = 46;
    v26 = 45;
    vars8 = 0;
    v27 = "Argument location is incorrect, please fix it";
  }
  else
  {
    v25 = 1;
    v26 = 0;
    vars8 = 0;
    v27 = (const char *)&unk_5C2F25;
  }
  v28 = (_QWORD *)qvector_reserve(&vars0, 0, v25, 1);
  vars0 = v28;
  *(_QWORD *)&vars8 = v25;
  if ( (unsigned int)v26 >= 8 )
  {
    v30 = (unsigned __int64)(v28 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    *v28 = *(_QWORD *)v27;
    *(_QWORD *)((char *)v28 + v26 - 8) = *(_QWORD *)&v27[v26 - 8];
    v31 = (char *)v28 - v30;
    v32 = (const char *)(v27 - v31);
    if ( (((_DWORD)v26 + (_DWORD)v31) & 0xFFFFFFF8) >= 8 )
    {
      v33 = (v26 + (_DWORD)v31) & 0xFFFFFFF8;
      v34 = 0;
      do
      {
        v35 = v34;
        v34 += 8;
        *(_QWORD *)(v30 + v35) = *(_QWORD *)&v32[v35];
      }
      while ( v34 < v33 );
    }
  }
  *((_BYTE *)vars0 + v26) = 0;
  v36 = callui(203, 18, a1, 12, (unsigned int)&vars0, v29, vars0, vars8);
  if ( vars0 )
  {
    *(_QWORD *)&vars8 = 0;
    qfree(vars0, (const char *)&word_12, v36);
  }
  return vars18 - __readfsqword(0x28u);
}
