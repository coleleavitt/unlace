void __fastcall sub_20C7420(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rcx
  __int64 v9; // r14
  __int64 *v10; // r12
  unsigned __int64 v11; // rdi
  unsigned int v12; // r13d
  int v13; // edx
  __int64 *v14; // rsi
  __int64 v15; // rax
  __int64 *v16; // r8
  int v17; // eax
  __int64 v18; // r8
  __int64 v19; // rdx
  unsigned __int8 v20; // al
  __int64 v21; // rax
  __int64 v22; // rdx
  unsigned __int8 **v23; // r12
  unsigned __int8 **j; // rbp
  unsigned __int8 *v25; // rsi
  __int64 v26; // rdx
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rsi
  int v32; // r11d
  __int64 v33; // rdi
  __int64 *v34; // r9
  __m128i *v35; // rdx
  unsigned __int64 v36; // r8
  __m128i si128; // xmm0
  __int64 *v38; // rdx
  int i; // r15d
  __int64 v40; // rdi
  unsigned int v41; // r8d
  _QWORD *v42; // r10
  __int64 v43; // r13
  int v44; // r9d
  unsigned int v45; // edi
  __int64 v46; // r8
  __int64 v47; // rsi
  __int64 v48; // rsi
  __m128i *v49; // rdx
  unsigned __int64 v50; // rdi
  __m128i v51; // xmm0
  unsigned __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rsi
  __int64 v56; // r15
  __int64 *v57; // r8
  int v58; // r14d
  __int64 v59; // rsi
  __m128i *v60; // rdx
  unsigned __int64 v61; // rdi
  __m128i v62; // xmm0
  __int64 *v63; // rdx
  int v64; // r11d
  __int64 v65; // rsi
  unsigned int v66; // r10d
  _QWORD *v67; // rdi
  __int64 v68; // r9
  int v69; // r13d
  __int64 v70; // rdi
  __int64 *v71; // r9
  int v72; // edx
  __int64 v73; // rsi
  __int64 v74; // rsi
  __m128i *v75; // rdx
  unsigned __int64 v76; // rdi
  __m128i v77; // xmm0
  _QWORD *v78; // r14
  __int64 *v79; // r10
  int v80; // edx
  __int64 v81; // [rsp+8h] [rbp-60h]
  __int64 v82; // [rsp+8h] [rbp-60h]
  __int64 v83; // [rsp+8h] [rbp-60h]
  __int64 v84; // [rsp+8h] [rbp-60h]
  int v85; // [rsp+8h] [rbp-60h]
  _QWORD *v86; // [rsp+8h] [rbp-60h]
  int v87; // [rsp+10h] [rbp-58h]
  __m128 v88[4]; // [rsp+20h] [rbp-48h] BYREF

  v6 = a1 + 24;
  v9 = *(unsigned int *)(a1 + 40);
  v10 = *(__int64 **)(a1 + 24);
  if ( !(_DWORD)v9 )
    goto LABEL_22;
  v11 = (unsigned int)(v9 - 1);
  v12 = ((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4);
  v13 = v11 & v12;
  v14 = &v10[(unsigned int)v11 & v12];
  v15 = *v14;
  if ( *v14 == a2 )
  {
LABEL_3:
    sub_201A6C0(v88, v14, &v10[v9], v6, 1);
    return;
  }
  a6 = 1;
  v16 = nullptr;
  if ( v15 != -4096 )
  {
    while ( 1 )
    {
      if ( v15 == -8192 && !v16 )
        v16 = v14;
      v13 = v11 & (a6 + v13);
      v14 = &v10[v13];
      v15 = *v14;
      if ( *v14 == a2 )
        goto LABEL_3;
      if ( v15 == -4096 )
        break;
      a6 = (unsigned int)(a6 + 1);
    }
    if ( v16 )
      v14 = v16;
  }
  v17 = *(_DWORD *)(a1 + 32) + 1;
  a5 = (unsigned int)(4 * v17);
  if ( (unsigned int)a5 >= 3 * (int)v9 )
  {
LABEL_22:
    v81 = v6;
    v27 = (((((((unsigned int)(2 * v9 - 1) | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v9 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 4)
          | (((unsigned int)(2 * v9 - 1) | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v9 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 8)
        | (((((unsigned int)(2 * v9 - 1) | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v9 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 4)
        | (((unsigned int)(2 * v9 - 1) | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 2)
        | (unsigned int)(2 * v9 - 1)
        | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1);
    v28 = ((v27 >> 16) | v27) + 1;
    if ( (unsigned int)v28 < 0x40 )
      LODWORD(v28) = 64;
    *(_DWORD *)(a1 + 40) = v28;
    v29 = sub_22300B0(8LL * (unsigned int)v28, 8, 64, v6, a5, a6);
    v6 = v81;
    *(_QWORD *)(a1 + 24) = v29;
    if ( v10 )
    {
      v30 = *(unsigned int *)(a1 + 40);
      *(_QWORD *)(a1 + 32) = 0;
      v31 = (unsigned int)v9;
      v32 = v30;
      v33 = 8 * v30;
      v34 = &v10[v31];
      if ( v29 != v29 + v33 )
      {
        v35 = (__m128i *)v29;
        v36 = ((unsigned __int64)(v33 - 8) >> 3) + 1;
        if ( v33 == 8 )
          goto LABEL_30;
        si128 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
        do
          *v35++ = si128;
        while ( (__m128i *)(v29 + 16 * (v36 >> 1)) != v35 );
        v35 = (__m128i *)(v29 + 8 * (v36 & 0xFFFFFFFFFFFFFFFELL));
        if ( (v36 & 0xFFFFFFFFFFFFFFFELL) != v36 )
LABEL_30:
          v35->m128i_i64[0] = -4096;
      }
      v38 = v10;
      for ( i = v32 - 1; v34 != v38; ++v38 )
      {
        v40 = *v38;
        if ( *v38 != -8192 && v40 != -4096 )
        {
          if ( !v32 )
          {
            *(_QWORD *)&dword_0 = *v38;
            BUG();
          }
          v41 = i & (((unsigned int)v40 >> 9) ^ ((unsigned int)v40 >> 4));
          v42 = (_QWORD *)(v29 + 8LL * v41);
          v43 = *v42;
          if ( *v42 != v40 && v43 != -4096 )
          {
            v85 = 1;
            v78 = nullptr;
            while ( 1 )
            {
              if ( v43 == -8192 && !v78 )
                v78 = v42;
              v41 = i & (v85 + v41);
              v42 = (_QWORD *)(v29 + 8LL * v41);
              v43 = *v42;
              if ( v40 == *v42 )
                break;
              if ( v43 == -4096 )
              {
                if ( v78 )
                  v42 = v78;
                break;
              }
              ++v85;
            }
          }
          ++*(_DWORD *)(a1 + 32);
          *v42 = v40;
        }
      }
      v82 = v6;
      operator delete(v10, v31 * 8, 8);
      v10 = *(__int64 **)(a1 + 24);
      v9 = *(unsigned int *)(a1 + 40);
      v6 = v82;
      v17 = *(_DWORD *)(a1 + 32) + 1;
    }
    else
    {
      v47 = *(unsigned int *)(a1 + 40);
      *(_QWORD *)(a1 + 32) = 0;
      v9 = v47;
      v48 = 8 * v47;
      v10 = (__int64 *)(v29 + v48);
      if ( v29 == v29 + v48 )
      {
        v17 = 1;
      }
      else
      {
        v49 = (__m128i *)v29;
        v50 = ((unsigned __int64)(v48 - 8) >> 3) + 1;
        if ( v48 == 8 )
          goto LABEL_48;
        v51 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
        do
          *v49++ = v51;
        while ( (__m128i *)(v29 + 16 * (v50 >> 1)) != v49 );
        v49 = (__m128i *)(v29 + 8 * (v50 & 0xFFFFFFFFFFFFFFFELL));
        if ( (v50 & 0xFFFFFFFFFFFFFFFELL) != v50 )
LABEL_48:
          v49->m128i_i64[0] = -4096;
        v10 = (__int64 *)v29;
        v17 = 1;
      }
    }
    if ( (_DWORD)v9 )
    {
      v44 = v9 - 1;
      v45 = (v9 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
      v14 = &v10[v45];
      v19 = a2;
      v46 = *v14;
      if ( *v14 != a2 )
      {
        if ( v46 != -4096 )
        {
          v79 = &v10[v44 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4))];
          v80 = 1;
          v14 = nullptr;
          while ( 1 )
          {
            if ( v46 == -8192 && !v14 )
              v14 = v79;
            v45 = v44 & (v80 + v45);
            v79 = &v10[v45];
            v46 = *v79;
            if ( *v79 == a2 )
            {
              v19 = a2;
              v14 = &v10[v45];
              goto LABEL_9;
            }
            if ( v46 == -4096 )
              break;
            ++v80;
          }
          if ( v14 )
            goto LABEL_8;
          v14 = &v10[v45];
        }
        goto LABEL_42;
      }
LABEL_9:
      *(_DWORD *)(a1 + 32) = v17;
      if ( v19 != -4096 )
        --*(_DWORD *)(a1 + 36);
      goto LABEL_11;
    }
LABEL_134:
    ++*(_DWORD *)(a1 + 32);
    BUG();
  }
  v18 = (unsigned int)v9 >> 3;
  if ( (int)v9 - *(_DWORD *)(a1 + 36) - v17 > (unsigned int)v18 )
  {
LABEL_8:
    v19 = *v14;
    goto LABEL_9;
  }
  v83 = v6;
  v52 = (v11 >> 1) | v11 | (((v11 >> 1) | v11) >> 2);
  v53 = ((((((v52 >> 4) | v52) >> 8) | (v52 >> 4) | v52) >> 16) | (((v52 >> 4) | v52) >> 8) | (v52 >> 4) | v52) + 1;
  if ( (unsigned int)v53 < 0x40 )
    LODWORD(v53) = 64;
  *(_DWORD *)(a1 + 40) = v53;
  v54 = sub_22300B0(8LL * (unsigned int)v53, 8, 64, v6, v18, a6);
  v6 = v83;
  *(_QWORD *)(a1 + 24) = v54;
  if ( v10 )
  {
    v55 = *(unsigned int *)(a1 + 40);
    v56 = 8 * v9;
    *(_QWORD *)(a1 + 32) = 0;
    v57 = &v10[v9];
    v58 = v55;
    v59 = 8 * v55;
    if ( v54 != v54 + v59 )
    {
      v60 = (__m128i *)v54;
      v61 = ((unsigned __int64)(v59 - 8) >> 3) + 1;
      if ( v59 == 8 )
        goto LABEL_58;
      v62 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
      do
        *v60++ = v62;
      while ( (__m128i *)(v54 + 16 * (v61 >> 1)) != v60 );
      v60 = (__m128i *)(v54 + 8 * (v61 & 0xFFFFFFFFFFFFFFFELL));
      if ( (v61 & 0xFFFFFFFFFFFFFFFELL) != v61 )
LABEL_58:
        v60->m128i_i64[0] = -4096;
    }
    v63 = v10;
    v64 = v58 - 1;
    do
    {
      v65 = *v63;
      if ( *v63 != -4096 && v65 != -8192 )
      {
        if ( !v58 )
        {
          *(_QWORD *)&dword_0 = *v63;
          BUG();
        }
        v66 = v64 & (((unsigned int)v65 >> 9) ^ ((unsigned int)v65 >> 4));
        v67 = (_QWORD *)(v54 + 8LL * v66);
        v68 = *v67;
        if ( *v67 != v65 && v68 != -4096 )
        {
          v87 = 1;
          v86 = nullptr;
          while ( 1 )
          {
            if ( v68 == -8192 )
            {
              if ( v86 )
                v67 = v86;
              v86 = v67;
            }
            v66 = v64 & (v87 + v66);
            v67 = (_QWORD *)(v54 + 8LL * v66);
            v68 = *v67;
            if ( v65 == *v67 )
              break;
            if ( v68 == -4096 )
            {
              if ( v86 )
                v67 = v86;
              break;
            }
            ++v87;
          }
        }
        ++*(_DWORD *)(a1 + 32);
        *v67 = v65;
      }
      ++v63;
    }
    while ( v57 != v63 );
    v84 = v6;
    operator delete(v10, v56, 8);
    v10 = *(__int64 **)(a1 + 24);
    v9 = *(unsigned int *)(a1 + 40);
    v6 = v84;
    v17 = *(_DWORD *)(a1 + 32) + 1;
  }
  else
  {
    v73 = *(unsigned int *)(a1 + 40);
    *(_QWORD *)(a1 + 32) = 0;
    v9 = v73;
    v74 = 8 * v73;
    v10 = (__int64 *)(v54 + v74);
    if ( v54 == v54 + v74 )
    {
      v17 = 1;
    }
    else
    {
      v75 = (__m128i *)v54;
      v76 = ((unsigned __int64)(v74 - 8) >> 3) + 1;
      if ( v74 == 8 )
        goto LABEL_81;
      v77 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
      do
        *v75++ = v77;
      while ( v75 != (__m128i *)(v54 + 16 * (v76 >> 1)) );
      v75 = (__m128i *)(v54 + 8 * (v76 & 0xFFFFFFFFFFFFFFFELL));
      if ( (v76 & 0xFFFFFFFFFFFFFFFELL) != v76 )
LABEL_81:
        v75->m128i_i64[0] = -4096;
      v10 = (__int64 *)v54;
      v17 = 1;
    }
  }
  if ( !(_DWORD)v9 )
    goto LABEL_134;
  v69 = (v9 - 1) & v12;
  v14 = &v10[v69];
  v19 = a2;
  v70 = *v14;
  if ( *v14 == a2 )
    goto LABEL_9;
  if ( v70 != -4096 )
  {
    v71 = &v10[v69];
    v72 = 1;
    v14 = nullptr;
    while ( 1 )
    {
      if ( v70 == -8192 && !v14 )
        v14 = v71;
      v69 = (v9 - 1) & (v72 + v69);
      v71 = &v10[v69];
      v70 = *v71;
      if ( *v71 == a2 )
      {
        v19 = a2;
        v14 = &v10[v69];
        goto LABEL_9;
      }
      if ( v70 == -4096 )
        break;
      ++v72;
    }
    if ( v14 )
      goto LABEL_8;
    v14 = &v10[v69];
  }
LABEL_42:
  *(_DWORD *)(a1 + 32) = v17;
LABEL_11:
  *v14 = a2;
  sub_201A6C0(v88, v14, &v10[v9], v6, 1);
  v20 = *(_BYTE *)(a2 - 16);
  if ( (v20 & 2) != 0 )
  {
    v21 = *(_QWORD *)(a2 - 32);
    v22 = *(unsigned int *)(a2 - 24);
  }
  else
  {
    v22 = (*(_WORD *)(a2 - 16) >> 6) & 0xF;
    v21 = a2 - 8LL * ((v20 >> 2) & 0xF) - 16;
  }
  v23 = (unsigned __int8 **)(v21 + 8 * v22);
  for ( j = (unsigned __int8 **)v21; v23 != j; ++j )
  {
    v25 = *j;
    if ( *j )
    {
      v26 = *v25;
      if ( (unsigned int)(v26 - 5) > 0x20 )
      {
        if ( (_BYTE)v26 == 1 )
          sub_20C7C30(a1, *((_QWORD *)v25 + 16));
      }
      else
      {
        sub_20C7420(a1, v25, v26);
      }
    }
  }
}
