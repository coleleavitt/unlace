void __fastcall sub_20C8490(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 *a6)
{
  __int64 v6; // rcx
  __int64 v8; // rbp
  __int64 *v9; // rbx
  unsigned __int64 v11; // rdi
  int v12; // eax
  __int64 *v13; // rsi
  __int64 v14; // r8
  int v15; // r10d
  int v16; // eax
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 *v19; // r13
  unsigned __int64 *v20; // rbx
  __int64 v21; // r12
  __int64 v22; // rax
  __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rsi
  int v32; // r13d
  __int64 v33; // rdi
  __int64 *v34; // r8
  __m128i *v35; // rdx
  unsigned __int64 v36; // r9
  __m128i v37; // xmm0
  __int64 *v38; // rdx
  int i; // r15d
  __int64 v40; // rdi
  unsigned int v41; // r9d
  _QWORD *v42; // r10
  __int64 v43; // r11
  __int64 v44; // rdi
  int v45; // edi
  __int64 v46; // r9
  int v47; // r10d
  __int64 *v48; // r8
  __int64 v49; // rdi
  __int64 v50; // rdi
  __m128i *v51; // rdx
  unsigned __int64 v52; // rsi
  __m128i v53; // xmm0
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rdi
  __int64 v57; // rsi
  int v58; // r13d
  __int64 v59; // rdi
  __m128i *v60; // rdx
  unsigned __int64 v61; // r8
  __m128i si128; // xmm0
  __int64 *v63; // rdx
  int v64; // r15d
  __int64 v65; // rdi
  unsigned int v66; // r8d
  _QWORD *v67; // r10
  __int64 v68; // r11
  __int64 v69; // rdi
  int v70; // edi
  int v71; // r10d
  __int64 v72; // rsi
  __int64 v73; // rsi
  __m128i *v74; // rdi
  unsigned __int64 v75; // rdx
  __m128i v76; // xmm0
  _QWORD *v77; // rsi
  int v78; // r12d
  _QWORD *v79; // rbp
  int v80; // r12d
  _QWORD *v81; // rbp
  __int64 j; // [rsp+0h] [rbp-68h]
  __int64 v83; // [rsp+0h] [rbp-68h]
  __int64 v84; // [rsp+0h] [rbp-68h]
  __int64 v85[2]; // [rsp+8h] [rbp-60h] BYREF
  __int64 v86; // [rsp+18h] [rbp-50h] BYREF
  __m128 v87[4]; // [rsp+20h] [rbp-48h] BYREF

  v6 = a1 + 48;
  v8 = *(unsigned int *)(a1 + 64);
  v9 = *(__int64 **)(a1 + 48);
  v85[0] = a2;
  if ( (_DWORD)v8 )
  {
    v11 = (unsigned int)(v8 - 1);
    v12 = v11 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
    v13 = &v9[v12];
    v14 = *v13;
    if ( a2 == *v13 )
    {
LABEL_3:
      sub_20C8420(v87, v13, &v9[v8], v6, 1);
      return;
    }
    v15 = 1;
    a6 = nullptr;
    if ( v14 != -4 )
    {
      while ( 1 )
      {
        if ( v14 == -8 && !a6 )
          a6 = v13;
        v12 = v11 & (v15 + v12);
        v13 = &v9[v12];
        v14 = *v13;
        if ( a2 == *v13 )
          goto LABEL_3;
        if ( v14 == -4 )
          break;
        ++v15;
      }
      if ( a6 )
        v13 = a6;
    }
    v16 = *(_DWORD *)(a1 + 56) + 1;
    a5 = (unsigned int)(4 * v16);
    if ( (unsigned int)a5 < 3 * (int)v8 )
    {
      v17 = (unsigned int)v8 >> 3;
      if ( (int)v8 - *(_DWORD *)(a1 + 60) - v16 > (unsigned int)v17 )
      {
        v18 = *v13;
        goto LABEL_9;
      }
      v84 = v6;
      v54 = (((((((((v11 | (v11 >> 1)) >> 2) | v11 | (v11 >> 1)) >> 4) | ((v11 | (v11 >> 1)) >> 2) | v11 | (v11 >> 1)) >> 8)
             | ((((v11 | (v11 >> 1)) >> 2) | v11 | (v11 >> 1)) >> 4)
             | ((v11 | (v11 >> 1)) >> 2)
             | v11
             | (v11 >> 1)) >> 16)
           | ((((((v11 | (v11 >> 1)) >> 2) | v11 | (v11 >> 1)) >> 4) | ((v11 | (v11 >> 1)) >> 2) | v11 | (v11 >> 1)) >> 8)
           | ((((v11 | (v11 >> 1)) >> 2) | v11 | (v11 >> 1)) >> 4)
           | ((v11 | (v11 >> 1)) >> 2)
           | v11
           | (v11 >> 1))
          + 1;
      if ( (unsigned int)v54 < 0x40 )
        LODWORD(v54) = 64;
      *(_DWORD *)(a1 + 64) = v54;
      v55 = sub_22300B0(8LL * (unsigned int)v54, 8, 64, v6, v17, a6);
      v6 = v84;
      *(_QWORD *)(a1 + 48) = v55;
      if ( v9 )
      {
        v56 = *(unsigned int *)(a1 + 64);
        *(_QWORD *)(a1 + 56) = 0;
        v57 = (unsigned int)v8;
        v58 = v56;
        v59 = 8 * v56;
        if ( v55 != v55 + v59 )
        {
          v60 = (__m128i *)v55;
          v61 = ((unsigned __int64)(v59 - 8) >> 3) + 1;
          if ( v59 == 8 )
            goto LABEL_55;
          si128 = _mm_load_si128((const __m128i *)&xmmword_23AB190);
          do
            *v60++ = si128;
          while ( (__m128i *)(v55 + 16 * (v61 >> 1)) != v60 );
          v60 = (__m128i *)(v55 + 8 * (v61 & 0xFFFFFFFFFFFFFFFELL));
          if ( (v61 & 0xFFFFFFFFFFFFFFFELL) != v61 )
LABEL_55:
            v60->m128i_i64[0] = -4;
        }
        v63 = v9;
        v64 = v58 - 1;
        do
        {
          v65 = *v63;
          if ( *v63 != -4 && v65 != -8 )
          {
            if ( !v58 )
            {
              *(_QWORD *)&dword_0 = *v63;
              BUG();
            }
            v66 = v64 & (((unsigned int)v65 >> 9) ^ ((unsigned int)v65 >> 4));
            v67 = (_QWORD *)(v55 + 8LL * v66);
            v68 = *v67;
            if ( v65 != *v67 )
            {
              v80 = 1;
              v81 = nullptr;
              if ( v68 != -4 )
              {
                while ( 1 )
                {
                  if ( v68 == -8 && !v81 )
                    v81 = v67;
                  v66 = v64 & (v80 + v66);
                  v67 = (_QWORD *)(v55 + 8LL * v66);
                  v68 = *v67;
                  if ( v65 == *v67 )
                    break;
                  if ( v68 == -4 )
                  {
                    if ( v81 )
                      v67 = v81;
                    break;
                  }
                  ++v80;
                }
              }
            }
            v69 = *v63;
            ++*(_DWORD *)(a1 + 56);
            *v67 = v69;
          }
          ++v63;
        }
        while ( &v9[v57] != v63 );
        operator delete(v9, v57 * 8, 8);
        v9 = *(__int64 **)(a1 + 48);
        v8 = *(unsigned int *)(a1 + 64);
        v6 = v84;
        v16 = *(_DWORD *)(a1 + 56) + 1;
LABEL_64:
        if ( (_DWORD)v8 )
        {
          v70 = (v8 - 1) & ((LODWORD(v85[0]) >> 9) ^ (LODWORD(v85[0]) >> 4));
          v13 = &v9[v70];
          v18 = *v13;
          if ( v85[0] != *v13 )
          {
            v71 = 1;
            v48 = nullptr;
            if ( v18 != -4 )
            {
              while ( 1 )
              {
                if ( v18 == -8 && !v48 )
                  v48 = v13;
                v70 = (v8 - 1) & (v71 + v70);
                v13 = &v9[v70];
                v18 = *v13;
                if ( v85[0] == *v13 )
                  goto LABEL_9;
                if ( v18 == -4 )
                  goto LABEL_72;
                ++v71;
              }
            }
LABEL_39:
            *(_DWORD *)(a1 + 56) = v16;
            goto LABEL_11;
          }
          goto LABEL_9;
        }
LABEL_121:
        ++*(_DWORD *)(a1 + 56);
        BUG();
      }
      v72 = *(unsigned int *)(a1 + 64);
      *(_QWORD *)(a1 + 56) = 0;
      v8 = v72;
      v73 = 8 * v72;
      v9 = (__int64 *)(v55 + v73);
      if ( v55 == v55 + v73 )
      {
        v16 = 1;
        goto LABEL_64;
      }
      v74 = (__m128i *)v55;
      v75 = ((unsigned __int64)(v73 - 8) >> 3) + 1;
      if ( v73 == 8 )
      {
        v77 = (_QWORD *)v55;
      }
      else
      {
        v76 = _mm_load_si128((const __m128i *)&xmmword_23AB190);
        do
          *v74++ = v76;
        while ( (__m128i *)(v55 + 16 * (v75 >> 1)) != v74 );
        v77 = (_QWORD *)(v55 + 8 * (v75 & 0xFFFFFFFFFFFFFFFELL));
        if ( (v75 & 0xFFFFFFFFFFFFFFFELL) == v75 )
          goto LABEL_80;
      }
      *v77 = -4;
LABEL_80:
      v9 = (__int64 *)v55;
      v16 = 1;
      goto LABEL_64;
    }
  }
  v83 = v6;
  v27 = (((((((unsigned int)(2 * v8 - 1) | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 2)
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
  v28 = ((v27 >> 16) | v27) + 1;
  if ( (unsigned int)v28 < 0x40 )
    LODWORD(v28) = 64;
  *(_DWORD *)(a1 + 64) = v28;
  v29 = sub_22300B0(8LL * (unsigned int)v28, 8, 64, v6, a5, a6);
  v6 = v83;
  *(_QWORD *)(a1 + 48) = v29;
  if ( v9 )
  {
    v30 = *(unsigned int *)(a1 + 64);
    *(_QWORD *)(a1 + 56) = 0;
    v31 = (unsigned int)v8;
    v32 = v30;
    v33 = 8 * v30;
    v34 = &v9[v31];
    if ( v29 != v29 + v33 )
    {
      v35 = (__m128i *)v29;
      v36 = ((unsigned __int64)(v33 - 8) >> 3) + 1;
      if ( v33 == 8 )
        goto LABEL_27;
      v37 = _mm_load_si128((const __m128i *)&xmmword_23AB190);
      do
        *v35++ = v37;
      while ( v35 != (__m128i *)(v29 + 16 * (v36 >> 1)) );
      v35 = (__m128i *)(v29 + 8 * (v36 & 0xFFFFFFFFFFFFFFFELL));
      if ( (v36 & 0xFFFFFFFFFFFFFFFELL) != v36 )
LABEL_27:
        v35->m128i_i64[0] = -4;
    }
    v38 = v9;
    for ( i = v32 - 1; v34 != v38; ++v38 )
    {
      v40 = *v38;
      if ( *v38 != -8 && v40 != -4 )
      {
        if ( !v32 )
        {
          *(_QWORD *)&dword_0 = *v38;
          BUG();
        }
        v41 = i & (((unsigned int)v40 >> 9) ^ ((unsigned int)v40 >> 4));
        v42 = (_QWORD *)(v29 + 8LL * v41);
        v43 = *v42;
        if ( v40 != *v42 )
        {
          v78 = 1;
          v79 = nullptr;
          if ( v43 != -4 )
          {
            while ( 1 )
            {
              if ( !v79 && v43 == -8 )
                v79 = v42;
              v41 = i & (v78 + v41);
              v42 = (_QWORD *)(v29 + 8LL * v41);
              v43 = *v42;
              if ( v40 == *v42 )
                break;
              if ( v43 == -4 )
              {
                if ( v79 )
                  v42 = v79;
                break;
              }
              ++v78;
            }
          }
        }
        v44 = *v38;
        ++*(_DWORD *)(a1 + 56);
        *v42 = v44;
      }
    }
    operator delete(v9, v31 * 8, 8);
    v9 = *(__int64 **)(a1 + 48);
    v8 = *(unsigned int *)(a1 + 64);
    v6 = v83;
    v16 = *(_DWORD *)(a1 + 56) + 1;
  }
  else
  {
    v49 = *(unsigned int *)(a1 + 64);
    *(_QWORD *)(a1 + 56) = 0;
    v8 = v49;
    v50 = 8 * v49;
    v9 = (__int64 *)(v29 + v50);
    if ( v29 == v29 + v50 )
    {
      v16 = 1;
    }
    else
    {
      v51 = (__m128i *)v29;
      v52 = ((unsigned __int64)(v50 - 8) >> 3) + 1;
      if ( v50 == 8 )
        goto LABEL_45;
      v53 = _mm_load_si128((const __m128i *)&xmmword_23AB190);
      do
        *v51++ = v53;
      while ( (__m128i *)(v29 + 16 * (v52 >> 1)) != v51 );
      v51 = (__m128i *)(v29 + 8 * (v52 & 0xFFFFFFFFFFFFFFFELL));
      if ( (v52 & 0xFFFFFFFFFFFFFFFELL) != v52 )
LABEL_45:
        v51->m128i_i64[0] = -4;
      v9 = (__int64 *)v29;
      v16 = 1;
    }
  }
  if ( !(_DWORD)v8 )
    goto LABEL_121;
  v18 = v85[0];
  v45 = (v8 - 1) & ((LODWORD(v85[0]) >> 9) ^ (LODWORD(v85[0]) >> 4));
  v13 = &v9[v45];
  v46 = *v13;
  if ( *v13 != v85[0] )
  {
    v47 = 1;
    v48 = nullptr;
    if ( v46 != -4 )
    {
      while ( 1 )
      {
        if ( v46 == -8 && !v48 )
          v48 = v13;
        v45 = (v8 - 1) & (v47 + v45);
        v13 = &v9[v45];
        v46 = *v13;
        if ( v85[0] == *v13 )
          goto LABEL_9;
        if ( v46 == -4 )
        {
LABEL_72:
          if ( !v48 )
            goto LABEL_39;
          v18 = *v48;
          v13 = v48;
          goto LABEL_9;
        }
        ++v47;
      }
    }
    goto LABEL_39;
  }
LABEL_9:
  *(_DWORD *)(a1 + 56) = v16;
  if ( v18 != -4 )
    --*(_DWORD *)(a1 + 60);
LABEL_11:
  *v13 = v85[0];
  sub_20C8420(v87, v13, &v9[v8], v6, 1);
  v19 = (__int64 *)sub_2049790(v85);
  for ( j = sub_20497A0(v85); (__int64 *)j != v19; ++v19 )
  {
    v86 = *v19;
    v20 = (unsigned __int64 *)sub_2049410(&v86);
    v21 = sub_2049420(&v86);
    while ( (unsigned __int64 *)v21 != v20 )
    {
      while ( 1 )
      {
        v87[0].m128_u64[0] = *v20;
        if ( sub_20492F0((__int64)v87) )
          break;
        if ( (unsigned __int64 *)v21 == ++v20 )
          goto LABEL_17;
      }
      ++v20;
      v22 = sub_2049330((__int64 *)v87);
      sub_20C6450(a1, v22, v23, v24, v25, v26);
    }
LABEL_17:
    ;
  }
}
