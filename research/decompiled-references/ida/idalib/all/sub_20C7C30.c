void __fastcall sub_20C7C30(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbx
  unsigned __int8 v8; // al
  unsigned __int8 *v9; // rsi
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r14
  __int64 *v14; // r12
  unsigned int v15; // r13d
  int v16; // edi
  __int64 *v17; // rax
  __int64 v18; // rdx
  __int64 *v19; // rbx
  __int64 *v20; // r12
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  __m128i *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rsi
  int v27; // r11d
  __int64 v28; // rcx
  __int64 *v29; // r8
  __m128i *v30; // rdx
  unsigned __int64 v31; // rdi
  __m128i v32; // xmm0
  __int64 *v33; // rdx
  int i; // r15d
  __int64 v35; // rcx
  unsigned int v36; // edi
  __int64 *v37; // r9
  __int64 v38; // r10
  int v39; // eax
  unsigned int v40; // ecx
  __int64 *v41; // rsi
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // rdx
  unsigned __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rax
  __int64 *v49; // r12
  __int64 v50; // rsi
  __int64 v51; // rax
  __int64 v52; // rdx
  unsigned __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  unsigned __int64 v56; // rcx
  __int64 v57; // rax
  __m128i *v58; // rax
  __int64 *v59; // rdi
  __int64 v60; // r10
  __int64 v61; // rcx
  __m128i *v62; // rdx
  unsigned __int64 v63; // rsi
  __m128i si128; // xmm0
  __int64 *v65; // rdx
  int v66; // r15d
  __int64 v67; // rcx
  unsigned int v68; // esi
  __int64 *v69; // r8
  __int64 v70; // r9
  unsigned int v71; // r13d
  __int64 v72; // rdi
  int v73; // edx
  __int64 *v74; // rcx
  __int64 v75; // rcx
  __int64 v76; // rcx
  __m128i *v77; // rdx
  unsigned __int64 v78; // rsi
  __m128i v79; // xmm0
  __int64 v80; // rsi
  __int64 v81; // rsi
  __m128i *v82; // rdx
  unsigned __int64 v83; // rcx
  __m128i v84; // xmm0
  int v85; // r14d
  __int64 *v86; // r13
  int v87; // r14d
  __int64 *v88; // r11
  int v89; // edx
  __int64 *v90; // rdi
  __int64 v91; // [rsp+0h] [rbp-58h]
  __m128 v92[4]; // [rsp+10h] [rbp-48h] BYREF

  v7 = a2;
  v8 = *(_BYTE *)a2;
  if ( *(_BYTE *)a2 == 24 )
  {
    v9 = *(unsigned __int8 **)(a2 + 24);
    v10 = *v9;
    v11 = (unsigned int)(v10 - 5);
    v12 = *v9;
    if ( (unsigned int)v11 > 0x20 )
    {
      if ( (unsigned int)(v10 - 1) > 1 )
      {
        if ( (_BYTE)v12 == 4 )
        {
          v19 = *((__int64 **)v9 + 16);
          v20 = &v19[*((unsigned int *)v9 + 34)];
          while ( v20 != v19 )
          {
            v21 = *v19++;
            sub_20C7C30(a1, *(_QWORD *)(v21 + 128));
          }
        }
      }
      else
      {
        sub_20C7C30(a1, *((_QWORD *)v9 + 16));
      }
    }
    else
    {
      sub_20C7420(a1, (__int64)v9, v12, v11, a5, a6);
    }
    return;
  }
  if ( (unsigned __int8)(v8 - 13) <= 3u || v8 > 0x15u )
    return;
  v13 = *(unsigned int *)(a1 + 16);
  v14 = *(__int64 **)a1;
  if ( (_DWORD)v13 )
  {
    a4 = (unsigned int)(v13 - 1);
    v15 = ((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4);
    v16 = a4 & v15;
    v17 = &v14[(unsigned int)a4 & v15];
    v18 = *v17;
    if ( a2 == *v17 )
    {
LABEL_11:
      sub_200E5B0(v92, v17, &v14[v13], a1, 1);
      return;
    }
    a5 = 1;
    v41 = nullptr;
    if ( v18 == -4096 )
      goto LABEL_47;
    while ( 1 )
    {
      if ( !v41 && v18 == -8192 )
        v41 = v17;
      a6 = (unsigned int)(a5 + 1);
      v16 = a4 & (a5 + v16);
      v17 = &v14[v16];
      v18 = *v17;
      if ( *v17 == v7 )
        goto LABEL_11;
      if ( v18 == -4096 )
        break;
      a5 = (unsigned int)a6;
    }
    if ( !v41 )
LABEL_47:
      v41 = v17;
    v39 = *(_DWORD *)(a1 + 8) + 1;
    if ( 4 * v39 < (unsigned int)(3 * v13) )
    {
      if ( (int)v13 - *(_DWORD *)(a1 + 12) - v39 > (unsigned int)v13 >> 3 )
      {
        v42 = *v41;
        goto LABEL_35;
      }
      v56 = (a4 >> 1) | a4;
      v57 = (((((((v56 | (v56 >> 2)) >> 4) | v56 | (v56 >> 2)) >> 8) | ((v56 | (v56 >> 2)) >> 4) | v56 | (v56 >> 2)) >> 16)
           | ((((v56 | (v56 >> 2)) >> 4) | v56 | (v56 >> 2)) >> 8)
           | ((v56 | (v56 >> 2)) >> 4)
           | v56
           | (v56 >> 2))
          + 1;
      if ( (unsigned int)v57 < 0x40 )
        LODWORD(v57) = 64;
      *(_DWORD *)(a1 + 16) = v57;
      v58 = (__m128i *)sub_22300B0(8LL * (unsigned int)v57, 8, 64, v56, a5, a6);
      *(_QWORD *)a1 = v58;
      if ( v14 )
      {
        *(_QWORD *)(a1 + 8) = 0;
        v91 = 8 * v13;
        v59 = &v14[v13];
        v60 = *(unsigned int *)(a1 + 16);
        v61 = 8 * v60;
        if ( v58 != (__m128i *)((char *)v58 + 8 * v60) )
        {
          v62 = v58;
          v63 = ((unsigned __int64)(v61 - 8) >> 3) + 1;
          if ( v61 == 8 )
            goto LABEL_59;
          si128 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
          do
            *v62++ = si128;
          while ( &v58[v63 >> 1] != v62 );
          v62 = (__m128i *)((char *)v58 + 8 * (v63 & 0xFFFFFFFFFFFFFFFELL));
          if ( (v63 & 0xFFFFFFFFFFFFFFFELL) != v63 )
LABEL_59:
            v62->m128i_i64[0] = -4096;
        }
        v65 = v14;
        v66 = v60 - 1;
        do
        {
          v67 = *v65;
          if ( *v65 != -4096 && v67 != -8192 )
          {
            if ( !(_DWORD)v60 )
            {
              *(_QWORD *)&dword_0 = *v65;
              BUG();
            }
            v68 = v66 & (((unsigned int)v67 >> 9) ^ ((unsigned int)v67 >> 4));
            v69 = &v58->m128i_i64[v68];
            v70 = *v69;
            if ( *v69 != v67 )
            {
              v87 = 1;
              v88 = nullptr;
              if ( v70 != -4096 )
              {
                while ( 1 )
                {
                  if ( !v88 && v70 == -8192 )
                    v88 = v69;
                  v68 = v66 & (v87 + v68);
                  v69 = &v58->m128i_i64[v68];
                  v70 = *v69;
                  if ( v67 == *v69 )
                    break;
                  if ( v70 == -4096 )
                  {
                    if ( v88 )
                      v69 = v88;
                    break;
                  }
                  ++v87;
                }
              }
            }
            ++*(_DWORD *)(a1 + 8);
            *v69 = v67;
          }
          ++v65;
        }
        while ( v59 != v65 );
        operator delete(v14, v91, 8);
      }
      else
      {
        v80 = *(unsigned int *)(a1 + 16);
        *(_QWORD *)(a1 + 8) = 0;
        v81 = 8 * v80;
        if ( v58 != (__m128i *)&v58->m128i_i8[v81] )
        {
          v82 = v58;
          v83 = ((unsigned __int64)(v81 - 8) >> 3) + 1;
          if ( v81 == 8 )
            goto LABEL_83;
          v84 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
          do
            *v82++ = v84;
          while ( v82 != &v58[v83 >> 1] );
          v58 = (__m128i *)((char *)v58 + 8 * (v83 & 0xFFFFFFFFFFFFFFFELL));
          if ( (v83 & 0xFFFFFFFFFFFFFFFELL) != v83 )
LABEL_83:
            v58->m128i_i64[0] = -4096;
        }
      }
      v13 = *(unsigned int *)(a1 + 16);
      v39 = *(_DWORD *)(a1 + 8) + 1;
      if ( (_DWORD)v13 )
      {
        v14 = *(__int64 **)a1;
        v71 = (v13 - 1) & v15;
        v41 = (__int64 *)(*(_QWORD *)a1 + 8LL * v71);
        v42 = v7;
        v72 = *v41;
        if ( *v41 == v7 )
          goto LABEL_35;
        v73 = 1;
        v74 = nullptr;
        if ( v72 == -4096 )
          goto LABEL_71;
        while ( 1 )
        {
          if ( !v74 && v72 == -8192 )
            v74 = v41;
          v71 = (v13 - 1) & (v73 + v71);
          v41 = &v14[v71];
          v72 = *v41;
          if ( *v41 == v7 )
            break;
          if ( v72 == -4096 )
          {
            if ( !v74 )
              goto LABEL_71;
            v42 = *v74;
            v41 = v74;
            goto LABEL_35;
          }
          ++v73;
        }
LABEL_115:
        v42 = v7;
LABEL_35:
        *(_DWORD *)(a1 + 8) = v39;
        if ( v42 != -4096 )
          --*(_DWORD *)(a1 + 12);
        goto LABEL_37;
      }
LABEL_132:
      ++*(_DWORD *)(a1 + 8);
      BUG();
    }
  }
  v22 = (((((((unsigned int)(2 * v13 - 1) | ((unsigned __int64)(unsigned int)(2 * v13 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v13 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v13 - 1) >> 1)) >> 4)
        | (((unsigned int)(2 * v13 - 1) | ((unsigned __int64)(unsigned int)(2 * v13 - 1) >> 1)) >> 2)
        | (unsigned int)(2 * v13 - 1)
        | ((unsigned __int64)(unsigned int)(2 * v13 - 1) >> 1)) >> 8)
      | (((((unsigned int)(2 * v13 - 1) | ((unsigned __int64)(unsigned int)(2 * v13 - 1) >> 1)) >> 2)
        | (unsigned int)(2 * v13 - 1)
        | ((unsigned __int64)(unsigned int)(2 * v13 - 1) >> 1)) >> 4)
      | (((unsigned int)(2 * v13 - 1) | ((unsigned __int64)(unsigned int)(2 * v13 - 1) >> 1)) >> 2)
      | (unsigned int)(2 * v13 - 1)
      | ((unsigned __int64)(unsigned int)(2 * v13 - 1) >> 1);
  v23 = ((v22 >> 16) | v22) + 1;
  if ( (unsigned int)v23 < 0x40 )
    LODWORD(v23) = 64;
  *(_DWORD *)(a1 + 16) = v23;
  v24 = (__m128i *)sub_22300B0(8LL * (unsigned int)v23, 8, 64, a4, a5, a6);
  *(_QWORD *)a1 = v24;
  if ( v14 )
  {
    v25 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    v26 = (unsigned int)v13;
    v27 = v25;
    v28 = 8 * v25;
    v29 = &v14[v26];
    if ( v24 != (__m128i *)&v24->m128i_i8[v28] )
    {
      v30 = v24;
      v31 = ((unsigned __int64)(v28 - 8) >> 3) + 1;
      if ( v28 == 8 )
        goto LABEL_24;
      v32 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
      do
        *v30++ = v32;
      while ( &v24[v31 >> 1] != v30 );
      v30 = (__m128i *)((char *)v24 + 8 * (v31 & 0xFFFFFFFFFFFFFFFELL));
      if ( (v31 & 0xFFFFFFFFFFFFFFFELL) != v31 )
LABEL_24:
        v30->m128i_i64[0] = -4096;
    }
    v33 = v14;
    for ( i = v27 - 1; v29 != v33; ++v33 )
    {
      v35 = *v33;
      if ( *v33 != -8192 && v35 != -4096 )
      {
        if ( !v27 )
        {
          *(_QWORD *)&dword_0 = *v33;
          BUG();
        }
        v36 = i & (((unsigned int)v35 >> 9) ^ ((unsigned int)v35 >> 4));
        v37 = &v24->m128i_i64[v36];
        v38 = *v37;
        if ( v35 != *v37 )
        {
          v85 = 1;
          v86 = nullptr;
          if ( v38 != -4096 )
          {
            while ( 1 )
            {
              if ( v38 == -8192 && !v86 )
                v86 = v37;
              v36 = i & (v85 + v36);
              v37 = &v24->m128i_i64[v36];
              v38 = *v37;
              if ( v35 == *v37 )
                break;
              if ( v38 == -4096 )
              {
                if ( v86 )
                  v37 = v86;
                break;
              }
              ++v85;
            }
          }
        }
        ++*(_DWORD *)(a1 + 8);
        *v37 = v35;
      }
    }
    operator delete(v14, v26 * 8, 8);
  }
  else
  {
    v75 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    v76 = 8 * v75;
    if ( v24 != (__m128i *)&v24->m128i_i8[v76] )
    {
      v77 = v24;
      v78 = ((unsigned __int64)(v76 - 8) >> 3) + 1;
      if ( v76 == 8 )
        goto LABEL_77;
      v79 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
      do
        *v77++ = v79;
      while ( &v24[v78 >> 1] != v77 );
      v24 = (__m128i *)((char *)v24 + 8 * (v78 & 0xFFFFFFFFFFFFFFFELL));
      if ( (v78 & 0xFFFFFFFFFFFFFFFELL) != v78 )
LABEL_77:
        v24->m128i_i64[0] = -4096;
    }
  }
  v13 = *(unsigned int *)(a1 + 16);
  v39 = *(_DWORD *)(a1 + 8) + 1;
  if ( !(_DWORD)v13 )
    goto LABEL_132;
  v14 = *(__int64 **)a1;
  v40 = (v13 - 1) & (((unsigned int)v7 >> 9) ^ ((unsigned int)v7 >> 4));
  v41 = (__int64 *)(*(_QWORD *)a1 + 8LL * v40);
  v42 = v7;
  v43 = *v41;
  if ( *v41 == v7 )
    goto LABEL_35;
  v89 = 1;
  v90 = nullptr;
  if ( v43 != -4096 )
  {
    while ( 1 )
    {
      if ( !v90 && v43 == -8192 )
        v90 = v41;
      v40 = (v13 - 1) & (v89 + v40);
      v41 = &v14[v40];
      v43 = *v41;
      if ( *v41 == v7 )
        goto LABEL_115;
      if ( v43 == -4096 )
      {
        if ( !v90 )
          break;
        v42 = *v90;
        v41 = v90;
        goto LABEL_35;
      }
      ++v89;
    }
  }
LABEL_71:
  *(_DWORD *)(a1 + 8) = v39;
LABEL_37:
  *v41 = v7;
  sub_200E5B0(v92, v41, &v14[v13], a1, 1);
  sub_20C6450(a1, *(_QWORD *)(v7 + 8), v44, v45, v46, v47);
  if ( *(_BYTE *)v7 <= 0x1Cu )
  {
    if ( *(_BYTE *)v7 == 18 && *(_WORD *)(v7 + 2) == 34 )
    {
      v51 = sub_20BEEB0(v7);
      sub_20C6450(a1, v51, v52, v53, v54, v55);
    }
    v48 = 4LL * (*(_DWORD *)(v7 + 4) & 0x7FFFFFF);
    v49 = (__int64 *)(v7 - v48 * 8);
    if ( (*(_BYTE *)(v7 + 7) & 0x40) != 0 )
    {
      v49 = *(__int64 **)(v7 - 8);
      v7 = (__int64)&v49[v48];
    }
    while ( (__int64 *)v7 != v49 )
    {
      v50 = *v49;
      v49 += 4;
      sub_20C7C30(a1, v50);
    }
  }
}
