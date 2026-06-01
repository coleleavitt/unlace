unsigned __int64 __fastcall sub_4A9FF0(__int64 a1, __int64 a2, __int64 a3, const __m128i *a4)
{
  __int64 v4; // r14
  __int64 v6; // r12
  const __m128i *v7; // r15
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // r14
  void *v10; // rax
  __int64 v11; // rdi
  __m128i v12; // xmm0
  void *v13; // rax
  __m128i v14; // xmm0
  __m128i v15; // xmm0
  __m128i v16; // xmm0
  __int64 v17; // rdx
  char v18; // al
  __m128i v19; // xmm0
  __int64 v20; // rax
  __m128i v21; // xmm0
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  __m128i v25; // xmm0
  void *v26; // rdi
  unsigned __int64 v27; // rax
  __m128i v28; // xmm0
  void *v29; // rdi
  __m128i v30; // xmm0
  void *v31; // r15
  __m128i v32; // xmm0
  __m128i v33; // xmm0
  void *v34; // rdi
  void *v35; // rdi
  void *v36; // r15
  __m128i v37; // xmm0
  __int64 v38; // r15
  unsigned __int64 v39; // rdi
  __m128i v40; // xmm0
  __int64 v41; // rax
  __m128i v42; // xmm0
  __m128i v43; // xmm0
  __int64 v44; // rax
  __int64 v45; // r15
  __m128i v46; // xmm0
  void *v47; // rax
  __m128i v48; // xmm1
  __m128i v49; // xmm0
  void *v50; // rax
  __m128i v51; // xmm0
  int v52; // eax
  __m128i v53; // xmm0
  int v54; // eax
  __m128i v55; // xmm0
  __int64 v56; // r14
  __m128i v57; // xmm0
  void *v58; // rdi
  __int64 v59; // r14
  __m128i v60; // xmm0
  void *v61; // rdi
  const __m128i *v62; // rsi
  __m128i v63; // xmm0
  void *v64; // rax
  __m128i v65; // xmm1
  __m128i v66; // xmm0
  __m128i v67; // xmm0
  __m128i v68; // xmm0
  __m128i v69; // xmm0
  __m128i v71; // [rsp+0h] [rbp-248h] BYREF
  __m128i v72; // [rsp+10h] [rbp-238h] BYREF
  unsigned __int64 v73; // [rsp+20h] [rbp-228h]
  const __m128i *v74; // [rsp+28h] [rbp-220h]
  __int64 v75; // [rsp+30h] [rbp-218h]
  const __m128i *v76; // [rsp+38h] [rbp-210h]
  __m128i v77; // [rsp+40h] [rbp-208h] BYREF
  void *v78; // [rsp+50h] [rbp-1F8h]
  __m128i v79; // [rsp+58h] [rbp-1F0h] BYREF
  void *v80; // [rsp+68h] [rbp-1E0h]
  __m128i v81; // [rsp+70h] [rbp-1D8h] BYREF
  __int64 v82; // [rsp+80h] [rbp-1C8h] BYREF
  __m128i v83; // [rsp+88h] [rbp-1C0h] BYREF
  __m128i v84; // [rsp+98h] [rbp-1B0h] BYREF
  __m128i v85; // [rsp+A8h] [rbp-1A0h] BYREF
  __int64 v86; // [rsp+B8h] [rbp-190h]
  __int64 v87; // [rsp+C0h] [rbp-188h]
  char v88; // [rsp+C8h] [rbp-180h]
  __int64 v89; // [rsp+D0h] [rbp-178h]
  __int64 v90; // [rsp+D8h] [rbp-170h]
  __int64 v91; // [rsp+E0h] [rbp-168h]
  __int64 v92; // [rsp+E8h] [rbp-160h]
  char v93; // [rsp+F0h] [rbp-158h]
  __int64 v94; // [rsp+F8h] [rbp-150h]
  __m128i v95; // [rsp+100h] [rbp-148h] BYREF
  void *v96; // [rsp+110h] [rbp-138h]
  __m128i v97; // [rsp+118h] [rbp-130h] BYREF
  void *ptr; // [rsp+128h] [rbp-120h]
  __m128i v99; // [rsp+130h] [rbp-118h] BYREF
  __int64 v100; // [rsp+140h] [rbp-108h] BYREF
  __m128i v101; // [rsp+148h] [rbp-100h] BYREF
  __m128i v102; // [rsp+158h] [rbp-F0h] BYREF
  __m128i v103; // [rsp+168h] [rbp-E0h] BYREF
  __int64 v104; // [rsp+178h] [rbp-D0h]
  __int64 v105; // [rsp+180h] [rbp-C8h]
  char v106; // [rsp+188h] [rbp-C0h]
  __int64 v107; // [rsp+190h] [rbp-B8h]
  __int64 v108; // [rsp+198h] [rbp-B0h]
  __int64 v109; // [rsp+1A0h] [rbp-A8h]
  __int64 v110; // [rsp+1A8h] [rbp-A0h]
  char v111; // [rsp+1B0h] [rbp-98h]
  __int64 v112; // [rsp+1B8h] [rbp-90h]
  char v113; // [rsp+1C0h] [rbp-88h] BYREF
  __m128i v114; // [rsp+1E0h] [rbp-68h] BYREF
  void (__fastcall *v115)(__m128i *, __m128i *, __int64); // [rsp+1F0h] [rbp-58h]
  int (__fastcall *v116)(__m128i *, unsigned __int64, __int64); // [rsp+1F8h] [rbp-50h]
  unsigned __int64 v117; // [rsp+208h] [rbp-40h]

  v75 = a3;
  v76 = a4;
  v117 = __readfsqword(0x28u);
  v74 = (const __m128i *)&v113;
  v4 = a2 - a1;
  if ( a2 - a1 > 3072 )
  {
    v6 = a2;
    v71.m128i_i64[0] = (__int64)&v100;
    while ( 1 )
    {
      v7 = v74;
      if ( !v75 )
        break;
      sub_49EAB0((__int64)v74, v76);
      sub_49EAB0((__int64)&v114, v7);
      v8 = a1 + 192;
      sub_4A9F10(
        a1,
        a1 + 192,
        a1
      + ((((__int64)(0xAAAAAAAAAAAAAAABLL * (v4 >> 6)) >> 1)
        + ((0xAAAAAAAAAAAAAAABLL * (v4 >> 6)) & 0xFFFFFFFFFFFFFFFELL)) << 6),
        v6 - 192,
        (__int64)&v114);
      if ( v115 )
        v115(&v114, &v114, 3);
      sub_49EAB0((__int64)&v114, v74);
      v9 = v6;
      while ( 1 )
      {
        if ( !v115 )
LABEL_44:
          std::__throw_bad_function_call();
        while ( v116(&v114, v8, a1) < 0 )
        {
          v8 += 192LL;
          if ( !v115 )
            goto LABEL_44;
        }
        v9 -= 192LL;
        if ( !v115 )
LABEL_43:
          std::__throw_bad_function_call();
        while ( v116(&v114, a1, v9) < 0 )
        {
          v9 -= 192LL;
          if ( !v115 )
            goto LABEL_43;
        }
        if ( v8 >= v9 )
          break;
        v10 = *(void **)(v8 + 16);
        v11 = v71.m128i_i64[0];
        v12 = _mm_loadu_si128((const __m128i *)v8);
        *(_QWORD *)(v8 + 16) = 0;
        v96 = v10;
        v13 = *(void **)(v8 + 40);
        v95 = v12;
        v14 = _mm_loadu_si128((const __m128i *)(v8 + 24));
        *(_QWORD *)(v8 + 40) = 0;
        v97 = v14;
        v15 = _mm_loadu_si128((const __m128i *)(v8 + 48));
        *(_OWORD *)(v8 + 24) = 0;
        *(_OWORD *)(v8 + 48) = 0;
        ptr = v13;
        v100 = 0;
        v99 = v15;
        copy_tinfo_t(v11);
        v16 = _mm_loadu_si128((const __m128i *)(v8 + 72));
        v17 = *(_QWORD *)(v8 + 128);
        v104 = *(_QWORD *)(v8 + 120);
        v18 = *(_BYTE *)(v8 + 136);
        v101 = v16;
        v19 = _mm_loadu_si128((const __m128i *)(v8 + 88));
        v106 = v18;
        v20 = *(_QWORD *)(v8 + 144);
        v102 = v19;
        v21 = _mm_loadu_si128((const __m128i *)(v8 + 104));
        v107 = v20;
        v22 = *(_QWORD *)(v8 + 152);
        v103 = v21;
        v108 = v22;
        v23 = *(_QWORD *)(v8 + 160);
        v105 = v17;
        v109 = v23;
        v110 = *(_QWORD *)(v8 + 168);
        v111 = *(_BYTE *)(v8 + 176);
        v112 = *(_QWORD *)(v8 + 184);
        *(_QWORD *)v8 = *(_QWORD *)v9;
        *(_QWORD *)(v8 + 8) = *(_QWORD *)(v9 + 8);
        v24 = *(_QWORD *)(v9 + 16);
        v25 = _mm_loadu_si128((const __m128i *)(v9 + 24));
        *(_QWORD *)(v9 + 16) = 0;
        *(_OWORD *)(v9 + 24) = 0;
        v26 = *(void **)(v8 + 16);
        if ( v26 )
        {
          *(_QWORD *)(v8 + 24) = 0;
          v73 = v24;
          v72 = v25;
          qfree(v26);
          v25 = _mm_load_si128(&v72);
          v24 = v73;
        }
        *(_QWORD *)(v8 + 16) = v24;
        *(__m128i *)(v8 + 24) = v25;
        v27 = *(_QWORD *)(v9 + 40);
        v28 = _mm_loadu_si128((const __m128i *)(v9 + 48));
        *(_QWORD *)(v9 + 40) = 0;
        *(_OWORD *)(v9 + 48) = 0;
        v29 = *(void **)(v8 + 40);
        if ( v29 )
        {
          *(_QWORD *)(v8 + 48) = 0;
          v73 = v27;
          v72 = v28;
          qfree(v29);
          v28 = _mm_load_si128(&v72);
          v27 = v73;
        }
        *(_QWORD *)(v8 + 40) = v27;
        *(__m128i *)(v8 + 48) = v28;
        v73 = v9 + 64;
        copy_tinfo_t(v8 + 64);
        v30 = _mm_loadu_si128((const __m128i *)(v9 + 72));
        v31 = v96;
        v96 = nullptr;
        *(__m128i *)(v8 + 72) = v30;
        *(__m128i *)(v8 + 88) = _mm_loadu_si128((const __m128i *)(v9 + 88));
        *(__m128i *)(v8 + 104) = _mm_loadu_si128((const __m128i *)(v9 + 104));
        v32 = _mm_load_si128(&v95);
        *(_DWORD *)(v8 + 120) = *(_DWORD *)(v9 + 120);
        *(_DWORD *)(v8 + 128) = *(_DWORD *)(v9 + 128);
        *(_DWORD *)(v8 + 132) = *(_DWORD *)(v9 + 132);
        *(_BYTE *)(v8 + 136) = *(_BYTE *)(v9 + 136);
        *(_QWORD *)(v8 + 144) = *(_QWORD *)(v9 + 144);
        *(_QWORD *)(v8 + 152) = *(_QWORD *)(v9 + 152);
        *(_QWORD *)(v8 + 160) = *(_QWORD *)(v9 + 160);
        *(_DWORD *)(v8 + 168) = *(_DWORD *)(v9 + 168);
        *(_DWORD *)(v8 + 172) = *(_DWORD *)(v9 + 172);
        *(_BYTE *)(v8 + 176) = *(_BYTE *)(v9 + 176);
        *(_QWORD *)(v8 + 184) = *(_QWORD *)(v9 + 184);
        *(__m128i *)v9 = v32;
        v33 = _mm_loadu_si128(&v97);
        v34 = *(void **)(v9 + 16);
        v97 = 0;
        if ( v34 )
        {
          *(_QWORD *)(v9 + 24) = 0;
          v72 = v33;
          qfree(v34);
          v33 = _mm_load_si128(&v72);
        }
        v35 = *(void **)(v9 + 40);
        *(_QWORD *)(v9 + 16) = v31;
        *(__m128i *)(v9 + 24) = v33;
        v36 = ptr;
        v37 = _mm_load_si128(&v99);
        ptr = nullptr;
        v99 = 0;
        if ( v35 )
        {
          *(_QWORD *)(v9 + 48) = 0;
          v72 = v37;
          qfree(v35);
          v37 = _mm_load_si128(&v72);
        }
        *(_QWORD *)(v9 + 40) = v36;
        v38 = v71.m128i_i64[0];
        v39 = v73;
        *(__m128i *)(v9 + 48) = v37;
        copy_tinfo_t(v39);
        v40 = _mm_loadu_si128(&v101);
        *(_DWORD *)(v9 + 120) = v104;
        v41 = v105;
        *(__m128i *)(v9 + 72) = v40;
        v42 = _mm_loadu_si128(&v102);
        *(_QWORD *)(v9 + 128) = v41;
        LOBYTE(v41) = v106;
        *(__m128i *)(v9 + 88) = v42;
        v43 = _mm_loadu_si128(&v103);
        *(_BYTE *)(v9 + 136) = v41;
        v44 = v107;
        *(__m128i *)(v9 + 104) = v43;
        *(_QWORD *)(v9 + 144) = v44;
        *(_QWORD *)(v9 + 152) = v108;
        *(_QWORD *)(v9 + 160) = v109;
        *(_QWORD *)(v9 + 168) = v110;
        *(_BYTE *)(v9 + 176) = v111;
        *(_QWORD *)(v9 + 184) = v112;
        clear_tinfo_t(v38);
        if ( ptr )
        {
          v99.m128i_i64[0] = 0;
          qfree(ptr);
        }
        if ( v96 )
        {
          v97.m128i_i64[0] = 0;
          qfree(v96);
        }
        v8 += 192LL;
      }
      if ( v115 )
        v115(&v114, &v114, 3);
      v45 = --v75;
      sub_377BA0((__int64)v74);
      sub_49EAB0((__int64)&v114, v76);
      sub_4A9FF0(v8, v6, v45, &v114);
      if ( v115 )
        v115(&v114, &v114, 3);
      v4 = v8 - a1;
      if ( (__int64)(v8 - a1) <= 3072 )
        return v117 - __readfsqword(0x28u);
      v6 = v8;
    }
    sub_49EAB0((__int64)v74, v76);
    sub_49EAB0((__int64)&v114, v7);
    sub_4A95F0(a1, v6, &v114);
    sub_377BA0((__int64)&v114);
    while ( v6 - a1 > 192 )
    {
      v46 = _mm_loadu_si128((const __m128i *)(v6 - 192));
      v47 = *(void **)(v6 - 176);
      v6 -= 192;
      *(_QWORD *)(v6 + 16) = 0;
      v48 = _mm_loadu_si128((const __m128i *)(v6 + 48));
      v77 = v46;
      v49 = _mm_loadu_si128((const __m128i *)(v6 + 24));
      v78 = v47;
      v50 = *(void **)(v6 + 40);
      *(_QWORD *)(v6 + 40) = 0;
      v79 = v49;
      *(_OWORD *)(v6 + 24) = 0;
      *(_OWORD *)(v6 + 48) = 0;
      v80 = v50;
      v82 = 0;
      v81 = v48;
      copy_tinfo_t(&v82);
      v51 = _mm_loadu_si128((const __m128i *)(v6 + 72));
      v86 = *(_QWORD *)(v6 + 120);
      v52 = *(_DWORD *)(v6 + 128);
      v83 = v51;
      v53 = _mm_loadu_si128((const __m128i *)(v6 + 88));
      LODWORD(v87) = v52;
      v54 = *(_DWORD *)(v6 + 132);
      v84 = v53;
      v55 = _mm_loadu_si128((const __m128i *)(v6 + 104));
      HIDWORD(v87) = v54;
      LOBYTE(v54) = *(_BYTE *)(v6 + 136);
      v85 = v55;
      v88 = v54;
      v89 = *(_QWORD *)(v6 + 144);
      v90 = *(_QWORD *)(v6 + 152);
      v91 = *(_QWORD *)(v6 + 160);
      v92 = *(_QWORD *)(v6 + 168);
      v93 = *(_BYTE *)(v6 + 176);
      v94 = *(_QWORD *)(v6 + 184);
      *(_QWORD *)v6 = *(_QWORD *)a1;
      *(_QWORD *)(v6 + 8) = *(_QWORD *)(a1 + 8);
      v56 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 16) = 0;
      v57 = _mm_loadu_si128((const __m128i *)(a1 + 24));
      *(_OWORD *)(a1 + 24) = 0;
      v58 = *(void **)(v6 + 16);
      if ( v58 )
      {
        *(_QWORD *)(v6 + 24) = 0;
        v71 = v57;
        qfree(v58);
        v57 = _mm_load_si128(&v71);
      }
      *(_QWORD *)(v6 + 16) = v56;
      *(__m128i *)(v6 + 24) = v57;
      v59 = *(_QWORD *)(a1 + 40);
      v60 = _mm_loadu_si128((const __m128i *)(a1 + 48));
      *(_QWORD *)(a1 + 40) = 0;
      *(_OWORD *)(a1 + 48) = 0;
      v61 = *(void **)(v6 + 40);
      if ( v61 )
      {
        *(_QWORD *)(v6 + 48) = 0;
        v71 = v60;
        qfree(v61);
        v60 = _mm_load_si128(&v71);
      }
      *(_QWORD *)(v6 + 40) = v59;
      *(__m128i *)(v6 + 48) = v60;
      copy_tinfo_t(v6 + 64);
      v62 = v74;
      *(__m128i *)(v6 + 72) = _mm_loadu_si128((const __m128i *)(a1 + 72));
      *(__m128i *)(v6 + 88) = _mm_loadu_si128((const __m128i *)(a1 + 88));
      *(__m128i *)(v6 + 104) = _mm_loadu_si128((const __m128i *)(a1 + 104));
      *(_DWORD *)(v6 + 120) = *(_DWORD *)(a1 + 120);
      *(_DWORD *)(v6 + 128) = *(_DWORD *)(a1 + 128);
      *(_DWORD *)(v6 + 132) = *(_DWORD *)(a1 + 132);
      *(_BYTE *)(v6 + 136) = *(_BYTE *)(a1 + 136);
      *(_QWORD *)(v6 + 144) = *(_QWORD *)(a1 + 144);
      *(_QWORD *)(v6 + 152) = *(_QWORD *)(a1 + 152);
      *(_QWORD *)(v6 + 160) = *(_QWORD *)(a1 + 160);
      *(_DWORD *)(v6 + 168) = *(_DWORD *)(a1 + 168);
      *(_DWORD *)(v6 + 172) = *(_DWORD *)(a1 + 172);
      *(_BYTE *)(v6 + 176) = *(_BYTE *)(a1 + 176);
      *(_QWORD *)(v6 + 184) = *(_QWORD *)(a1 + 184);
      sub_49EAB0((__int64)&v114, v62);
      v63 = _mm_load_si128(&v77);
      v64 = v78;
      v78 = nullptr;
      v65 = _mm_load_si128(&v81);
      v95 = v63;
      v66 = _mm_loadu_si128(&v79);
      v96 = v64;
      v97 = v66;
      ptr = v80;
      v80 = nullptr;
      v100 = 0;
      v79 = 0;
      v99 = v65;
      v81 = 0;
      copy_tinfo_t(&v100);
      v67 = _mm_loadu_si128(&v83);
      v104 = v86;
      v101 = v67;
      v68 = _mm_loadu_si128(&v84);
      v105 = v87;
      v102 = v68;
      v69 = _mm_loadu_si128(&v85);
      v106 = v88;
      v103 = v69;
      v107 = v89;
      v108 = v90;
      v109 = v91;
      v110 = v92;
      v111 = v93;
      v112 = v94;
      sub_4A8E60(a1, 0, 0xAAAAAAAAAAAAAAABLL * ((v6 - a1) >> 6), (__int64)&v95, (__int64)&v114);
      sub_379560(&v95);
      sub_377BA0((__int64)&v114);
      sub_379560(&v77);
    }
    sub_377BA0((__int64)v74);
  }
  return v117 - __readfsqword(0x28u);
}
