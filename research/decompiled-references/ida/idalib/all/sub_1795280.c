__int64 __fastcall sub_1795280(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // r13
  __int64 *v9; // rbp
  __int64 v10; // rdx
  unsigned __int64 v11; // rdi
  int v12; // eax
  __int64 *v13; // rsi
  __int64 v14; // rcx
  __int64 *v16; // r8
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rbp
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rsi
  int v28; // r10d
  __int64 v29; // rcx
  __int64 *v30; // r8
  __m128i *v31; // rdx
  unsigned __int64 v32; // rdi
  __m128i v33; // xmm0
  __int64 *v34; // rdx
  int i; // r13d
  __int64 v36; // rcx
  unsigned int v37; // edi
  _QWORD *v38; // r9
  __int64 v39; // r11
  int v40; // r8d
  unsigned int v41; // edi
  __int64 v42; // rcx
  __int64 v43; // rcx
  __m128i *v44; // rdx
  unsigned __int64 v45; // rsi
  __m128i v46; // xmm0
  unsigned __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rsi
  int v52; // r10d
  __int64 v53; // rcx
  __m128i *v54; // rdx
  unsigned __int64 v55; // rdi
  __m128i si128; // xmm0
  __int64 *v57; // rdx
  int v58; // r13d
  unsigned int v59; // edi
  _QWORD *v60; // r9
  __int64 v61; // r11
  int v62; // r9d
  unsigned int v63; // edi
  __int64 v64; // rcx
  __int64 v65; // rcx
  __m128i *v66; // rdx
  unsigned __int64 v67; // rsi
  __m128i v68; // xmm0
  int v69; // r15d
  _QWORD *v70; // r14
  int v71; // r15d
  _QWORD *v72; // r14
  __int64 *v73; // r9
  int v74; // r10d
  __int64 *v75; // r10
  int v76; // ecx
  __m128 v77[4]; // [rsp+10h] [rbp-48h] BYREF

  v8 = *(unsigned int *)(a1 + 16);
  v9 = *(__int64 **)a1;
  if ( (_DWORD)v8 )
  {
    v10 = *a2;
    v11 = (unsigned int)(v8 - 1);
    v12 = v11 & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4));
    v13 = &v9[v12];
    v14 = *v13;
    if ( v10 == *v13 )
    {
LABEL_3:
      sub_1795210(v77, v13, &v9[v8], a1, 1);
      return 0;
    }
    a6 = 1;
    v16 = nullptr;
    if ( v14 != -4096 )
    {
      while ( 1 )
      {
        if ( v14 == -8192 && !v16 )
          v16 = v13;
        v12 = v11 & (a6 + v12);
        v13 = &v9[v12];
        v14 = *v13;
        if ( v10 == *v13 )
          goto LABEL_3;
        if ( v14 == -4096 )
          break;
        a6 = (unsigned int)(a6 + 1);
      }
      if ( v16 )
        v13 = v16;
    }
    a4 = (unsigned int)(3 * v8);
    v17 = *(_DWORD *)(a1 + 8) + 1;
    a5 = (unsigned int)(4 * v17);
    if ( (unsigned int)a5 < (unsigned int)a4 )
    {
      v18 = (unsigned int)(v8 - *(_DWORD *)(a1 + 12) - v17);
      v19 = (unsigned int)v8 >> 3;
      if ( (unsigned int)v18 > (unsigned int)v19 )
      {
LABEL_7:
        v20 = *v13;
        goto LABEL_8;
      }
      v47 = (((v11 >> 1) | v11 | (((v11 >> 1) | v11) >> 2)) >> 4) | (v11 >> 1) | v11 | (((v11 >> 1) | v11) >> 2);
      v48 = ((((v47 >> 8) | v47) >> 16) | (v47 >> 8) | v47) + 1;
      if ( (unsigned int)v48 < 0x40 )
        LODWORD(v48) = 64;
      *(_DWORD *)(a1 + 16) = v48;
      v49 = sub_22300B0(8LL * (unsigned int)v48, 8, 64, v18, v19, a6);
      *(_QWORD *)a1 = v49;
      if ( v9 )
      {
        v50 = *(unsigned int *)(a1 + 16);
        *(_QWORD *)(a1 + 8) = 0;
        v51 = (unsigned int)v8;
        v52 = v50;
        v53 = 8 * v50;
        if ( v49 != v49 + v53 )
        {
          v54 = (__m128i *)v49;
          v55 = ((unsigned __int64)(v53 - 8) >> 3) + 1;
          if ( v53 == 8 )
            goto LABEL_58;
          si128 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
          do
            *v54++ = si128;
          while ( v54 != (__m128i *)(v49 + 16 * (v55 >> 1)) );
          v54 = (__m128i *)(v49 + 8 * (v55 & 0xFFFFFFFFFFFFFFFELL));
          if ( (v55 & 0xFFFFFFFFFFFFFFFELL) != v55 )
LABEL_58:
            v54->m128i_i64[0] = -4096;
        }
        v57 = v9;
        v58 = v52 - 1;
        do
        {
          v36 = *v57;
          if ( *v57 != -4096 && v36 != -8192 )
          {
            if ( !v52 )
              goto LABEL_121;
            v59 = v58 & (((unsigned int)v36 >> 9) ^ ((unsigned int)v36 >> 4));
            v60 = (_QWORD *)(v49 + 8LL * v59);
            v61 = *v60;
            if ( v36 != *v60 )
            {
              v71 = 1;
              v72 = nullptr;
              if ( v61 != -4096 )
              {
                while ( 1 )
                {
                  if ( v61 == -8192 && !v72 )
                    v72 = v60;
                  v59 = v58 & (v71 + v59);
                  v60 = (_QWORD *)(v49 + 8LL * v59);
                  v61 = *v60;
                  if ( v36 == *v60 )
                    break;
                  if ( v61 == -4096 )
                  {
                    if ( v72 )
                      v60 = v72;
                    break;
                  }
                  ++v71;
                }
              }
            }
            ++*(_DWORD *)(a1 + 8);
            *v60 = v36;
          }
          ++v57;
        }
        while ( &v9[v51] != v57 );
        operator delete(v9, v51 * 8, 8);
        v9 = *(__int64 **)a1;
        v8 = *(unsigned int *)(a1 + 16);
        v17 = *(_DWORD *)(a1 + 8) + 1;
      }
      else
      {
        v64 = *(unsigned int *)(a1 + 16);
        *(_QWORD *)(a1 + 8) = 0;
        v8 = v64;
        v65 = 8 * v64;
        v9 = (__int64 *)(v49 + v65);
        if ( v49 == v49 + v65 )
        {
          v17 = 1;
        }
        else
        {
          v66 = (__m128i *)v49;
          v67 = ((unsigned __int64)(v65 - 8) >> 3) + 1;
          if ( v65 == 8 )
            goto LABEL_76;
          v68 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
          do
            *v66++ = v68;
          while ( (__m128i *)(v49 + 16 * (v67 >> 1)) != v66 );
          v66 = (__m128i *)(v49 + 8 * (v67 & 0xFFFFFFFFFFFFFFFELL));
          if ( (v67 & 0xFFFFFFFFFFFFFFFELL) != v67 )
LABEL_76:
            v66->m128i_i64[0] = -4096;
          v9 = (__int64 *)v49;
          v17 = 1;
        }
      }
      if ( (_DWORD)v8 )
      {
        v62 = v8 - 1;
        v63 = (v8 - 1) & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4));
        v13 = &v9[v63];
        v10 = *v13;
        v20 = *v13;
        if ( *a2 != *v13 )
        {
          if ( v10 == -4096 )
          {
            v10 = *a2;
            goto LABEL_33;
          }
          v75 = &v9[v62 & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4))];
          v76 = 1;
          v13 = nullptr;
          while ( 1 )
          {
            if ( v10 == -8192 && !v13 )
              v13 = v75;
            v63 = v62 & (v76 + v63);
            v75 = &v9[v63];
            v10 = *v75;
            if ( *a2 == *v75 )
            {
              v20 = *v75;
              v13 = &v9[v63];
              goto LABEL_8;
            }
            if ( v10 == -4096 )
              break;
            ++v76;
          }
          if ( !v13 )
          {
            v10 = *a2;
            v13 = &v9[v63];
            goto LABEL_33;
          }
          v20 = *v13;
          v10 = *a2;
        }
LABEL_8:
        *(_DWORD *)(a1 + 8) = v17;
        if ( v20 != -4096 )
          --*(_DWORD *)(a1 + 12);
        goto LABEL_10;
      }
LABEL_122:
      ++*(_DWORD *)(a1 + 8);
      BUG();
    }
  }
  v23 = (((((((unsigned int)(2 * v8 - 1) | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v8 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 4)
        | (((unsigned int)(2 * v8 - 1) | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 2)
        | (unsigned int)(2 * v8 - 1)
        | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 8)
      | (((((unsigned int)(2 * v8 - 1) | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 2)
        | (unsigned int)(2 * v8 - 1)
        | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 4)
      | (((unsigned int)(2 * v8 - 1) | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 2)
      | (unsigned int)(2 * v8 - 1)
      | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1);
  v24 = ((v23 >> 16) | v23) + 1;
  if ( (unsigned int)v24 < 0x40 )
    LODWORD(v24) = 64;
  *(_DWORD *)(a1 + 16) = v24;
  v25 = sub_22300B0(8LL * (unsigned int)v24, 8, 64, a4, a5, a6);
  *(_QWORD *)a1 = v25;
  if ( v9 )
  {
    v26 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    v27 = (unsigned int)v8;
    v28 = v26;
    v29 = 8 * v26;
    v30 = &v9[v27];
    if ( v25 != v25 + v29 )
    {
      v31 = (__m128i *)v25;
      v32 = ((unsigned __int64)(v29 - 8) >> 3) + 1;
      if ( v29 == 8 )
        goto LABEL_21;
      v33 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
      do
        *v31++ = v33;
      while ( (__m128i *)(v25 + 16 * (v32 >> 1)) != v31 );
      v31 = (__m128i *)(v25 + 8 * (v32 & 0xFFFFFFFFFFFFFFFELL));
      if ( (v32 & 0xFFFFFFFFFFFFFFFELL) != v32 )
LABEL_21:
        v31->m128i_i64[0] = -4096;
    }
    v34 = v9;
    for ( i = v28 - 1; v30 != v34; ++v34 )
    {
      v36 = *v34;
      if ( *v34 != -8192 && v36 != -4096 )
      {
        if ( !v28 )
        {
LABEL_121:
          *(_QWORD *)&dword_0 = v36;
          BUG();
        }
        v37 = i & (((unsigned int)v36 >> 9) ^ ((unsigned int)v36 >> 4));
        v38 = (_QWORD *)(v25 + 8LL * v37);
        v39 = *v38;
        if ( *v38 != v36 )
        {
          v69 = 1;
          v70 = nullptr;
          if ( v39 != -4096 )
          {
            while ( 1 )
            {
              if ( v39 == -8192 && !v70 )
                v70 = v38;
              v37 = i & (v69 + v37);
              v38 = (_QWORD *)(v25 + 8LL * v37);
              v39 = *v38;
              if ( v36 == *v38 )
                break;
              if ( v39 == -4096 )
              {
                if ( v70 )
                  v38 = v70;
                break;
              }
              ++v69;
            }
          }
        }
        ++*(_DWORD *)(a1 + 8);
        *v38 = v36;
      }
    }
    operator delete(v9, v27 * 8, 8);
    v9 = *(__int64 **)a1;
    v8 = *(unsigned int *)(a1 + 16);
    v17 = *(_DWORD *)(a1 + 8) + 1;
  }
  else
  {
    v42 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    v8 = v42;
    v43 = 8 * v42;
    v9 = (__int64 *)(v25 + v43);
    if ( v25 == v25 + v43 )
    {
      v17 = 1;
    }
    else
    {
      v44 = (__m128i *)v25;
      v45 = ((unsigned __int64)(v43 - 8) >> 3) + 1;
      if ( v43 == 8 )
        goto LABEL_39;
      v46 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
      do
        *v44++ = v46;
      while ( v44 != (__m128i *)(v25 + 16 * (v45 >> 1)) );
      v44 = (__m128i *)(v25 + 8 * (v45 & 0xFFFFFFFFFFFFFFFELL));
      if ( (v45 & 0xFFFFFFFFFFFFFFFELL) != v45 )
LABEL_39:
        v44->m128i_i64[0] = -4096;
      v9 = (__int64 *)v25;
      v17 = 1;
    }
  }
  if ( !(_DWORD)v8 )
    goto LABEL_122;
  v10 = *a2;
  v40 = v8 - 1;
  v41 = (v8 - 1) & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4));
  v13 = &v9[v41];
  v20 = *v13;
  if ( *v13 == *a2 )
    goto LABEL_8;
  if ( v20 != -4096 )
  {
    v73 = &v9[v40 & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4))];
    v74 = 1;
    v13 = nullptr;
    while ( 1 )
    {
      if ( v20 == -8192 && !v13 )
        v13 = v73;
      v41 = v40 & (v74 + v41);
      v73 = &v9[v41];
      v20 = *v73;
      if ( v10 == *v73 )
      {
        v13 = &v9[v41];
        goto LABEL_8;
      }
      if ( v20 == -4096 )
        break;
      ++v74;
    }
    if ( v13 )
      goto LABEL_7;
    v13 = &v9[v41];
  }
LABEL_33:
  *(_DWORD *)(a1 + 8) = v17;
LABEL_10:
  *v13 = v10;
  sub_1795210(v77, v13, &v9[v8], a1, 1);
  v21 = *(unsigned int *)(a1 + 32);
  v22 = *a2;
  if ( v21 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 36) )
  {
    sub_2237220(a1 + 24, a1 + 40, v21 + 1, 8);
    v21 = *(unsigned int *)(a1 + 32);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v21) = v22;
  ++*(_DWORD *)(a1 + 32);
  return 1;
}
