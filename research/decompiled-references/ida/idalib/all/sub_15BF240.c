__int64 __fastcall sub_15BF240(__int64 a1, __int64 a2, const __m128i *a3)
{
  __int64 v3; // r12
  __int64 (__fastcall *v6)(__int64); // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 *v10; // r9
  void (__fastcall *v11)(__m128i *, const __m128i *, __int64); // rax
  __int64 v12; // rbp
  __int64 *v13; // r13
  __int64 v14; // rdx
  unsigned __int64 v15; // rdi
  unsigned int v16; // eax
  __int64 *v17; // rsi
  __int64 v18; // rcx
  __int64 result; // rax
  int v20; // r8d
  __int64 v21; // r8
  __int64 v22; // rdi
  __m128i v23; // xmm2
  __m128i v24; // xmm0
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r14
  __int64 *v33; // r15
  _QWORD *j; // rdx
  __int64 *k; // rbp
  __int64 v36; // rax
  int v37; // edx
  int v38; // esi
  __int64 v39; // rdi
  unsigned int v40; // ecx
  __int64 *v41; // rdx
  __int64 v42; // r8
  __m128i v43; // xmm3
  __m128i v44; // xmm0
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  void (__fastcall *v49)(__int64 *, __int64 *, __int64); // rax
  int v50; // esi
  int v51; // r9d
  unsigned int v52; // r8d
  __int64 v53; // rdx
  _QWORD *v54; // rcx
  _QWORD *v55; // rdx
  unsigned __int64 v56; // rax
  __int64 v57; // rax
  _QWORD *v58; // rax
  __int64 v59; // rdx
  __int64 v60; // r14
  __int64 *v61; // r15
  _QWORD *i; // rdx
  __int64 *v63; // rbp
  __int64 v64; // rax
  int v65; // edx
  int v66; // esi
  __int64 v67; // rdi
  unsigned int v68; // ecx
  __int64 *v69; // rdx
  __int64 v70; // r8
  __m128i v71; // xmm4
  __m128i v72; // xmm0
  __int64 v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rcx
  __int64 v76; // rax
  void (__fastcall *v77)(__int64 *, __int64 *, __int64); // rax
  int v78; // esi
  int v79; // r9d
  unsigned int v80; // r8d
  __int64 *v81; // r10
  int v82; // r11d
  __int64 v83; // rdx
  _QWORD *v84; // rcx
  _QWORD *v85; // rdx
  int v86; // r10d
  __int64 *v87; // r9
  int v88; // r10d
  __int64 *v89; // r9
  int v90; // r11d
  __m128 v91; // [rsp+0h] [rbp-78h] BYREF
  __int64 v92; // [rsp+10h] [rbp-68h]
  __m128i v93; // [rsp+18h] [rbp-60h] BYREF
  __m128i v94; // [rsp+28h] [rbp-50h]

  v3 = a1 + 32;
  v6 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL);
  if ( v6 == sub_A01140 )
    v7 = sub_B70A60(a2);
  else
    v7 = v6(a2);
  v92 = v7;
  v11 = (void (__fastcall *)(__m128i *, const __m128i *, __int64))a3[1].m128i_i64[0];
  v94.m128i_i64[0] = 0;
  if ( v11 )
  {
    v11(&v93, a3, 2);
    v94 = _mm_loadu_si128(a3 + 1);
  }
  v12 = *(unsigned int *)(a1 + 48);
  v13 = *(__int64 **)(a1 + 32);
  if ( (_DWORD)v12 )
  {
    v14 = v92;
    v15 = (unsigned int)(v12 - 1);
    v16 = v15 & (((unsigned int)v92 >> 9) ^ ((unsigned int)v92 >> 4));
    v17 = &v13[5 * v16];
    v18 = *v17;
    if ( v92 == *v17 )
    {
LABEL_7:
      sub_15BDBC0(&v91, v17, &v13[5 * v12], v3, 1);
      goto LABEL_8;
    }
    v20 = 1;
    v10 = nullptr;
    if ( v18 != -4096 )
    {
      while ( 1 )
      {
        if ( !v10 && v18 == -8192 )
          v10 = v17;
        v16 = v15 & (v20 + v16);
        v17 = &v13[5 * v16];
        v18 = *v17;
        if ( v92 == *v17 )
          goto LABEL_7;
        if ( v18 == -4096 )
          break;
        ++v20;
      }
      if ( v10 )
        v17 = v10;
    }
    v8 = (unsigned int)(*(_DWORD *)(a1 + 40) + 1);
    v9 = (unsigned int)(4 * v8);
    if ( (unsigned int)v9 < 3 * (int)v12 )
    {
      v21 = (unsigned int)v12 >> 3;
      if ( (int)v12 - *(_DWORD *)(a1 + 44) - (int)v8 > (unsigned int)v21 )
      {
LABEL_15:
        v22 = *v17;
        goto LABEL_16;
      }
      v56 = (((v15 >> 1) | v15 | (((v15 >> 1) | v15) >> 2)) >> 4) | (v15 >> 1) | v15 | (((v15 >> 1) | v15) >> 2);
      v57 = ((((v56 >> 8) | v56) >> 16) | (v56 >> 8) | v56) + 1;
      if ( (unsigned int)v57 < 0x40 )
        LODWORD(v57) = 64;
      *(_DWORD *)(a1 + 48) = v57;
      v58 = (_QWORD *)sub_22300B0(40LL * (unsigned int)v57, 8, 64, v8, v21, v10);
      *(_QWORD *)(a1 + 32) = v58;
      if ( v13 )
      {
        v59 = *(unsigned int *)(a1 + 48);
        *(_QWORD *)(a1 + 40) = 0;
        v60 = 40 * v12;
        v61 = &v13[5 * v12];
        for ( i = &v58[5 * v59]; i != v58; v58 += 5 )
          *v58 = -4096;
        v63 = v13;
        do
        {
          v64 = *v63;
          if ( *v63 != -4096 && v64 != -8192 )
          {
            v65 = *(_DWORD *)(a1 + 48);
            if ( !v65 )
            {
              *(_QWORD *)&dword_0 = *v63;
              BUG();
            }
            v66 = v65 - 1;
            v67 = *(_QWORD *)(a1 + 32);
            v68 = (v65 - 1) & (((unsigned int)v64 >> 9) ^ ((unsigned int)v64 >> 4));
            v69 = (__int64 *)(v67 + 40LL * v68);
            v70 = *v69;
            if ( v64 != *v69 )
            {
              v88 = 1;
              v89 = nullptr;
              if ( v70 != -4096 )
              {
                while ( 1 )
                {
                  if ( v70 == -8192 && !v89 )
                    v89 = v69;
                  v68 = v66 & (v88 + v68);
                  v69 = (__int64 *)(v67 + 40LL * v68);
                  v70 = *v69;
                  if ( v64 == *v69 )
                    break;
                  if ( v70 == -4096 )
                  {
                    if ( v89 )
                      v69 = v89;
                    break;
                  }
                  ++v88;
                }
              }
            }
            v69[3] = 0;
            v71 = _mm_loadu_si128((const __m128i *)(v69 + 1));
            *v69 = v64;
            v72 = _mm_loadu_si128((const __m128i *)(v63 + 1));
            *(__m128i *)(v63 + 1) = v71;
            v73 = v69[3];
            *(__m128i *)(v69 + 1) = v72;
            v74 = v63[3];
            v63[3] = v73;
            v75 = v69[4];
            v69[3] = v74;
            v76 = v63[4];
            v63[4] = v75;
            v69[4] = v76;
            ++*(_DWORD *)(a1 + 40);
            v77 = (void (__fastcall *)(__int64 *, __int64 *, __int64))v63[3];
            if ( v77 )
              v77(v63 + 1, v63 + 1, 3);
          }
          v63 += 5;
        }
        while ( v61 != v63 );
        operator delete(v13, v60, 8);
        v58 = *(_QWORD **)(a1 + 32);
        v78 = *(_DWORD *)(a1 + 48);
        LODWORD(v8) = *(_DWORD *)(a1 + 40) + 1;
      }
      else
      {
        v83 = *(unsigned int *)(a1 + 48);
        *(_QWORD *)(a1 + 40) = 0;
        v78 = v83;
        v84 = &v58[5 * v83];
        if ( v58 != v84 )
        {
          v85 = v58;
          do
          {
            *v85 = -4096;
            v85 += 5;
          }
          while ( v84 != v85 );
        }
        LODWORD(v8) = 1;
      }
      if ( v78 )
      {
        v14 = v92;
        v79 = v78 - 1;
        v80 = (v78 - 1) & (((unsigned int)v92 >> 9) ^ ((unsigned int)v92 >> 4));
        v17 = &v58[5 * v80];
        v22 = *v17;
        if ( *v17 == v92 )
          goto LABEL_16;
        if ( v22 != -4096 )
        {
          v81 = &v58[5 * (v79 & (((unsigned int)v92 >> 9) ^ ((unsigned int)v92 >> 4)))];
          v82 = 1;
          v17 = nullptr;
          while ( 1 )
          {
            if ( v22 == -8192 && !v17 )
              v17 = v81;
            v80 = v79 & (v82 + v80);
            v81 = &v58[5 * v80];
            v22 = *v81;
            if ( v92 == *v81 )
              break;
            if ( v22 == -4096 )
              goto LABEL_101;
            ++v82;
          }
LABEL_72:
          v17 = v81;
LABEL_16:
          *(_DWORD *)(a1 + 40) = v8;
          if ( v22 != -4096 )
            --*(_DWORD *)(a1 + 44);
          goto LABEL_18;
        }
        goto LABEL_36;
      }
LABEL_110:
      ++*(_DWORD *)(a1 + 40);
      BUG();
    }
  }
  v28 = (((((((unsigned int)(2 * v12 - 1) | ((unsigned __int64)(unsigned int)(2 * v12 - 1) >> 1)) >> 2)
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
  v29 = ((v28 >> 16) | v28) + 1;
  if ( (unsigned int)v29 < 0x40 )
    LODWORD(v29) = 64;
  *(_DWORD *)(a1 + 48) = v29;
  v30 = (_QWORD *)sub_22300B0(40LL * (unsigned int)v29, 8, 64, v8, v9, v10);
  *(_QWORD *)(a1 + 32) = v30;
  if ( v13 )
  {
    v31 = *(unsigned int *)(a1 + 48);
    *(_QWORD *)(a1 + 40) = 0;
    v32 = 40 * v12;
    v33 = &v13[5 * v12];
    for ( j = &v30[5 * v31]; j != v30; v30 += 5 )
      *v30 = -4096;
    for ( k = v13; v33 != k; k += 5 )
    {
      v36 = *k;
      if ( *k != -8192 && v36 != -4096 )
      {
        v37 = *(_DWORD *)(a1 + 48);
        if ( !v37 )
        {
          *(_QWORD *)&dword_0 = *k;
          BUG();
        }
        v38 = v37 - 1;
        v39 = *(_QWORD *)(a1 + 32);
        v40 = (v37 - 1) & (((unsigned int)v36 >> 9) ^ ((unsigned int)v36 >> 4));
        v41 = (__int64 *)(v39 + 40LL * v40);
        v42 = *v41;
        if ( v36 != *v41 )
        {
          v86 = 1;
          v87 = nullptr;
          if ( v42 != -4096 )
          {
            while ( 1 )
            {
              if ( !v87 && v42 == -8192 )
                v87 = v41;
              v40 = v38 & (v86 + v40);
              v41 = (__int64 *)(v39 + 40LL * v40);
              v42 = *v41;
              if ( v36 == *v41 )
                break;
              if ( v42 == -4096 )
              {
                if ( v87 )
                  v41 = v87;
                break;
              }
              ++v86;
            }
          }
        }
        v41[3] = 0;
        v43 = _mm_loadu_si128((const __m128i *)(v41 + 1));
        *v41 = v36;
        v44 = _mm_loadu_si128((const __m128i *)(k + 1));
        *(__m128i *)(k + 1) = v43;
        v45 = v41[3];
        *(__m128i *)(v41 + 1) = v44;
        v46 = k[3];
        k[3] = v45;
        v47 = v41[4];
        v41[3] = v46;
        v48 = k[4];
        k[4] = v47;
        v41[4] = v48;
        ++*(_DWORD *)(a1 + 40);
        v49 = (void (__fastcall *)(__int64 *, __int64 *, __int64))k[3];
        if ( v49 )
          v49(k + 1, k + 1, 3);
      }
    }
    operator delete(v13, v32, 8);
    v30 = *(_QWORD **)(a1 + 32);
    v50 = *(_DWORD *)(a1 + 48);
    LODWORD(v8) = *(_DWORD *)(a1 + 40) + 1;
  }
  else
  {
    v53 = *(unsigned int *)(a1 + 48);
    *(_QWORD *)(a1 + 40) = 0;
    v50 = v53;
    v54 = &v30[5 * v53];
    if ( v30 != v54 )
    {
      v55 = v30;
      do
      {
        *v55 = -4096;
        v55 += 5;
      }
      while ( v54 != v55 );
    }
    LODWORD(v8) = 1;
  }
  if ( !v50 )
    goto LABEL_110;
  v14 = v92;
  v51 = v50 - 1;
  v52 = (v50 - 1) & (((unsigned int)v92 >> 9) ^ ((unsigned int)v92 >> 4));
  v17 = &v30[5 * v52];
  v22 = *v17;
  if ( *v17 == v92 )
    goto LABEL_16;
  if ( v22 != -4096 )
  {
    v81 = &v30[5 * (v51 & (((unsigned int)v92 >> 9) ^ ((unsigned int)v92 >> 4)))];
    v90 = 1;
    v17 = nullptr;
    while ( 1 )
    {
      if ( v22 == -8192 && !v17 )
        v17 = v81;
      v52 = v51 & (v90 + v52);
      v81 = &v30[5 * v52];
      v22 = *v81;
      if ( v92 == *v81 )
        goto LABEL_72;
      if ( v22 == -4096 )
      {
LABEL_101:
        if ( v17 )
          goto LABEL_15;
        v17 = v81;
        break;
      }
      ++v90;
    }
  }
LABEL_36:
  *(_DWORD *)(a1 + 40) = v8;
LABEL_18:
  *v17 = v14;
  v23 = _mm_loadu_si128((const __m128i *)(v17 + 1));
  v24 = _mm_loadu_si128(&v93);
  v25 = v17[4];
  v17[3] = 0;
  v93 = v23;
  *(__m128i *)(v17 + 1) = v24;
  v26 = v94.m128i_i64[0];
  v94.m128i_i64[0] = 0;
  v17[3] = v26;
  v27 = v94.m128i_i64[1];
  v94.m128i_i64[1] = v25;
  v17[4] = v27;
  sub_15BDBC0(&v91, v17, (_QWORD *)(*(_QWORD *)(a1 + 32) + 40LL * *(unsigned int *)(a1 + 48)), v3, 1);
LABEL_8:
  result = v94.m128i_i64[0];
  if ( v94.m128i_i64[0] )
    return ((__int64 (__fastcall *)(__m128i *, __m128i *, __int64))v94.m128i_i64[0])(&v93, &v93, 3);
  return result;
}
