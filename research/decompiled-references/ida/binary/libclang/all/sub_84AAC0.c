// write access to const memory has been detected, the output may be wrong!
_QWORD *__fastcall sub_84AAC0(__int64 a1, __int64 *a2)
{
  __m128i *v3; // rbx
  __int64 v4; // r13
  __m128i *v5; // r14
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  __m128i *v9; // r13
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __m128i v17; // rax
  __m128i *v18; // rbx
  __m128i *v19; // rax
  __int64 v20; // rdx
  _QWORD *v21; // rax
  _QWORD *v22; // rsi
  _QWORD *v23; // rdx
  __int64 v24; // r14
  int v25; // r13d
  __int64 v26; // rbp
  __int64 v27; // rdx
  __m128i v28; // rax
  _QWORD *v29; // r12
  __int64 v30; // rdx
  char v31; // al
  __int64 v32; // rdx
  _QWORD *v33; // rax
  _QWORD *v34; // rcx
  _QWORD *i; // rdx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rdx
  int v42; // eax
  __m128i v43; // rax
  __int64 v44; // rdx
  _QWORD *v45; // rax
  _QWORD *v46; // rsi
  _QWORD *v47; // rdx
  __m128i v48; // xmm0
  __int64 v49; // rdx
  _QWORD *v50; // rax
  _QWORD *v51; // rsi
  _QWORD *v52; // rdx
  _QWORD *v53; // rax
  _QWORD *v54; // rcx
  _QWORD *v55; // rdx
  int v56; // eax
  __int64 v57; // r14
  unsigned __int64 v58; // rax
  __int64 v59; // rdi
  __m128i *v60; // r12
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rdx
  __int64 v64; // rax
  __int64 v65; // rdx
  _QWORD *v66; // rbp
  __int64 v67; // rdx
  __int64 v68; // rax
  __int64 v69; // rdx
  __m128i *v70; // rbx
  _QWORD *v71; // rsi
  __int64 v72; // rax
  __int64 v73; // rdx
  __m128i v74; // rax
  int v75; // eax
  __m128i *v76; // rbp
  __m128i *v77; // rbx
  _QWORD *v78; // r12
  __m128i *v79; // rsi
  __m128i *v80; // r9
  __int64 v81; // rdx
  _QWORD *v82; // rax
  _QWORD *v83; // rsi
  _QWORD *v84; // rdx
  __int64 v85; // rdx
  _QWORD *v86; // rax
  _QWORD *v87; // rdx
  __int64 v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rdx
  __int64 v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rdx
  _QWORD *v94; // rax
  _QWORD *v95; // rcx
  _QWORD *v96; // rdx
  char v97; // al
  unsigned int v98; // [rsp+0h] [rbp-108h]
  int v100; // [rsp+8h] [rbp-100h]
  int v102; // [rsp+1Ch] [rbp-ECh]
  unsigned int v103; // [rsp+1Ch] [rbp-ECh]
  __int64 v104; // [rsp+20h] [rbp-E8h]
  __m128i *v105; // [rsp+28h] [rbp-E0h]
  _QWORD *v106; // [rsp+30h] [rbp-D8h]
  int v107; // [rsp+38h] [rbp-D0h]
  int v108; // [rsp+3Ch] [rbp-CCh]
  __int64 v109; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v110[2]; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD *v111; // [rsp+60h] [rbp-A8h]
  __int64 v112; // [rsp+68h] [rbp-A0h]
  _QWORD v113[2]; // [rsp+70h] [rbp-98h] BYREF
  _QWORD *v114; // [rsp+80h] [rbp-88h]
  __int64 v115; // [rsp+88h] [rbp-80h]
  __int64 v116; // [rsp+90h] [rbp-78h] BYREF
  __int64 v117; // [rsp+98h] [rbp-70h]
  _QWORD *v118; // [rsp+A0h] [rbp-68h]
  __int64 v119; // [rsp+A8h] [rbp-60h]
  __m128i v120; // [rsp+B0h] [rbp-58h] BYREF
  __m128i v121; // [rsp+C0h] [rbp-48h] BYREF

  v3 = (__m128i *)a2;
  v4 = *(unsigned int *)(a1 + 16);
  if ( !(_DWORD)v4 )
  {
    v109 = 0;
    goto LABEL_3;
  }
  v24 = *(_QWORD *)a1;
  v25 = v4 - 1;
  v26 = 0;
  v118 = nullptr;
  v116 = sub_69F620();
  v117 = v27;
  v119 = 0;
  v28.m128i_i64[0] = sub_69F630(a1, a2);
  v121 = 0u;
  v120 = v28;
  v100 = 1;
  v98 = v25 & sub_84A6B0(a2, (__int64)(a2 + 2));
  while ( 1 )
  {
    v29 = (_QWORD *)(v24 + 40LL * v98);
    if ( (unsigned __int8)sub_69F550(a2, v29) )
    {
      v32 = a2[3];
      if ( v32 == v29[3] )
      {
        v33 = (_QWORD *)a2[2];
        v34 = &v33[v32];
        if ( v33 == v34 )
          return v29 + 4;
        for ( i = (_QWORD *)v29[2]; *v33 == *i; ++i )
        {
          if ( v34 == ++v33 )
            return v29 + 4;
        }
      }
    }
    if ( (unsigned __int8)sub_69F550(v29, &v116) )
    {
      v30 = v29[3];
      if ( v30 == v119 )
        break;
    }
LABEL_24:
    v31 = sub_81F860(v29, &v120);
    if ( !v26 && v31 )
      v26 = v24 + 40LL * v98;
    v98 = v25 & (v100 + v98);
    ++v100;
  }
  v53 = (_QWORD *)v29[2];
  v54 = &v53[v30];
  if ( v53 != v54 )
  {
    v55 = v118;
    while ( *v53 == *v55 )
    {
      ++v53;
      ++v55;
      if ( v54 == v53 )
        goto LABEL_57;
    }
    goto LABEL_24;
  }
LABEL_57:
  v4 = *(unsigned int *)(a1 + 16);
  if ( !v26 )
    v26 = v24 + 40LL * v98;
  v56 = *(_DWORD *)(a1 + 8);
  v109 = v26;
  v42 = v56 + 1;
  if ( 4 * v42 >= (unsigned int)(3 * v4) )
  {
LABEL_3:
    v5 = *(__m128i **)a1;
    v6 = (((((((unsigned int)(2 * v4 - 1) | ((unsigned __int64)(unsigned int)(2 * v4 - 1) >> 1)) >> 2)
           | (unsigned int)(2 * v4 - 1)
           | ((unsigned __int64)(unsigned int)(2 * v4 - 1) >> 1)) >> 4)
         | (((unsigned int)(2 * v4 - 1) | ((unsigned __int64)(unsigned int)(2 * v4 - 1) >> 1)) >> 2)
         | (unsigned int)(2 * v4 - 1)
         | ((unsigned __int64)(unsigned int)(2 * v4 - 1) >> 1)) >> 8)
       | (((((unsigned int)(2 * v4 - 1) | ((unsigned __int64)(unsigned int)(2 * v4 - 1) >> 1)) >> 2)
         | (unsigned int)(2 * v4 - 1)
         | ((unsigned __int64)(unsigned int)(2 * v4 - 1) >> 1)) >> 4)
       | (((unsigned int)(2 * v4 - 1) | ((unsigned __int64)(unsigned int)(2 * v4 - 1) >> 1)) >> 2)
       | (unsigned int)(2 * v4 - 1)
       | ((unsigned __int64)(unsigned int)(2 * v4 - 1) >> 1);
    v7 = ((v6 >> 16) | v6) + 1;
    if ( (unsigned int)v7 < 0x40 )
      LODWORD(v7) = 64;
    *(_DWORD *)(a1 + 16) = v7;
    v8 = 40LL * (unsigned int)v7;
    *(_QWORD *)a1 = sub_25CC9C0(v8, 8);
    if ( v5 )
    {
      *(_QWORD *)(a1 + 8) = 0;
      v9 = (__m128i *)((char *)v5 + 40 * v4);
      v10 = sub_69F620();
      v121 = 0u;
      v120.m128i_i64[1] = v11;
      v12 = *(unsigned int *)(a1 + 16);
      v120.m128i_i64[0] = v10;
      v13 = *(_QWORD *)a1;
      v14 = *(_QWORD *)a1 + 40 * v12;
      if ( *(_QWORD *)a1 != v14 )
      {
        do
        {
          v13 += 40;
          *(__m128i *)(v13 - 40) = _mm_load_si128(&v120);
          *(__m128i *)(v13 - 24) = _mm_load_si128(&v121);
        }
        while ( v14 != v13 );
      }
      v15 = sub_69F620();
      v118 = nullptr;
      v116 = v15;
      v117 = v16;
      v119 = 0;
      v17.m128i_i64[0] = sub_69F630(v8, 8);
      v121 = 0u;
      v120 = v17;
      if ( v5 != v9 )
      {
        v18 = v5;
        while ( 1 )
        {
          if ( (unsigned __int8)sub_69F550(v18, &v116) )
          {
            v20 = v18[1].m128i_i64[1];
            if ( v20 == v119 )
            {
              v21 = (_QWORD *)v18[1].m128i_i64[0];
              v22 = &v21[v20];
              v23 = v118;
              if ( v21 == v22 )
                goto LABEL_12;
              while ( *v21 == *v23 )
              {
                ++v21;
                ++v23;
                if ( v22 == v21 )
                  goto LABEL_12;
              }
            }
          }
          if ( (unsigned __int8)sub_69F550(v18, &v120) )
          {
            v49 = v18[1].m128i_i64[1];
            if ( v49 == v121.m128i_i64[1] )
            {
              v50 = (_QWORD *)v18[1].m128i_i64[0];
              v51 = &v50[v49];
              if ( v50 == v51 )
                goto LABEL_12;
              v52 = (_QWORD *)v121.m128i_i64[0];
              while ( *v50 == *v52 )
              {
                ++v50;
                ++v52;
                if ( v51 == v50 )
                  goto LABEL_12;
              }
            }
          }
          sub_84A8A0((__int64 *)a1, v18->m128i_i64, v113);
          v19 = (__m128i *)v113[0];
          *(__m128i *)v113[0] = _mm_loadu_si128(v18);
          v19[1] = _mm_loadu_si128(v18 + 1);
          v19[2].m128i_i32[0] = v18[2].m128i_i32[0];
          ++*(_DWORD *)(a1 + 8);
LABEL_12:
          v18 = (__m128i *)((char *)v18 + 40);
          if ( v9 == v18 )
          {
            v3 = (__m128i *)a2;
            break;
          }
        }
      }
      operator delete();
    }
    else
    {
      *(_QWORD *)(a1 + 8) = 0;
      v37 = sub_69F620();
      v121 = 0u;
      v120.m128i_i64[1] = v38;
      v39 = *(unsigned int *)(a1 + 16);
      v120.m128i_i64[0] = v37;
      v40 = *(_QWORD *)a1;
      v41 = *(_QWORD *)a1 + 40 * v39;
      if ( *(_QWORD *)a1 != v41 )
      {
        do
        {
          v40 += 40;
          *(__m128i *)(v40 - 40) = _mm_load_si128(&v120);
          *(__m128i *)(v40 - 24) = _mm_load_si128(&v121);
        }
        while ( v41 != v40 );
      }
    }
    goto LABEL_36;
  }
  if ( (unsigned int)v4 >> 3 < (int)v4 - (v42 + *(_DWORD *)(a1 + 12)) )
    goto LABEL_37;
  v57 = *(_QWORD *)a1;
  v58 = ((((((((((unsigned int)(v4 - 1) | ((unsigned __int64)(unsigned int)(v4 - 1) >> 1)) >> 2)
             | (unsigned int)(v4 - 1)
             | ((unsigned __int64)(unsigned int)(v4 - 1) >> 1)) >> 4)
           | (((unsigned int)(v4 - 1) | ((unsigned __int64)(unsigned int)(v4 - 1) >> 1)) >> 2)
           | (unsigned int)(v4 - 1)
           | ((unsigned __int64)(unsigned int)(v4 - 1) >> 1)) >> 8)
         | (((((unsigned int)(v4 - 1) | ((unsigned __int64)(unsigned int)(v4 - 1) >> 1)) >> 2)
           | (unsigned int)(v4 - 1)
           | ((unsigned __int64)(unsigned int)(v4 - 1) >> 1)) >> 4)
         | (((unsigned int)(v4 - 1) | ((unsigned __int64)(unsigned int)(v4 - 1) >> 1)) >> 2)
         | (unsigned int)(v4 - 1)
         | ((unsigned __int64)(unsigned int)(v4 - 1) >> 1)) >> 16)
       | (((((((unsigned int)(v4 - 1) | ((unsigned __int64)(unsigned int)(v4 - 1) >> 1)) >> 2)
           | (unsigned int)(v4 - 1)
           | ((unsigned __int64)(unsigned int)(v4 - 1) >> 1)) >> 4)
         | (((unsigned int)(v4 - 1) | ((unsigned __int64)(unsigned int)(v4 - 1) >> 1)) >> 2)
         | (unsigned int)(v4 - 1)
         | ((unsigned __int64)(unsigned int)(v4 - 1) >> 1)) >> 8)
       | (((((unsigned int)(v4 - 1) | ((unsigned __int64)(unsigned int)(v4 - 1) >> 1)) >> 2)
         | (unsigned int)(v4 - 1)
         | ((unsigned __int64)(unsigned int)(v4 - 1) >> 1)) >> 4)
       | (((unsigned int)(v4 - 1) | ((unsigned __int64)(unsigned int)(v4 - 1) >> 1)) >> 2)
       | (unsigned int)(v4 - 1)
       | ((unsigned __int64)(unsigned int)(v4 - 1) >> 1))
      + 1;
  if ( (unsigned int)v58 < 0x40 )
    LODWORD(v58) = 64;
  *(_DWORD *)(a1 + 16) = v58;
  v59 = 40LL * (unsigned int)v58;
  *(_QWORD *)a1 = sub_25CC9C0(v59, 8);
  if ( v57 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    v60 = (__m128i *)(v57 + 40 * v4);
    v61 = sub_69F620();
    v121 = 0u;
    v120.m128i_i64[1] = v62;
    v63 = *(unsigned int *)(a1 + 16);
    v120.m128i_i64[0] = v61;
    v64 = *(_QWORD *)a1;
    v65 = *(_QWORD *)a1 + 40 * v63;
    if ( *(_QWORD *)a1 != v65 )
    {
      do
      {
        v64 += 40;
        *(__m128i *)(v64 - 40) = _mm_load_si128(&v120);
        *(__m128i *)(v64 - 24) = _mm_load_si128(&v121);
      }
      while ( v65 != v64 );
    }
    v66 = v110;
    v111 = nullptr;
    v110[0] = sub_69F620();
    v110[1] = v67;
    v112 = 0;
    v68 = sub_69F630(v59, 8);
    v114 = nullptr;
    v113[0] = v68;
    v113[1] = v69;
    v115 = 0;
    if ( (__m128i *)v57 != v60 )
    {
      v70 = (__m128i *)v57;
      while ( 1 )
      {
        if ( (unsigned __int8)sub_69F550(v70, v66) )
        {
          v81 = v70[1].m128i_i64[1];
          if ( v81 == v112 )
          {
            v82 = (_QWORD *)v70[1].m128i_i64[0];
            v83 = &v82[v81];
            v84 = v111;
            if ( v82 == v83 )
              goto LABEL_75;
            while ( *v82 == *v84 )
            {
              ++v82;
              ++v84;
              if ( v83 == v82 )
                goto LABEL_75;
            }
          }
        }
        v71 = v113;
        if ( !(unsigned __int8)sub_69F550(v70, v113) )
          goto LABEL_69;
        v85 = v70[1].m128i_i64[1];
        if ( v85 != v115 )
          goto LABEL_69;
        v86 = (_QWORD *)v70[1].m128i_i64[0];
        v71 = &v86[v85];
        if ( v86 != v71 )
        {
          v87 = v114;
          while ( *v86 == *v87 )
          {
            ++v86;
            ++v87;
            if ( v71 == v86 )
              goto LABEL_75;
          }
LABEL_69:
          v102 = *(_DWORD *)(a1 + 16);
          if ( !v102 )
          {
            *(__m128i *)&dword_0 = _mm_loadu_si128(v70);
            *(__m128i *)&word_10 = _mm_loadu_si128(v70 + 1);
            BUG();
          }
          v104 = *(_QWORD *)a1;
          v72 = sub_69F620();
          v118 = nullptr;
          v116 = v72;
          v117 = v73;
          v119 = 0;
          v74.m128i_i64[0] = sub_69F630(v70, v71);
          v121 = 0u;
          v120 = v74;
          v75 = sub_84A6B0(v70->m128i_i64, (__int64)v70[1].m128i_i64);
          v105 = v60;
          v107 = 1;
          v106 = v66;
          v76 = v70;
          v77 = nullptr;
          v108 = v102 - 1;
          v103 = (v102 - 1) & v75;
          while ( 1 )
          {
            v78 = (_QWORD *)(v104 + 40LL * v103);
            if ( (unsigned __int8)sub_69F550(v76, v78) )
            {
              v93 = v76[1].m128i_i64[1];
              if ( v93 == v78[3] )
              {
                v94 = (_QWORD *)v76[1].m128i_i64[0];
                v95 = &v94[v93];
                if ( v94 == v95 )
                {
LABEL_100:
                  v70 = v76;
                  v80 = (__m128i *)(v104 + 40LL * v103);
                  v66 = v106;
                  v60 = v105;
                  goto LABEL_101;
                }
                v96 = (_QWORD *)v78[2];
                while ( *v94 == *v96 )
                {
                  ++v94;
                  ++v96;
                  if ( v95 == v94 )
                    goto LABEL_100;
                }
              }
            }
            if ( (unsigned __int8)sub_81F860(v78, &v116) )
              break;
            v97 = sub_81F860(v78, &v120);
            if ( !v77 && v97 )
              v77 = (__m128i *)(v104 + 40LL * v103);
            v103 = (v107 + v103) & v108;
            ++v107;
          }
          v79 = v77;
          v80 = (__m128i *)(v104 + 40LL * v103);
          v70 = v76;
          v60 = v105;
          v66 = v106;
          if ( v79 )
            goto LABEL_74;
LABEL_101:
          v79 = v80;
LABEL_74:
          *v79 = _mm_loadu_si128(v70);
          v79[1] = _mm_loadu_si128(v70 + 1);
          v79[2].m128i_i32[0] = v70[2].m128i_i32[0];
          ++*(_DWORD *)(a1 + 8);
        }
LABEL_75:
        v70 = (__m128i *)((char *)v70 + 40);
        if ( v60 == v70 )
        {
          v3 = (__m128i *)a2;
          break;
        }
      }
    }
    operator delete();
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0;
    v88 = sub_69F620();
    v121 = 0u;
    v120.m128i_i64[1] = v89;
    v90 = *(unsigned int *)(a1 + 16);
    v120.m128i_i64[0] = v88;
    v91 = *(_QWORD *)a1;
    v92 = *(_QWORD *)a1 + 40 * v90;
    if ( *(_QWORD *)a1 != v92 )
    {
      do
      {
        v91 += 40;
        *(__m128i *)(v91 - 40) = _mm_load_si128(&v120);
        *(__m128i *)(v91 - 24) = _mm_load_si128(&v121);
      }
      while ( v92 != v91 );
    }
  }
LABEL_36:
  sub_84A8A0((__int64 *)a1, v3->m128i_i64, &v109);
  v26 = v109;
  v42 = *(_DWORD *)(a1 + 8) + 1;
LABEL_37:
  *(_DWORD *)(a1 + 8) = v42;
  v43.m128i_i64[0] = sub_69F620();
  v121 = 0u;
  v120 = v43;
  if ( !(unsigned __int8)sub_69F550((_QWORD *)v26, &v120) || (v44 = *(_QWORD *)(v26 + 24), v44 != v121.m128i_i64[1]) )
  {
LABEL_43:
    --*(_DWORD *)(a1 + 12);
    goto LABEL_44;
  }
  v45 = *(_QWORD **)(v26 + 16);
  v46 = &v45[v44];
  if ( v45 != v46 )
  {
    v47 = (_QWORD *)v121.m128i_i64[0];
    while ( *v45 == *v47 )
    {
      ++v45;
      ++v47;
      if ( v46 == v45 )
        goto LABEL_44;
    }
    goto LABEL_43;
  }
LABEL_44:
  *(__m128i *)v26 = _mm_loadu_si128(v3);
  v48 = _mm_loadu_si128(v3 + 1);
  *(_DWORD *)(v26 + 32) = 0;
  *(__m128i *)(v26 + 16) = v48;
  return (_QWORD *)(v26 + 32);
}

