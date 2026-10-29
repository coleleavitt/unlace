unsigned __int64 __fastcall sub_494BE0(__int64 a1, __int64 a2, __int64 a3, const __m128i *a4)
{
  __int64 v4; // r14
  __int64 i; // r12
  const __m128i *v7; // r15
  __int64 v8; // r14
  unsigned __int64 v9; // r13
  __int64 v10; // rax
  unsigned __int64 v11; // r14
  int v12; // edx
  void *v13; // rax
  __m128i v14; // xmm0
  void *v15; // rax
  __m128i v16; // xmm0
  __m128i v17; // xmm0
  __m128i v18; // xmm0
  __int64 v19; // rdx
  char v20; // al
  __m128i v21; // xmm0
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rax
  __m128i v25; // xmm0
  void *v26; // rdi
  __int64 v27; // rax
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
  __int64 *v38; // r15
  __int64 v39; // rdi
  __m128i v40; // xmm0
  __int64 v41; // rax
  __m128i v42; // xmm0
  __int64 v43; // r15
  __m128i v44; // xmm0
  void *v45; // rax
  __m128i v46; // xmm1
  __m128i v47; // xmm0
  void *v48; // rax
  __m128i v49; // xmm0
  int v50; // eax
  __m128i v51; // xmm0
  int v52; // eax
  __int64 v53; // r14
  __m128i v54; // xmm0
  void *v55; // rdi
  __int64 v56; // r14
  __m128i v57; // xmm0
  void *v58; // rdi
  const __m128i *v59; // rsi
  __m128i v60; // xmm0
  void *v61; // rax
  __m128i v62; // xmm1
  __m128i v63; // xmm0
  __m128i v64; // xmm0
  __m128i v65; // xmm0
  __m128i v67; // [rsp+0h] [rbp-228h] BYREF
  __m128i v68; // [rsp+10h] [rbp-218h] BYREF
  __int64 *v69; // [rsp+20h] [rbp-208h]
  const __m128i *v70; // [rsp+28h] [rbp-200h]
  __int64 v71; // [rsp+30h] [rbp-1F8h]
  const __m128i *v72; // [rsp+38h] [rbp-1F0h]
  __m128i v73; // [rsp+40h] [rbp-1E8h] BYREF
  void *v74; // [rsp+50h] [rbp-1D8h]
  __m128i v75; // [rsp+58h] [rbp-1D0h] BYREF
  void *v76; // [rsp+68h] [rbp-1C0h]
  __m128i v77; // [rsp+70h] [rbp-1B8h] BYREF
  __int64 v78; // [rsp+80h] [rbp-1A8h] BYREF
  __m128i v79; // [rsp+88h] [rbp-1A0h] BYREF
  __m128i v80; // [rsp+98h] [rbp-190h] BYREF
  __int64 v81; // [rsp+A8h] [rbp-180h]
  __int64 v82; // [rsp+B0h] [rbp-178h]
  char v83; // [rsp+B8h] [rbp-170h]
  int v84; // [rsp+C0h] [rbp-168h]
  __int64 v85; // [rsp+C8h] [rbp-160h]
  __int64 v86; // [rsp+D0h] [rbp-158h]
  int v87; // [rsp+D8h] [rbp-150h]
  char v88; // [rsp+DCh] [rbp-14Ch]
  __int64 v89; // [rsp+E0h] [rbp-148h]
  __m128i v90; // [rsp+F0h] [rbp-138h] BYREF
  void *v91; // [rsp+100h] [rbp-128h]
  __m128i v92; // [rsp+108h] [rbp-120h] BYREF
  void *ptr; // [rsp+118h] [rbp-110h]
  __m128i v94; // [rsp+120h] [rbp-108h] BYREF
  __int64 v95; // [rsp+130h] [rbp-F8h] BYREF
  __m128i v96; // [rsp+138h] [rbp-F0h] BYREF
  __m128i v97; // [rsp+148h] [rbp-E0h] BYREF
  __int64 v98; // [rsp+158h] [rbp-D0h]
  __int64 v99; // [rsp+160h] [rbp-C8h]
  char v100; // [rsp+168h] [rbp-C0h]
  int v101; // [rsp+170h] [rbp-B8h]
  __int64 v102; // [rsp+178h] [rbp-B0h]
  __int64 v103; // [rsp+180h] [rbp-A8h]
  int v104; // [rsp+188h] [rbp-A0h]
  char v105; // [rsp+18Ch] [rbp-9Ch]
  __int64 v106; // [rsp+190h] [rbp-98h]
  char v107; // [rsp+1A0h] [rbp-88h] BYREF
  __m128i v108; // [rsp+1B0h] [rbp-78h] BYREF
  __m128i v109; // [rsp+1C0h] [rbp-68h] BYREF
  __m128i v110; // [rsp+1D0h] [rbp-58h]
  unsigned __int64 v111; // [rsp+1E8h] [rbp-40h]

  v71 = a3;
  v72 = a4;
  v111 = __readfsqword(0x28u);
  v70 = (const __m128i *)&v107;
  v4 = a2 - a1;
  if ( a2 - a1 > 2688 )
  {
    for ( i = a2; ; i = v9 )
    {
      v7 = v70;
      if ( !v71 )
        break;
      sub_489E30((__int64)v70, v72);
      v109 = 0;
      v110 = 0u;
      v8 = a1 + 168 * ((__int64)(0xCF3CF3CF3CF3CF3DLL * (v4 >> 3)) >> 1);
      if ( v108.m128i_i64[0] )
      {
        ((void (__fastcall *)(__m128i *, const __m128i *, __int64))v108.m128i_i64[0])(&v109, v7, 2);
        v110 = _mm_load_si128(&v108);
      }
      v9 = a1 + 168;
      sub_494B00(a1, a1 + 168, v8, i - 168, (__int64)&v109);
      if ( v110.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v110.m128i_i64[0])(&v109, &v109, 3);
      v110 = 0u;
      v109 = 0;
      if ( !v108.m128i_i64[0] )
LABEL_48:
        std::__throw_bad_function_call();
      ((void (__fastcall *)(__m128i *, const __m128i *, __int64))v108.m128i_i64[0])(&v109, v70, 2);
      v10 = v108.m128i_i64[0];
      v11 = i;
      v110 = _mm_load_si128(&v108);
      while ( 1 )
      {
        while ( 1 )
        {
          if ( !v10 )
            goto LABEL_48;
          v12 = ((__int64 (__fastcall *)(__m128i *, unsigned __int64, __int64))v110.m128i_i64[1])(&v109, v9, a1);
          v10 = v110.m128i_i64[0];
          if ( v12 >= 0 )
            break;
          v9 += 168LL;
        }
        v11 -= 168LL;
        if ( !v110.m128i_i64[0] )
LABEL_47:
          std::__throw_bad_function_call();
        while ( ((int (__fastcall *)(__m128i *, __int64, unsigned __int64))v110.m128i_i64[1])(&v109, a1, v11) < 0 )
        {
          v11 -= 168LL;
          if ( !v110.m128i_i64[0] )
            goto LABEL_47;
        }
        if ( v9 >= v11 )
          break;
        v13 = *(void **)(v9 + 16);
        v14 = _mm_loadu_si128((const __m128i *)v9);
        *(_QWORD *)(v9 + 16) = 0;
        v91 = v13;
        v15 = *(void **)(v9 + 40);
        v90 = v14;
        v16 = _mm_loadu_si128((const __m128i *)(v9 + 24));
        *(_QWORD *)(v9 + 40) = 0;
        ptr = v15;
        v92 = v16;
        v17 = _mm_loadu_si128((const __m128i *)(v9 + 48));
        *(_OWORD *)(v9 + 24) = 0;
        *(_OWORD *)(v9 + 48) = 0;
        v95 = 0;
        v69 = &v95;
        v94 = v17;
        copy_tinfo_t(&v95);
        v18 = _mm_loadu_si128((const __m128i *)(v9 + 72));
        v19 = *(_QWORD *)(v9 + 112);
        v98 = *(_QWORD *)(v9 + 104);
        v20 = *(_BYTE *)(v9 + 120);
        v96 = v18;
        v21 = _mm_loadu_si128((const __m128i *)(v9 + 88));
        v100 = v20;
        v22 = *(_DWORD *)(v9 + 128);
        v97 = v21;
        v101 = v22;
        v23 = *(_QWORD *)(v9 + 136);
        v99 = v19;
        v102 = v23;
        v103 = *(_QWORD *)(v9 + 144);
        v104 = *(_DWORD *)(v9 + 152);
        v105 = *(_BYTE *)(v9 + 156);
        v106 = *(_QWORD *)(v9 + 160);
        *(_QWORD *)v9 = *(_QWORD *)v11;
        *(_QWORD *)(v9 + 8) = *(_QWORD *)(v11 + 8);
        v24 = *(_QWORD *)(v11 + 16);
        v25 = _mm_loadu_si128((const __m128i *)(v11 + 24));
        *(_QWORD *)(v11 + 16) = 0;
        *(_OWORD *)(v11 + 24) = 0;
        v26 = *(void **)(v9 + 16);
        if ( v26 )
        {
          *(_QWORD *)(v9 + 24) = 0;
          v68.m128i_i64[0] = v24;
          v67 = v25;
          qfree(v26);
          v24 = v68.m128i_i64[0];
          v25 = _mm_load_si128(&v67);
        }
        *(_QWORD *)(v9 + 16) = v24;
        *(__m128i *)(v9 + 24) = v25;
        v27 = *(_QWORD *)(v11 + 40);
        v28 = _mm_loadu_si128((const __m128i *)(v11 + 48));
        *(_QWORD *)(v11 + 40) = 0;
        *(_OWORD *)(v11 + 48) = 0;
        v29 = *(void **)(v9 + 40);
        if ( v29 )
        {
          *(_QWORD *)(v9 + 48) = 0;
          v67.m128i_i64[0] = v27;
          v68 = v28;
          qfree(v29);
          v28 = _mm_load_si128(&v68);
          v27 = v67.m128i_i64[0];
        }
        *(_QWORD *)(v9 + 40) = v27;
        *(__m128i *)(v9 + 48) = v28;
        v67.m128i_i64[0] = v11 + 64;
        copy_tinfo_t(v9 + 64);
        v30 = _mm_loadu_si128((const __m128i *)(v11 + 72));
        v31 = v91;
        v91 = nullptr;
        *(__m128i *)(v9 + 72) = v30;
        *(__m128i *)(v9 + 88) = _mm_loadu_si128((const __m128i *)(v11 + 88));
        v32 = _mm_load_si128(&v90);
        *(_DWORD *)(v9 + 104) = *(_DWORD *)(v11 + 104);
        *(_DWORD *)(v9 + 112) = *(_DWORD *)(v11 + 112);
        *(_DWORD *)(v9 + 116) = *(_DWORD *)(v11 + 116);
        *(_BYTE *)(v9 + 120) = *(_BYTE *)(v11 + 120);
        *(_DWORD *)(v9 + 128) = *(_DWORD *)(v11 + 128);
        *(_QWORD *)(v9 + 136) = *(_QWORD *)(v11 + 136);
        *(_DWORD *)(v9 + 144) = *(_DWORD *)(v11 + 144);
        *(_DWORD *)(v9 + 148) = *(_DWORD *)(v11 + 148);
        *(_DWORD *)(v9 + 152) = *(_DWORD *)(v11 + 152);
        *(_BYTE *)(v9 + 156) = *(_BYTE *)(v11 + 156);
        *(_QWORD *)(v9 + 160) = *(_QWORD *)(v11 + 160);
        *(__m128i *)v11 = v32;
        v33 = _mm_loadu_si128(&v92);
        v92 = 0;
        v34 = *(void **)(v11 + 16);
        if ( v34 )
        {
          *(_QWORD *)(v11 + 24) = 0;
          v68 = v33;
          qfree(v34);
          v33 = _mm_load_si128(&v68);
        }
        v35 = *(void **)(v11 + 40);
        *(_QWORD *)(v11 + 16) = v31;
        *(__m128i *)(v11 + 24) = v33;
        v36 = ptr;
        v37 = _mm_load_si128(&v94);
        ptr = nullptr;
        v94 = 0;
        if ( v35 )
        {
          *(_QWORD *)(v11 + 48) = 0;
          v68 = v37;
          qfree(v35);
          v37 = _mm_load_si128(&v68);
        }
        *(_QWORD *)(v11 + 40) = v36;
        v38 = v69;
        v39 = v67.m128i_i64[0];
        *(__m128i *)(v11 + 48) = v37;
        copy_tinfo_t(v39);
        v40 = _mm_loadu_si128(&v96);
        *(_DWORD *)(v11 + 104) = v98;
        v41 = v99;
        *(__m128i *)(v11 + 72) = v40;
        v42 = _mm_loadu_si128(&v97);
        *(_QWORD *)(v11 + 112) = v41;
        LOBYTE(v41) = v100;
        *(__m128i *)(v11 + 88) = v42;
        *(_BYTE *)(v11 + 120) = v41;
        *(_DWORD *)(v11 + 128) = v101;
        *(_QWORD *)(v11 + 136) = v102;
        *(_QWORD *)(v11 + 144) = v103;
        *(_DWORD *)(v11 + 152) = v104;
        *(_BYTE *)(v11 + 156) = v105;
        *(_QWORD *)(v11 + 160) = v106;
        clear_tinfo_t(v38);
        if ( ptr )
        {
          v94.m128i_i64[0] = 0;
          qfree(ptr);
        }
        if ( v91 )
        {
          v92.m128i_i64[0] = 0;
          qfree(v91);
        }
        v10 = v110.m128i_i64[0];
        v9 += 168LL;
      }
      if ( v110.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v110.m128i_i64[0])(&v109, &v109, 3);
      v43 = --v71;
      sub_374250((__int64)v70);
      sub_489E30((__int64)&v109, v72);
      sub_494BE0(v9, i, v43, &v109);
      if ( v110.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v110.m128i_i64[0])(&v109, &v109, 3);
      v4 = v9 - a1;
      if ( (__int64)(v9 - a1) <= 2688 )
        return v111 - __readfsqword(0x28u);
    }
    sub_489E30((__int64)v70, v72);
    sub_489E30((__int64)&v109, v7);
    sub_494260(a1, i, &v109);
    sub_374250((__int64)&v109);
    while ( i - a1 > 168 )
    {
      v44 = _mm_loadu_si128((const __m128i *)(i - 168));
      v45 = *(void **)(i - 152);
      i -= 168;
      *(_QWORD *)(i + 16) = 0;
      v46 = _mm_loadu_si128((const __m128i *)(i + 48));
      v73 = v44;
      v47 = _mm_loadu_si128((const __m128i *)(i + 24));
      v74 = v45;
      v48 = *(void **)(i + 40);
      *(_QWORD *)(i + 40) = 0;
      v75 = v47;
      *(_OWORD *)(i + 24) = 0;
      *(_OWORD *)(i + 48) = 0;
      v76 = v48;
      v78 = 0;
      v77 = v46;
      copy_tinfo_t(&v78);
      v49 = _mm_loadu_si128((const __m128i *)(i + 72));
      v81 = *(_QWORD *)(i + 104);
      v50 = *(_DWORD *)(i + 112);
      v79 = v49;
      v51 = _mm_loadu_si128((const __m128i *)(i + 88));
      LODWORD(v82) = v50;
      v52 = *(_DWORD *)(i + 116);
      v80 = v51;
      HIDWORD(v82) = v52;
      v83 = *(_BYTE *)(i + 120);
      v84 = *(_DWORD *)(i + 128);
      v85 = *(_QWORD *)(i + 136);
      v86 = *(_QWORD *)(i + 144);
      v87 = *(_DWORD *)(i + 152);
      v88 = *(_BYTE *)(i + 156);
      v89 = *(_QWORD *)(i + 160);
      *(_QWORD *)i = *(_QWORD *)a1;
      *(_QWORD *)(i + 8) = *(_QWORD *)(a1 + 8);
      v53 = *(_QWORD *)(a1 + 16);
      v54 = _mm_loadu_si128((const __m128i *)(a1 + 24));
      *(_QWORD *)(a1 + 16) = 0;
      *(_OWORD *)(a1 + 24) = 0;
      v55 = *(void **)(i + 16);
      if ( v55 )
      {
        *(_QWORD *)(i + 24) = 0;
        v67 = v54;
        qfree(v55);
        v54 = _mm_load_si128(&v67);
      }
      *(_QWORD *)(i + 16) = v53;
      *(__m128i *)(i + 24) = v54;
      v56 = *(_QWORD *)(a1 + 40);
      v57 = _mm_loadu_si128((const __m128i *)(a1 + 48));
      *(_QWORD *)(a1 + 40) = 0;
      *(_OWORD *)(a1 + 48) = 0;
      v58 = *(void **)(i + 40);
      if ( v58 )
      {
        *(_QWORD *)(i + 48) = 0;
        v67 = v57;
        qfree(v58);
        v57 = _mm_load_si128(&v67);
      }
      *(_QWORD *)(i + 40) = v56;
      *(__m128i *)(i + 48) = v57;
      copy_tinfo_t(i + 64);
      v59 = v70;
      *(__m128i *)(i + 72) = _mm_loadu_si128((const __m128i *)(a1 + 72));
      *(__m128i *)(i + 88) = _mm_loadu_si128((const __m128i *)(a1 + 88));
      *(_DWORD *)(i + 104) = *(_DWORD *)(a1 + 104);
      *(_DWORD *)(i + 112) = *(_DWORD *)(a1 + 112);
      *(_DWORD *)(i + 116) = *(_DWORD *)(a1 + 116);
      *(_BYTE *)(i + 120) = *(_BYTE *)(a1 + 120);
      *(_DWORD *)(i + 128) = *(_DWORD *)(a1 + 128);
      *(_QWORD *)(i + 136) = *(_QWORD *)(a1 + 136);
      *(_DWORD *)(i + 144) = *(_DWORD *)(a1 + 144);
      *(_DWORD *)(i + 148) = *(_DWORD *)(a1 + 148);
      *(_DWORD *)(i + 152) = *(_DWORD *)(a1 + 152);
      *(_BYTE *)(i + 156) = *(_BYTE *)(a1 + 156);
      *(_QWORD *)(i + 160) = *(_QWORD *)(a1 + 160);
      sub_489E30((__int64)&v109, v59);
      v60 = _mm_load_si128(&v73);
      v61 = v74;
      v74 = nullptr;
      v62 = _mm_load_si128(&v77);
      v90 = v60;
      v63 = _mm_loadu_si128(&v75);
      v91 = v61;
      v92 = v63;
      ptr = v76;
      v76 = nullptr;
      v95 = 0;
      v75 = 0;
      v94 = v62;
      v77 = 0;
      copy_tinfo_t(&v95);
      v64 = _mm_loadu_si128(&v79);
      v98 = v81;
      v96 = v64;
      v65 = _mm_loadu_si128(&v80);
      v99 = v82;
      v97 = v65;
      v100 = v83;
      v101 = v84;
      v102 = v85;
      v103 = v86;
      v104 = v87;
      v105 = v88;
      v106 = v89;
      sub_493B20(a1, 0, 0xCF3CF3CF3CF3CF3DLL * ((i - a1) >> 3), (__int64)&v90, (__int64)&v109);
      sub_375BF0(&v90);
      if ( v110.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v110.m128i_i64[0])(&v109, &v109, 3);
      sub_375BF0(&v73);
    }
    sub_374250((__int64)v70);
  }
  return v111 - __readfsqword(0x28u);
}

