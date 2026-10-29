unsigned __int64 __fastcall sub_ACDC0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __m128i v4; // xmm2
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rax
  __m128i v8; // xmm3
  __int64 v9; // rdi
  __int64 v10; // r15
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // r13
  __int64 v15; // r12
  __int64 v16; // rax
  _QWORD *v18; // rax
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // r14
  __int64 v22; // r12
  __m128i v23; // xmm0
  __int64 v24; // rdi
  __m128i v25; // xmm4
  __int64 v26; // rsi
  __int64 v27; // r12
  __int64 v28; // rax
  __m128i v29; // xmm5
  __int64 v30; // r12
  __m128i v31; // xmm1
  __int64 v32; // rcx
  __m128i v33; // xmm7
  __int64 v34; // rsi
  __int64 v35; // r12
  __int64 v36; // rax
  __m128i v37; // xmm4
  __int64 v38; // r14
  __m128i v39; // xmm0
  __int64 v40; // rdi
  __m128i v41; // xmm6
  __int64 v42; // rsi
  __int64 v43; // r14
  __int64 v44; // rax
  __m128i v45; // xmm7
  __int64 v46; // r14
  __m128i v47; // xmm1
  __int64 v48; // rcx
  __m128i v49; // xmm5
  __int64 v50; // rsi
  __int64 v51; // r14
  __int64 v52; // rax
  __m128i v53; // xmm7
  __int64 *v54; // rax
  unsigned __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rdi
  __m128i v58; // xmm6
  __int64 v59; // r13
  __int64 v60; // r14
  __int64 v61; // rax
  __m128i v62; // xmm3
  __int64 v63; // rdi
  __int64 v64; // r14
  __int64 v65; // r13
  __int64 v66; // rax
  __int64 *v67; // rax
  __m128i v68; // [rsp+0h] [rbp-258h] BYREF
  __m128i v69; // [rsp+10h] [rbp-248h] BYREF
  __m128i v70; // [rsp+20h] [rbp-238h] BYREF
  __m128i v71; // [rsp+30h] [rbp-228h] BYREF
  __int64 v72; // [rsp+40h] [rbp-218h] BYREF
  int v73[2]; // [rsp+48h] [rbp-210h]
  _QWORD *v74; // [rsp+50h] [rbp-208h] BYREF
  unsigned __int64 v75; // [rsp+58h] [rbp-200h]
  __m128i *v76; // [rsp+60h] [rbp-1F8h] BYREF
  unsigned __int64 v77; // [rsp+68h] [rbp-1F0h]
  _QWORD v78[12]; // [rsp+70h] [rbp-1E8h] BYREF
  __int64 v79; // [rsp+D0h] [rbp-188h] BYREF
  __m128i v80; // [rsp+D8h] [rbp-180h] BYREF
  __int64 v81; // [rsp+E8h] [rbp-170h]
  __m128i v82; // [rsp+F0h] [rbp-168h]
  __int64 v83; // [rsp+100h] [rbp-158h]
  __m128i v84; // [rsp+108h] [rbp-150h]
  __int64 v85; // [rsp+118h] [rbp-140h]
  __m128i v86; // [rsp+120h] [rbp-138h]
  __int64 v87; // [rsp+130h] [rbp-128h] BYREF
  __m128i v88; // [rsp+138h] [rbp-120h]
  __int64 v89; // [rsp+148h] [rbp-110h]
  __m128i v90; // [rsp+150h] [rbp-108h]
  __int64 v91; // [rsp+160h] [rbp-F8h]
  __m128i v92; // [rsp+168h] [rbp-F0h]
  __int64 v93; // [rsp+178h] [rbp-E0h]
  __m128i v94; // [rsp+180h] [rbp-D8h]
  int v95[2]; // [rsp+190h] [rbp-C8h] BYREF
  __m128i v96; // [rsp+198h] [rbp-C0h] BYREF
  __int64 v97; // [rsp+1A8h] [rbp-B0h]
  __m128i v98; // [rsp+1B0h] [rbp-A8h] BYREF
  __int64 v99; // [rsp+1C0h] [rbp-98h]
  __m128i v100; // [rsp+1C8h] [rbp-90h] BYREF
  __int64 v101; // [rsp+1D8h] [rbp-80h]
  __m128i v102; // [rsp+1E0h] [rbp-78h] BYREF
  int v103; // [rsp+1F0h] [rbp-68h] BYREF
  __int64 v104; // [rsp+1F8h] [rbp-60h]
  __int128 v105; // [rsp+200h] [rbp-58h]
  unsigned __int64 v106; // [rsp+218h] [rbp-40h]

  v72 = a1;
  *(_QWORD *)v73 = a2;
  v106 = __readfsqword(0x28u);
  if ( *((_DWORD *)sub_A19D0((__int64)&v72) + 2) == 1 )
  {
    v18 = sub_AC5C0(&v72, 0);
    v75 = v19;
    v74 = v18;
    v20 = sub_AC580(&qword_251F80, &qword_251F60);
    v76 = xmmword_251F20;
    v77 = v20;
    if ( v74
      && v75 < 16 * ((unsigned __int64)(v74[15] == 0) + ((__int64)(v74[15] - v74[11]) >> 3) - 1)
             + ((__int64)(v74[10] - v74[8]) >> 5)
             + ((__int64)(v74[12] - v74[13]) >> 5) )
    {
      v76 = (__m128i *)sub_AC5C0(&v74, 0);
      v77 = v55;
    }
    v21 = *(int *)(dbg + 64LL);
    sub_A6C80((__int64)v78, *(_DWORD *)(dbg + 64LL));
    if ( v74
      && v75 < 16 * ((unsigned __int64)(v74[15] == 0) + ((__int64)(v74[15] - v74[11]) >> 3) - 1)
             + ((__int64)(v74[10] - v74[8]) >> 5)
             + ((__int64)(v74[12] - v74[13]) >> 5) )
    {
      v54 = sub_A19D0((__int64)&v74);
      sub_9D240(v78, v54[3]);
    }
    v68.m128i_i64[0] = (__int64)&v79;
    sub_A6C80((__int64)&v79, v21);
    if ( v76
      && v77 < 16
             * ((unsigned __int64)(v76[7].m128i_i64[1] == 0) + ((v76[7].m128i_i64[1] - v76[5].m128i_i64[1]) >> 3) - 1)
             + ((v76[5].m128i_i64[0] - v76[4].m128i_i64[0]) >> 5)
             + ((v76[6].m128i_i64[0] - v76[6].m128i_i64[1]) >> 5) )
    {
      sub_AC830((__int64)v95, &v76);
      v22 = *(_QWORD *)v95;
      *(_QWORD *)v95 = 0;
      v23 = _mm_loadu_si128(&v96);
      v96 = 0;
      if ( v79 )
      {
        v69 = v23;
        v80.m128i_i64[0] = 0;
        qfree();
        v23 = _mm_load_si128(&v69);
      }
      v24 = v81;
      v80 = v23;
      v25 = _mm_load_si128(&v98);
      v79 = v22;
      v70.m128i_i64[0] = v97;
      v97 = 0;
      v71 = v25;
      v98 = 0;
      if ( v81 )
      {
        v26 = v82.m128i_i64[0];
        if ( v82.m128i_i64[0] )
        {
          v27 = 0;
          do
          {
            v28 = v24 + 32 * v27;
            if ( *(int *)v28 >= -1 && *(_QWORD *)(v28 + 8) )
            {
              *(_QWORD *)(v28 + 16) = 0;
              v69.m128i_i64[0] = v26;
              qfree();
              v24 = v81;
              v26 = v69.m128i_i64[0];
            }
            ++v27;
          }
          while ( v26 != v27 );
        }
        v82.m128i_i64[0] = 0;
        qfree();
      }
      v29 = _mm_load_si128(&v71);
      v30 = v99;
      v99 = 0;
      v31 = _mm_loadu_si128(&v100);
      v81 = v70.m128i_i64[0];
      v82 = v29;
      v100 = 0;
      if ( v83 )
      {
        v69 = v31;
        v84.m128i_i64[0] = 0;
        qfree();
        v31 = _mm_load_si128(&v69);
      }
      v32 = v85;
      v83 = v30;
      v33 = _mm_load_si128(&v102);
      v84 = v31;
      v70.m128i_i64[0] = v101;
      v101 = 0;
      v71 = v33;
      v102 = 0;
      if ( v85 )
      {
        v34 = v86.m128i_i64[0];
        if ( v86.m128i_i64[0] )
        {
          v35 = 0;
          do
          {
            v36 = v32 + 32 * v35;
            if ( *(_QWORD *)(v36 + 8) )
            {
              *(_QWORD *)(v36 + 16) = 0;
              v69.m128i_i64[0] = v34;
              qfree();
              v32 = v85;
              v34 = v69.m128i_i64[0];
            }
            ++v35;
          }
          while ( v34 != v35 );
        }
        v86.m128i_i64[0] = 0;
        qfree();
      }
      v37 = _mm_load_si128(&v71);
      v85 = v70.m128i_i64[0];
      v86 = v37;
      sub_9EEC0(v95);
    }
    sub_9EA10(v78, v68.m128i_i64[0]);
    sub_A6C80((__int64)&v87, v21);
    if ( v21 == v82.m128i_i64[0] )
    {
      sub_9D240(&v87, (__int64)v78);
      sub_9ED00(&v87, v68.m128i_i64[0], 1);
    }
    else
    {
      sub_AC830((__int64)v95, &v74);
      v38 = *(_QWORD *)v95;
      *(_QWORD *)v95 = 0;
      v39 = _mm_loadu_si128(&v96);
      v96 = 0;
      if ( v87 )
      {
        v69 = v39;
        v88.m128i_i64[0] = 0;
        qfree();
        v39 = _mm_load_si128(&v69);
      }
      v40 = v89;
      v88 = v39;
      v41 = _mm_load_si128(&v98);
      v87 = v38;
      v70.m128i_i64[0] = v97;
      v97 = 0;
      v71 = v41;
      v98 = 0;
      if ( v89 )
      {
        v42 = v90.m128i_i64[0];
        if ( v90.m128i_i64[0] )
        {
          v43 = 0;
          do
          {
            v44 = v40 + 32 * v43;
            if ( *(int *)v44 >= -1 && *(_QWORD *)(v44 + 8) )
            {
              *(_QWORD *)(v44 + 16) = 0;
              v69.m128i_i64[0] = v42;
              qfree();
              v40 = v89;
              v42 = v69.m128i_i64[0];
            }
            ++v43;
          }
          while ( v42 != v43 );
        }
        v90.m128i_i64[0] = 0;
        qfree();
      }
      v45 = _mm_load_si128(&v71);
      v46 = v99;
      v99 = 0;
      v47 = _mm_loadu_si128(&v100);
      v89 = v70.m128i_i64[0];
      v90 = v45;
      v100 = 0;
      if ( v91 )
      {
        v69 = v47;
        v92.m128i_i64[0] = 0;
        qfree();
        v47 = _mm_load_si128(&v69);
      }
      v48 = v93;
      v91 = v46;
      v49 = _mm_load_si128(&v102);
      v92 = v47;
      v70.m128i_i64[0] = v101;
      v101 = 0;
      v71 = v49;
      v102 = 0;
      if ( v93 )
      {
        v50 = v94.m128i_i64[0];
        if ( v94.m128i_i64[0] )
        {
          v51 = 0;
          do
          {
            v52 = v48 + 32 * v51;
            if ( *(_QWORD *)(v52 + 8) )
            {
              *(_QWORD *)(v52 + 16) = 0;
              v69.m128i_i64[0] = v50;
              qfree();
              v48 = v93;
              v50 = v69.m128i_i64[0];
            }
            ++v51;
          }
          while ( v50 != v51 );
        }
        v94.m128i_i64[0] = 0;
        qfree();
      }
      v53 = _mm_load_si128(&v71);
      v93 = v70.m128i_i64[0];
      v94 = v53;
      sub_9EEC0(v95);
    }
    sub_A8780((__int64)v95, &v87);
    v56 = *(_QWORD *)v95;
    v57 = qword_251B00;
    *(_QWORD *)v95 = 0;
    v58 = _mm_loadu_si128(&v96);
    v96 = 0;
    v69.m128i_i64[0] = v56;
    v70 = v58;
    if ( qword_251B00 )
    {
      v59 = xmmword_251B08;
      if ( (_QWORD)xmmword_251B08 )
      {
        v60 = 0;
        do
        {
          v61 = v57 + 32 * v60;
          if ( *(int *)v61 >= -1 && *(_QWORD *)(v61 + 8) )
          {
            *(_QWORD *)(v61 + 16) = 0;
            qfree();
            v57 = qword_251B00;
          }
          ++v60;
        }
        while ( v59 != v60 );
      }
      *(_QWORD *)&xmmword_251B08 = 0;
      qfree();
      v62 = _mm_load_si128(&v70);
      v63 = *(_QWORD *)v95;
      qword_251B00 = v69.m128i_i64[0];
      xmmword_251B08 = (__int128)v62;
      if ( *(_QWORD *)v95 )
      {
        v64 = v96.m128i_i64[0];
        if ( v96.m128i_i64[0] )
        {
          v65 = 0;
          do
          {
            v66 = v63 + 32 * v65;
            if ( *(int *)v66 >= -1 && *(_QWORD *)(v66 + 8) )
            {
              *(_QWORD *)(v66 + 16) = 0;
              qfree();
              v63 = *(_QWORD *)v95;
            }
            ++v65;
          }
          while ( v64 != v65 );
        }
        v96.m128i_i64[0] = 0;
        qfree();
      }
    }
    else
    {
      qword_251B00 = v56;
      xmmword_251B08 = (__int128)v58;
    }
    sub_9EEC0(&v87);
    sub_9EEC0(v68.m128i_i64[0]);
    sub_9EEC0(v78);
  }
  else if ( sub_A19D0((__int64)&v72)[2] == -1 )
  {
    sub_C6220();
    v13 = qword_251B00;
    if ( qword_251B00 )
    {
      v14 = xmmword_251B08;
      if ( (_QWORD)xmmword_251B08 )
      {
        v15 = 0;
        do
        {
          v16 = v13 + 32 * v15;
          if ( *(int *)v16 >= -1 && *(_QWORD *)(v16 + 8) )
          {
            *(_QWORD *)(v16 + 16) = 0;
            qfree();
            v13 = qword_251B00;
          }
          ++v15;
        }
        while ( v14 != v15 );
      }
      *(_QWORD *)&xmmword_251B08 = 0;
      qfree();
      qword_251B00 = 0;
      *((_QWORD *)&xmmword_251B08 + 1) = 0;
    }
  }
  else
  {
    v103 = -2;
    v104 = -1;
    v105 = 0;
    v104 = sub_A19D0((__int64)&v72)[2];
    sub_A72D0((__int64)&v87, dword_245174, (__int64)&v103);
    sub_A6BC0((__int64)v95);
    sub_9EA10(&v87, v95);
    sub_A8780((__int64)&v79, &v87);
    v2 = v79;
    v3 = qword_251B00;
    v79 = 0;
    v4 = _mm_loadu_si128(&v80);
    v80 = 0;
    v69.m128i_i64[0] = v2;
    v68 = v4;
    if ( qword_251B00 )
    {
      v5 = xmmword_251B08;
      if ( (_QWORD)xmmword_251B08 )
      {
        v6 = 0;
        do
        {
          v7 = v3 + 32 * v6;
          if ( *(int *)v7 >= -1 && *(_QWORD *)(v7 + 8) )
          {
            *(_QWORD *)(v7 + 16) = 0;
            qfree();
            v3 = qword_251B00;
          }
          ++v6;
        }
        while ( v5 != v6 );
      }
      *(_QWORD *)&xmmword_251B08 = 0;
      qfree();
      v8 = _mm_load_si128(&v68);
      v9 = v79;
      qword_251B00 = v69.m128i_i64[0];
      xmmword_251B08 = (__int128)v8;
      if ( v79 )
      {
        v10 = v80.m128i_i64[0];
        if ( v80.m128i_i64[0] )
        {
          v11 = 0;
          do
          {
            v12 = v9 + 32 * v11;
            if ( *(int *)v12 >= -1 && *(_QWORD *)(v12 + 8) )
            {
              *(_QWORD *)(v12 + 16) = 0;
              qfree();
              v9 = v79;
            }
            ++v11;
          }
          while ( v10 != v11 );
        }
        v80.m128i_i64[0] = 0;
        qfree();
      }
    }
    else
    {
      qword_251B00 = v2;
      xmmword_251B08 = (__int128)v4;
    }
    sub_9EEC0(v95);
    sub_9EEC0(&v87);
    if ( v103 >= -1 && v104 )
    {
      *(_QWORD *)&v105 = 0;
      qfree();
    }
  }
  byte_251B18 = 1;
  if ( *((_DWORD *)sub_A19D0((__int64)&v72) + 2) == 1 )
  {
    if ( sub_A19D0((__int64)&v72)[3] )
    {
      qword_245178 = -1;
      if ( sub_D1F80(qword_251B00, 0) != -1 )
      {
        v103 = -2;
        v104 = -1;
        v105 = 0;
        v67 = sub_A19D0((__int64)&v72);
        if ( (unsigned __int8)sub_9E6D0((_QWORD *)v67[3], dword_245174, (__int64)&v103, 0) )
          qword_245178 = v104;
        if ( v103 >= -1 && v104 )
        {
          *(_QWORD *)&v105 = 0;
          qfree();
        }
      }
    }
  }
  if ( sub_A19D0((__int64)&v72)[2] != -1 )
    sub_D1E10(v72, v73[0]);
  return v106 - __readfsqword(0x28u);
}

