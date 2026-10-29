/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_784D0
// Address: 0x00000000000784D0

//----- (00000000000784D0) ----------------------------------------------------
char __fastcall sub_784D0(_QWORD *a1, __int64 a2, __int64 a3, char **a4, double a5, __m128 a6)
{
  char **v6; // r14
  const char **v7; // r15
  __int64 v9; // r12
  const char *v10; // rbp
  __int64 v11; // rbx
  const char *v12; // rdi
  int v13; // eax
  const char *v14; // rsi
  char *v15; // rbx

  v6 = a4;
  v7 = (const char **)a3;
  v9 = *(_QWORD *)(a2 + 8);
  if ( !v9 )
    return sub_75820(a1, (_DWORD *)a2, v7, v6, a5, a6);
  v10 = s1;
  if ( *(_QWORD *)(a3 + 8) )
    v10 = *(const char **)a3;
  v11 = a2 + 8;
  do
  {
    v12 = s1;
    if ( *(_QWORD *)(v9 + 40) )
      v12 = *(const char **)(v9 + 32);
    v13 = strcmp(v12, v10);
    if ( v13 >= 0 )
      v11 = v9;
    v9 = *(_QWORD *)(v9 + 8LL * (v13 < 0));
  }
  while ( v9 );
  v6 = a4;
  v7 = (const char **)a3;
  if ( v11 == a2 + 8 )
    return sub_75820(a1, (_DWORD *)a2, v7, v6, a5, a6);
  v14 = *(_QWORD *)(v11 + 40) ? *(const char **)(v11 + 32) : s1;
  if ( strcmp(v10, v14) < 0 )
    return sub_75820(a1, (_DWORD *)a2, v7, v6, a5, a6);
  v15 = (char *)(v11 + 56);
  copy_idcv(*a4, v15, a5, a6);
  *a4 = v15;
  return 1;
}
