_QWORD *__fastcall sub_84B5E0(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 v5; // rbx
  int v6; // eax
  int v7; // eax
  int v8; // edx
  __int64 v9; // rdi
  __int64 v10; // rsi
  _QWORD *v11; // rbx
  __m128i v12; // rax
  __int64 v13; // rdx
  _QWORD *v14; // rax
  _QWORD *v15; // rsi
  _QWORD *i; // rdx
  __int64 v18; // r14
  unsigned __int64 v19; // rax
  unsigned int v20; // eax
  __m128i *v21; // r13
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rdx
  __m128i v28; // rax
  __m128i *v29; // r14
  __m128i *v30; // rax
  __int64 v31; // rdx
  _QWORD *v32; // rax
  _QWORD *v33; // rsi
  _QWORD *v34; // rdx
  __int64 v35; // rdx
  _QWORD *v36; // rax
  _QWORD *v37; // rsi
  _QWORD *v38; // rdx
  __int64 v39; // r14
  unsigned __int64 v40; // rax
  __int64 v41; // rdi
  __m128i *v42; // r13
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rdx
  __m128i v49; // rax
  __m128i *v50; // r14
  __m128i *v51; // rax
  __int64 v52; // rdx
  _QWORD *v53; // rax
  _QWORD *v54; // rsi
  _QWORD *v55; // rdx
  __int64 v56; // rdx
  _QWORD *v57; // rax
  _QWORD *v58; // rsi
  _QWORD *v59; // rdx
  __int64 v60; // r14
  int v61; // r13d
  __int64 v62; // rax
  int v63; // r13d
  __int64 v64; // rdx
  __m128i v65; // rax
  __int64 v66; // rdx
  _QWORD *v67; // rax
  _QWORD *v68; // rsi
  _QWORD *v69; // rdx
  __int64 v70; // rdx
  _QWORD *v71; // rax
  __int64 *v72; // rdx
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rdx
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rdx
  __int64 v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rdx
  _QWORD *v83; // rax
  __int64 *v84; // rdx
  __int64 v85; // [rsp+0h] [rbp-A8h]
  __m128i *v86; // [rsp+0h] [rbp-A8h]
  unsigned int v87; // [rsp+0h] [rbp-A8h]
  _QWORD *v88; // [rsp+8h] [rbp-A0h]
  int v89; // [rsp+14h] [rbp-94h]
  _QWORD *v90; // [rsp+18h] [rbp-90h] BYREF
  __m128i *v91; // [rsp+28h] [rbp-80h] BYREF
  __int64 v92; // [rsp+30h] [rbp-78h] BYREF
  __int64 v93; // [rsp+38h] [rbp-70h]
  _QWORD *v94; // [rsp+40h] [rbp-68h]
  __int64 v95; // [rsp+48h] [rbp-60h]
  __m128i v96; // [rsp+50h] [rbp-58h] BYREF
  __m128i v97; // [rsp+60h] [rbp-48h] BYREF

  v5 = *(unsigned int *)(a1 + 16);
  v6 = *(_DWORD *)(a1 + 8);
  v90 = a3;
  v7 = v6 + 1;
  v9 = (unsigned int)(4 * v7);
  if ( (unsigned int)v9 < 3 * (int)v5 )
  {
    v10 = (unsigned int)v5 >> 3;
    if ( (unsigned int)v10 < (int)v5 - *(_DWORD *)(a1 + 12) - v7 )
    {
      v11 = v90;
      goto LABEL_4;
    }
    v39 = *(_QWORD *)a1;
    v86 = *(__m128i **)a1;
    v40 = ((((((((((unsigned int)(v5 - 1) | ((unsigned __int64)(unsigned int)(v5 - 1) >> 1)) >> 2)
               | (unsigned int)(v5 - 1)
               | ((unsigned __int64)(unsigned int)(v5 - 1) >> 1)) >> 4)
             | (((unsigned int)(v5 - 1) | ((unsigned __int64)(unsigned int)(v5 - 1) >> 1)) >> 2)
             | (unsigned int)(v5 - 1)
             | ((unsigned __int64)(unsigned int)(v5 - 1) >> 1)) >> 8)
           | (((((unsigned int)(v5 - 1) | ((unsigned __int64)(unsigned int)(v5 - 1) >> 1)) >> 2)
             | (unsigned int)(v5 - 1)
             | ((unsigned __int64)(unsigned int)(v5 - 1) >> 1)) >> 4)
           | (((unsigned int)(v5 - 1) | ((unsigned __int64)(unsigned int)(v5 - 1) >> 1)) >> 2)
           | (unsigned int)(v5 - 1)
           | ((unsigned __int64)(unsigned int)(v5 - 1) >> 1)) >> 16)
         | (((((((unsigned int)(v5 - 1) | ((unsigned __int64)(unsigned int)(v5 - 1) >> 1)) >> 2)
             | (unsigned int)(v5 - 1)
             | ((unsigned __int64)(unsigned int)(v5 - 1) >> 1)) >> 4)
           | (((unsigned int)(v5 - 1) | ((unsigned __int64)(unsigned int)(v5 - 1) >> 1)) >> 2)
           | (unsigned int)(v5 - 1)
           | ((unsigned __int64)(unsigned int)(v5 - 1) >> 1)) >> 8)
         | (((((unsigned int)(v5 - 1) | ((unsigned __int64)(unsigned int)(v5 - 1) >> 1)) >> 2)
           | (unsigned int)(v5 - 1)
           | ((unsigned __int64)(unsigned int)(v5 - 1) >> 1)) >> 4)
         | (((unsigned int)(v5 - 1) | ((unsigned __int64)(unsigned int)(v5 - 1) >> 1)) >> 2)
         | (unsigned int)(v5 - 1)
         | ((unsigned __int64)(unsigned int)(v5 - 1) >> 1))
        + 1;
    if ( (unsigned int)v40 < 0x40 )
      LODWORD(v40) = 64;
    *(_DWORD *)(a1 + 16) = v40;
    v41 = 40LL * (unsigned int)v40;
    *(_QWORD *)a1 = sub_25CC9C0(v41, 8);
    if ( !v39 )
    {
      *(_QWORD *)(a1 + 8) = 0;
      v77 = sub_69F620(v41, 8);
      v97 = 0u;
      v96.m128i_i64[1] = v78;
      v79 = *(unsigned int *)(a1 + 16);
      v96.m128i_i64[0] = v77;
      v80 = *(_QWORD *)a1;
      v81 = *(_QWORD *)a1 + 40 * v79;
      if ( *(_QWORD *)a1 != v81 )
      {
        do
        {
          v80 += 40;
          *(__m128i *)(v80 - 40) = _mm_load_si128(&v96);
          *(__m128i *)(v80 - 24) = _mm_load_si128(&v97);
        }
        while ( v81 != v80 );
      }
      goto LABEL_62;
    }
    *(_QWORD *)(a1 + 8) = 0;
    v42 = (__m128i *)((char *)v86 + 40 * v5);
    v43 = sub_69F620(v86, 8);
    v97 = 0u;
    v96.m128i_i64[1] = v44;
    v45 = *(unsigned int *)(a1 + 16);
    v96.m128i_i64[0] = v43;
    v46 = *(_QWORD *)a1;
    v47 = *(_QWORD *)a1 + 40 * v45;
    if ( *(_QWORD *)a1 != v47 )
    {
      do
      {
        v46 += 40;
        *(__m128i *)(v46 - 40) = _mm_load_si128(&v96);
        *(__m128i *)(v46 - 24) = _mm_load_si128(&v97);
      }
      while ( v47 != v46 );
    }
    v94 = nullptr;
    v92 = sub_69F620(v86, 8);
    v93 = v48;
    v95 = 0;
    v49.m128i_i64[0] = sub_69F630(v86, 8);
    v97 = 0u;
    v96 = v49;
    v50 = v86;
    if ( v86 == v42 )
    {
LABEL_61:
      operator delete();
LABEL_62:
      v10 = (__int64)a2;
      v9 = a1;
      sub_84A8A0((__int64 *)a1, a2, &v90);
      v11 = v90;
      goto LABEL_60;
    }
    while ( 1 )
    {
      if ( (unsigned __int8)sub_69F550(v50, &v92) )
      {
        v52 = v50[1].m128i_i64[1];
        if ( v52 == v95 )
        {
          v53 = (_QWORD *)v50[1].m128i_i64[0];
          v54 = &v53[v52];
          v55 = v94;
          if ( v53 == v54 )
            goto LABEL_44;
          while ( *v53 == *v55 )
          {
            ++v53;
            ++v55;
            if ( v54 == v53 )
              goto LABEL_44;
          }
        }
      }
      if ( (unsigned __int8)sub_69F550(v50, &v96) )
      {
        v56 = v50[1].m128i_i64[1];
        if ( v56 == v97.m128i_i64[1] )
        {
          v57 = (_QWORD *)v50[1].m128i_i64[0];
          v58 = &v57[v56];
          if ( v57 == v58 )
            goto LABEL_44;
          v59 = (_QWORD *)v97.m128i_i64[0];
          while ( *v57 == *v59 )
          {
            ++v57;
            ++v59;
            if ( v58 == v57 )
              goto LABEL_44;
          }
        }
      }
      sub_84A8A0((__int64 *)a1, v50->m128i_i64, &v91);
      v51 = v91;
      *v91 = _mm_loadu_si128(v50);
      v51[1] = _mm_loadu_si128(v50 + 1);
      v51[2].m128i_i32[0] = v50[2].m128i_i32[0];
      ++*(_DWORD *)(a1 + 8);
LABEL_44:
      v50 = (__m128i *)((char *)v50 + 40);
      if ( v42 == v50 )
        goto LABEL_61;
    }
  }
  v18 = *(_QWORD *)a1;
  v10 = 8;
  v85 = *(_QWORD *)a1;
  v8 = 2 * v5;
  v19 = (((((((((unsigned int)(v8 - 1) | ((unsigned __int64)(unsigned int)(v8 - 1) >> 1)) >> 2)
            | (unsigned int)(v8 - 1)
            | ((unsigned __int64)(unsigned int)(v8 - 1) >> 1)) >> 4)
          | (((unsigned int)(v8 - 1) | ((unsigned __int64)(unsigned int)(v8 - 1) >> 1)) >> 2)
          | (unsigned int)(v8 - 1)
          | ((unsigned __int64)(unsigned int)(v8 - 1) >> 1)) >> 8)
        | (((((unsigned int)(v8 - 1) | ((unsigned __int64)(unsigned int)(v8 - 1) >> 1)) >> 2)
          | (unsigned int)(v8 - 1)
          | ((unsigned __int64)(unsigned int)(v8 - 1) >> 1)) >> 4)
        | (((unsigned int)(v8 - 1) | ((unsigned __int64)(unsigned int)(v8 - 1) >> 1)) >> 2)
        | (unsigned int)(v8 - 1)
        | ((unsigned __int64)(unsigned int)(v8 - 1) >> 1)) >> 16)
      | (((((((unsigned int)(v8 - 1) | ((unsigned __int64)(unsigned int)(v8 - 1) >> 1)) >> 2)
          | (unsigned int)(v8 - 1)
          | ((unsigned __int64)(unsigned int)(v8 - 1) >> 1)) >> 4)
        | (((unsigned int)(v8 - 1) | ((unsigned __int64)(unsigned int)(v8 - 1) >> 1)) >> 2)
        | (unsigned int)(v8 - 1)
        | ((unsigned __int64)(unsigned int)(v8 - 1) >> 1)) >> 8)
      | (((((unsigned int)(v8 - 1) | ((unsigned __int64)(unsigned int)(v8 - 1) >> 1)) >> 2)
        | (unsigned int)(v8 - 1)
        | ((unsigned __int64)(unsigned int)(v8 - 1) >> 1)) >> 4)
      | (((unsigned int)(v8 - 1) | ((unsigned __int64)(unsigned int)(v8 - 1) >> 1)) >> 2)
      | (unsigned int)(v8 - 1)
      | ((unsigned __int64)(unsigned int)(v8 - 1) >> 1);
  v20 = v19 + 1;
  if ( v20 < 0x40 )
    v20 = 64;
  *(_DWORD *)(a1 + 16) = v20;
  v9 = 40LL * v20;
  *(_QWORD *)a1 = sub_25CC9C0(v9, 8);
  if ( !v18 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    v73 = ((__int64 (*)(void))sub_69F620)();
    v97 = 0u;
    v96.m128i_i64[1] = v74;
    v75 = *(unsigned int *)(a1 + 16);
    v96.m128i_i64[0] = v73;
    v76 = *(_QWORD *)a1;
    v61 = v75;
    v60 = *(_QWORD *)a1 + 40 * v75;
    if ( *(_QWORD *)a1 != v60 )
    {
      do
      {
        v76 += 40;
        *(__m128i *)(v76 - 40) = _mm_load_si128(&v96);
        *(__m128i *)(v76 - 24) = _mm_load_si128(&v97);
      }
      while ( v60 != v76 );
      v60 = *(_QWORD *)a1;
      v61 = *(_DWORD *)(a1 + 16);
    }
    goto LABEL_59;
  }
  *(_QWORD *)(a1 + 8) = 0;
  v21 = (__m128i *)(v85 + 40 * v5);
  v22 = ((__int64 (*)(void))sub_69F620)();
  v97 = 0u;
  v96.m128i_i64[1] = v23;
  v24 = *(unsigned int *)(a1 + 16);
  v96.m128i_i64[0] = v22;
  v25 = *(_QWORD *)a1;
  v26 = *(_QWORD *)a1 + 40 * v24;
  if ( *(_QWORD *)a1 != v26 )
  {
    do
    {
      v25 += 40;
      *(__m128i *)(v25 - 40) = _mm_load_si128(&v96);
      *(__m128i *)(v25 - 24) = _mm_load_si128(&v97);
    }
    while ( v26 != v25 );
  }
  v94 = nullptr;
  v92 = ((__int64 (*)(void))sub_69F620)();
  v93 = v27;
  v95 = 0;
  v28.m128i_i64[0] = sub_69F630(v85, 8);
  v97 = 0u;
  v96 = v28;
  v29 = (__m128i *)v85;
  if ( (__m128i *)v85 != v21 )
  {
    do
    {
      if ( (unsigned __int8)sub_69F550(v29, &v92) )
      {
        v31 = v29[1].m128i_i64[1];
        if ( v31 == v95 )
        {
          v32 = (_QWORD *)v29[1].m128i_i64[0];
          v33 = &v32[v31];
          v34 = v94;
          if ( v32 == v33 )
            goto LABEL_21;
          while ( *v32 == *v34 )
          {
            ++v32;
            ++v34;
            if ( v33 == v32 )
              goto LABEL_21;
          }
        }
      }
      if ( (unsigned __int8)sub_69F550(v29, &v96) )
      {
        v35 = v29[1].m128i_i64[1];
        if ( v35 == v97.m128i_i64[1] )
        {
          v36 = (_QWORD *)v29[1].m128i_i64[0];
          v37 = &v36[v35];
          if ( v36 == v37 )
            goto LABEL_21;
          v38 = (_QWORD *)v97.m128i_i64[0];
          while ( *v36 == *v38 )
          {
            ++v36;
            ++v38;
            if ( v37 == v36 )
              goto LABEL_21;
          }
        }
      }
      sub_84A8A0((__int64 *)a1, v29->m128i_i64, &v91);
      v30 = v91;
      *v91 = _mm_loadu_si128(v29);
      v30[1] = _mm_loadu_si128(v29 + 1);
      v30[2].m128i_i32[0] = v29[2].m128i_i32[0];
      ++*(_DWORD *)(a1 + 8);
LABEL_21:
      v29 = (__m128i *)((char *)v29 + 40);
    }
    while ( v21 != v29 );
  }
  v10 = 40 * v5;
  v9 = v85;
  operator delete();
  v60 = *(_QWORD *)a1;
  v61 = *(_DWORD *)(a1 + 16);
LABEL_59:
  v11 = nullptr;
  if ( !v61 )
    goto LABEL_60;
  v62 = sub_69F620(v9, v10);
  v63 = v61 - 1;
  v94 = nullptr;
  v92 = v62;
  v93 = v64;
  v95 = 0;
  v65.m128i_i64[0] = sub_69F630(v9, v10);
  v97 = 0u;
  v96 = v65;
  v89 = 1;
  v88 = nullptr;
  v87 = v63 & sub_84A6B0(a2, (__int64)(a2 + 2));
  while ( 1 )
  {
    v9 = (__int64)a2;
    v11 = (_QWORD *)(v60 + 40LL * v87);
    if ( (unsigned __int8)sub_69F550(a2, v11) )
    {
      v70 = a2[3];
      if ( v70 == v11[3] )
      {
        v71 = (_QWORD *)a2[2];
        v10 = (__int64)&v71[v70];
        if ( v71 == (_QWORD *)v10 )
          goto LABEL_60;
        v72 = (__int64 *)v11[2];
        while ( 1 )
        {
          v9 = *v72;
          if ( *v71 != *v72 )
            break;
          ++v71;
          ++v72;
          if ( (_QWORD *)v10 == v71 )
            goto LABEL_60;
        }
      }
    }
    v9 = v60 + 40LL * v87;
    if ( (unsigned __int8)sub_69F550(v11, &v92) )
    {
      v82 = v11[3];
      if ( v82 == v95 )
        break;
    }
LABEL_66:
    if ( (unsigned __int8)sub_69F550(v11, &v96) )
    {
      v66 = v11[3];
      if ( v66 == v97.m128i_i64[1] )
      {
        v67 = (_QWORD *)v11[2];
        v68 = &v67[v66];
        if ( v67 == v68 )
        {
LABEL_94:
          if ( v88 )
            v11 = v88;
          v88 = v11;
        }
        else
        {
          v69 = (_QWORD *)v97.m128i_i64[0];
          while ( *v67 == *v69 )
          {
            ++v67;
            ++v69;
            if ( v68 == v67 )
              goto LABEL_94;
          }
        }
      }
    }
    v87 = v63 & (v89 + v87);
    ++v89;
  }
  v83 = (_QWORD *)v11[2];
  v10 = (__int64)&v83[v82];
  if ( v83 != (_QWORD *)v10 )
  {
    v84 = v94;
    do
    {
      v9 = *v84;
      if ( *v83 != *v84 )
        goto LABEL_66;
      ++v83;
      ++v84;
    }
    while ( (_QWORD *)v10 != v83 );
  }
  if ( v88 )
    v11 = v88;
LABEL_60:
  v7 = *(_DWORD *)(a1 + 8) + 1;
LABEL_4:
  *(_DWORD *)(a1 + 8) = v7;
  v12.m128i_i64[0] = sub_69F620(v9, v10);
  v97 = 0u;
  v96 = v12;
  if ( (unsigned __int8)sub_69F550(v11, &v96) && (v13 = v11[3], v13 == v97.m128i_i64[1]) )
  {
    v14 = (_QWORD *)v11[2];
    v15 = &v14[v13];
    if ( v14 != v15 )
    {
      for ( i = (_QWORD *)v97.m128i_i64[0]; *v14 == *i; ++i )
      {
        if ( v15 == ++v14 )
          return v11;
      }
      goto LABEL_10;
    }
  }
  else
  {
LABEL_10:
    --*(_DWORD *)(a1 + 12);
  }
  return v11;
}

