__m128i *__fastcall sub_1794A60(__m128i *a1, _DWORD *a2, __int64 *a3, __int64 a4, unsigned __int64 a5, __int64 a6)
{
  _DWORD *v6; // rcx
  __int64 v9; // r13
  __int64 *v10; // rbp
  __int64 v11; // rdx
  int v12; // eax
  __int64 *v13; // rsi
  __int64 v14; // rdi
  __m128i v15; // xmm1
  int v17; // r10d
  __int64 *v18; // r9
  int v19; // eax
  __int64 v20; // r9
  __int64 v21; // rdi
  __m128i v22; // xmm2
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rsi
  int v28; // r11d
  __int64 v29; // rdi
  __int64 *v30; // r9
  __m128i *v31; // rdx
  unsigned __int64 v32; // r8
  __m128i v33; // xmm0
  __int64 *v34; // rdx
  int i; // r14d
  __int64 v36; // rdi
  unsigned int v37; // r8d
  _QWORD *v38; // r10
  __int64 v39; // r13
  int v40; // r9d
  unsigned int v41; // r8d
  __int64 v42; // rsi
  __int64 v43; // rsi
  __m128i *v44; // rdx
  unsigned __int64 v45; // rdi
  __m128i v46; // xmm0
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // r8
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rdi
  __int64 v52; // rsi
  int v53; // r11d
  __int64 v54; // rdi
  __m128i *v55; // rdx
  unsigned __int64 v56; // r8
  __m128i si128; // xmm0
  __int64 *v58; // rdx
  int v59; // r14d
  __int64 v60; // rdi
  unsigned int v61; // r8d
  _QWORD *v62; // r10
  __int64 v63; // r13
  int v64; // r10d
  unsigned int v65; // r8d
  __int64 v66; // rsi
  __int64 v67; // rsi
  __m128i *v68; // rdx
  unsigned __int64 v69; // rdi
  __m128i v70; // xmm0
  _QWORD *v71; // r15
  _QWORD *v72; // r15
  __int64 *v73; // r11
  int v74; // edi
  __int64 *v75; // r10
  int v76; // r11d
  _DWORD *v77; // [rsp+0h] [rbp-58h]
  _DWORD *v78; // [rsp+0h] [rbp-58h]
  _DWORD *v79; // [rsp+0h] [rbp-58h]
  _DWORD *v80; // [rsp+0h] [rbp-58h]
  int v81; // [rsp+0h] [rbp-58h]
  int v82; // [rsp+0h] [rbp-58h]
  __m128 v83[4]; // [rsp+10h] [rbp-48h] BYREF

  v6 = a2;
  v9 = (unsigned int)a2[4];
  v10 = *(__int64 **)a2;
  if ( !(_DWORD)v9 )
    goto LABEL_12;
  v11 = *a3;
  a5 = (unsigned int)(v9 - 1);
  v12 = a5 & (((unsigned int)v11 >> 9) ^ ((unsigned int)v11 >> 4));
  v13 = &v10[v12];
  v14 = *v13;
  if ( *v13 != v11 )
  {
    v17 = 1;
    v18 = nullptr;
    if ( v14 != -4096 )
    {
      while ( 1 )
      {
        if ( v14 == -8192 && !v18 )
          v18 = v13;
        v12 = a5 & (v17 + v12);
        v13 = &v10[v12];
        v14 = *v13;
        if ( v11 == *v13 )
          goto LABEL_3;
        if ( v14 == -4096 )
          break;
        ++v17;
      }
      if ( v18 )
        v13 = v18;
    }
    v19 = v6[2] + 1;
    a6 = (unsigned int)(4 * v19);
    if ( (unsigned int)a6 < 3 * (int)v9 )
    {
      v20 = (unsigned int)v9 >> 3;
      if ( (int)v9 - v6[3] - v19 > (unsigned int)v20 )
      {
LABEL_8:
        v21 = *v13;
        goto LABEL_9;
      }
      v79 = v6;
      v47 = (((a5 >> 1) | a5 | (((a5 >> 1) | a5) >> 2)) >> 4) | (a5 >> 1) | a5 | (((a5 >> 1) | a5) >> 2);
      v48 = v47 >> 8;
      v49 = (((v48 | v47) >> 16) | v48 | v47) + 1;
      if ( (unsigned int)v49 < 0x40 )
        LODWORD(v49) = 64;
      v6[4] = v49;
      v50 = sub_22300B0(8LL * (unsigned int)v49, 8, 64, v6, v48, v20);
      v6 = v79;
      *(_QWORD *)v79 = v50;
      if ( v10 )
      {
        v51 = (unsigned int)v79[4];
        *((_QWORD *)v79 + 1) = 0;
        v52 = (unsigned int)v9;
        v53 = v51;
        v54 = 8 * v51;
        if ( v50 != v50 + v54 )
        {
          v55 = (__m128i *)v50;
          v56 = ((unsigned __int64)(v54 - 8) >> 3) + 1;
          if ( v54 == 8 )
            goto LABEL_57;
          si128 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
          do
            *v55++ = si128;
          while ( v55 != (__m128i *)(v50 + 16 * (v56 >> 1)) );
          v55 = (__m128i *)(v50 + 8 * (v56 & 0xFFFFFFFFFFFFFFFELL));
          if ( (v56 & 0xFFFFFFFFFFFFFFFELL) != v56 )
LABEL_57:
            v55->m128i_i64[0] = -4096;
        }
        v58 = v10;
        v59 = v53 - 1;
        do
        {
          v60 = *v58;
          if ( *v58 != -4096 && v60 != -8192 )
          {
            if ( !v53 )
            {
              *(_QWORD *)&dword_0 = *v58;
              BUG();
            }
            v61 = v59 & (((unsigned int)v60 >> 9) ^ ((unsigned int)v60 >> 4));
            v62 = (_QWORD *)(v50 + 8LL * v61);
            v63 = *v62;
            if ( v60 != *v62 && v63 != -4096 )
            {
              v82 = 1;
              v72 = nullptr;
              while ( 1 )
              {
                if ( v63 == -8192 && !v72 )
                  v72 = v62;
                v61 = v59 & (v82 + v61);
                v62 = (_QWORD *)(v50 + 8LL * v61);
                v63 = *v62;
                if ( v60 == *v62 )
                  break;
                if ( v63 == -4096 )
                {
                  if ( v72 )
                    v62 = v72;
                  break;
                }
                ++v82;
              }
            }
            ++v6[2];
            *v62 = v60;
          }
          ++v58;
        }
        while ( &v10[v52] != v58 );
        v80 = v6;
        operator delete(v10, v52 * 8, 8);
        v6 = v80;
        v10 = *(__int64 **)v80;
        v9 = (unsigned int)v80[4];
        v19 = v80[2] + 1;
      }
      else
      {
        v66 = (unsigned int)v79[4];
        *((_QWORD *)v79 + 1) = 0;
        v9 = v66;
        v67 = 8 * v66;
        v10 = (__int64 *)(v50 + v67);
        if ( v50 == v50 + v67 )
        {
          v19 = 1;
        }
        else
        {
          v68 = (__m128i *)v50;
          v69 = ((unsigned __int64)(v67 - 8) >> 3) + 1;
          if ( v67 == 8 )
            goto LABEL_75;
          v70 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
          do
            *v68++ = v70;
          while ( (__m128i *)(v50 + 16 * (v69 >> 1)) != v68 );
          v68 = (__m128i *)(v50 + 8 * (v69 & 0xFFFFFFFFFFFFFFFELL));
          if ( (v69 & 0xFFFFFFFFFFFFFFFELL) != v69 )
LABEL_75:
            v68->m128i_i64[0] = -4096;
          v10 = (__int64 *)v50;
          v19 = 1;
        }
      }
      if ( (_DWORD)v9 )
      {
        v64 = v9 - 1;
        v65 = (v9 - 1) & (((unsigned int)*a3 >> 9) ^ ((unsigned int)*a3 >> 4));
        v13 = &v10[v65];
        v11 = *v13;
        v21 = *v13;
        if ( *a3 != *v13 )
        {
          if ( v11 == -4096 )
          {
            v11 = *a3;
            goto LABEL_32;
          }
          v73 = &v10[v64 & (((unsigned int)*a3 >> 9) ^ ((unsigned int)*a3 >> 4))];
          v74 = 1;
          v13 = nullptr;
          while ( 1 )
          {
            if ( v11 == -8192 && !v13 )
              v13 = v73;
            v65 = v64 & (v74 + v65);
            v73 = &v10[v65];
            v11 = *v73;
            if ( *a3 == *v73 )
            {
              v21 = *v73;
              v13 = &v10[v65];
              goto LABEL_9;
            }
            if ( v11 == -4096 )
              break;
            ++v74;
          }
          if ( !v13 )
          {
            v11 = *a3;
            v13 = &v10[v65];
            goto LABEL_32;
          }
          v21 = *v13;
          v11 = *a3;
        }
        goto LABEL_9;
      }
      goto LABEL_124;
    }
LABEL_12:
    v77 = v6;
    v23 = (((((((unsigned int)(2 * v9 - 1) | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 2)
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
    v24 = ((v23 >> 16) | v23) + 1;
    if ( (unsigned int)v24 < 0x40 )
      LODWORD(v24) = 64;
    v6[4] = v24;
    v25 = sub_22300B0(8LL * (unsigned int)v24, 8, 64, v6, a5, a6);
    v6 = v77;
    *(_QWORD *)v77 = v25;
    if ( v10 )
    {
      v26 = (unsigned int)v77[4];
      *((_QWORD *)v77 + 1) = 0;
      v27 = (unsigned int)v9;
      v28 = v26;
      v29 = 8 * v26;
      v30 = &v10[v27];
      if ( v25 != v25 + v29 )
      {
        v31 = (__m128i *)v25;
        v32 = ((unsigned __int64)(v29 - 8) >> 3) + 1;
        if ( v29 == 8 )
          goto LABEL_20;
        v33 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
        do
          *v31++ = v33;
        while ( v31 != (__m128i *)(v25 + 16 * (v32 >> 1)) );
        v31 = (__m128i *)(v25 + 8 * (v32 & 0xFFFFFFFFFFFFFFFELL));
        if ( (v32 & 0xFFFFFFFFFFFFFFFELL) != v32 )
LABEL_20:
          v31->m128i_i64[0] = -4096;
      }
      v34 = v10;
      for ( i = v28 - 1; v30 != v34; ++v34 )
      {
        v36 = *v34;
        if ( *v34 != -8192 && v36 != -4096 )
        {
          if ( !v28 )
          {
            *(_QWORD *)&dword_0 = *v34;
            BUG();
          }
          v37 = i & (((unsigned int)v36 >> 9) ^ ((unsigned int)v36 >> 4));
          v38 = (_QWORD *)(v25 + 8LL * v37);
          v39 = *v38;
          if ( v36 != *v38 && v39 != -4096 )
          {
            v81 = 1;
            v71 = nullptr;
            while ( 1 )
            {
              if ( v39 == -8192 && !v71 )
                v71 = v38;
              v37 = i & (v81 + v37);
              v38 = (_QWORD *)(v25 + 8LL * v37);
              v39 = *v38;
              if ( v36 == *v38 )
                break;
              if ( v39 == -4096 )
              {
                if ( v71 )
                  v38 = v71;
                break;
              }
              ++v81;
            }
          }
          ++v6[2];
          *v38 = v36;
        }
      }
      v78 = v6;
      operator delete(v10, v27 * 8, 8);
      v6 = v78;
      v10 = *(__int64 **)v78;
      v9 = (unsigned int)v78[4];
      v19 = v78[2] + 1;
    }
    else
    {
      v42 = (unsigned int)v77[4];
      *((_QWORD *)v77 + 1) = 0;
      v9 = v42;
      v43 = 8 * v42;
      v10 = (__int64 *)(v25 + v43);
      if ( v25 == v25 + v43 )
      {
        v19 = 1;
      }
      else
      {
        v44 = (__m128i *)v25;
        v45 = ((unsigned __int64)(v43 - 8) >> 3) + 1;
        if ( v43 == 8 )
          goto LABEL_38;
        v46 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
        do
          *v44++ = v46;
        while ( v44 != (__m128i *)(v25 + 16 * (v45 >> 1)) );
        v44 = (__m128i *)(v25 + 8 * (v45 & 0xFFFFFFFFFFFFFFFELL));
        if ( (v45 & 0xFFFFFFFFFFFFFFFELL) != v45 )
LABEL_38:
          v44->m128i_i64[0] = -4096;
        v10 = (__int64 *)v25;
        v19 = 1;
      }
    }
    if ( (_DWORD)v9 )
    {
      v11 = *a3;
      v40 = v9 - 1;
      v41 = (v9 - 1) & (((unsigned int)*a3 >> 9) ^ ((unsigned int)*a3 >> 4));
      v13 = &v10[v41];
      v21 = *v13;
      if ( *v13 != *a3 )
      {
        if ( v21 != -4096 )
        {
          v75 = &v10[v40 & (((unsigned int)*a3 >> 9) ^ ((unsigned int)*a3 >> 4))];
          v76 = 1;
          v13 = nullptr;
          while ( 1 )
          {
            if ( v21 == -8192 && !v13 )
              v13 = v75;
            v41 = v40 & (v76 + v41);
            v75 = &v10[v41];
            v21 = *v75;
            if ( v11 == *v75 )
            {
              v13 = &v10[v41];
              goto LABEL_9;
            }
            if ( v21 == -4096 )
              break;
            ++v76;
          }
          if ( v13 )
            goto LABEL_8;
          v13 = &v10[v41];
        }
LABEL_32:
        v6[2] = v19;
LABEL_11:
        *v13 = v11;
        sub_AEADE0(v83, v13, &v10[v9], (__int64)v6, 1);
        v22 = _mm_load_si128((const __m128i *)v83);
        a1[1].m128i_i8[0] = 1;
        *a1 = v22;
        return a1;
      }
LABEL_9:
      v6[2] = v19;
      if ( v21 != -4096 )
        --v6[3];
      goto LABEL_11;
    }
LABEL_124:
    ++v6[2];
    BUG();
  }
LABEL_3:
  sub_AEADE0(v83, v13, &v10[v9], (__int64)v6, 1);
  v15 = _mm_load_si128((const __m128i *)v83);
  a1[1].m128i_i8[0] = 0;
  *a1 = v15;
  return a1;
}
