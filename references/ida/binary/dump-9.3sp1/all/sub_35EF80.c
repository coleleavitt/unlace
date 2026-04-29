unsigned __int64 __fastcall sub_35EF80(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r12
  __int64 v5; // rbx
  const __m128i *v6; // r14
  __int64 v7; // rbp
  __int64 v8; // r12
  __int64 v9; // r15
  __int64 v10; // r14
  __int64 *v11; // rsi
  bool v12; // zf
  __int64 *v13; // r13
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 i; // rcx
  __int64 *v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 j; // rsi
  __int64 *v23; // rcx
  __int64 v24; // rdi
  __int64 *v25; // rcx
  __int64 v26; // r13
  __m128i v27; // xmm0
  __int64 v28; // rdi
  __int64 v29; // rbp
  __int64 v30; // r12
  __int64 v31; // rax
  __int32 v32; // edx
  __m128i v33; // xmm3
  __m128i v34; // xmm0
  __m128i v35; // xmm4
  __int64 v36; // rax
  __m128i v37; // xmm0
  __int64 v38; // r13
  __m128i v39; // xmm0
  const __m128i *v40; // r14
  __int64 *v41; // rdi
  __int64 *v42; // rbp
  __int64 v43; // r10
  __int64 v44; // r11
  __int64 v45; // r15
  __int64 k; // rbx
  __int64 *v47; // rax
  __int64 v48; // rdi
  __int64 v49; // rdi
  __int64 v50; // rdi
  __int64 v51; // r10
  __int64 v52; // rdx
  __int64 v53; // r15
  __int64 m; // rbx
  __int64 *v55; // rax
  __int64 v56; // rdi
  __int64 v57; // rcx
  __int64 v58; // rbp
  __m128i v59; // xmm0
  __int64 v60; // rdi
  __int64 *v61; // rcx
  __int64 v62; // rdi
  __m128i v63; // xmm5
  __m128i v64; // xmm0
  __m128i v65; // xmm6
  int v66; // eax
  __int32 v67; // edx
  __m128i v68; // xmm0
  __int64 v69; // rax
  __m128i v70; // xmm0
  __int64 v71; // rdx
  __int64 v72; // rbp
  __int64 jj; // rbx
  __int64 *v74; // rax
  __int64 v75; // rdi
  __int64 v76; // rdi
  __int64 v77; // rdx
  __int64 v78; // rbp
  __int64 kk; // rbx
  __int64 *v80; // rax
  __int64 v81; // rdi
  __int64 *v83; // rbp
  __int64 v84; // rcx
  __int64 v85; // rsi
  __int64 n; // rbx
  __int64 *v87; // rax
  __int64 v88; // rdi
  __int64 v89; // rdi
  __int64 v90; // rcx
  __int64 v91; // rsi
  __int64 ii; // rbx
  __int64 *v93; // rax
  __int64 v94; // rdi
  __int64 v95; // rcx
  __int64 v96; // rbp
  __int64 v97; // rcx
  __m128i v98; // [rsp+0h] [rbp-118h] BYREF
  __m128i v99; // [rsp+10h] [rbp-108h] BYREF
  __m128i v100; // [rsp+20h] [rbp-F8h] BYREF
  __m128i v101; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v102; // [rsp+40h] [rbp-D8h]
  __int64 v103; // [rsp+48h] [rbp-D0h]
  int v104; // [rsp+50h] [rbp-C8h]
  int v105; // [rsp+54h] [rbp-C4h]
  __int64 v106; // [rsp+58h] [rbp-C0h]
  __int64 v107; // [rsp+60h] [rbp-B8h]
  __int64 v108; // [rsp+68h] [rbp-B0h]
  __m128i v109; // [rsp+70h] [rbp-A8h]
  __m128i v110; // [rsp+80h] [rbp-98h]
  __m128i v111; // [rsp+90h] [rbp-88h] BYREF
  __m128i v112; // [rsp+A0h] [rbp-78h] BYREF
  __m128i v113; // [rsp+B0h] [rbp-68h] BYREF
  __int32 v114; // [rsp+C0h] [rbp-58h]
  int v115; // [rsp+C4h] [rbp-54h]
  __int64 v116; // [rsp+C8h] [rbp-50h]
  int v117; // [rsp+D0h] [rbp-48h]
  unsigned __int64 v118; // [rsp+D8h] [rbp-40h]

  v4 = a3;
  v5 = a1;
  v102 = a2;
  v118 = __readfsqword(0x28u);
  v6 = (const __m128i *)a4;
  if ( a2 >= (a3 - 1) / 2 )
  {
    v29 = v102;
    v9 = a1 + 120 * v102;
  }
  else
  {
    v100.m128i_i64[0] = a3;
    v7 = (a3 - 1) / 2;
    v101.m128i_i64[0] = a4;
    while ( 1 )
    {
      v8 = 2 * (a2 + 1);
      v9 = v5 + 240 * (a2 + 1);
      if ( *(_QWORD *)(v9 - 16) < *(_QWORD *)(v9 + 104) )
      {
        --v8;
        v9 = v5 + 120 * v8;
      }
      v10 = v5 + 120 * a2;
      v11 = *(__int64 **)v10;
      if ( *(_QWORD *)v10 )
      {
        v12 = (*((_DWORD *)v11 + 26))-- == 1;
        if ( v12 )
        {
          v13 = *(__int64 **)v10;
          if ( *(_QWORD *)v10 )
          {
            sub_258970(*(__int64 **)v10);
            v14 = v13[23];
            if ( v14 )
            {
              v15 = v13[24];
              if ( v15 )
              {
                for ( i = 0; i != v15; ++i )
                {
                  v17 = (__int64 *)(v14 + 24 * i);
                  v18 = *v17;
                  if ( *v17 )
                  {
                    v17[1] = 0;
                    v99.m128i_i64[0] = i;
                    v98.m128i_i64[0] = v15;
                    qfree(v18);
                    v14 = v13[23];
                    i = v99.m128i_i64[0];
                    v15 = v98.m128i_i64[0];
                  }
                }
              }
              v13[24] = 0;
              qfree(v14);
            }
            v19 = v13[20];
            if ( v19 )
            {
              v13[21] = 0;
              qfree(v19);
            }
            v20 = v13[16];
            if ( v20 )
            {
              v21 = v13[17];
              if ( v21 )
              {
                for ( j = 0; j != v21; ++j )
                {
                  v23 = (__int64 *)(v20 + 32 * j);
                  v24 = *v23;
                  if ( *v23 )
                  {
                    v23[1] = 0;
                    v99.m128i_i64[0] = j;
                    v98.m128i_i64[0] = v21;
                    qfree(v24);
                    v20 = v13[16];
                    j = v99.m128i_i64[0];
                    v21 = v98.m128i_i64[0];
                  }
                }
              }
              v13[17] = 0;
              qfree(v20);
            }
            sub_255050((__int64)(v13 + 2));
            j__qfree((__int64)v13);
          }
        }
      }
      v25 = *(__int64 **)v9;
      *(_QWORD *)v10 = *(_QWORD *)v9;
      if ( v25 )
        ++*((_DWORD *)v25 + 26);
      v26 = *(_QWORD *)(v9 + 8);
      v27 = _mm_loadu_si128((const __m128i *)(v9 + 16));
      *(_QWORD *)(v9 + 8) = 0;
      *(_OWORD *)(v9 + 16) = 0;
      v28 = *(_QWORD *)(v10 + 8);
      if ( v28 )
      {
        *(_QWORD *)(v10 + 16) = 0;
        v98 = v27;
        qfree(v28);
        v27 = _mm_load_si128(&v98);
      }
      *(_QWORD *)(v10 + 8) = v26;
      *(__m128i *)(v10 + 16) = v27;
      *(_QWORD *)(v10 + 32) = *(_QWORD *)(v9 + 32);
      *(_QWORD *)(v10 + 40) = *(_QWORD *)(v9 + 40);
      *(__m128i *)(v10 + 48) = _mm_loadu_si128((const __m128i *)(v9 + 48));
      *(__m128i *)(v10 + 64) = _mm_loadu_si128((const __m128i *)(v9 + 64));
      *(__m128i *)(v10 + 80) = _mm_loadu_si128((const __m128i *)(v9 + 80));
      *(_DWORD *)(v10 + 96) = *(_DWORD *)(v9 + 96);
      *(_DWORD *)(v10 + 100) = *(_DWORD *)(v9 + 100);
      *(_QWORD *)(v10 + 104) = *(_QWORD *)(v9 + 104);
      *(_DWORD *)(v10 + 112) = *(_DWORD *)(v9 + 112);
      if ( v8 >= v7 )
        break;
      a2 = v8;
    }
    v29 = v8;
    v6 = (const __m128i *)v101.m128i_i64[0];
    v4 = v100.m128i_i64[0];
  }
  if ( (v4 & 1) == 0 && (v4 - 2) / 2 == v29 )
  {
    v95 = v29 + 1;
    v96 = 2 * (v29 + 1);
    v97 = 32 * v95 - v96;
    v29 = v96 - 1;
    sub_35E540(v9, (const __m128i *)(v5 + 8 * v97 - 120));
    v9 = v5 + 120 * v29;
  }
  v30 = v6->m128i_i64[0];
  v107 = v30;
  if ( v30 )
    ++*(_DWORD *)(v30 + 104);
  v31 = v6->m128i_i64[1];
  v32 = v6[6].m128i_i32[0];
  v6->m128i_i64[1] = 0;
  v33 = _mm_loadu_si128(v6 + 1);
  v6[1] = 0;
  v34 = _mm_loadu_si128(v6 + 3);
  v103 = v31;
  v35 = _mm_loadu_si128(v6 + 2);
  v108 = v31;
  LODWORD(v31) = v6[6].m128i_i32[1];
  v114 = v32;
  v104 = v31;
  v115 = v31;
  v36 = v6[6].m128i_i64[1];
  v111 = v34;
  v37 = _mm_loadu_si128(v6 + 4);
  v98.m128i_i64[0] = v36;
  v116 = v36;
  LODWORD(v36) = v6[7].m128i_i32[0];
  v38 = (v29 - 1) / 2;
  v112 = v37;
  v39 = _mm_loadu_si128(v6 + 5);
  v105 = v36;
  v117 = v36;
  v101 = v33;
  v100 = v35;
  v109 = v33;
  v110 = v35;
  v113 = v39;
  if ( v29 > v102 )
  {
    while ( 1 )
    {
      v40 = (const __m128i *)(v5 + 120 * v38);
      v9 = v5 + 120 * v29;
      v41 = *(__int64 **)v9;
      if ( v98.m128i_i64[0] >= (unsigned __int64)v40[6].m128i_i64[1] )
        break;
      if ( v41 )
      {
        v12 = (*((_DWORD *)v41 + 26))-- == 1;
        if ( v12 )
        {
          v42 = *(__int64 **)v9;
          if ( *(_QWORD *)v9 )
          {
            sub_258970(*(__int64 **)v9);
            v43 = v42[23];
            if ( v43 )
            {
              v44 = v42[24];
              if ( v44 )
              {
                v99.m128i_i64[0] = v9;
                v45 = v44;
                v106 = v5;
                for ( k = 0; k != v45; ++k )
                {
                  v47 = (__int64 *)(v43 + 24 * k);
                  v48 = *v47;
                  if ( *v47 )
                  {
                    v47[1] = 0;
                    qfree(v48);
                    v43 = v42[23];
                  }
                }
                v9 = v99.m128i_i64[0];
                v5 = v106;
              }
              v42[24] = 0;
              qfree(v43);
            }
            v49 = v42[20];
            if ( v49 )
            {
              v42[21] = 0;
              qfree(v49);
            }
            v50 = v42[16];
            if ( v50 )
            {
              v51 = v42[17];
              if ( v51 )
              {
                v99.m128i_i64[0] = v9;
                v52 = v50;
                v53 = v51;
                v106 = v5;
                for ( m = 0; m != v53; ++m )
                {
                  v55 = (__int64 *)(v52 + 32 * m);
                  v56 = *v55;
                  if ( *v55 )
                  {
                    v55[1] = 0;
                    qfree(v56);
                    v52 = v42[16];
                  }
                }
                v9 = v99.m128i_i64[0];
                v5 = v106;
                v50 = v52;
              }
              v42[17] = 0;
              qfree(v50);
            }
            sub_255050((__int64)(v42 + 2));
            j__qfree((__int64)v42);
          }
        }
      }
      v57 = v40->m128i_i64[0];
      *(_QWORD *)v9 = v40->m128i_i64[0];
      if ( v57 )
        ++*(_DWORD *)(v57 + 104);
      v58 = v40->m128i_i64[1];
      v59 = _mm_loadu_si128(v40 + 1);
      v40->m128i_i64[1] = 0;
      v40[1] = 0;
      v60 = *(_QWORD *)(v9 + 8);
      if ( v60 )
      {
        *(_QWORD *)(v9 + 16) = 0;
        v99 = v59;
        qfree(v60);
        v59 = _mm_load_si128(&v99);
      }
      *(_QWORD *)(v9 + 8) = v58;
      v29 = v38;
      *(__m128i *)(v9 + 16) = v59;
      *(_QWORD *)(v9 + 32) = v40[2].m128i_i64[0];
      *(_QWORD *)(v9 + 40) = v40[2].m128i_i64[1];
      *(__m128i *)(v9 + 48) = _mm_loadu_si128(v40 + 3);
      *(__m128i *)(v9 + 64) = _mm_loadu_si128(v40 + 4);
      *(__m128i *)(v9 + 80) = _mm_loadu_si128(v40 + 5);
      *(_DWORD *)(v9 + 96) = v40[6].m128i_i32[0];
      *(_DWORD *)(v9 + 100) = v40[6].m128i_i32[1];
      *(_QWORD *)(v9 + 104) = v40[6].m128i_i64[1];
      *(_DWORD *)(v9 + 112) = v40[7].m128i_i32[0];
      if ( v102 >= v38 )
      {
        v9 = (__int64)v40;
        break;
      }
      v38 = (v38 - 1) / 2;
    }
  }
  v61 = *(__int64 **)v9;
  if ( *(_QWORD *)v9 )
  {
    v12 = (*((_DWORD *)v61 + 26))-- == 1;
    if ( v12 )
    {
      v83 = *(__int64 **)v9;
      if ( *(_QWORD *)v9 )
      {
        sub_258970(*(__int64 **)v9);
        v84 = v83[23];
        if ( v84 )
        {
          v85 = v83[24];
          if ( v85 )
          {
            for ( n = 0; n != v85; ++n )
            {
              v87 = (__int64 *)(v84 + 24 * n);
              v88 = *v87;
              if ( *v87 )
              {
                v87[1] = 0;
                qfree(v88);
                v84 = v83[23];
              }
            }
          }
          v83[24] = 0;
          qfree(v84);
        }
        v89 = v83[20];
        if ( v89 )
        {
          v83[21] = 0;
          qfree(v89);
        }
        v90 = v83[16];
        if ( v90 )
        {
          v91 = v83[17];
          if ( v91 )
          {
            for ( ii = 0; ii != v91; ++ii )
            {
              v93 = (__int64 *)(v90 + 32 * ii);
              v94 = *v93;
              if ( *v93 )
              {
                v93[1] = 0;
                qfree(v94);
                v90 = v83[16];
              }
            }
          }
          v83[17] = 0;
          qfree(v90);
        }
        sub_255050((__int64)(v83 + 2));
        j__qfree((__int64)v83);
      }
    }
  }
  *(_QWORD *)v9 = v30;
  if ( v30 )
    ++*(_DWORD *)(v30 + 104);
  v62 = *(_QWORD *)(v9 + 8);
  v108 = 0;
  v109 = 0;
  if ( v62 )
  {
    *(_QWORD *)(v9 + 16) = 0;
    qfree(v62);
  }
  v63 = _mm_load_si128(&v101);
  v64 = _mm_load_si128(&v111);
  v65 = _mm_load_si128(&v100);
  *(_QWORD *)(v9 + 8) = v103;
  v66 = v104;
  *(__m128i *)(v9 + 48) = v64;
  v67 = v114;
  v68 = _mm_load_si128(&v112);
  *(_DWORD *)(v9 + 100) = v66;
  v69 = v98.m128i_i64[0];
  *(__m128i *)(v9 + 64) = v68;
  v70 = _mm_load_si128(&v113);
  *(_QWORD *)(v9 + 104) = v69;
  LODWORD(v69) = v105;
  *(_DWORD *)(v9 + 96) = v67;
  *(_DWORD *)(v9 + 112) = v69;
  *(__m128i *)(v9 + 16) = v63;
  *(__m128i *)(v9 + 32) = v65;
  *(__m128i *)(v9 + 80) = v70;
  if ( v30 )
  {
    v12 = (*(_DWORD *)(v30 + 104))-- == 1;
    if ( v12 )
    {
      sub_258970((__int64 *)v30);
      v71 = *(_QWORD *)(v30 + 184);
      if ( v71 )
      {
        v72 = *(_QWORD *)(v30 + 192);
        if ( v72 )
        {
          for ( jj = 0; jj != v72; ++jj )
          {
            v74 = (__int64 *)(v71 + 24 * jj);
            v75 = *v74;
            if ( *v74 )
            {
              v74[1] = 0;
              qfree(v75);
              v71 = *(_QWORD *)(v30 + 184);
            }
          }
        }
        *(_QWORD *)(v30 + 192) = 0;
        qfree(v71);
      }
      v76 = *(_QWORD *)(v30 + 160);
      if ( v76 )
      {
        *(_QWORD *)(v30 + 168) = 0;
        qfree(v76);
      }
      v77 = *(_QWORD *)(v30 + 128);
      if ( v77 )
      {
        v78 = *(_QWORD *)(v30 + 136);
        if ( v78 )
        {
          for ( kk = 0; kk != v78; ++kk )
          {
            v80 = (__int64 *)(v77 + 32 * kk);
            v81 = *v80;
            if ( *v80 )
            {
              v80[1] = 0;
              qfree(v81);
              v77 = *(_QWORD *)(v30 + 128);
            }
          }
        }
        *(_QWORD *)(v30 + 136) = 0;
        qfree(v77);
      }
      sub_255050(v30 + 16);
      j__qfree(v30);
    }
  }
  return v118 - __readfsqword(0x28u);
}
