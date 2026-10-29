__int64 __fastcall sub_9DDEC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5, __int64 a6)
{
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r12
  __int64 v12; // rdx
  _QWORD *v13; // r14
  unsigned int v14; // r15d
  unsigned int v15; // edi
  _QWORD *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // r12
  __int64 v19; // rax
  __int64 v20; // rcx
  signed __int64 v21; // r14
  char *v22; // rax
  __m128i v23; // xmm0
  char *v24; // r14
  __int64 v25; // rdx
  __int64 v26; // rdi
  __int64 v27; // rcx
  unsigned __int64 v28; // rsi
  unsigned __int64 v29; // rdx
  __m128 v30; // xmm0
  __int64 v32; // rax
  __m128 v33; // xmm0
  int v34; // r9d
  _QWORD *v35; // r10
  int v36; // eax
  __int64 v37; // r9
  __int64 v38; // rdx
  unsigned __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  unsigned __int32 v42; // edx
  __int64 v43; // rsi
  _QWORD *v44; // rdx
  _QWORD *v45; // r9
  __int64 v46; // r11
  _QWORD *v47; // rsi
  _QWORD *v48; // rdx
  int i; // r15d
  __int64 v50; // rsi
  unsigned int v51; // r8d
  __int64 v52; // rdi
  __int64 v53; // r10
  int v54; // esi
  int v55; // esi
  int v56; // r8d
  unsigned int v57; // edi
  __int64 v58; // r14
  _QWORD *v59; // rdx
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // r8
  __int64 v62; // rax
  __int64 v63; // rax
  unsigned __int32 v64; // edx
  __int64 v65; // rsi
  _QWORD *v66; // rdx
  _QWORD *v67; // r10
  __int64 v68; // r11
  _QWORD *v69; // rsi
  _QWORD *v70; // rdx
  unsigned __int32 v71; // r9d
  __int64 v72; // rdi
  __int64 v73; // r8
  int v74; // esi
  int v75; // esi
  int v76; // edi
  unsigned int v77; // r15d
  _QWORD *v78; // r8
  int v79; // r10d
  int v80; // r9d
  unsigned int v81; // r10d
  __int64 v82; // r14
  _QWORD *v83; // rdx
  _QWORD *v84; // r9
  int v85; // r11d
  int v86; // r10d
  unsigned int v87; // r11d
  __m128i v88; // [rsp+8h] [rbp-70h] BYREF
  __int64 v89; // [rsp+18h] [rbp-60h]
  _QWORD *v90; // [rsp+20h] [rbp-58h]
  _QWORD *v91; // [rsp+28h] [rbp-50h]
  __m128 v92[4]; // [rsp+30h] [rbp-48h] BYREF

  if ( a3 && *(_BYTE *)a3 == 5 && !*(_QWORD *)(a3 + 40) )
    *(_QWORD *)(a3 + 40) = a2;
  v9 = *(_QWORD *)(a1 + 120);
  v10 = a1 + 48;
  LODWORD(v11) = 0;
  if ( v9 )
    v11 = (__int64)(*(_QWORD *)(v9 + 16) - *(_QWORD *)(v9 + 8)) >> 4;
  v12 = *(unsigned int *)(a1 + 64);
  v13 = *(_QWORD **)(a1 + 48);
  if ( !(_DWORD)v12 )
    goto LABEL_33;
  a5 = (unsigned int)(v12 - 1);
  v14 = ((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4);
  v15 = a5 & v14;
  v16 = &v13[2 * ((unsigned int)a5 & v14)];
  v17 = *v16;
  if ( a2 == *v16 )
    goto LABEL_9;
  v34 = 1;
  v35 = nullptr;
  if ( v17 != -4096 )
  {
    while ( 1 )
    {
      if ( !v35 && v17 == -8192 )
        v35 = v16;
      v15 = a5 & (v34 + v15);
      v16 = &v13[2 * v15];
      v17 = *v16;
      if ( a2 == *v16 )
        goto LABEL_9;
      if ( v17 == -4096 )
        break;
      ++v34;
    }
    if ( v35 )
      v16 = v35;
  }
  v36 = *(_DWORD *)(a1 + 56) + 1;
  a6 = (unsigned int)(4 * v36);
  if ( (unsigned int)a6 >= 3 * (int)v12 )
  {
LABEL_33:
    v88.m128i_i64[1] = a1 + 48;
    v88.m128i_i32[0] = v12;
    v39 = (((((((unsigned int)(2 * v12 - 1) | ((unsigned __int64)(unsigned int)(2 * v12 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v12 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v12 - 1) >> 1)) >> 4)
          | (((unsigned int)(2 * v12 - 1) | ((unsigned __int64)(unsigned int)(2 * v12 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v12 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v12 - 1) >> 1)) >> 8)
        | (((((unsigned int)(2 * v12 - 1) | ((unsigned __int64)(unsigned int)(2 * v12 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v12 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v12 - 1) >> 1)) >> 4)
        | (((unsigned int)(2 * v12 - 1) | ((unsigned __int64)(unsigned int)(2 * v12 - 1) >> 1)) >> 2)
        | (unsigned int)(2 * v12 - 1)
        | ((unsigned __int64)(unsigned int)(2 * v12 - 1) >> 1);
    v40 = ((v39 >> 16) | v39) + 1;
    if ( (unsigned int)v40 < 0x40 )
      LODWORD(v40) = 64;
    *(_DWORD *)(a1 + 64) = v40;
    v41 = sub_22300B0(16LL * (unsigned int)v40, 8, v12, v10, a5, a6);
    v42 = v88.m128i_i32[0];
    v10 = v88.m128i_i64[1];
    *(_QWORD *)(a1 + 48) = v41;
    if ( v13 )
    {
      v43 = v42;
      *(_QWORD *)(a1 + 56) = 0;
      v44 = (_QWORD *)v41;
      v88.m128i_i64[0] = 16 * v43;
      v45 = &v13[2 * v43];
      v46 = *(unsigned int *)(a1 + 64);
      v47 = (_QWORD *)(v41 + 16 * v46);
      if ( (_QWORD *)v41 != v47 )
      {
        do
        {
          *v44 = -4096;
          v44 += 2;
        }
        while ( v47 != v44 );
      }
      v48 = v13;
      for ( i = v46 - 1; v45 != v48; v48 += 2 )
      {
        v50 = *v48;
        if ( *v48 != -8192 && v50 != -4096 )
        {
          if ( !(_DWORD)v46 )
          {
LABEL_132:
            *(_QWORD *)&dword_0 = v50;
            BUG();
          }
          v51 = i & (((unsigned int)v50 >> 9) ^ ((unsigned int)v50 >> 4));
          v52 = v41 + 16LL * v51;
          v53 = *(_QWORD *)v52;
          if ( v50 != *(_QWORD *)v52 && v53 != -4096 )
          {
            LODWORD(v89) = 1;
            v88.m128i_i64[1] = 0;
            v90 = v48;
            while ( 1 )
            {
              if ( v53 == -8192 )
              {
                if ( v88.m128i_i64[1] )
                  v52 = v88.m128i_i64[1];
                v88.m128i_i64[1] = v52;
              }
              v51 = i & (v89 + v51);
              v52 = v41 + 16LL * v51;
              v53 = *(_QWORD *)v52;
              if ( v50 == *(_QWORD *)v52 )
              {
                v48 = v90;
                goto LABEL_43;
              }
              if ( v53 == -4096 )
                break;
              LODWORD(v89) = v89 + 1;
            }
            v48 = v90;
            if ( v88.m128i_i64[1] )
              v52 = v88.m128i_i64[1];
          }
LABEL_43:
          *(_QWORD *)v52 = v50;
          v54 = *((_DWORD *)v48 + 2);
          ++*(_DWORD *)(a1 + 56);
          *(_DWORD *)(v52 + 8) = v54;
        }
      }
      v88.m128i_i64[1] = v10;
      operator delete(v13, v88.m128i_i64[0], 8);
      v13 = *(_QWORD **)(a1 + 48);
      v55 = *(_DWORD *)(a1 + 64);
      v10 = v88.m128i_i64[1];
      v36 = *(_DWORD *)(a1 + 56) + 1;
    }
    else
    {
      v58 = *(unsigned int *)(a1 + 64);
      *(_QWORD *)(a1 + 56) = 0;
      v55 = v58;
      v13 = (_QWORD *)(v41 + 16 * v58);
      if ( (_QWORD *)v41 != v13 )
      {
        v59 = (_QWORD *)v41;
        do
        {
          *v59 = -4096;
          v59 += 2;
        }
        while ( v13 != v59 );
        v13 = (_QWORD *)v41;
      }
      v36 = 1;
    }
    if ( v55 )
    {
      v56 = v55 - 1;
      v57 = (v55 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
      v16 = &v13[2 * v57];
      v38 = *v16;
      if ( a2 != *v16 )
      {
        if ( v38 != -4096 )
        {
          v84 = &v13[2 * (v56 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4)))];
          v85 = 1;
          v16 = nullptr;
          while ( 1 )
          {
            if ( v38 == -8192 && !v16 )
              v16 = v84;
            v86 = v85 + 1;
            v87 = v57 + v85;
            v57 = v56 & v87;
            v84 = &v13[2 * (v56 & v87)];
            v38 = *v84;
            if ( a2 == *v84 )
            {
              v16 = &v13[2 * (v56 & v87)];
              goto LABEL_30;
            }
            if ( v38 == -4096 )
              break;
            v85 = v86;
          }
          if ( v16 )
            goto LABEL_29;
          v16 = &v13[2 * (v56 & v87)];
        }
        goto LABEL_49;
      }
LABEL_30:
      *(_DWORD *)(a1 + 56) = v36;
      if ( v38 != -4096 )
        --*(_DWORD *)(a1 + 60);
      goto LABEL_32;
    }
LABEL_133:
    ++*(_DWORD *)(a1 + 56);
    BUG();
  }
  v37 = (unsigned int)v12 >> 3;
  if ( (int)v12 - *(_DWORD *)(a1 + 60) - v36 > (unsigned int)v37 )
  {
LABEL_29:
    v38 = *v16;
    goto LABEL_30;
  }
  v88.m128i_i32[2] = v12;
  v88.m128i_i64[0] = a1 + 48;
  v60 = (((a5 >> 1) | a5 | (((a5 >> 1) | a5) >> 2)) >> 4) | (a5 >> 1) | a5 | (((a5 >> 1) | a5) >> 2);
  v61 = v60 >> 8;
  v62 = (((v61 | v60) >> 16) | v61 | v60) + 1;
  if ( (unsigned int)v62 < 0x40 )
    LODWORD(v62) = 64;
  *(_DWORD *)(a1 + 64) = v62;
  v63 = sub_22300B0(16LL * (unsigned int)v62, 8, v12, v10, v61, v37);
  v10 = v88.m128i_i64[0];
  v64 = v88.m128i_u32[2];
  *(_QWORD *)(a1 + 48) = v63;
  if ( v13 )
  {
    v65 = v64;
    *(_QWORD *)(a1 + 56) = 0;
    v66 = (_QWORD *)v63;
    v88.m128i_i64[1] = 16 * v65;
    v67 = &v13[2 * v65];
    v68 = *(unsigned int *)(a1 + 64);
    v69 = (_QWORD *)(v63 + 16 * v68);
    if ( (_QWORD *)v63 != v69 )
    {
      do
      {
        *v66 = -4096;
        v66 += 2;
      }
      while ( v69 != v66 );
    }
    v70 = v13;
    v88.m128i_i32[0] = v68 - 1;
    do
    {
      v50 = *v70;
      if ( *v70 != -4096 && v50 != -8192 )
      {
        if ( !(_DWORD)v68 )
          goto LABEL_132;
        v71 = v88.m128i_i32[0] & (((unsigned int)v50 >> 9) ^ ((unsigned int)v50 >> 4));
        v72 = v63 + 16LL * v71;
        v73 = *(_QWORD *)v72;
        if ( v50 != *(_QWORD *)v72 && v73 != -4096 )
        {
          LODWORD(v90) = 1;
          v89 = 0;
          v91 = v70;
          while ( 1 )
          {
            if ( !v89 )
            {
              if ( v73 != -8192 )
                v72 = v89;
              v89 = v72;
            }
            v71 = v88.m128i_i32[0] & ((_DWORD)v90 + v71);
            v72 = v63 + 16LL * v71;
            v73 = *(_QWORD *)v72;
            if ( v50 == *(_QWORD *)v72 )
            {
              v70 = v91;
              goto LABEL_74;
            }
            if ( v73 == -4096 )
              break;
            LODWORD(v90) = (_DWORD)v90 + 1;
          }
          v70 = v91;
          if ( v89 )
            v72 = v89;
        }
LABEL_74:
        *(_QWORD *)v72 = v50;
        v74 = *((_DWORD *)v70 + 2);
        ++*(_DWORD *)(a1 + 56);
        *(_DWORD *)(v72 + 8) = v74;
      }
      v70 += 2;
    }
    while ( v67 != v70 );
    v88.m128i_i64[0] = v10;
    operator delete(v13, v88.m128i_i64[1], 8);
    v13 = *(_QWORD **)(a1 + 48);
    v75 = *(_DWORD *)(a1 + 64);
    v10 = v88.m128i_i64[0];
    v36 = *(_DWORD *)(a1 + 56) + 1;
  }
  else
  {
    v82 = *(unsigned int *)(a1 + 64);
    *(_QWORD *)(a1 + 56) = 0;
    v75 = v82;
    v13 = (_QWORD *)(v63 + 16 * v82);
    if ( (_QWORD *)v63 != v13 )
    {
      v83 = (_QWORD *)v63;
      do
      {
        *v83 = -4096;
        v83 += 2;
      }
      while ( v13 != v83 );
      v13 = (_QWORD *)v63;
    }
    v36 = 1;
  }
  if ( !v75 )
    goto LABEL_133;
  v76 = v75 - 1;
  v77 = (v75 - 1) & v14;
  v16 = &v13[2 * v77];
  v38 = *v16;
  if ( a2 == *v16 )
    goto LABEL_30;
  if ( v38 != -4096 )
  {
    v78 = &v13[2 * v77];
    v79 = 1;
    v16 = nullptr;
    while ( 1 )
    {
      if ( !v16 && v38 == -8192 )
        v16 = v78;
      v80 = v79 + 1;
      v81 = v76 & (v77 + v79);
      v77 = v81;
      v78 = &v13[2 * v81];
      v38 = *v78;
      if ( a2 == *v78 )
      {
        v16 = &v13[2 * v81];
        goto LABEL_30;
      }
      if ( v38 == -4096 )
        break;
      v79 = v80;
    }
    if ( v16 )
      goto LABEL_29;
    v16 = &v13[2 * v81];
  }
LABEL_49:
  *(_DWORD *)(a1 + 56) = v36;
LABEL_32:
  *((_DWORD *)v16 + 2) = v11;
  v12 = *(unsigned int *)(a1 + 64);
  *v16 = a2;
LABEL_9:
  sub_9DD7F0(v92, v16, &v13[2 * v12], v10, 1);
  v18 = *(_QWORD *)(a1 + 120);
  if ( !v18 )
  {
    v32 = operator new(0x20u);
    *(_OWORD *)v32 = 0;
    v18 = v32;
    *(_OWORD *)(v32 + 8) = 0;
    v88.m128i_i64[0] = a3;
    *(_DWORD *)v32 = 1;
    *(_QWORD *)(v32 + 24) = 0;
    v33 = _mm_loadh_ps((const double *)v88.m128i_i64);
    *(_QWORD *)(a1 + 120) = v32;
    v22 = nullptr;
    v92[0] = v33;
LABEL_25:
    sub_9DDD20((char **)(v18 + 8), v22, (const __m128i *)v92);
    return a3;
  }
  if ( *(_DWORD *)v18 == 1 )
  {
    v22 = *(char **)(v18 + 16);
    v24 = *(char **)(v18 + 24);
  }
  else
  {
    --*(_DWORD *)v18;
    v19 = operator new(0x20u);
    v20 = *(_QWORD *)(a1 + 120);
    v18 = v19;
    *(_DWORD *)v19 = 1;
    v21 = *(_QWORD *)(v20 + 16) - *(_QWORD *)(v20 + 8);
    *(_OWORD *)(v19 + 8) = 0;
    *(_QWORD *)(v19 + 24) = 0;
    if ( v21 >> 4 )
    {
      if ( (unsigned __int64)(v21 >> 4) > 0xFFFFFFFFFFFFFFFLL )
        std::__throw_bad_alloc();
      v88.m128i_i64[0] = v20;
      v22 = (char *)operator new(v21);
      v20 = v88.m128i_i64[0];
    }
    else
    {
      v22 = nullptr;
    }
    v88.m128i_i64[0] = (__int64)v22;
    v23 = _mm_loadl_epi64(&v88);
    v24 = &v22[v21];
    *(_QWORD *)(v18 + 24) = v24;
    *(__m128i *)(v18 + 8) = _mm_unpacklo_epi64(v23, v23);
    v25 = *(_QWORD *)(v20 + 16);
    v26 = *(_QWORD *)(v20 + 8);
    if ( v25 != v26 )
    {
      v27 = 0;
      v28 = 0;
      v29 = ((unsigned __int64)(v25 - 16 - v26) >> 4) + 1;
      do
      {
        ++v28;
        *(__m128i *)&v22[v27] = _mm_loadu_si128((const __m128i *)(v26 + v27));
        v27 += 16;
      }
      while ( v28 < v29 );
      v22 += 16 * v29;
    }
    *(_QWORD *)(v18 + 16) = v22;
    *(_QWORD *)(a1 + 120) = v18;
  }
  v88.m128i_i64[0] = a3;
  v30 = _mm_loadh_ps((const double *)v88.m128i_i64);
  v92[0] = v30;
  if ( v24 == v22 )
    goto LABEL_25;
  *(__m128 *)v22 = v30;
  *(_QWORD *)(v18 + 16) = v22 + 16;
  return a3;
}
