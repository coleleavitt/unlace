__m128i *__fastcall sub_B69E70(
        __int64 a1,
        __int32 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9)
{
  __int64 v11; // r14
  int *v12; // r12
  int v13; // r13d
  int v14; // edx
  int *v15; // rsi
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rbp
  __int64 v19; // rdx
  unsigned __int64 v20; // rbx
  __m128i *v21; // r8
  signed __int64 v22; // rcx
  __m128i *result; // rax
  __m128i *v24; // rcx
  __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  const __m128i *v27; // rax
  int *v28; // rdi
  int v29; // eax
  unsigned __int64 v30; // r13
  __int64 v31; // rax
  unsigned __int64 v32; // rdx
  __int64 v33; // rsi
  __int64 v34; // rcx
  __m128 *v35; // rsi
  __int64 v36; // rdi
  _BYTE *v37; // rdi
  unsigned __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rsi
  _DWORD *v43; // rcx
  int v44; // r10d
  int *v45; // rdi
  _DWORD *v46; // rdx
  int *v47; // rdx
  int i; // r13d
  int v49; // ecx
  unsigned int v50; // r9d
  _DWORD *v51; // r8
  int v52; // r11d
  int v53; // ecx
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rsi
  _DWORD *v60; // rcx
  int v61; // r10d
  _DWORD *v62; // rdx
  int *v63; // rdx
  int v64; // r14d
  int v65; // ecx
  unsigned int v66; // r9d
  _DWORD *v67; // r8
  int v68; // r11d
  int v69; // ecx
  int v70; // ecx
  int v71; // ecx
  unsigned int v72; // edx
  int v73; // edi
  int v74; // r9d
  int *v75; // r8
  unsigned __int64 v76; // rbp
  __int64 v77; // rdi
  int v78; // ecx
  int v79; // ecx
  unsigned int v80; // r13d
  int v81; // edx
  int v82; // r8d
  int *v83; // rdi
  __int64 v84; // rdi
  __int64 v85; // rsi
  __int64 v86; // rdx
  __int64 v87; // rdx
  int *v88; // rdx
  __int64 v89; // rdx
  int *v90; // rdx
  int v91; // r15d
  _DWORD *v92; // r14
  _DWORD *v93; // r15
  int v94; // [rsp+4h] [rbp-134h]
  __m128 v95; // [rsp+80h] [rbp-B8h] BYREF
  __int64 v96; // [rsp+90h] [rbp-A8h]
  _BYTE v97[160]; // [rsp+98h] [rbp-A0h] BYREF

  v11 = *(unsigned int *)(a1 + 16);
  v12 = *(int **)a1;
  if ( !(_DWORD)v11 )
    goto LABEL_55;
  a4 = (unsigned int)(v11 - 1);
  v13 = 37 * a2;
  v14 = a4 & (37 * a2);
  v15 = &v12[2 * v14];
  v16 = *v15;
  if ( *v15 == a2 )
  {
LABEL_3:
    sub_B69B00(&v95, v15, &v12[2 * v11], a1, 1);
    v17 = *(unsigned int *)(v95.m128_u64[0] + 4);
    goto LABEL_4;
  }
  a5 = 1;
  v28 = nullptr;
  if ( v16 != -1 )
  {
    while ( 1 )
    {
      if ( !v28 && v16 == -2 )
        v28 = v15;
      a6 = (unsigned int)(a5 + 1);
      v14 = a4 & (a5 + v14);
      v15 = &v12[2 * v14];
      v16 = *v15;
      if ( *v15 == a2 )
        goto LABEL_3;
      if ( v16 == -1 )
        break;
      a5 = (unsigned int)a6;
    }
    if ( v28 )
      v15 = v28;
  }
  v29 = *(_DWORD *)(a1 + 8) + 1;
  if ( 4 * v29 >= (unsigned int)(3 * v11) )
  {
LABEL_55:
    v38 = (((((((unsigned int)(2 * v11 - 1) | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v11 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 4)
          | (((unsigned int)(2 * v11 - 1) | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v11 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 8)
        | (((((unsigned int)(2 * v11 - 1) | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v11 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 4)
        | (((unsigned int)(2 * v11 - 1) | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 2)
        | (unsigned int)(2 * v11 - 1)
        | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1);
    v39 = ((v38 >> 16) | v38) + 1;
    if ( (unsigned int)v39 < 0x40 )
      LODWORD(v39) = 64;
    *(_DWORD *)(a1 + 16) = v39;
    v40 = sub_22300B0(8LL * (unsigned int)v39, 4, 64, a4, a5, a6);
    *(_QWORD *)a1 = v40;
    if ( v12 )
    {
      v41 = *(unsigned int *)(a1 + 16);
      *(_QWORD *)(a1 + 8) = 0;
      v42 = 2LL * (unsigned int)v11;
      v43 = (_DWORD *)(v40 + 8 * v41);
      v44 = v41;
      v45 = &v12[v42];
      v46 = (_DWORD *)v40;
      if ( (_DWORD *)v40 != v43 )
      {
        do
        {
          *v46 = -1;
          v46 += 2;
        }
        while ( v43 != v46 );
      }
      v47 = v12;
      for ( i = v44 - 1; v45 != v47; v47 += 2 )
      {
        v49 = *v47;
        if ( (unsigned int)(*v47 + 2) > 1 )
        {
          if ( !v44 )
          {
            dword_0 = 0;
            BUG();
          }
          v50 = i & (37 * v49);
          v51 = (_DWORD *)(v40 + 8LL * v50);
          v52 = *v51;
          if ( *v51 != v49 )
          {
            v91 = 1;
            v92 = nullptr;
            if ( v52 != -1 )
            {
              while ( 1 )
              {
                if ( v52 == -2 && !v92 )
                  v92 = v51;
                v50 = i & (v91 + v50);
                v51 = (_DWORD *)(v40 + 8LL * v50);
                v52 = *v51;
                if ( v49 == *v51 )
                  break;
                if ( v52 == -1 )
                {
                  if ( v92 )
                    v51 = v92;
                  break;
                }
                ++v91;
              }
            }
          }
          *v51 = v49;
          v53 = v47[1];
          ++*(_DWORD *)(a1 + 8);
          v51[1] = v53;
        }
      }
      operator delete(v12, v42 * 4, 4);
      v12 = *(int **)a1;
      v70 = *(_DWORD *)(a1 + 16);
      v29 = *(_DWORD *)(a1 + 8) + 1;
    }
    else
    {
      v87 = *(unsigned int *)(a1 + 16);
      *(_QWORD *)(a1 + 8) = 0;
      v12 = (int *)(v40 + 8 * v87);
      v70 = v87;
      if ( (int *)v40 != v12 )
      {
        v88 = (int *)v40;
        do
        {
          *v88 = -1;
          v88 += 2;
        }
        while ( v12 != v88 );
        v12 = (int *)v40;
      }
      v29 = 1;
    }
    if ( v70 )
    {
      v71 = v70 - 1;
      v72 = v71 & (37 * a2);
      v15 = &v12[2 * v72];
      v73 = *v15;
      if ( *v15 != a2 )
      {
        v74 = 1;
        v75 = nullptr;
        if ( v73 != -1 )
        {
          while ( 1 )
          {
            if ( !v75 && v73 == -2 )
              v75 = v15;
            v72 = v71 & (v74 + v72);
            v15 = &v12[2 * v72];
            v73 = *v15;
            if ( *v15 == a2 )
              break;
            if ( v73 == -1 )
            {
              if ( v75 )
                v15 = v75;
              goto LABEL_37;
            }
            ++v74;
          }
        }
      }
      goto LABEL_37;
    }
    goto LABEL_156;
  }
  if ( (int)v11 - *(_DWORD *)(a1 + 12) - v29 <= (unsigned int)v11 >> 3 )
  {
    v54 = (((a4 >> 1) | a4 | (((a4 >> 1) | a4) >> 2)) >> 4) | (a4 >> 1) | a4 | (((a4 >> 1) | a4) >> 2);
    v55 = v54 >> 8;
    v56 = (((v55 | v54) >> 16) | v55 | v54) + 1;
    if ( (unsigned int)v56 < 0x40 )
      LODWORD(v56) = 64;
    *(_DWORD *)(a1 + 16) = v56;
    v57 = sub_22300B0(8LL * (unsigned int)v56, 4, 64, v55, a5, a6);
    *(_QWORD *)a1 = v57;
    if ( v12 )
    {
      v58 = *(unsigned int *)(a1 + 16);
      *(_QWORD *)(a1 + 8) = 0;
      v59 = 2LL * (unsigned int)v11;
      v60 = (_DWORD *)(v57 + 8 * v58);
      v61 = v58;
      v62 = (_DWORD *)v57;
      if ( (_DWORD *)v57 != v60 )
      {
        do
        {
          *v62 = -1;
          v62 += 2;
        }
        while ( v60 != v62 );
      }
      v63 = v12;
      v64 = v61 - 1;
      do
      {
        v65 = *v63;
        if ( (unsigned int)(*v63 + 2) > 1 )
        {
          if ( !v61 )
          {
            dword_0 = 0;
            BUG();
          }
          v66 = v64 & (37 * v65);
          v67 = (_DWORD *)(v57 + 8LL * v66);
          v68 = *v67;
          if ( *v67 != v65 && v68 != -1 )
          {
            v94 = 1;
            v93 = nullptr;
            while ( 1 )
            {
              if ( v68 == -2 && !v93 )
                v93 = v67;
              v66 = v64 & (v94 + v66);
              v67 = (_DWORD *)(v57 + 8LL * v66);
              v68 = *v67;
              if ( v65 == *v67 )
                break;
              if ( v68 == -1 )
              {
                if ( v93 )
                  v67 = v93;
                break;
              }
              ++v94;
            }
          }
          *v67 = v65;
          v69 = v63[1];
          ++*(_DWORD *)(a1 + 8);
          v67[1] = v69;
        }
        v63 += 2;
      }
      while ( &v12[v59] != v63 );
      operator delete(v12, v59 * 4, 4);
      v12 = *(int **)a1;
      v78 = *(_DWORD *)(a1 + 16);
      v29 = *(_DWORD *)(a1 + 8) + 1;
    }
    else
    {
      v89 = *(unsigned int *)(a1 + 16);
      *(_QWORD *)(a1 + 8) = 0;
      v12 = (int *)(v57 + 8 * v89);
      v78 = v89;
      if ( (int *)v57 != v12 )
      {
        v90 = (int *)v57;
        do
        {
          *v90 = -1;
          v90 += 2;
        }
        while ( v12 != v90 );
        v12 = (int *)v57;
      }
      v29 = 1;
    }
    if ( v78 )
    {
      v79 = v78 - 1;
      v80 = v79 & v13;
      v15 = &v12[2 * v80];
      v81 = *v15;
      if ( *v15 != a2 )
      {
        v82 = 1;
        v83 = nullptr;
        if ( v81 != -1 )
        {
          while ( 1 )
          {
            if ( v81 == -2 && !v83 )
              v83 = v15;
            v80 = v79 & (v82 + v80);
            v15 = &v12[2 * v80];
            v81 = *v15;
            if ( *v15 == a2 )
              break;
            if ( v81 == -1 )
            {
              if ( v83 )
                v15 = v83;
              goto LABEL_37;
            }
            ++v82;
          }
        }
      }
      goto LABEL_37;
    }
LABEL_156:
    ++*(_DWORD *)(a1 + 8);
    BUG();
  }
LABEL_37:
  *(_DWORD *)(a1 + 8) = v29;
  if ( *v15 != -1 )
    --*(_DWORD *)(a1 + 12);
  *v15 = a2;
  v15[1] = 0;
  sub_B69B00(&v95, v15, &v12[2 * *(unsigned int *)(a1 + 16)], a1, 1);
  v30 = v95.m128_u64[0];
  v96 = 0x400000000LL;
  v31 = *(unsigned int *)(a1 + 32);
  v95.m128_u64[1] = (unsigned __int64)v97;
  v32 = *(unsigned int *)(a1 + 36);
  v33 = v31 + 1;
  v95.m128_i32[0] = a2;
  if ( v31 + 1 > v32 )
  {
    v76 = *(_QWORD *)(a1 + 24);
    v77 = a1 + 24;
    if ( v76 > (unsigned __int64)&v95 || (unsigned __int64)&v95 >= v76 + 120 * v31 )
    {
      sub_B69D40(v77, v33);
      v34 = *(_QWORD *)(a1 + 24);
      v31 = *(unsigned int *)(a1 + 32);
      v35 = &v95;
    }
    else
    {
      sub_B69D40(v77, v33);
      v34 = *(_QWORD *)(a1 + 24);
      v31 = *(unsigned int *)(a1 + 32);
      v35 = (__m128 *)((char *)&v95 + v34 - v76);
    }
  }
  else
  {
    v34 = *(_QWORD *)(a1 + 24);
    v35 = &v95;
  }
  v36 = v34 + 120 * v31;
  *(_DWORD *)v36 = v35->m128_i32[0];
  *(_QWORD *)(v36 + 8) = v36 + 24;
  *(_QWORD *)(v36 + 16) = 0x400000000LL;
  if ( v35[1].m128_i32[0] )
    sub_B69B60((char ***)(v36 + 8), (char ***)&v35->m128_u64[1]);
  v17 = *(unsigned int *)(a1 + 32);
  v37 = (_BYTE *)v95.m128_u64[1];
  *(_DWORD *)(a1 + 32) = v17 + 1;
  if ( v37 != v97 )
  {
    free(v37);
    v17 = (unsigned int)(*(_DWORD *)(a1 + 32) - 1);
  }
  *(_DWORD *)(v30 + 4) = v17;
LABEL_4:
  v18 = *(_QWORD *)(a1 + 24) + 120 * v17;
  v19 = *(unsigned int *)(v18 + 16);
  v20 = *(_QWORD *)(v18 + 8);
  v21 = (__m128i *)(v20 + 24 * v19);
  v22 = 0xAAAAAAAAAAAAAAABLL * ((24 * v19) >> 3);
  if ( v22 >> 2 )
  {
    result = *(__m128i **)(v18 + 8);
    v24 = (__m128i *)(v20 + 96 * (v22 >> 2));
    while ( result->m128i_i64[0] != a7 || result->m128i_i32[2] != a8 || result[1].m128i_i64[0] != a9 )
    {
      if ( a7 == result[1].m128i_i64[1] && a8 == result[2].m128i_i32[0] && a9 == result[2].m128i_i64[1] )
      {
        result = (__m128i *)((char *)result + 24);
        break;
      }
      if ( a7 == result[3].m128i_i64[0] && a8 == result[3].m128i_i32[2] && a9 == result[4].m128i_i64[0] )
      {
        result += 3;
        break;
      }
      if ( a7 == result[4].m128i_i64[1] && a8 == result[5].m128i_i32[0] && a9 == result[5].m128i_i64[1] )
      {
        result = (__m128i *)((char *)result + 72);
        break;
      }
      result += 6;
      if ( v24 == result )
      {
        v22 = 0xAAAAAAAAAAAAAAABLL * (((char *)v21 - (char *)result) >> 3);
        goto LABEL_25;
      }
    }
LABEL_13:
    if ( v21 != result )
      return result;
    goto LABEL_32;
  }
  result = *(__m128i **)(v18 + 8);
LABEL_25:
  if ( v22 == 2 )
  {
    v25 = a7;
LABEL_79:
    if ( result->m128i_i64[0] == v25 && result->m128i_i32[2] == a8 && result[1].m128i_i64[0] == a9 )
      goto LABEL_13;
    result = (__m128i *)((char *)result + 24);
    goto LABEL_29;
  }
  if ( v22 == 3 )
  {
    v25 = a7;
    if ( result->m128i_i64[0] == a7 && result->m128i_i32[2] == a8 && result[1].m128i_i64[0] == a9 )
      goto LABEL_13;
    result = (__m128i *)((char *)result + 24);
    goto LABEL_79;
  }
  if ( v22 != 1 )
    goto LABEL_32;
  v25 = a7;
LABEL_29:
  if ( result->m128i_i64[0] == v25 && result->m128i_i32[2] == a8 && result[1].m128i_i64[0] == a9 )
    goto LABEL_13;
LABEL_32:
  v26 = v19 + 1;
  v27 = (const __m128i *)&a7;
  if ( v26 > *(unsigned int *)(v18 + 20) )
  {
    v84 = v18 + 8;
    v85 = v18 + 24;
    if ( v20 > (unsigned __int64)&a7 || v21 <= (__m128i *)&a7 )
    {
      sub_2237220(v84, v85, v26, 24);
      v21 = (__m128i *)(*(_QWORD *)(v18 + 8) + 24LL * *(unsigned int *)(v18 + 16));
      v27 = (const __m128i *)&a7;
    }
    else
    {
      sub_2237220(v84, v85, v26, 24);
      v86 = *(_QWORD *)(v18 + 8);
      v27 = (const __m128i *)((char *)&a7 + v86 - v20);
      v21 = (__m128i *)(v86 + 24LL * *(unsigned int *)(v18 + 16));
    }
  }
  *v21 = _mm_loadu_si128(v27);
  result = (__m128i *)v27[1].m128i_i64[0];
  v21[1].m128i_i64[0] = (__int64)result;
  ++*(_DWORD *)(v18 + 16);
  return result;
}
