__int64 __fastcall sub_1BF9460(
        __m128 *a1,
        __int64 a2,
        unsigned __int64 *a3,
        _BYTE *a4,
        __int64 a5,
        char a6,
        __m128 a7,
        __m128 a8,
        __int64 a9)
{
  unsigned int v9; // r12d
  unsigned int v14; // r12d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  _QWORD *v20; // rsi
  _QWORD *v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 *v25; // r9
  __m128i v26; // rax
  size_t v27; // rax
  size_t v28; // r15
  __m128i *v29; // rax
  __int64 v30; // rcx
  _BYTE *v31; // rsi
  int v32; // eax
  int v33; // eax
  int v34; // eax
  __int64 v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  unsigned __int64 v39; // rbp
  unsigned int v40; // eax
  __int64 v41; // r9
  __int64 v42; // rsi
  __int64 v43; // rax
  unsigned __int64 v44; // rbp
  __int64 v45; // r14
  int v46; // r13d
  int v47; // eax
  __int64 v48; // rax
  _BYTE *v49; // rdi
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  void *v54; // rax
  _QWORD *v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // r15
  void *v61; // rax
  _QWORD *v62; // rax
  _QWORD *v64; // [rsp+18h] [rbp-210h]
  size_t v65; // [rsp+20h] [rbp-208h]
  __int64 v66; // [rsp+20h] [rbp-208h]
  __int64 v68; // [rsp+50h] [rbp-1D8h]
  __int64 v69; // [rsp+58h] [rbp-1D0h] BYREF
  void *v70; // [rsp+60h] [rbp-1C8h] BYREF
  size_t v71; // [rsp+68h] [rbp-1C0h]
  _BYTE v72[16]; // [rsp+70h] [rbp-1B8h] BYREF
  void *v73; // [rsp+80h] [rbp-1A8h] BYREF
  __int64 v74; // [rsp+88h] [rbp-1A0h]
  _BYTE v75[16]; // [rsp+90h] [rbp-198h] BYREF
  void *v76; // [rsp+A0h] [rbp-188h]
  __int64 v77; // [rsp+A8h] [rbp-180h]
  __m128 v78; // [rsp+B0h] [rbp-178h] BYREF
  void *v79[2]; // [rsp+C0h] [rbp-168h] BYREF
  _BYTE v80[16]; // [rsp+D0h] [rbp-158h] BYREF
  int v81; // [rsp+E0h] [rbp-148h] BYREF
  int v82; // [rsp+E4h] [rbp-144h]
  char v83; // [rsp+E8h] [rbp-140h]
  __int64 v84; // [rsp+ECh] [rbp-13Ch]
  char v85; // [rsp+F4h] [rbp-134h]
  void *v86[2]; // [rsp+F8h] [rbp-130h] BYREF
  _BYTE v87[16]; // [rsp+108h] [rbp-120h] BYREF
  char v88; // [rsp+118h] [rbp-110h]
  void *v89; // [rsp+120h] [rbp-108h] BYREF
  char v90; // [rsp+128h] [rbp-100h]
  __int64 v91; // [rsp+12Ch] [rbp-FCh] BYREF
  char v92; // [rsp+134h] [rbp-F4h]
  void *v93[2]; // [rsp+138h] [rbp-F0h] BYREF
  _BYTE v94[16]; // [rsp+148h] [rbp-E0h] BYREF
  char v95; // [rsp+158h] [rbp-D0h]
  __m128i v96; // [rsp+160h] [rbp-C8h] BYREF
  void *v97; // [rsp+170h] [rbp-B8h]
  __int64 v98[11]; // [rsp+180h] [rbp-A8h] BYREF
  char v99; // [rsp+1D8h] [rbp-50h]
  unsigned int v100; // [rsp+1E0h] [rbp-48h]
  char v101; // [rsp+1E4h] [rbp-44h]

  v9 = 0;
  if ( *(_DWORD *)(a9 + 8) == 1 && !a4[8] )
  {
    v14 = a2;
    v68 = **(_QWORD **)a9;
    v64 = (_QWORD *)sub_16C47B0(v68 & 0xFFFFFFFFFFFFFFF8LL);
    v96.m128i_i64[0] = sub_AED600((__int64)v64, a2, v15, v16);
    v19 = sub_C1BEF0((__int64)&v96, a2, v17, v18);
    v20 = (_QWORD *)a1[15].m128_u64[0];
    v21 = (_QWORD *)a1[15].m128_u64[1];
    v69 = v19;
    v70 = v72;
    v71 = 0;
    v72[0] = 0;
    v26.m128i_i64[0] = sub_16043A0(v21, v20, v22, v23, v24, v25);
    v96 = v26;
    sub_F78380((unsigned __int64 *)&v69, (__int64)&v70, &v96);
    (*(void (__fastcall **)(__m128i *, _BYTE *, __m128 *, _QWORD, __int64, __int64))(*(_QWORD *)a4 + 24LL))(
      &v96,
      a4,
      a1,
      v14,
      a5,
      v69);
    v27 = j__strlen("static_cast<");
    v74 = 0;
    v28 = v27;
    v75[0] = 0;
    v73 = v75;
    sub_995C30((__int64)&v73, v27 + v71);
    if ( v28 > 0x7FFFFFFFFFFFFFFFLL - v74
      || (sub_9EE560(&v73, "static_cast<", v28),
          sub_9EE560(&v73, v70, v71),
          v74 == 0x7FFFFFFFFFFFFFFFLL || v74 == 9223372036854775806LL) )
    {
      std::__throw_length_error("basic_string::append");
    }
    v29 = (__m128i *)sub_9EE560(&v73, ">(", 2u);
    v76 = &v78;
    if ( (__m128i *)v29->m128i_i64[0] == &v29[1] )
    {
      a7 = (__m128)_mm_loadu_si128(v29 + 1);
      v78 = a7;
    }
    else
    {
      v76 = (void *)v29->m128i_i64[0];
      v78.m128_u64[0] = v29[1].m128i_u64[0];
    }
    v30 = v29->m128i_i64[1];
    v29[1].m128i_i8[0] = 0;
    v77 = v30;
    v29->m128i_i64[0] = (__int64)v29[1].m128i_i64;
    v31 = v76;
    v29->m128i_i64[1] = 0;
    v32 = sub_EEB7E0(*a3, (__int64)v31, *(double *)a7.m128_u64);
    v86[0] = v87;
    v81 = v32;
    v82 = v32;
    v84 = 0;
    v85 = 0;
    v86[1] = nullptr;
    v87[0] = 0;
    v88 = 0;
    v83 = 0;
    v89 = (char *)&v91 + 4;
    sub_1BC95E0(&v89, v31, (__int64)&v31[v77]);
    sub_A0AAD0((__int64)v86, &v89);
    if ( v89 != (char *)&v91 + 4 )
      operator delete(v89);
    v88 = 0;
    if ( v99 )
    {
      if ( v81 && v82 )
        sub_1BDA480(v98, (unsigned __int64)&v81);
    }
    else if ( v101 )
    {
      v60 = sub_168B9E0(&v96);
      v61 = v97;
      if ( v97 )
        v61 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v97 + 32LL))(v97);
      v89 = v61;
      v62 = sub_1587BC0(v60, (__int64 *)&v89, v56, v57, v58, v59);
      if ( v81 && v82 )
        sub_1BDA480((__int64 *)(*v62 + 32LL * v100 + 8), (unsigned __int64)&v81);
    }
    v65 = j__strlen(")");
    v33 = sub_EEC140(*a3);
    v34 = sub_15F0EF0((__int64)a1, v33, 0, (__m128i)a7, *(double *)a8.m128_u64);
    v93[0] = v94;
    v79[0] = v80;
    LODWORD(v89) = v34;
    HIDWORD(v89) = v34;
    v91 = 0;
    v92 = 0;
    v93[1] = nullptr;
    v94[0] = 0;
    v95 = 0;
    v90 = 0;
    sub_1BC95E0(v79, ")", (__int64)&aBtmtCharIllega[v65 + 26]);
    sub_A0AAD0((__int64)v93, v79);
    if ( v79[0] != v80 )
      operator delete(v79[0]);
    v95 = 0;
    if ( v99 )
    {
      if ( (_DWORD)v89 && HIDWORD(v89) )
        sub_1BDA480(v98, (unsigned __int64)&v89);
    }
    else if ( v101 )
    {
      v51 = sub_168B9E0(&v96);
      v54 = v97;
      if ( v97 )
      {
        v66 = v51;
        v54 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v97 + 32LL))(v97);
        v51 = v66;
      }
      v79[0] = v54;
      v55 = sub_1587BC0(v51, (__int64 *)v79, v50, v51, v52, v53);
      if ( (_DWORD)v89 && HIDWORD(v89) )
        sub_1BDA480((__int64 *)(*v55 + 32LL * v100 + 8), (unsigned __int64)&v89);
    }
    if ( v93[0] != v94 )
      operator delete(v93[0]);
    if ( v86[0] != v87 )
      operator delete(v86[0]);
    if ( v76 != &v78 )
      operator delete(v76);
    if ( v73 != v75 )
      operator delete(v73);
    sub_15F7200(&v96);
    v35 = (__int64)a4;
    (*(void (__fastcall **)(__m128i *, _BYTE *, __m128 *, _QWORD *, __int64))(*(_QWORD *)a4 + 32LL))(
      &v96,
      a4,
      a1,
      v64,
      v69);
    sub_15F7200(&v96);
    sub_1DBADC0(a1);
    v9 = v36;
    if ( (_BYTE)v36
      || (v39 = *a3,
          v40 = sub_C00A40(*a3, v35, v36, v37, v38),
          sub_1663420(a1, v40, v39, 0, v68, v41, *(double *)a7.m128_u64),
          v42 = *a3,
          v43 = sub_1BF8E10(a1, *a3, v68 & 0xFFFFFFFFFFFFFFF8LL, v64, a6, a7, a8),
          v43 == 1)
      || (v44 = *a3,
          v45 = *(_QWORD *)((v43 & 0xFFFFFFFFFFFFFFFELL) + 8),
          v46 = sub_EEC140(*a3),
          v47 = sub_EEB7E0(v44, v42, *(double *)a7.m128_u64),
          v48 = sub_18C4330((__int64)a1, v47, v46, a3, 1, v45),
          v48 == 1) )
    {
      if ( v70 != v72 )
        operator delete(v70);
      return 1;
    }
    else
    {
      v49 = v70;
      *a3 = v48 & 0xFFFFFFFFFFFFFFFELL;
      if ( v49 != v72 )
        operator delete(v49);
    }
  }
  return v9;
}
