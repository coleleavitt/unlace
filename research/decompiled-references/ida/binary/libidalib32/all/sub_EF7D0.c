unsigned __int64 __fastcall sub_EF7D0(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  unsigned __int64 v5; // rbx
  unsigned int v6; // edx
  unsigned __int64 v7; // rbp
  __int64 v8; // r15
  unsigned int v9; // ecx
  unsigned int v10; // esi
  __int64 v11; // r10
  unsigned int v12; // esi
  __int64 v13; // r9
  __int64 v14; // rdi
  __m128i v15; // xmm2
  __int64 v16; // r11
  int v17; // ecx
  __int16 v18; // dx
  __m128i v19; // xmm1
  __int64 v20; // r11
  __m128i v21; // xmm0
  __m128i v22; // xmm2
  unsigned __int64 v23; // rdi
  unsigned int v24; // esi
  unsigned __int64 v25; // r13
  __int64 v26; // rax
  __m128i v27; // xmm4
  __m128i v28; // xmm5
  __int64 v29; // r14
  __int64 v30; // r15
  __int64 v31; // rcx
  __int64 v32; // rcx
  __m128i v33; // xmm0
  __int64 v34; // rdi
  __int64 v35; // rcx
  __m128i v36; // xmm0
  __int64 v37; // rdi
  __m128i v38; // xmm7
  __int64 v39; // rdi
  __m128i v40; // xmm2
  __int32 v41; // eax
  unsigned int v42; // ecx
  __m128i v43; // xmm1
  __int64 v44; // rax
  __m128i v45; // xmm4
  __int64 v46; // rbp
  __int64 v47; // r15
  int v48; // r14d
  __int16 v49; // r13
  __int64 v50; // rax
  __int64 v51; // rax
  __m128i v52; // xmm0
  __int64 v53; // rax
  __m128i v54; // xmm0
  __m128i v55; // xmm6
  int v56; // eax
  __m128i v57; // xmm7
  __int64 *v58; // rcx
  __int64 v59; // rbp
  __m128i v61; // xmm1
  __int32 v62; // eax
  __m128i v63; // xmm2
  __int64 v64; // r14
  __int64 v65; // r13
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rcx
  __m128i v69; // xmm1
  __int64 v70; // rdi
  __int64 v71; // rcx
  __m128i v72; // xmm0
  __int64 v73; // rdi
  __m128i v74; // xmm4
  __int64 v75; // rdi
  __int32 v76; // eax
  __m128i v77; // xmm5
  unsigned int v78; // esi
  __m128i v79; // xmm1
  __int32 v80; // eax
  __m128i v81; // xmm2
  __int64 v82; // r14
  __int64 v83; // r13
  __int64 v84; // r15
  __int64 v85; // rdx
  __int64 v86; // rdx
  __m128i v87; // xmm1
  __int64 v88; // rdi
  __int64 v89; // rdx
  __m128i v90; // xmm0
  __int64 v91; // rdi
  __m128i v92; // xmm2
  __int64 v93; // rdi
  __int32 v94; // eax
  __m128i v95; // xmm1
  __m128i v96; // xmm1
  __int32 v97; // eax
  __int64 v98; // r14
  __int64 v99; // r13
  __int64 v100; // rdx
  __m128i v101; // xmm1
  __int64 v102; // rcx
  __int64 v103; // rcx
  __m128i v104; // xmm1
  __int64 v105; // rdi
  __int64 v106; // rcx
  __m128i v107; // xmm0
  __int64 v108; // rdi
  __m128i v109; // xmm2
  __int64 v110; // rdi
  __int32 v111; // eax
  __m128i v112; // xmm1
  __m128i v113; // xmm4
  __int32 v114; // eax
  __m128i v115; // xmm5
  __int64 v116; // r14
  __int64 v117; // r13
  __int64 v118; // r15
  __int64 v119; // rdx
  __int64 v120; // rdx
  __m128i v121; // xmm1
  __int64 v122; // rdi
  __int64 v123; // rdx
  __m128i v124; // xmm0
  __int64 v125; // rdi
  __m128i v126; // xmm6
  __int64 v127; // rdi
  __int32 v128; // eax
  __m128i v129; // xmm7
  __m128i v130; // [rsp+0h] [rbp-108h] BYREF
  __m128i v131; // [rsp+10h] [rbp-F8h] BYREF
  __m128i v132; // [rsp+20h] [rbp-E8h] BYREF
  __m128i v133; // [rsp+30h] [rbp-D8h] BYREF
  __m128i v134; // [rsp+40h] [rbp-C8h] BYREF
  __m128i v135; // [rsp+50h] [rbp-B8h] BYREF
  __m128i v136; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v137; // [rsp+78h] [rbp-90h]
  __int64 v138; // [rsp+80h] [rbp-88h] BYREF
  __int64 v139; // [rsp+88h] [rbp-80h]
  __m128i v140; // [rsp+90h] [rbp-78h]
  __int64 v141; // [rsp+A0h] [rbp-68h]
  __m128i v142; // [rsp+A8h] [rbp-60h]
  int v143; // [rsp+B8h] [rbp-50h]
  __int16 v144; // [rsp+BCh] [rbp-4Ch]
  unsigned __int64 v145; // [rsp+C8h] [rbp-40h]

  v137 = a3;
  v145 = __readfsqword(0x28u);
  v3 = a2 - a1;
  if ( (__int64)(a2 - a1) > 1024 )
  {
    v5 = a2;
    while ( v137 )
    {
      v6 = *(_DWORD *)(a1 + 64);
      --v137;
      v7 = a1 + 64;
      v8 = a1 + (v3 >> 7 << 6);
      v9 = *(_DWORD *)v8;
      if ( *(_DWORD *)v8 >= v6 )
      {
        if ( v6 != v9 )
        {
          v78 = *(_DWORD *)(v5 - 64);
          if ( v78 >= v9 )
            goto LABEL_68;
          if ( v78 >= v6 )
          {
LABEL_56:
            if ( v6 != v78 || *(_DWORD *)(a1 + 68) < *(_DWORD *)(v5 - 60) )
            {
              v79 = _mm_loadu_si128((const __m128i *)(a1 + 40));
              v80 = *(_DWORD *)(a1 + 56);
              *(_OWORD *)(a1 + 40) = 0;
              v81 = _mm_loadu_si128((const __m128i *)(a1 + 16));
              v82 = *(_QWORD *)(a1 + 8);
              *(_OWORD *)(a1 + 16) = 0;
              v83 = *(_QWORD *)(a1 + 32);
              v84 = *(_QWORD *)a1;
              *(_QWORD *)(a1 + 8) = 0;
              *(_QWORD *)(a1 + 32) = 0;
              v85 = *(_QWORD *)(v5 - 64);
              v130.m128i_i32[0] = v80;
              LOWORD(v80) = *(_WORD *)(a1 + 60);
              *(_QWORD *)a1 = v85;
              v86 = *(_QWORD *)(v5 - 56);
              v133 = v79;
              v87 = _mm_loadu_si128((const __m128i *)(v5 - 48));
              *(_QWORD *)(v5 - 56) = 0;
              *(_OWORD *)(v5 - 48) = 0;
              v88 = *(_QWORD *)(a1 + 8);
              v132.m128i_i16[0] = v80;
              v131 = v81;
              if ( v88 )
              {
                *(_QWORD *)(a1 + 16) = 0;
                v134.m128i_i64[0] = v86;
                v135 = v87;
                qfree();
                v87 = _mm_load_si128(&v135);
                v86 = v134.m128i_i64[0];
              }
              *(__m128i *)(a1 + 16) = v87;
              *(_QWORD *)(a1 + 8) = v86;
              v89 = *(_QWORD *)(v5 - 32);
              v90 = _mm_loadu_si128((const __m128i *)(v5 - 24));
              *(_QWORD *)(v5 - 32) = 0;
              *(_OWORD *)(v5 - 24) = 0;
              if ( *(_QWORD *)(a1 + 32) )
              {
                *(_QWORD *)(a1 + 40) = 0;
                v134.m128i_i64[0] = v89;
                v135 = v90;
                qfree();
                v90 = _mm_load_si128(&v135);
                v89 = v134.m128i_i64[0];
              }
              *(_QWORD *)(a1 + 32) = v89;
              *(__m128i *)(a1 + 40) = v90;
              *(_DWORD *)(a1 + 56) = *(_DWORD *)(v5 - 8);
              *(_BYTE *)(a1 + 60) = *(_BYTE *)(v5 - 4);
              *(_BYTE *)(a1 + 61) = *(_BYTE *)(v5 - 3);
              v91 = *(_QWORD *)(v5 - 56);
              *(_QWORD *)(v5 - 64) = v84;
              if ( v91 )
              {
                *(_QWORD *)(v5 - 48) = 0;
                qfree();
              }
              v92 = _mm_load_si128(&v131);
              v93 = *(_QWORD *)(v5 - 32);
              *(_QWORD *)(v5 - 56) = v82;
              *(__m128i *)(v5 - 48) = v92;
              if ( v93 )
              {
                *(_QWORD *)(v5 - 24) = 0;
                qfree();
              }
              v94 = v130.m128i_i32[0];
              v95 = _mm_load_si128(&v133);
              *(_QWORD *)(v5 - 32) = v83;
              *(_DWORD *)(v5 - 8) = v94;
              LOWORD(v94) = v132.m128i_i16[0];
              *(__m128i *)(v5 - 24) = v95;
              *(_WORD *)(v5 - 4) = v94;
              v12 = *(_DWORD *)(a1 + 64);
              goto LABEL_7;
            }
          }
LABEL_6:
          v11 = *(_QWORD *)a1;
          v12 = *(_DWORD *)a1;
          v13 = *(_QWORD *)(a1 + 8);
          v14 = *(_QWORD *)(a1 + 32);
          v15 = _mm_loadu_si128((const __m128i *)(a1 + 80));
          *(_QWORD *)a1 = *(_QWORD *)(a1 + 64);
          v16 = *(_QWORD *)(a1 + 72);
          v17 = *(_DWORD *)(a1 + 56);
          *(_QWORD *)(a1 + 64) = v11;
          v18 = *(_WORD *)(a1 + 60);
          v19 = _mm_loadu_si128((const __m128i *)(a1 + 16));
          *(_QWORD *)(a1 + 72) = v13;
          *(_QWORD *)(a1 + 8) = v16;
          v20 = *(_QWORD *)(a1 + 96);
          v21 = _mm_loadu_si128((const __m128i *)(a1 + 40));
          *(__m128i *)(a1 + 16) = v15;
          v22 = _mm_loadu_si128((const __m128i *)(a1 + 104));
          *(_QWORD *)(a1 + 32) = v20;
          LODWORD(v20) = *(_DWORD *)(a1 + 120);
          *(_QWORD *)(a1 + 96) = v14;
          *(_DWORD *)(a1 + 56) = v20;
          LOWORD(v20) = *(_WORD *)(a1 + 124);
          *(_DWORD *)(a1 + 120) = v17;
          *(_WORD *)(a1 + 60) = v20;
          *(_WORD *)(a1 + 124) = v18;
          *(__m128i *)(a1 + 40) = v22;
          *(__m128i *)(a1 + 80) = v19;
          *(__m128i *)(a1 + 104) = v21;
          goto LABEL_7;
        }
        if ( *(_DWORD *)(a1 + 68) < *(_DWORD *)(v8 + 4) )
        {
          v78 = *(_DWORD *)(v5 - 64);
          if ( v78 >= v6 )
          {
LABEL_68:
            if ( v9 != v78 || *(_DWORD *)(v8 + 4) < *(_DWORD *)(v5 - 60) )
            {
              v96 = _mm_loadu_si128((const __m128i *)(a1 + 16));
              v97 = *(_DWORD *)(a1 + 56);
              *(_OWORD *)(a1 + 16) = 0;
              v98 = *(_QWORD *)(a1 + 8);
              v99 = *(_QWORD *)(a1 + 32);
              *(_QWORD *)(a1 + 8) = 0;
              v100 = *(_QWORD *)a1;
              *(_QWORD *)(a1 + 32) = 0;
              v131 = v96;
              v101 = _mm_loadu_si128((const __m128i *)(a1 + 40));
              *(_OWORD *)(a1 + 40) = 0;
              v102 = *(_QWORD *)v8;
              v133.m128i_i32[0] = v97;
              LOWORD(v97) = *(_WORD *)(a1 + 60);
              *(_QWORD *)a1 = v102;
              v103 = *(_QWORD *)(v8 + 8);
              v130 = v101;
              v104 = _mm_loadu_si128((const __m128i *)(v8 + 16));
              *(_QWORD *)(v8 + 8) = 0;
              *(_OWORD *)(v8 + 16) = 0;
              v105 = *(_QWORD *)(a1 + 8);
              v132.m128i_i16[0] = v97;
              if ( v105 )
              {
                *(_QWORD *)(a1 + 16) = 0;
                v136.m128i_i64[0] = v100;
                v134.m128i_i64[0] = v103;
                v135 = v104;
                qfree();
                v100 = v136.m128i_i64[0];
                v104 = _mm_load_si128(&v135);
                v103 = v134.m128i_i64[0];
              }
              *(__m128i *)(a1 + 16) = v104;
              *(_QWORD *)(a1 + 8) = v103;
              v106 = *(_QWORD *)(v8 + 32);
              v107 = _mm_loadu_si128((const __m128i *)(v8 + 40));
              *(_QWORD *)(v8 + 32) = 0;
              *(_OWORD *)(v8 + 40) = 0;
              if ( *(_QWORD *)(a1 + 32) )
              {
                *(_QWORD *)(a1 + 40) = 0;
                v135.m128i_i64[0] = v100;
                v134.m128i_i64[0] = v106;
                v136 = v107;
                qfree();
                v107 = _mm_load_si128(&v136);
                v100 = v135.m128i_i64[0];
                v106 = v134.m128i_i64[0];
              }
              *(_QWORD *)(a1 + 32) = v106;
              *(__m128i *)(a1 + 40) = v107;
              *(_DWORD *)(a1 + 56) = *(_DWORD *)(v8 + 56);
              *(_BYTE *)(a1 + 60) = *(_BYTE *)(v8 + 60);
              *(_BYTE *)(a1 + 61) = *(_BYTE *)(v8 + 61);
              v108 = *(_QWORD *)(v8 + 8);
              *(_QWORD *)v8 = v100;
              if ( v108 )
              {
                *(_QWORD *)(v8 + 16) = 0;
                qfree();
              }
              v109 = _mm_load_si128(&v131);
              v110 = *(_QWORD *)(v8 + 32);
              *(_QWORD *)(v8 + 8) = v98;
              *(__m128i *)(v8 + 16) = v109;
              if ( v110 )
              {
                *(_QWORD *)(v8 + 40) = 0;
                qfree();
              }
              v111 = v133.m128i_i32[0];
              v112 = _mm_load_si128(&v130);
              *(_QWORD *)(v8 + 32) = v99;
              *(_DWORD *)(v8 + 56) = v111;
              LOWORD(v111) = v132.m128i_i16[0];
              *(__m128i *)(v8 + 40) = v112;
              *(_WORD *)(v8 + 60) = v111;
              v12 = *(_DWORD *)(a1 + 64);
              goto LABEL_7;
            }
            goto LABEL_56;
          }
          goto LABEL_6;
        }
        v10 = *(_DWORD *)(v5 - 64);
        if ( v10 < v6 )
          goto LABEL_45;
      }
      else
      {
        v10 = *(_DWORD *)(v5 - 64);
        if ( v10 < v6 )
          goto LABEL_80;
      }
      if ( v6 != v10 || *(_DWORD *)(a1 + 68) < *(_DWORD *)(v5 - 60) )
        goto LABEL_6;
LABEL_80:
      if ( v10 < v9 || v9 == v10 && *(_DWORD *)(v8 + 4) >= *(_DWORD *)(v5 - 60) )
      {
LABEL_45:
        v61 = _mm_loadu_si128((const __m128i *)(a1 + 40));
        v62 = *(_DWORD *)(a1 + 56);
        *(_OWORD *)(a1 + 40) = 0;
        v63 = _mm_loadu_si128((const __m128i *)(a1 + 16));
        v64 = *(_QWORD *)(a1 + 8);
        *(_OWORD *)(a1 + 16) = 0;
        v65 = *(_QWORD *)(a1 + 32);
        v66 = *(_QWORD *)a1;
        *(_QWORD *)(a1 + 8) = 0;
        *(_QWORD *)(a1 + 32) = 0;
        v67 = *(_QWORD *)v8;
        v130.m128i_i32[0] = v62;
        LOWORD(v62) = *(_WORD *)(a1 + 60);
        *(_QWORD *)a1 = v67;
        v68 = *(_QWORD *)(v8 + 8);
        v133 = v61;
        v69 = _mm_loadu_si128((const __m128i *)(v8 + 16));
        *(_QWORD *)(v8 + 8) = 0;
        *(_OWORD *)(v8 + 16) = 0;
        v70 = *(_QWORD *)(a1 + 8);
        v132.m128i_i16[0] = v62;
        v131 = v63;
        if ( v70 )
        {
          *(_QWORD *)(a1 + 16) = 0;
          v136.m128i_i64[0] = v66;
          v134.m128i_i64[0] = v68;
          v135 = v69;
          qfree();
          v66 = v136.m128i_i64[0];
          v69 = _mm_load_si128(&v135);
          v68 = v134.m128i_i64[0];
        }
        *(__m128i *)(a1 + 16) = v69;
        *(_QWORD *)(a1 + 8) = v68;
        v71 = *(_QWORD *)(v8 + 32);
        v72 = _mm_loadu_si128((const __m128i *)(v8 + 40));
        *(_QWORD *)(v8 + 32) = 0;
        *(_OWORD *)(v8 + 40) = 0;
        if ( *(_QWORD *)(a1 + 32) )
        {
          *(_QWORD *)(a1 + 40) = 0;
          v135.m128i_i64[0] = v66;
          v134.m128i_i64[0] = v71;
          v136 = v72;
          qfree();
          v72 = _mm_load_si128(&v136);
          v66 = v135.m128i_i64[0];
          v71 = v134.m128i_i64[0];
        }
        *(_QWORD *)(a1 + 32) = v71;
        *(__m128i *)(a1 + 40) = v72;
        *(_DWORD *)(a1 + 56) = *(_DWORD *)(v8 + 56);
        *(_BYTE *)(a1 + 60) = *(_BYTE *)(v8 + 60);
        *(_BYTE *)(a1 + 61) = *(_BYTE *)(v8 + 61);
        v73 = *(_QWORD *)(v8 + 8);
        *(_QWORD *)v8 = v66;
        if ( v73 )
        {
          *(_QWORD *)(v8 + 16) = 0;
          qfree();
        }
        v74 = _mm_load_si128(&v131);
        v75 = *(_QWORD *)(v8 + 32);
        *(_QWORD *)(v8 + 8) = v64;
        *(__m128i *)(v8 + 16) = v74;
        if ( v75 )
        {
          *(_QWORD *)(v8 + 40) = 0;
          qfree();
        }
        v76 = v130.m128i_i32[0];
        v77 = _mm_load_si128(&v133);
        *(_QWORD *)(v8 + 32) = v65;
        *(_DWORD *)(v8 + 56) = v76;
        LOWORD(v76) = v132.m128i_i16[0];
        *(__m128i *)(v8 + 40) = v77;
        *(_WORD *)(v8 + 60) = v76;
        v12 = *(_DWORD *)(a1 + 64);
        goto LABEL_7;
      }
      v113 = _mm_loadu_si128((const __m128i *)(a1 + 16));
      v114 = *(_DWORD *)(a1 + 56);
      *(_OWORD *)(a1 + 16) = 0;
      v115 = _mm_loadu_si128((const __m128i *)(a1 + 40));
      v116 = *(_QWORD *)(a1 + 8);
      *(_OWORD *)(a1 + 40) = 0;
      v117 = *(_QWORD *)(a1 + 32);
      v118 = *(_QWORD *)a1;
      *(_QWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 32) = 0;
      v119 = *(_QWORD *)(v5 - 64);
      v130.m128i_i32[0] = v114;
      LOWORD(v114) = *(_WORD *)(a1 + 60);
      *(_QWORD *)a1 = v119;
      v120 = *(_QWORD *)(v5 - 56);
      v121 = _mm_loadu_si128((const __m128i *)(v5 - 48));
      *(_QWORD *)(v5 - 56) = 0;
      *(_OWORD *)(v5 - 48) = 0;
      v122 = *(_QWORD *)(a1 + 8);
      v133.m128i_i16[0] = v114;
      v132 = v113;
      v131 = v115;
      if ( v122 )
      {
        *(_QWORD *)(a1 + 16) = 0;
        v134.m128i_i64[0] = v120;
        v135 = v121;
        qfree();
        v121 = _mm_load_si128(&v135);
        v120 = v134.m128i_i64[0];
      }
      *(__m128i *)(a1 + 16) = v121;
      *(_QWORD *)(a1 + 8) = v120;
      v123 = *(_QWORD *)(v5 - 32);
      v124 = _mm_loadu_si128((const __m128i *)(v5 - 24));
      *(_QWORD *)(v5 - 32) = 0;
      *(_OWORD *)(v5 - 24) = 0;
      if ( *(_QWORD *)(a1 + 32) )
      {
        *(_QWORD *)(a1 + 40) = 0;
        v134.m128i_i64[0] = v123;
        v135 = v124;
        qfree();
        v124 = _mm_load_si128(&v135);
        v123 = v134.m128i_i64[0];
      }
      *(_QWORD *)(a1 + 32) = v123;
      *(__m128i *)(a1 + 40) = v124;
      *(_DWORD *)(a1 + 56) = *(_DWORD *)(v5 - 8);
      *(_BYTE *)(a1 + 60) = *(_BYTE *)(v5 - 4);
      *(_BYTE *)(a1 + 61) = *(_BYTE *)(v5 - 3);
      v125 = *(_QWORD *)(v5 - 56);
      *(_QWORD *)(v5 - 64) = v118;
      if ( v125 )
      {
        *(_QWORD *)(v5 - 48) = 0;
        qfree();
      }
      v126 = _mm_load_si128(&v132);
      v127 = *(_QWORD *)(v5 - 32);
      *(_QWORD *)(v5 - 56) = v116;
      *(__m128i *)(v5 - 48) = v126;
      if ( v127 )
      {
        *(_QWORD *)(v5 - 24) = 0;
        qfree();
      }
      v128 = v130.m128i_i32[0];
      v129 = _mm_load_si128(&v131);
      *(_QWORD *)(v5 - 32) = v117;
      *(_DWORD *)(v5 - 8) = v128;
      LOWORD(v128) = v133.m128i_i16[0];
      *(__m128i *)(v5 - 24) = v129;
      *(_WORD *)(v5 - 4) = v128;
      v12 = *(_DWORD *)(a1 + 64);
LABEL_7:
      v23 = v5;
      while ( 1 )
      {
        v42 = *(_DWORD *)a1;
        if ( *(_DWORD *)a1 >= v12 )
        {
          while ( v12 < v42 || *(_DWORD *)(v7 + 4) < *(_DWORD *)(a1 + 4) )
          {
            v12 = *(_DWORD *)(v7 + 64);
            v7 += 64LL;
            if ( v42 < v12 )
            {
              v24 = *(_DWORD *)(v23 - 64);
              v25 = v23 - 64;
              if ( v24 >= v42 )
                goto LABEL_24;
              goto LABEL_9;
            }
          }
        }
        v24 = *(_DWORD *)(v23 - 64);
        v25 = v23 - 64;
        if ( v24 >= v42 )
        {
LABEL_24:
          while ( v42 < v24 || *(_DWORD *)(a1 + 4) < *(_DWORD *)(v25 + 4) )
          {
            v24 = *(_DWORD *)(v25 - 64);
            v25 -= 64LL;
            if ( v24 < v42 )
            {
              if ( v7 < v25 )
                goto LABEL_10;
              goto LABEL_28;
            }
          }
        }
LABEL_9:
        if ( v7 >= v25 )
          break;
LABEL_10:
        v26 = *(_QWORD *)(v7 + 32);
        v27 = _mm_loadu_si128((const __m128i *)(v7 + 16));
        *(_QWORD *)(v7 + 32) = 0;
        *(_OWORD *)(v7 + 16) = 0;
        v28 = _mm_loadu_si128((const __m128i *)(v7 + 40));
        v29 = *(_QWORD *)(v7 + 8);
        *(_OWORD *)(v7 + 40) = 0;
        v30 = *(_QWORD *)v7;
        *(_QWORD *)(v7 + 8) = 0;
        v31 = *(_QWORD *)v25;
        v132.m128i_i64[0] = v26;
        LODWORD(v26) = *(_DWORD *)(v7 + 56);
        *(_QWORD *)v7 = v31;
        v32 = *(_QWORD *)(v25 + 8);
        v133.m128i_i32[0] = v26;
        v33 = _mm_loadu_si128((const __m128i *)(v25 + 16));
        LOWORD(v26) = *(_WORD *)(v7 + 60);
        *(_QWORD *)(v25 + 8) = 0;
        *(_OWORD *)(v25 + 16) = 0;
        v34 = *(_QWORD *)(v7 + 8);
        v131.m128i_i16[0] = v26;
        v130 = v27;
        v134 = v28;
        if ( v34 )
        {
          *(_QWORD *)(v7 + 16) = 0;
          v135.m128i_i64[0] = v32;
          v136 = v33;
          qfree();
          v33 = _mm_load_si128(&v136);
          v32 = v135.m128i_i64[0];
        }
        *(_QWORD *)(v7 + 8) = v32;
        *(__m128i *)(v7 + 16) = v33;
        v35 = *(_QWORD *)(v25 + 32);
        v36 = _mm_loadu_si128((const __m128i *)(v25 + 40));
        *(_QWORD *)(v25 + 32) = 0;
        *(_OWORD *)(v25 + 40) = 0;
        if ( *(_QWORD *)(v7 + 32) )
        {
          *(_QWORD *)(v7 + 40) = 0;
          v136.m128i_i64[0] = v35;
          v135 = v36;
          qfree();
          v35 = v136.m128i_i64[0];
          v36 = _mm_load_si128(&v135);
        }
        *(_QWORD *)(v7 + 32) = v35;
        *(__m128i *)(v7 + 40) = v36;
        *(_DWORD *)(v7 + 56) = *(_DWORD *)(v25 + 56);
        *(_BYTE *)(v7 + 60) = *(_BYTE *)(v25 + 60);
        *(_BYTE *)(v7 + 61) = *(_BYTE *)(v25 + 61);
        v37 = *(_QWORD *)(v25 + 8);
        *(_QWORD *)v25 = v30;
        if ( v37 )
        {
          *(_QWORD *)(v25 + 16) = 0;
          qfree();
        }
        v38 = _mm_load_si128(&v130);
        v39 = *(_QWORD *)(v25 + 32);
        *(_QWORD *)(v25 + 8) = v29;
        *(__m128i *)(v25 + 16) = v38;
        if ( v39 )
        {
          *(_QWORD *)(v25 + 40) = 0;
          qfree();
        }
        v40 = _mm_load_si128(&v134);
        v23 = v25;
        v7 += 64LL;
        *(_QWORD *)(v25 + 32) = v132.m128i_i64[0];
        v41 = v133.m128i_i32[0];
        *(__m128i *)(v25 + 40) = v40;
        *(_DWORD *)(v25 + 56) = v41;
        *(_WORD *)(v25 + 60) = v131.m128i_i16[0];
        v12 = *(_DWORD *)v7;
      }
LABEL_28:
      v3 = v7 - a1;
      sub_EF7D0(v7, v5, v137);
      if ( (__int64)(v7 - a1) <= 1024 )
        return v145 - __readfsqword(0x28u);
      v5 = v7;
    }
    sub_EF4A0(a1, v5, v5);
    if ( (__int64)(v5 - a1) > 64 )
    {
      v133.m128i_i64[0] = (__int64)&v138;
      do
      {
        v43 = _mm_loadu_si128((const __m128i *)(v5 - 48));
        v44 = *(_QWORD *)(v5 - 56);
        *(_QWORD *)(v5 - 56) = 0;
        v5 -= 64LL;
        v45 = _mm_loadu_si128((const __m128i *)(v5 + 40));
        v46 = *(_QWORD *)(v5 + 32);
        *(_QWORD *)(v5 + 32) = 0;
        v132 = v43;
        v47 = *(_QWORD *)v5;
        v48 = *(_DWORD *)(v5 + 56);
        *(_OWORD *)(v5 + 16) = 0;
        v49 = *(_WORD *)(v5 + 60);
        *(_OWORD *)(v5 + 40) = 0;
        v130.m128i_i64[0] = v44;
        v50 = *(_QWORD *)a1;
        v131 = v45;
        *(_QWORD *)v5 = v50;
        v51 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)(a1 + 8) = 0;
        v52 = _mm_loadu_si128((const __m128i *)(a1 + 16));
        *(_OWORD *)(a1 + 16) = 0;
        if ( *(_QWORD *)(v5 + 8) )
        {
          *(_QWORD *)(v5 + 16) = 0;
          v134.m128i_i64[0] = v51;
          v135 = v52;
          qfree();
          v52 = _mm_load_si128(&v135);
          v51 = v134.m128i_i64[0];
        }
        *(_QWORD *)(v5 + 8) = v51;
        *(__m128i *)(v5 + 16) = v52;
        v53 = *(_QWORD *)(a1 + 32);
        v54 = _mm_loadu_si128((const __m128i *)(a1 + 40));
        *(_QWORD *)(a1 + 32) = 0;
        *(_OWORD *)(a1 + 40) = 0;
        if ( *(_QWORD *)(v5 + 32) )
        {
          *(_QWORD *)(v5 + 40) = 0;
          v134.m128i_i64[0] = v53;
          v135 = v54;
          qfree();
          v54 = _mm_load_si128(&v135);
          v53 = v134.m128i_i64[0];
        }
        *(_QWORD *)(v5 + 32) = v53;
        v55 = _mm_load_si128(&v132);
        *(__m128i *)(v5 + 40) = v54;
        v56 = *(_DWORD *)(a1 + 56);
        v57 = _mm_load_si128(&v131);
        v144 = v49;
        v58 = (__int64 *)v133.m128i_i64[0];
        *(_DWORD *)(v5 + 56) = v56;
        LOBYTE(v56) = *(_BYTE *)(a1 + 60);
        v141 = v46;
        *(_BYTE *)(v5 + 60) = v56;
        LOBYTE(v56) = *(_BYTE *)(a1 + 61);
        v138 = v47;
        *(_BYTE *)(v5 + 61) = v56;
        v143 = v48;
        v139 = v130.m128i_i64[0];
        v140 = v55;
        v142 = v57;
        sub_BC160(a1, 0, (__int64)(v5 - a1) >> 6, v58);
        v59 = v139;
        if ( v141 )
          qfree();
        if ( v59 )
          qfree();
      }
      while ( (__int64)(v5 - a1) > 64 );
    }
  }
  return v145 - __readfsqword(0x28u);
}

