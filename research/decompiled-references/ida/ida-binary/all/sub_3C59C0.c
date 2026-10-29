__int64 __fastcall edit_argloc_dialog_t__::vfunc_8(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v9; // rsi
  unsigned int tinfo_size; // r12d
  __int64 v12; // r13
  const char *v13; // rdi
  int v14; // r14d
  const char *v15; // rdi
  int v16; // r13d
  const char *v17; // rdi
  int v18; // ebx
  int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __m128 v24; // xmm4
  __m128 v25; // xmm5
  __int64 result; // rax
  __int64 v27; // rbx
  int vars0; // [rsp+0h] [rbp+0h] BYREF
  __int64 vars8; // [rsp+8h] [rbp+8h]
  unsigned __int64 vars18; // [rsp+18h] [rbp+18h]

  v9 = *(_QWORD *)(a1 + 304);
  vars18 = __readfsqword(0x28u);
  vars0 = 0;
  vars8 = 0;
  tinfo_size = get_tinfo_size(0, v9, 0);
  if ( *(_BYTE *)(a1 + 403) )
  {
    v12 = *(_QWORD *)(a1 + 360);
    v13 = &s1;
    if ( *(_QWORD *)(a1 + 320) )
      v13 = *(const char **)(a1 + 312);
    v14 = str2reg(v13);
    cleanup_argloc(&vars0);
    vars0 = 3;
    LODWORD(vars8) = v14 | ((_DWORD)v12 << 16);
  }
  if ( *(_BYTE *)(a1 + 404) )
  {
    v15 = &s1;
    if ( *(_QWORD *)(a1 + 344) )
      v15 = *(const char **)(a1 + 336);
    v16 = str2reg(v15);
    v17 = &s1;
    if ( *(_QWORD *)(a1 + 320) )
      v17 = *(const char **)(a1 + 312);
    v18 = str2reg(v17);
    cleanup_argloc(&vars0);
    vars0 = 4;
    LODWORD(vars8) = v18 | (v16 << 16);
  }
  else if ( *(_BYTE *)(a1 + 401) )
  {
    v27 = *(_QWORD *)(a1 + 360);
    cleanup_argloc(&vars0);
    vars0 = 1;
    vars8 = v27;
  }
  v19 = verify_argloc(&vars0, tinfo_size, 0);
  cleanup_argloc(&vars0);
  result = 1;
  if ( v19 )
  {
    sub_169700(
      (int)"Argument location is incorrect, please fix it.\n",
      tinfo_size,
      v20,
      v21,
      v22,
      v23,
      a2,
      a3,
      a4,
      a5,
      v24,
      v25,
      a8,
      a9,
      vars0);
    return 0;
  }
  return result;
}
