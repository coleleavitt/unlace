unsigned __int64 __fastcall sub_219B40(__int64 a1, const char *a2, unsigned __int8 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  __m128i v6; // xmm2
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rdx
  double v11; // xmm0_8
  __m128i v12; // xmm3
  __int64 v13; // rdi
  __int64 v14; // r15
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // r13
  __int64 v20; // r12
  __int64 v21; // rax
  __int64 v22; // rdx
  _QWORD *v24; // rax
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // r14
  const char *v28; // rsi
  __int64 v29; // r12
  __m128i v30; // xmm0
  __int64 v31; // rdi
  __m128i v32; // xmm4
  const char *v33; // r12
  __int64 v34; // rax
  __int64 v35; // rcx
  __m128i v36; // xmm5
  __int64 v37; // r12
  __m128i v38; // xmm1
  __int64 v39; // rcx
  __m128i v40; // xmm7
  const char *v41; // r12
  __int64 v42; // rax
  __int64 v43; // rdi
  __m128i v44; // xmm4
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  const char *v49; // rsi
  __int64 v50; // r14
  __m128i v51; // xmm0
  __int64 v52; // rdi
  __m128i v53; // xmm6
  const char *v54; // r14
  __int64 v55; // rax
  __int64 v56; // rcx
  __m128i v57; // xmm7
  __int64 v58; // r14
  __m128i v59; // xmm1
  __int64 v60; // rcx
  __m128i v61; // xmm5
  const char *v62; // r14
  __int64 v63; // rax
  __int64 v64; // rdi
  __m128i v65; // xmm7
  double v66; // xmm0_8
  __int64 *v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  unsigned __int64 v72; // rdx
  __int64 v73; // rax
  __int64 v74; // rdi
  __m128i v75; // xmm6
  __int64 v76; // r13
  __int64 v77; // r14
  __int64 v78; // rax
  __int64 v79; // rdx
  double v80; // xmm0_8
  __m128i v81; // xmm3
  __int64 v82; // rdi
  __int64 v83; // r14
  __int64 v84; // r13
  __int64 v85; // rax
  __int64 v86; // rdx
  __int64 *v87; // rax
  const char *v88; // rsi
  __m128i v89; // [rsp+0h] [rbp-258h] BYREF
  __m128i v90; // [rsp+10h] [rbp-248h] BYREF
  __m128i v91; // [rsp+20h] [rbp-238h] BYREF
  __m128i v92; // [rsp+30h] [rbp-228h] BYREF
  __int64 v93; // [rsp+40h] [rbp-218h] BYREF
  const char *v94; // [rsp+48h] [rbp-210h]
  _QWORD *v95; // [rsp+50h] [rbp-208h] BYREF
  unsigned __int64 v96; // [rsp+58h] [rbp-200h]
  _QWORD *v97; // [rsp+60h] [rbp-1F8h] BYREF
  unsigned __int64 v98; // [rsp+68h] [rbp-1F0h]
  __int64 v99[12]; // [rsp+70h] [rbp-1E8h] BYREF
  __int64 v100; // [rsp+D0h] [rbp-188h] BYREF
  __m128i v101; // [rsp+D8h] [rbp-180h] BYREF
  __int64 v102; // [rsp+E8h] [rbp-170h]
  __m128i v103; // [rsp+F0h] [rbp-168h]
  __int64 v104; // [rsp+100h] [rbp-158h]
  __m128i v105; // [rsp+108h] [rbp-150h]
  __int64 v106; // [rsp+118h] [rbp-140h]
  __m128i v107; // [rsp+120h] [rbp-138h]
  __int64 v108; // [rsp+130h] [rbp-128h] BYREF
  __m128i v109; // [rsp+138h] [rbp-120h]
  __int64 v110; // [rsp+148h] [rbp-110h]
  __m128i v111; // [rsp+150h] [rbp-108h]
  __int64 v112; // [rsp+160h] [rbp-F8h]
  __m128i v113; // [rsp+168h] [rbp-F0h]
  __int64 v114; // [rsp+178h] [rbp-E0h]
  __m128i v115; // [rsp+180h] [rbp-D8h]
  int v116[2]; // [rsp+190h] [rbp-C8h] BYREF
  __m128i v117; // [rsp+198h] [rbp-C0h] BYREF
  __int64 v118; // [rsp+1A8h] [rbp-B0h]
  __m128i v119; // [rsp+1B0h] [rbp-A8h] BYREF
  __int64 v120; // [rsp+1C0h] [rbp-98h]
  __m128i v121; // [rsp+1C8h] [rbp-90h] BYREF
  __int64 v122; // [rsp+1D8h] [rbp-80h]
  __m128i v123; // [rsp+1E0h] [rbp-78h] BYREF
  int v124; // [rsp+1F0h] [rbp-68h] BYREF
  __int64 v125; // [rsp+1F8h] [rbp-60h]
  __int128 v126; // [rsp+200h] [rbp-58h]
  unsigned __int64 v127; // [rsp+218h] [rbp-40h]

  v93 = a1;
  v94 = a2;
  v127 = __readfsqword(0x28u);
  if ( *((_DWORD *)sub_210380((__int64)&v93) + 2) == 1 )
  {
    v24 = sub_219340(&v93, 0);
    v96 = v25;
    v95 = v24;
    v26 = sub_219300(&qword_8CBB00, &qword_8CBAE0);
    v97 = qword_8CBAA0;
    v98 = v26;
    if ( v95
      && v96 < 16 * ((unsigned __int64)(v95[15] == 0) + ((__int64)(v95[15] - v95[11]) >> 3) - 1)
             + ((__int64)(v95[10] - v95[8]) >> 5)
             + ((__int64)(v95[12] - v95[13]) >> 5) )
    {
      v97 = sub_219340(&v95, 0);
      v98 = v72;
    }
    v27 = *(int *)(dbg + 64);
    sub_215280((__int64)v99, *(_DWORD *)(dbg + 64));
    if ( v95
      && v96 < 16 * ((unsigned __int64)(v95[15] == 0) + ((__int64)(v95[15] - v95[11]) >> 3) - 1)
             + ((__int64)(v95[10] - v95[8]) >> 5)
             + ((__int64)(v95[12] - v95[13]) >> 5) )
    {
      v67 = sub_210380((__int64)&v95);
      sub_20C080(v99, (_QWORD *)v67[3], v68, v69, v70, v71);
    }
    v89.m128i_i64[0] = (__int64)&v100;
    sub_215280((__int64)&v100, v27);
    if ( v97
      && v98 < 16 * ((unsigned __int64)(v97[15] == 0) + ((__int64)(v97[15] - v97[11]) >> 3) - 1)
             + ((__int64)(v97[10] - v97[8]) >> 5)
             + ((__int64)(v97[12] - v97[13]) >> 5) )
    {
      v28 = (const char *)&v97;
      sub_2195B0((__int64)v116, &v97);
      v29 = *(_QWORD *)v116;
      *(_QWORD *)v116 = 0;
      v30 = _mm_loadu_si128(&v117);
      v117 = 0;
      if ( v100 )
      {
        v90 = v30;
        v101.m128i_i64[0] = 0;
        qfree(v100, (const char *)&v97);
        v30 = _mm_load_si128(&v90);
      }
      v31 = v102;
      v101 = v30;
      v32 = _mm_load_si128(&v119);
      v100 = v29;
      v91.m128i_i64[0] = v118;
      v118 = 0;
      v92 = v32;
      v119 = 0;
      if ( v102 )
      {
        v28 = (const char *)v103.m128i_i64[0];
        if ( v103.m128i_i64[0] )
        {
          v33 = nullptr;
          do
          {
            v34 = v31 + 32LL * (_QWORD)v33;
            if ( *(int *)v34 >= -1 )
            {
              v35 = *(_QWORD *)(v34 + 8);
              if ( v35 )
              {
                *(_QWORD *)(v34 + 16) = 0;
                v90.m128i_i64[0] = (__int64)v28;
                qfree(v35, v28);
                v31 = v102;
                v28 = (const char *)v90.m128i_i64[0];
              }
            }
            ++v33;
          }
          while ( v28 != v33 );
        }
        v103.m128i_i64[0] = 0;
        qfree(v31, v28);
      }
      v36 = _mm_load_si128(&v92);
      v37 = v120;
      v120 = 0;
      v38 = _mm_loadu_si128(&v121);
      v102 = v91.m128i_i64[0];
      v103 = v36;
      v121 = 0;
      if ( v104 )
      {
        v90 = v38;
        v105.m128i_i64[0] = 0;
        qfree(v104, v28);
        v38 = _mm_load_si128(&v90);
      }
      v39 = v106;
      v104 = v37;
      v40 = _mm_load_si128(&v123);
      v105 = v38;
      v91.m128i_i64[0] = v122;
      v122 = 0;
      v92 = v40;
      v123 = 0;
      if ( v106 )
      {
        v28 = (const char *)v107.m128i_i64[0];
        if ( v107.m128i_i64[0] )
        {
          v41 = nullptr;
          do
          {
            v42 = v39 + 32LL * (_QWORD)v41;
            v43 = *(_QWORD *)(v42 + 8);
            if ( v43 )
            {
              *(_QWORD *)(v42 + 16) = 0;
              v90.m128i_i64[0] = (__int64)v28;
              qfree(v43, v28);
              v39 = v106;
              v28 = (const char *)v90.m128i_i64[0];
            }
            ++v41;
          }
          while ( v28 != v41 );
        }
        v107.m128i_i64[0] = 0;
        qfree(v39, v28);
      }
      v44 = _mm_load_si128(&v92);
      v106 = v91.m128i_i64[0];
      v107 = v44;
      sub_20DA00((__int64 *)v116, v28);
    }
    sub_20D550(v99, v89.m128i_i64[0]);
    sub_215280((__int64)&v108, v27);
    if ( v27 == v103.m128i_i64[0] )
    {
      sub_20C080(&v108, v99, v45, v46, v47, v48);
      sub_20D840(&v108, v89.m128i_u64[0], 1);
    }
    else
    {
      v49 = (const char *)&v95;
      sub_2195B0((__int64)v116, &v95);
      v50 = *(_QWORD *)v116;
      *(_QWORD *)v116 = 0;
      v51 = _mm_loadu_si128(&v117);
      v117 = 0;
      if ( v108 )
      {
        v90 = v51;
        v109.m128i_i64[0] = 0;
        qfree(v108, (const char *)&v95);
        v51 = _mm_load_si128(&v90);
      }
      v52 = v110;
      v109 = v51;
      v53 = _mm_load_si128(&v119);
      v108 = v50;
      v91.m128i_i64[0] = v118;
      v118 = 0;
      v92 = v53;
      v119 = 0;
      if ( v110 )
      {
        v49 = (const char *)v111.m128i_i64[0];
        if ( v111.m128i_i64[0] )
        {
          v54 = nullptr;
          do
          {
            v55 = v52 + 32LL * (_QWORD)v54;
            if ( *(int *)v55 >= -1 )
            {
              v56 = *(_QWORD *)(v55 + 8);
              if ( v56 )
              {
                *(_QWORD *)(v55 + 16) = 0;
                v90.m128i_i64[0] = (__int64)v49;
                qfree(v56, v49);
                v52 = v110;
                v49 = (const char *)v90.m128i_i64[0];
              }
            }
            ++v54;
          }
          while ( v49 != v54 );
        }
        v111.m128i_i64[0] = 0;
        qfree(v52, v49);
      }
      v57 = _mm_load_si128(&v92);
      v58 = v120;
      v120 = 0;
      v59 = _mm_loadu_si128(&v121);
      v110 = v91.m128i_i64[0];
      v111 = v57;
      v121 = 0;
      if ( v112 )
      {
        v90 = v59;
        v113.m128i_i64[0] = 0;
        qfree(v112, v49);
        v59 = _mm_load_si128(&v90);
      }
      v60 = v114;
      v112 = v58;
      v61 = _mm_load_si128(&v123);
      v113 = v59;
      v91.m128i_i64[0] = v122;
      v122 = 0;
      v92 = v61;
      v123 = 0;
      if ( v114 )
      {
        v49 = (const char *)v115.m128i_i64[0];
        if ( v115.m128i_i64[0] )
        {
          v62 = nullptr;
          do
          {
            v63 = v60 + 32LL * (_QWORD)v62;
            v64 = *(_QWORD *)(v63 + 8);
            if ( v64 )
            {
              *(_QWORD *)(v63 + 16) = 0;
              v90.m128i_i64[0] = (__int64)v49;
              qfree(v64, v49);
              v60 = v114;
              v49 = (const char *)v90.m128i_i64[0];
            }
            ++v62;
          }
          while ( v49 != v62 );
        }
        v115.m128i_i64[0] = 0;
        qfree(v60, v49);
      }
      v65 = _mm_load_si128(&v92);
      v114 = v91.m128i_i64[0];
      v115 = v65;
      sub_20DA00((__int64 *)v116, v49);
    }
    sub_216480((__int64)v116, &v108);
    v73 = *(_QWORD *)v116;
    v74 = qword_8CB680;
    *(_QWORD *)v116 = 0;
    v75 = _mm_loadu_si128(&v117);
    v117 = 0;
    v90.m128i_i64[0] = v73;
    v91 = v75;
    if ( qword_8CB680 )
    {
      v76 = xmmword_8CB688;
      if ( (_QWORD)xmmword_8CB688 )
      {
        v77 = 0;
        do
        {
          v78 = v74 + 32 * v77;
          if ( *(int *)v78 >= -1 )
          {
            v79 = *(_QWORD *)(v78 + 8);
            if ( v79 )
            {
              *(_QWORD *)(v78 + 16) = 0;
              qfree(v79, (const char *)&v108);
              v74 = qword_8CB680;
            }
          }
          ++v77;
        }
        while ( v76 != v77 );
      }
      *(_QWORD *)&xmmword_8CB688 = 0;
      v80 = qfree(v74, (const char *)&v108);
      v81 = _mm_load_si128(&v91);
      v82 = *(_QWORD *)v116;
      qword_8CB680 = v90.m128i_i64[0];
      xmmword_8CB688 = (__int128)v81;
      if ( *(_QWORD *)v116 )
      {
        v83 = v117.m128i_i64[0];
        if ( v117.m128i_i64[0] )
        {
          v84 = 0;
          do
          {
            v85 = v82 + 32 * v84;
            if ( *(int *)v85 >= -1 )
            {
              v86 = *(_QWORD *)(v85 + 8);
              if ( v86 )
              {
                *(_QWORD *)(v85 + 16) = 0;
                v80 = qfree(v86, (const char *)&v108, v80);
                v82 = *(_QWORD *)v116;
              }
            }
            ++v84;
          }
          while ( v83 != v84 );
        }
        v117.m128i_i64[0] = 0;
        qfree(v82, (const char *)&v108, v80);
      }
    }
    else
    {
      qword_8CB680 = v73;
      xmmword_8CB688 = (__int128)v75;
    }
    sub_20DA00(&v108, (const char *)&v108);
    sub_20DA00((__int64 *)v89.m128i_i64[0], (const char *)&v108);
    sub_20DA00(v99, (const char *)&v108);
  }
  else if ( sub_210380((__int64)&v93)[2] == -1 )
  {
    sub_2350E0();
    v18 = qword_8CB680;
    if ( qword_8CB680 )
    {
      v19 = xmmword_8CB688;
      if ( (_QWORD)xmmword_8CB688 )
      {
        v20 = 0;
        do
        {
          v21 = v18 + 32 * v20;
          if ( *(int *)v21 >= -1 )
          {
            v22 = *(_QWORD *)(v21 + 8);
            if ( v22 )
            {
              *(_QWORD *)(v21 + 16) = 0;
              qfree(v22, a2);
              v18 = qword_8CB680;
            }
          }
          ++v20;
        }
        while ( v19 != v20 );
      }
      *(_QWORD *)&xmmword_8CB688 = 0;
      qfree(v18, a2);
      qword_8CB680 = 0;
      *((_QWORD *)&xmmword_8CB688 + 1) = 0;
    }
  }
  else
  {
    v124 = -2;
    v125 = -1;
    v126 = 0;
    v125 = sub_210380((__int64)&v93)[2];
    sub_216ED0((__int64)&v108, dword_8BA594, (__int64)&v124);
    sub_2151C0((__int64)v116);
    sub_20D550(&v108, v116);
    sub_216480((__int64)&v100, &v108);
    v4 = v100;
    v5 = qword_8CB680;
    v100 = 0;
    v6 = _mm_loadu_si128(&v101);
    v101 = 0;
    v90.m128i_i64[0] = v4;
    v89 = v6;
    if ( qword_8CB680 )
    {
      v7 = xmmword_8CB688;
      if ( (_QWORD)xmmword_8CB688 )
      {
        v8 = 0;
        do
        {
          v9 = v5 + 32 * v8;
          if ( *(int *)v9 >= -1 )
          {
            v10 = *(_QWORD *)(v9 + 8);
            if ( v10 )
            {
              *(_QWORD *)(v9 + 16) = 0;
              qfree(v10, (const char *)&v108);
              v5 = qword_8CB680;
            }
          }
          ++v8;
        }
        while ( v7 != v8 );
      }
      *(_QWORD *)&xmmword_8CB688 = 0;
      v11 = qfree(v5, (const char *)&v108);
      v12 = _mm_load_si128(&v89);
      v13 = v100;
      qword_8CB680 = v90.m128i_i64[0];
      xmmword_8CB688 = (__int128)v12;
      if ( v100 )
      {
        v14 = v101.m128i_i64[0];
        if ( v101.m128i_i64[0] )
        {
          v15 = 0;
          do
          {
            v16 = v13 + 32 * v15;
            if ( *(int *)v16 >= -1 )
            {
              v17 = *(_QWORD *)(v16 + 8);
              if ( v17 )
              {
                *(_QWORD *)(v16 + 16) = 0;
                v11 = qfree(v17, (const char *)&v108, v11);
                v13 = v100;
              }
            }
            ++v15;
          }
          while ( v14 != v15 );
        }
        v101.m128i_i64[0] = 0;
        qfree(v13, (const char *)&v108, v11);
      }
    }
    else
    {
      qword_8CB680 = v4;
      xmmword_8CB688 = (__int128)v6;
    }
    sub_20DA00((__int64 *)v116, (const char *)&v108);
    v66 = sub_20DA00(&v108, (const char *)&v108);
    if ( v124 >= -1 && v125 )
    {
      *(_QWORD *)&v126 = 0;
      qfree(v125, (const char *)&v108, v66);
    }
  }
  byte_8CB698 = 1;
  if ( *((_DWORD *)sub_210380((__int64)&v93) + 2) == 1 )
  {
    if ( sub_210380((__int64)&v93)[3] )
    {
      qword_8BA598 = -1;
      if ( sub_240FC0(qword_8CB680, 0) != -1 )
      {
        v124 = -2;
        v125 = -1;
        v126 = 0;
        v87 = sub_210380((__int64)&v93);
        v88 = (const char *)(unsigned int)dword_8BA594;
        if ( (unsigned __int8)sub_20D210((_QWORD *)v87[3], dword_8BA594, (__int64)&v124, 0) )
          qword_8BA598 = v125;
        if ( v124 >= -1 && v125 )
        {
          *(_QWORD *)&v126 = 0;
          qfree(v125, v88);
        }
      }
    }
  }
  if ( sub_210380((__int64)&v93)[2] != -1 )
    sub_24F0B0(v93, v94, qword_8CB680, a3);
  return v127 - __readfsqword(0x28u);
}
