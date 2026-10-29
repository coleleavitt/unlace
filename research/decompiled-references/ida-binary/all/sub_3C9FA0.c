unsigned __int64 __fastcall sub_3C9FA0(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int tinfo_size; // r12d
  __int64 v4; // r13
  const char *v5; // rdi
  int v6; // r14d
  const char *v7; // rdi
  int v8; // r13d
  const char *v9; // rdi
  int v10; // r14d
  int v11; // r12d
  int v12; // r9d
  __int64 v13; // r15
  __int64 v14; // r12
  const char *v15; // r14
  _QWORD *v16; // rax
  int v17; // r9d
  unsigned __int64 v18; // rsi
  char *v19; // rax
  const char *v20; // rdx
  unsigned int v21; // ecx
  unsigned int v22; // eax
  __int64 v23; // rdi
  double v24; // xmm0_8
  __int64 v26; // r13
  _QWORD *vars0; // [rsp+0h] [rbp+0h] BYREF
  __int128 vars8; // [rsp+8h] [rbp+8h]
  unsigned __int64 vars18; // [rsp+18h] [rbp+18h]

  v1 = *(_QWORD *)(a1 + 304);
  vars18 = __readfsqword(0x28u);
  LODWORD(vars0) = 0;
  *(_QWORD *)&vars8 = 0;
  tinfo_size = get_tinfo_size(0, v1, 0);
  if ( *(_BYTE *)(a1 + 403) )
  {
    v4 = *(_QWORD *)(a1 + 360);
    v5 = &s1;
    if ( *(_QWORD *)(a1 + 320) )
      v5 = *(const char **)(a1 + 312);
    v6 = str2reg(v5);
    cleanup_argloc(&vars0);
    LODWORD(vars0) = 3;
    LODWORD(vars8) = v6 | ((_DWORD)v4 << 16);
  }
  if ( *(_BYTE *)(a1 + 404) )
  {
    v7 = &s1;
    if ( *(_QWORD *)(a1 + 344) )
      v7 = *(const char **)(a1 + 336);
    v8 = str2reg(v7);
    v9 = &s1;
    if ( *(_QWORD *)(a1 + 320) )
      v9 = *(const char **)(a1 + 312);
    v10 = str2reg(v9);
    cleanup_argloc(&vars0);
    LODWORD(vars0) = 4;
    LODWORD(vars8) = v10 | (v8 << 16);
  }
  else if ( *(_BYTE *)(a1 + 401) )
  {
    v26 = *(_QWORD *)(a1 + 360);
    cleanup_argloc(&vars0);
    LODWORD(vars0) = 1;
    *(_QWORD *)&vars8 = v26;
  }
  v11 = verify_argloc(&vars0, tinfo_size, 0);
  cleanup_argloc(&vars0);
  callui(203, 10, a1, 12, v11 == 0, v12, vars0, (_QWORD)vars8);
  vars0 = nullptr;
  if ( v11 )
  {
    v13 = 46;
    v14 = 45;
    vars8 = 0;
    v15 = "Argument location is incorrect, please fix it";
  }
  else
  {
    v13 = 1;
    v14 = 0;
    vars8 = 0;
    v15 = (const char *)&unk_5C2F25;
  }
  v16 = (_QWORD *)qvector_reserve(&vars0, 0, v13, 1);
  vars0 = v16;
  *(_QWORD *)&vars8 = v13;
  if ( (unsigned int)v14 >= 8 )
  {
    v18 = (unsigned __int64)(v16 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    *v16 = *(_QWORD *)v15;
    *(_QWORD *)((char *)v16 + v14 - 8) = *(_QWORD *)&v15[v14 - 8];
    v19 = (char *)v16 - v18;
    v20 = (const char *)(v15 - v19);
    if ( (((_DWORD)v14 + (_DWORD)v19) & 0xFFFFFFF8) >= 8 )
    {
      v21 = (v14 + (_DWORD)v19) & 0xFFFFFFF8;
      v22 = 0;
      do
      {
        v23 = v22;
        v22 += 8;
        *(_QWORD *)(v18 + v23) = *(_QWORD *)&v20[v23];
      }
      while ( v22 < v21 );
    }
  }
  *((_BYTE *)vars0 + v14) = 0;
  v24 = callui(203, 18, a1, 12, (unsigned int)&vars0, v17, vars0, vars8);
  if ( vars0 )
  {
    *(_QWORD *)&vars8 = 0;
    qfree(vars0, (const char *)&word_12, v24);
  }
  return vars18 - __readfsqword(0x28u);
}
