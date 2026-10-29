__int64 __fastcall sub_54A930(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v4; // r14
  __int64 v5; // r13
  __int64 v6; // rbp
  __m128i v7; // xmm0
  void *v8; // rdx
  __m128i v9; // xmm0
  void *v10; // rdx
  __m128i v11; // xmm0
  __m128i v12; // xmm0
  int v13; // edx
  __m128i v14; // xmm0
  int v15; // edx
  __int64 v16; // rdx
  __m128i v17; // xmm0
  void *v18; // rdi
  __int64 v19; // rdx
  __m128i v20; // xmm0
  void *v21; // rdi
  __m128i v22; // xmm0
  void *v23; // r15
  __m128i v24; // xmm0
  void *v25; // rdi
  __m128i v26; // xmm0
  void *v27; // rdi
  void *v28; // r15
  __m128i v29; // xmm0
  __m128i v30; // xmm0
  int v31; // edx
  __m128i v32; // xmm0
  int v33; // edx
  __int64 v34; // rax
  __int64 v35; // r13
  __int64 i; // rbp
  void *v37; // rdx
  __m128i v38; // xmm0
  __m128i v39; // xmm0
  void *v40; // rdx
  __m128i v41; // xmm0
  __m128i v42; // xmm0
  int v43; // edx
  __m128i v44; // xmm0
  int v45; // edx
  __int64 v46; // rdx
  __m128i v47; // xmm0
  void *v48; // rdi
  __int64 v49; // rdx
  __m128i v50; // xmm0
  void *v51; // rdi
  __m128i v52; // xmm0
  void *v53; // r15
  __m128i v54; // xmm0
  void *v55; // rdi
  __m128i v56; // xmm0
  void *v57; // rdi
  void *v58; // r15
  __m128i v59; // xmm0
  __m128i v60; // xmm0
  int v61; // edx
  __m128i v62; // xmm0
  int v63; // edx
  __int64 v64; // rbx
  __int64 v66; // rbp
  __m128i v67; // xmm0
  void *v68; // rax
  __m128i v69; // xmm0
  void *v70; // rax
  __m128i v71; // xmm0
  __m128i v72; // xmm0
  int v73; // eax
  __m128i v74; // xmm0
  int v75; // eax
  __int64 v76; // r14
  __m128i v77; // xmm0
  void *v78; // rdi
  __int64 v79; // r14
  __m128i v80; // xmm0
  void *v81; // rdi
  __m128i v82; // xmm0
  void *v83; // r13
  __m128i v84; // xmm0
  void *v85; // rdi
  __m128i v86; // xmm0
  void *v87; // rdi
  void *v88; // r13
  __m128i v89; // xmm0
  __m128i v90; // xmm0
  int v91; // eax
  __m128i v92; // xmm0
  int v93; // eax
  __m128i v94; // [rsp+0h] [rbp-118h] BYREF
  __m128i v95; // [rsp+10h] [rbp-108h] BYREF
  __m128i v96; // [rsp+20h] [rbp-F8h] BYREF
  unsigned __int64 v97; // [rsp+30h] [rbp-E8h]
  __int64 v98; // [rsp+38h] [rbp-E0h]
  __int64 v99; // [rsp+40h] [rbp-D8h]
  __int64 v100; // [rsp+48h] [rbp-D0h]
  __m128i v101; // [rsp+50h] [rbp-C8h] BYREF
  void *v102; // [rsp+60h] [rbp-B8h]
  __m128i v103; // [rsp+68h] [rbp-B0h] BYREF
  void *v104; // [rsp+78h] [rbp-A0h]
  __m128i v105; // [rsp+80h] [rbp-98h] BYREF
  __int64 v106; // [rsp+90h] [rbp-88h] BYREF
  __m128i v107; // [rsp+98h] [rbp-80h] BYREF
  __m128i v108; // [rsp+A8h] [rbp-70h] BYREF
  __int64 v109; // [rsp+B8h] [rbp-60h]
  int v110; // [rsp+C0h] [rbp-58h]
  int v111; // [rsp+C4h] [rbp-54h]
  char v112; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v113; // [rsp+D8h] [rbp-40h]

  v99 = a1;
  v98 = a2;
  v100 = a3;
  v113 = __readfsqword(0x28u);
  if ( a2 == a1 )
    return v100;
  if ( a2 == a3 )
    return v99;
  v3 = (a2 - a1) >> 7;
  v97 = (a3 - a1) >> 7;
  v4 = a1;
  if ( v3 != v97 - v3 )
  {
    while ( 1 )
    {
      v94.m128i_i64[0] = v97 - v3;
      if ( v3 >= (__int64)(v97 - v3) )
      {
        v34 = v4 + (v97 << 7);
        v4 = v34 - (v94.m128i_i64[0] << 7);
        if ( v3 > 0 )
        {
          v35 = v34 - 64;
          for ( i = 0; i != v3; ++i )
          {
            v37 = *(void **)(v4 - 112);
            v4 -= 128;
            v38 = _mm_loadu_si128((const __m128i *)v4);
            *(_QWORD *)(v4 + 16) = 0;
            v101 = v38;
            v39 = _mm_loadu_si128((const __m128i *)(v4 + 24));
            v102 = v37;
            v40 = *(void **)(v4 + 40);
            *(_QWORD *)(v4 + 40) = 0;
            v103 = v39;
            v41 = _mm_loadu_si128((const __m128i *)(v4 + 48));
            *(_OWORD *)(v4 + 24) = 0;
            *(_OWORD *)(v4 + 48) = 0;
            v104 = v40;
            v106 = 0;
            v105 = v41;
            copy_tinfo_t(&v106);
            v42 = _mm_loadu_si128((const __m128i *)(v4 + 72));
            v109 = *(_QWORD *)(v4 + 104);
            v43 = *(_DWORD *)(v4 + 112);
            v107 = v42;
            v44 = _mm_loadu_si128((const __m128i *)(v4 + 88));
            v110 = v43;
            v45 = *(_DWORD *)(v4 + 116);
            v108 = v44;
            v111 = v45;
            v112 = *(_BYTE *)(v4 + 120);
            *(_QWORD *)v4 = *(_QWORD *)(v35 - 64);
            *(_QWORD *)(v4 + 8) = *(_QWORD *)(v35 - 56);
            v46 = *(_QWORD *)(v35 - 48);
            v47 = _mm_loadu_si128((const __m128i *)(v35 - 40));
            *(_QWORD *)(v35 - 48) = 0;
            *(_OWORD *)(v35 - 40) = 0;
            v48 = *(void **)(v4 + 16);
            if ( v48 )
            {
              *(_QWORD *)(v4 + 24) = 0;
              v95.m128i_i64[0] = v46;
              v96 = v47;
              qfree(v48);
              v47 = _mm_load_si128(&v96);
              v46 = v95.m128i_i64[0];
            }
            *(_QWORD *)(v4 + 16) = v46;
            *(__m128i *)(v4 + 24) = v47;
            v49 = *(_QWORD *)(v35 - 24);
            v50 = _mm_loadu_si128((const __m128i *)(v35 - 16));
            *(_QWORD *)(v35 - 24) = 0;
            *(_OWORD *)(v35 - 16) = 0;
            v51 = *(void **)(v4 + 40);
            if ( v51 )
            {
              *(_QWORD *)(v4 + 48) = 0;
              v95.m128i_i64[0] = v49;
              v96 = v50;
              qfree(v51);
              v50 = _mm_load_si128(&v96);
              v49 = v95.m128i_i64[0];
            }
            *(_QWORD *)(v4 + 40) = v49;
            *(__m128i *)(v4 + 48) = v50;
            copy_tinfo_t(v4 + 64);
            v52 = _mm_loadu_si128((const __m128i *)(v35 + 8));
            v53 = v102;
            v102 = nullptr;
            *(__m128i *)(v4 + 72) = v52;
            *(__m128i *)(v4 + 88) = _mm_loadu_si128((const __m128i *)(v35 + 24));
            v54 = _mm_load_si128(&v101);
            *(_DWORD *)(v4 + 104) = *(_DWORD *)(v35 + 40);
            *(_DWORD *)(v4 + 112) = *(_DWORD *)(v35 + 48);
            *(_DWORD *)(v4 + 116) = *(_DWORD *)(v35 + 52);
            *(_BYTE *)(v4 + 120) = *(_BYTE *)(v35 + 56);
            v55 = *(void **)(v35 - 48);
            *(__m128i *)(v35 - 64) = v54;
            v56 = _mm_loadu_si128(&v103);
            v103 = 0;
            if ( v55 )
            {
              *(_QWORD *)(v35 - 40) = 0;
              v95 = v56;
              qfree(v55);
              v56 = _mm_load_si128(&v95);
            }
            v57 = *(void **)(v35 - 24);
            *(_QWORD *)(v35 - 48) = v53;
            *(__m128i *)(v35 - 40) = v56;
            v58 = v104;
            v59 = _mm_load_si128(&v105);
            v104 = nullptr;
            v105 = 0;
            if ( v57 )
            {
              *(_QWORD *)(v35 - 16) = 0;
              v95 = v59;
              qfree(v57);
              v59 = _mm_load_si128(&v95);
            }
            *(_QWORD *)(v35 - 24) = v58;
            *(__m128i *)(v35 - 16) = v59;
            copy_tinfo_t(v35);
            v60 = _mm_loadu_si128(&v107);
            *(_DWORD *)(v35 + 40) = v109;
            v61 = v110;
            *(__m128i *)(v35 + 8) = v60;
            v62 = _mm_loadu_si128(&v108);
            *(_DWORD *)(v35 + 48) = v61;
            v63 = v111;
            *(__m128i *)(v35 + 24) = v62;
            *(_DWORD *)(v35 + 52) = v63;
            *(_BYTE *)(v35 + 56) = v112;
            clear_tinfo_t(&v106);
            if ( v104 )
            {
              v105.m128i_i64[0] = 0;
              qfree(v104);
            }
            if ( v102 )
            {
              v103.m128i_i64[0] = 0;
              qfree(v102);
            }
            v35 -= 128;
          }
        }
        v3 = v97 % v94.m128i_i64[0];
        if ( !(v97 % v94.m128i_i64[0]) )
          return v100 - v98 + v99;
      }
      else
      {
        if ( (__int64)(v97 - v3) > 0 )
        {
          v5 = v4 + (v3 << 7) + 64;
          v6 = 0;
          do
          {
            v7 = _mm_loadu_si128((const __m128i *)v4);
            v8 = *(void **)(v4 + 16);
            *(_QWORD *)(v4 + 16) = 0;
            v101 = v7;
            v9 = _mm_loadu_si128((const __m128i *)(v4 + 24));
            v102 = v8;
            v10 = *(void **)(v4 + 40);
            *(_QWORD *)(v4 + 40) = 0;
            v103 = v9;
            v11 = _mm_loadu_si128((const __m128i *)(v4 + 48));
            *(_OWORD *)(v4 + 24) = 0;
            *(_OWORD *)(v4 + 48) = 0;
            v104 = v10;
            v106 = 0;
            v105 = v11;
            copy_tinfo_t(&v106);
            v12 = _mm_loadu_si128((const __m128i *)(v4 + 72));
            v109 = *(_QWORD *)(v4 + 104);
            v13 = *(_DWORD *)(v4 + 112);
            v107 = v12;
            v14 = _mm_loadu_si128((const __m128i *)(v4 + 88));
            v110 = v13;
            v15 = *(_DWORD *)(v4 + 116);
            v108 = v14;
            v111 = v15;
            v112 = *(_BYTE *)(v4 + 120);
            *(_QWORD *)v4 = *(_QWORD *)(v5 - 64);
            *(_QWORD *)(v4 + 8) = *(_QWORD *)(v5 - 56);
            v16 = *(_QWORD *)(v5 - 48);
            v17 = _mm_loadu_si128((const __m128i *)(v5 - 40));
            *(_QWORD *)(v5 - 48) = 0;
            *(_OWORD *)(v5 - 40) = 0;
            v18 = *(void **)(v4 + 16);
            if ( v18 )
            {
              *(_QWORD *)(v4 + 24) = 0;
              v95.m128i_i64[0] = v16;
              v96 = v17;
              qfree(v18);
              v17 = _mm_load_si128(&v96);
              v16 = v95.m128i_i64[0];
            }
            *(_QWORD *)(v4 + 16) = v16;
            *(__m128i *)(v4 + 24) = v17;
            v19 = *(_QWORD *)(v5 - 24);
            v20 = _mm_loadu_si128((const __m128i *)(v5 - 16));
            *(_QWORD *)(v5 - 24) = 0;
            *(_OWORD *)(v5 - 16) = 0;
            v21 = *(void **)(v4 + 40);
            if ( v21 )
            {
              *(_QWORD *)(v4 + 48) = 0;
              v95.m128i_i64[0] = v19;
              v96 = v20;
              qfree(v21);
              v20 = _mm_load_si128(&v96);
              v19 = v95.m128i_i64[0];
            }
            *(_QWORD *)(v4 + 40) = v19;
            *(__m128i *)(v4 + 48) = v20;
            copy_tinfo_t(v4 + 64);
            v22 = _mm_loadu_si128((const __m128i *)(v5 + 8));
            v23 = v102;
            v102 = nullptr;
            *(__m128i *)(v4 + 72) = v22;
            *(__m128i *)(v4 + 88) = _mm_loadu_si128((const __m128i *)(v5 + 24));
            v24 = _mm_load_si128(&v101);
            *(_DWORD *)(v4 + 104) = *(_DWORD *)(v5 + 40);
            *(_DWORD *)(v4 + 112) = *(_DWORD *)(v5 + 48);
            *(_DWORD *)(v4 + 116) = *(_DWORD *)(v5 + 52);
            *(_BYTE *)(v4 + 120) = *(_BYTE *)(v5 + 56);
            v25 = *(void **)(v5 - 48);
            *(__m128i *)(v5 - 64) = v24;
            v26 = _mm_loadu_si128(&v103);
            v103 = 0;
            if ( v25 )
            {
              *(_QWORD *)(v5 - 40) = 0;
              v95 = v26;
              qfree(v25);
              v26 = _mm_load_si128(&v95);
            }
            v27 = *(void **)(v5 - 24);
            *(_QWORD *)(v5 - 48) = v23;
            *(__m128i *)(v5 - 40) = v26;
            v28 = v104;
            v29 = _mm_load_si128(&v105);
            v104 = nullptr;
            v105 = 0;
            if ( v27 )
            {
              *(_QWORD *)(v5 - 16) = 0;
              v95 = v29;
              qfree(v27);
              v29 = _mm_load_si128(&v95);
            }
            *(_QWORD *)(v5 - 24) = v28;
            *(__m128i *)(v5 - 16) = v29;
            copy_tinfo_t(v5);
            v30 = _mm_loadu_si128(&v107);
            *(_DWORD *)(v5 + 40) = v109;
            v31 = v110;
            *(__m128i *)(v5 + 8) = v30;
            v32 = _mm_loadu_si128(&v108);
            *(_DWORD *)(v5 + 48) = v31;
            v33 = v111;
            *(__m128i *)(v5 + 24) = v32;
            *(_DWORD *)(v5 + 52) = v33;
            *(_BYTE *)(v5 + 56) = v112;
            clear_tinfo_t(&v106);
            if ( v104 )
            {
              v105.m128i_i64[0] = 0;
              qfree(v104);
            }
            if ( v102 )
            {
              v103.m128i_i64[0] = 0;
              qfree(v102);
            }
            v4 += 128;
            ++v6;
            v5 += 128;
          }
          while ( v94.m128i_i64[0] != v6 );
        }
        if ( !(v97 % v3) )
          return v100 - v98 + v99;
        v94.m128i_i64[0] = v3;
        v3 -= v97 % v3;
      }
      v97 = v94.m128i_i64[0];
    }
  }
  v64 = v99;
  v66 = v98 + 64;
  do
  {
    v67 = _mm_loadu_si128((const __m128i *)v64);
    v68 = *(void **)(v64 + 16);
    *(_QWORD *)(v64 + 16) = 0;
    v101 = v67;
    v69 = _mm_loadu_si128((const __m128i *)(v64 + 24));
    v102 = v68;
    v70 = *(void **)(v64 + 40);
    *(_QWORD *)(v64 + 40) = 0;
    v103 = v69;
    v71 = _mm_loadu_si128((const __m128i *)(v64 + 48));
    *(_OWORD *)(v64 + 24) = 0;
    *(_OWORD *)(v64 + 48) = 0;
    v104 = v70;
    v106 = 0;
    v105 = v71;
    copy_tinfo_t(&v106);
    v72 = _mm_loadu_si128((const __m128i *)(v64 + 72));
    v109 = *(_QWORD *)(v64 + 104);
    v73 = *(_DWORD *)(v64 + 112);
    v107 = v72;
    v74 = _mm_loadu_si128((const __m128i *)(v64 + 88));
    v110 = v73;
    v75 = *(_DWORD *)(v64 + 116);
    v108 = v74;
    v111 = v75;
    v112 = *(_BYTE *)(v64 + 120);
    *(_QWORD *)v64 = *(_QWORD *)(v66 - 64);
    *(_QWORD *)(v64 + 8) = *(_QWORD *)(v66 - 56);
    v76 = *(_QWORD *)(v66 - 48);
    v77 = _mm_loadu_si128((const __m128i *)(v66 - 40));
    *(_QWORD *)(v66 - 48) = 0;
    *(_OWORD *)(v66 - 40) = 0;
    v78 = *(void **)(v64 + 16);
    if ( v78 )
    {
      *(_QWORD *)(v64 + 24) = 0;
      v94 = v77;
      qfree(v78);
      v77 = _mm_load_si128(&v94);
    }
    *(_QWORD *)(v64 + 16) = v76;
    *(__m128i *)(v64 + 24) = v77;
    v79 = *(_QWORD *)(v66 - 24);
    v80 = _mm_loadu_si128((const __m128i *)(v66 - 16));
    *(_QWORD *)(v66 - 24) = 0;
    *(_OWORD *)(v66 - 16) = 0;
    v81 = *(void **)(v64 + 40);
    if ( v81 )
    {
      *(_QWORD *)(v64 + 48) = 0;
      v94 = v80;
      qfree(v81);
      v80 = _mm_load_si128(&v94);
    }
    *(_QWORD *)(v64 + 40) = v79;
    *(__m128i *)(v64 + 48) = v80;
    copy_tinfo_t(v64 + 64);
    v82 = _mm_loadu_si128((const __m128i *)(v66 + 8));
    v83 = v102;
    v102 = nullptr;
    *(__m128i *)(v64 + 72) = v82;
    *(__m128i *)(v64 + 88) = _mm_loadu_si128((const __m128i *)(v66 + 24));
    v84 = _mm_load_si128(&v101);
    *(_DWORD *)(v64 + 104) = *(_DWORD *)(v66 + 40);
    *(_DWORD *)(v64 + 112) = *(_DWORD *)(v66 + 48);
    *(_DWORD *)(v64 + 116) = *(_DWORD *)(v66 + 52);
    *(_BYTE *)(v64 + 120) = *(_BYTE *)(v66 + 56);
    v85 = *(void **)(v66 - 48);
    *(__m128i *)(v66 - 64) = v84;
    v86 = _mm_loadu_si128(&v103);
    v103 = 0;
    if ( v85 )
    {
      *(_QWORD *)(v66 - 40) = 0;
      v94 = v86;
      qfree(v85);
      v86 = _mm_load_si128(&v94);
    }
    v87 = *(void **)(v66 - 24);
    *(_QWORD *)(v66 - 48) = v83;
    *(__m128i *)(v66 - 40) = v86;
    v88 = v104;
    v89 = _mm_load_si128(&v105);
    v104 = nullptr;
    v105 = 0;
    if ( v87 )
    {
      *(_QWORD *)(v66 - 16) = 0;
      v94 = v89;
      qfree(v87);
      v89 = _mm_load_si128(&v94);
    }
    *(_QWORD *)(v66 - 24) = v88;
    *(__m128i *)(v66 - 16) = v89;
    copy_tinfo_t(v66);
    v90 = _mm_loadu_si128(&v107);
    *(_DWORD *)(v66 + 40) = v109;
    v91 = v110;
    *(__m128i *)(v66 + 8) = v90;
    v92 = _mm_loadu_si128(&v108);
    *(_DWORD *)(v66 + 48) = v91;
    v93 = v111;
    *(__m128i *)(v66 + 24) = v92;
    *(_DWORD *)(v66 + 52) = v93;
    *(_BYTE *)(v66 + 56) = v112;
    clear_tinfo_t(&v106);
    if ( v104 )
    {
      v105.m128i_i64[0] = 0;
      qfree(v104);
    }
    if ( v102 )
    {
      v103.m128i_i64[0] = 0;
      qfree(v102);
    }
    v64 += 128;
    v66 += 128;
  }
  while ( v98 != v64 );
  return v64;
}

