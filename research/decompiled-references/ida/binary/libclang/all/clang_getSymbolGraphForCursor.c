__int64 __fastcall clang_getSymbolGraphForCursor(
        double a1,
        double a2,
        __m128i a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __int64 a8,
        __int64 a9,
        int a10,
        int a11,
        int a12,
        int a13,
        __m128i a14,
        __m128i a15)
{
  __m128i v15; // xmm1
  __m128i v16; // xmm0
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  int v20; // r9d
  __int64 CursorKind; // rdi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r12
  __m128i v29; // xmm0
  __int64 v30; // rax
  __int64 v31; // rbx
  __int64 v32; // r13
  char v33; // bp
  unsigned __int64 v34; // rdx
  __int8 *v35; // r14
  size_t v36; // rbx
  unsigned __int64 v37; // rax
  __int8 *v38; // rdx
  __int64 v40; // r14
  __int64 v41; // rax
  __m128i v42; // xmm0
  __int64 v43; // rax
  __m128i v44; // xmm0
  void *p_ptr; // rsi
  __int64 v46; // r13
  __int64 *v47; // rdi
  __int64 v48; // rdx
  __int64 v49; // rcx
  double v50; // xmm4_8
  double v51; // xmm5_8
  __int64 v52; // rax
  double v53; // xmm4_8
  double v54; // xmm5_8
  __int64 v55; // r13
  __int64 i; // r12
  __int64 v57; // rsi
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 MappedSourcePath_0; // r12
  _QWORD *v63; // rbp
  _QWORD *v64; // r14
  void (__fastcall ***v65)(_QWORD); // rdi
  char *v66; // r14
  char *v67; // rbx
  __m128i *v68; // rbx
  __m128i *v69; // rbp
  __int8 *v70; // rdi
  __m128i v71; // [rsp+0h] [rbp-378h]
  __m128i v72; // [rsp+0h] [rbp-378h]
  __m128i v73; // [rsp+10h] [rbp-368h]
  __m128i v74; // [rsp+40h] [rbp-338h] BYREF
  __m128i v75; // [rsp+50h] [rbp-328h] BYREF
  __int64 v76[2]; // [rsp+60h] [rbp-318h] BYREF
  __int64 v77[2]; // [rsp+70h] [rbp-308h] BYREF
  int v78; // [rsp+80h] [rbp-2F8h]
  __int64 v79; // [rsp+90h] [rbp-2E8h] BYREF
  __int64 v80; // [rsp+98h] [rbp-2E0h]
  int v81; // [rsp+A0h] [rbp-2D8h]
  char v82; // [rsp+A8h] [rbp-2D0h]
  void *ptr; // [rsp+B0h] [rbp-2C8h] BYREF
  __m128i dest; // [rsp+B8h] [rbp-2C0h] BYREF
  _BYTE v85[136]; // [rsp+C8h] [rbp-2B0h] BYREF
  __int128 v86; // [rsp+150h] [rbp-228h] BYREF
  void *v87; // [rsp+160h] [rbp-218h]
  __int64 v88; // [rsp+168h] [rbp-210h]
  _BYTE v89[32]; // [rsp+170h] [rbp-208h] BYREF
  __m128i *v90; // [rsp+190h] [rbp-1E8h]
  __int64 v91; // [rsp+198h] [rbp-1E0h]
  __m128i si128; // [rsp+1A0h] [rbp-1D8h] BYREF
  void *v93; // [rsp+1B0h] [rbp-1C8h] BYREF
  _QWORD v94[2]; // [rsp+1C0h] [rbp-1B8h] BYREF
  __m128i v95; // [rsp+1D0h] [rbp-1A8h]
  __int64 v96; // [rsp+1E0h] [rbp-198h]
  char v97; // [rsp+1E8h] [rbp-190h]
  _QWORD *v98; // [rsp+1F0h] [rbp-188h]
  __int64 v99; // [rsp+1F8h] [rbp-180h]
  unsigned int v100; // [rsp+200h] [rbp-178h]
  void *v101; // [rsp+208h] [rbp-170h]
  __int64 v102; // [rsp+210h] [rbp-168h]
  _BYTE v103[256]; // [rsp+218h] [rbp-160h] BYREF
  void *v104; // [rsp+318h] [rbp-60h] BYREF
  _QWORD v105[10]; // [rsp+328h] [rbp-50h] BYREF

  v73 = _mm_loadu_si128(&a15);
  clang_getCursorReferenced(
    (int)&v74,
    a9,
    a10,
    a11,
    a12,
    a13,
    (__int128)_mm_loadu_si128(&a14),
    v73.m128i_i32[0],
    v73.m128i_i64[1]);
  v15 = _mm_loadu_si128(&v74);
  v16 = _mm_loadu_si128(&v75);
  a14 = v15;
  a15 = v16;
  CursorKind = (unsigned int)clang_getCursorKind((int)&v74, a9, v17, v18, v19, v20, v15.m128i_i32[0]);
  if ( !(unsigned int)clang_isDeclaration(CursorKind) )
    return clang_CompileCommand_getMappedSourcePath_0(CursorKind, a9, v22, v23);
  v71 = _mm_loadu_si128(&a14);
  v28 = sub_63A250(CursorKind, a9, v22, v23, v24, v25, v71.m128i_i32[0], v71.m128i_i64[1]);
  if ( !v28 )
    return clang_CompileCommand_getMappedSourcePath_0(CursorKind, a9, v22, v23);
  v72 = _mm_loadu_si128(&a14);
  v29 = _mm_loadu_si128(&a15);
  v30 = sub_63A300(
          CursorKind,
          a9,
          v22,
          v23,
          v26,
          v27,
          v72.m128i_i32[0],
          v72.m128i_i32[2],
          v29.m128i_i32[0],
          v29.m128i_i64[1]);
  if ( !v30 )
    return clang_CompileCommand_getMappedSourcePath_0(CursorKind, a9, v22, v23);
  v31 = *(_QWORD *)(v30 + 8);
  v32 = *(_QWORD *)(v31 + 80);
  v33 = sub_FEE5B0(v31);
  v35 = (__int8 *)sub_FED840(v31);
  v36 = v34;
  if ( !v35 )
  {
    dest.m128i_i64[0] = 0;
    ptr = &dest.m128i_u64[1];
    dest.m128i_i8[8] = 0;
    goto LABEL_12;
  }
  v37 = v34;
  *(_QWORD *)&v86 = v34;
  ptr = &dest.m128i_u64[1];
  if ( v34 > 0xF )
  {
    ptr = (void *)std::string::_M_create();
    v70 = (__int8 *)ptr;
    dest.m128i_i64[1] = v86;
    goto LABEL_53;
  }
  if ( v34 != 1 )
  {
    if ( !v34 )
      goto LABEL_8;
    v70 = &dest.m128i_i8[8];
LABEL_53:
    memcpy(v70, v35, v36);
    v37 = v86;
    v38 = (__int8 *)ptr;
    goto LABEL_9;
  }
  dest.m128i_i8[8] = *v35;
LABEL_8:
  v38 = &dest.m128i_i8[8];
LABEL_9:
  dest.m128i_i64[0] = v37;
  v38[v37] = 0;
LABEL_12:
  v40 = *(_QWORD *)(v32 + 17288);
  v87 = v89;
  v86 = 0;
  v88 = 0x400000000LL;
  v90 = &si128;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E570);
  v91 = 0;
  v93 = v94;
  sub_63E170((__int64 *)&v93, *(_BYTE **)(v40 + 216), *(_QWORD *)(v40 + 216) + *(_QWORD *)(v40 + 224));
  v41 = *(_QWORD *)(v40 + 264);
  v42 = _mm_loadu_si128((const __m128i *)(v40 + 248));
  v97 = v33;
  v96 = v41;
  v100 = 0;
  v98 = nullptr;
  v99 = 0;
  v101 = v103;
  v102 = 0x2000000000LL;
  v104 = v105;
  v95 = v42;
  sub_63E170((__int64 *)&v104, ptr, (__int64)ptr + dest.m128i_i64[0]);
  if ( ptr != &dest.m128i_u64[1] )
    operator delete(ptr, dest.m128i_i64[1] + 1);
  v76[0] = v32;
  v76[1] = (__int64)&v86;
  v43 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 32LL))(v28);
  v44 = _mm_load_si128((const __m128i *)&xmmword_3C7E280);
  p_ptr = &ptr;
  ptr = v85;
  v46 = v43;
  if ( !v43 )
    v46 = v28;
  dest = v44;
  v47 = (__int64 *)v46;
  if ( (unsigned __int8)sub_11240B0(v46, &ptr) )
    goto LABEL_50;
  sub_66C700(v76, v46, *(double *)v44.m128i_i64, v15, a3, a4, v50, v51, a7);
  v47 = (__int64 *)&v86;
  p_ptr = ptr;
  v52 = sub_FC8D80(&v86, ptr, dest.m128i_i64[0]);
  if ( !v52 )
    goto LABEL_50;
  v55 = *(_QWORD *)(v52 + 264);
  for ( i = *(_QWORD *)(v52 + 272); i != v55; v55 += 80 )
  {
    v57 = *(_QWORD *)(v55 + 72);
    if ( v57 )
      sub_66C700(v76, v57, *(double *)v44.m128i_i64, v15, a3, a4, v53, v54, a7);
  }
  v47 = &v79;
  p_ptr = ptr;
  sub_FE7360(&v79, ptr, dest.m128i_i64[0], &v86);
  if ( v82 )
  {
    v60 = v79;
    v79 = 0;
    v77[0] = v60;
    v61 = v80;
    v80 = 0;
    v77[1] = v61;
    LODWORD(v61) = v81;
    v81 = 0;
    v78 = v61;
    MappedSourcePath_0 = sub_63DA00(v77, (__int64)p_ptr, v48, v49, v58, v59);
    sub_647DD0((__int64)v77);
    if ( v82 )
    {
      v82 = 0;
      sub_647DD0((__int64)&v79);
    }
  }
  else
  {
LABEL_50:
    MappedSourcePath_0 = clang_CompileCommand_getMappedSourcePath_0(v47, p_ptr, v48, v49);
  }
  if ( ptr != v85 )
    free(ptr);
  if ( v104 != v105 )
    operator delete(v104, v105[0] + 1LL);
  if ( v101 != v103 )
    free(v101);
  if ( v100 )
  {
    v63 = v98;
    v64 = &v98[3 * v100];
    do
    {
      if ( *v63 != -2 && *v63 != -1 )
      {
        v65 = (void (__fastcall ***)(_QWORD))v63[2];
        if ( v65 )
          (**v65)(v65);
        v63[2] = 0;
      }
      v63 += 3;
    }
    while ( v64 != v63 );
  }
  operator delete();
  if ( v93 != v94 )
    operator delete(v93, v94[0] + 1LL);
  v66 = (char *)v87;
  v67 = (char *)v87 + 8 * (unsigned int)v88;
  if ( v87 != v67 )
  {
    do
    {
      v66 += 8;
      operator delete();
    }
    while ( v67 != v66 );
  }
  v68 = v90;
  v69 = &v90[(unsigned int)v91];
  if ( v90 != v69 )
  {
    do
    {
      ++v68;
      operator delete();
    }
    while ( v69 != v68 );
    v69 = v90;
  }
  if ( v69 != &si128 )
    free(v69);
  if ( v87 != v89 )
    free(v87);
  return MappedSourcePath_0;
}

