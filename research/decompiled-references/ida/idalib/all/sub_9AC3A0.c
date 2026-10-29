__m128i *__fastcall sub_9AC3A0(__m128i *a1, __int64 a2, __int64 *a3, const __m128i *a4, __int64 a5, __int64 a6)
{
  unsigned int v9; // r14d
  char *v10; // r12
  __int64 v11; // rdx
  unsigned __int64 v12; // rdi
  __int64 v13; // rax
  char *v14; // rsi
  __int64 v15; // r8
  __m128i v16; // xmm0
  int v18; // r9d
  char *v19; // r10
  int v20; // eax
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdi
  __m128i v24; // xmm1
  __m128i si128; // xmm4
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rdx
  unsigned __int64 v30; // r15
  char *v31; // r9
  __int64 v32; // r10
  _QWORD *v33; // rsi
  char *v34; // rdx
  int i; // r14d
  __int64 v36; // rsi
  unsigned int v37; // r8d
  unsigned __int64 v38; // rdi
  __int64 v39; // r11
  __m128i v40; // xmm5
  __int64 v41; // rsi
  unsigned int v42; // r9d
  unsigned int v43; // r8d
  __int64 v44; // r12
  char *v45; // rdx
  unsigned __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  _QWORD *v49; // rdx
  unsigned __int64 v50; // r15
  __int64 v51; // r10
  _QWORD *v52; // rsi
  char *v53; // rdx
  int v54; // r14d
  unsigned int v55; // r8d
  unsigned __int64 v56; // rdi
  __int64 v57; // r11
  __m128i v58; // xmm5
  __int64 v59; // rsi
  __int64 v60; // r9
  unsigned int v61; // r10d
  unsigned int v62; // r8d
  __int64 v63; // r12
  char *v64; // rdx
  char *v65; // r11
  int v66; // r13d
  int v67; // edi
  unsigned int v68; // r13d
  char *v69; // r10
  int v70; // r13d
  int v71; // r11d
  unsigned int v72; // r13d
  const __m128i *v73; // [rsp+8h] [rbp-60h]
  const __m128i *v74; // [rsp+8h] [rbp-60h]
  const __m128i *v75; // [rsp+8h] [rbp-60h]
  const __m128i *v76; // [rsp+8h] [rbp-60h]
  unsigned __int64 v77; // [rsp+8h] [rbp-60h]
  unsigned __int64 v78; // [rsp+8h] [rbp-60h]
  int v79; // [rsp+14h] [rbp-54h]
  int v80; // [rsp+14h] [rbp-54h]
  __m128 v81[4]; // [rsp+20h] [rbp-48h] BYREF

  v9 = *(_DWORD *)(a2 + 16);
  v10 = *(char **)a2;
  if ( !v9 )
    goto LABEL_12;
  v11 = *a3;
  v12 = v9 - 1;
  LODWORD(v13) = v12 & (((unsigned int)v11 >> 9) ^ ((unsigned int)v11 >> 4));
  v14 = &v10[64 * (unsigned __int64)(unsigned int)v13];
  v15 = *(_QWORD *)v14;
  if ( v11 != *(_QWORD *)v14 )
  {
    v18 = 1;
    v19 = nullptr;
    if ( v15 != -4096 )
    {
      while ( 1 )
      {
        if ( v15 == -8192 && !v19 )
          v19 = v14;
        v13 = (unsigned int)v12 & ((_DWORD)v13 + v18);
        v14 = &v10[64 * v13];
        v15 = *(_QWORD *)v14;
        if ( v11 == *(_QWORD *)v14 )
          goto LABEL_3;
        if ( v15 == -4096 )
          break;
        ++v18;
      }
      if ( v19 )
        v14 = v19;
    }
    a5 = 3 * v9;
    v20 = *(_DWORD *)(a2 + 8) + 1;
    a6 = (unsigned int)(4 * v20);
    if ( (unsigned int)a6 < (unsigned int)a5 )
    {
      v21 = v9 - *(_DWORD *)(a2 + 12) - v20;
      v22 = v9 >> 3;
      if ( (unsigned int)v21 > (unsigned int)v22 )
      {
LABEL_8:
        v23 = *(_QWORD *)v14;
        goto LABEL_9;
      }
      v75 = a4;
      v46 = (((v12 >> 1) | v12 | (((v12 >> 1) | v12) >> 2)) >> 4) | (v12 >> 1) | v12 | (((v12 >> 1) | v12) >> 2);
      v47 = ((((v46 >> 8) | v46) >> 16) | (v46 >> 8) | v46) + 1;
      if ( (unsigned int)v47 < 0x40 )
        LODWORD(v47) = 64;
      *(_DWORD *)(a2 + 16) = v47;
      v48 = sub_22300B0((unsigned __int64)(unsigned int)v47 << 6, 8, 64, a4, v21, v22);
      a4 = v75;
      *(_QWORD *)a2 = v48;
      if ( v10 )
      {
        *(_QWORD *)(a2 + 8) = 0;
        v49 = (_QWORD *)v48;
        v50 = (unsigned __int64)v9 << 6;
        v51 = *(unsigned int *)(a2 + 16);
        v52 = (_QWORD *)(v48 + (v51 << 6));
        if ( (_QWORD *)v48 != v52 )
        {
          do
          {
            *v49 = -4096;
            v49 += 8;
          }
          while ( v52 != v49 );
        }
        v53 = v10;
        v54 = v51 - 1;
        do
        {
          v36 = *(_QWORD *)v53;
          if ( *(_QWORD *)v53 != -4096 && v36 != -8192 )
          {
            if ( !(_DWORD)v51 )
              goto LABEL_113;
            v55 = v54 & (((unsigned int)v36 >> 9) ^ ((unsigned int)v36 >> 4));
            v56 = v48 + ((unsigned __int64)v55 << 6);
            v57 = *(_QWORD *)v56;
            if ( v36 != *(_QWORD *)v56 && v57 != -4096 )
            {
              v80 = 1;
              v78 = 0;
              while ( 1 )
              {
                if ( v57 == -8192 )
                {
                  if ( v78 )
                    v56 = v78;
                  v78 = v56;
                }
                v55 = v54 & (v80 + v55);
                v56 = v48 + ((unsigned __int64)v55 << 6);
                v57 = *(_QWORD *)v56;
                if ( v36 == *(_QWORD *)v56 )
                  break;
                if ( v57 == -4096 )
                {
                  if ( v78 )
                    v56 = v78;
                  break;
                }
                ++v80;
              }
            }
            v58 = _mm_loadu_si128((const __m128i *)(v53 + 8));
            *(_QWORD *)v56 = v36;
            *(__m128i *)(v56 + 8) = v58;
            *(__m128i *)(v56 + 24) = _mm_loadu_si128((const __m128i *)(v53 + 24));
            *(__m128i *)(v56 + 40) = _mm_loadu_si128((const __m128i *)(v53 + 40));
            v59 = *((_QWORD *)v53 + 7);
            ++*(_DWORD *)(a2 + 8);
            *(_QWORD *)(v56 + 56) = v59;
          }
          v53 += 64;
        }
        while ( &v10[v50] != v53 );
        v76 = a4;
        operator delete(v10, v50, 8);
        v10 = *(char **)a2;
        v9 = *(_DWORD *)(a2 + 16);
        a4 = v76;
        v20 = *(_DWORD *)(a2 + 8) + 1;
      }
      else
      {
        v63 = *(unsigned int *)(a2 + 16);
        *(_QWORD *)(a2 + 8) = 0;
        v9 = v63;
        v10 = (char *)(v48 + (v63 << 6));
        if ( (char *)v48 != v10 )
        {
          v64 = (char *)v48;
          do
          {
            *(_QWORD *)v64 = -4096;
            v64 += 64;
          }
          while ( v10 != v64 );
          v10 = (char *)v48;
        }
        v20 = 1;
      }
      if ( v9 )
      {
        v60 = *a3;
        v61 = v9 - 1;
        v62 = (v9 - 1) & (((unsigned int)*a3 >> 9) ^ ((unsigned int)*a3 >> 4));
        v14 = &v10[64 * (unsigned __int64)v62];
        v11 = *(_QWORD *)v14;
        v23 = *(_QWORD *)v14;
        if ( *a3 != *(_QWORD *)v14 )
        {
          if ( v11 == -4096 )
          {
            v11 = *a3;
            goto LABEL_28;
          }
          v65 = &v10[64 * (unsigned __int64)(v61 & (((unsigned int)*a3 >> 9) ^ ((unsigned int)*a3 >> 4)))];
          v66 = 1;
          v14 = nullptr;
          while ( 1 )
          {
            if ( v11 == -8192 && !v14 )
              v14 = v65;
            v67 = v66 + 1;
            v68 = v62 + v66;
            v62 = v61 & v68;
            v65 = &v10[64 * (unsigned __int64)(v61 & v68)];
            v11 = *(_QWORD *)v65;
            if ( v60 == *(_QWORD *)v65 )
            {
              v23 = *(_QWORD *)v65;
              v14 = &v10[64 * (unsigned __int64)(v61 & v68)];
              goto LABEL_9;
            }
            if ( v11 == -4096 )
              break;
            v66 = v67;
          }
          if ( !v14 )
          {
            v11 = v60;
            v14 = &v10[64 * (unsigned __int64)(v61 & v68)];
            goto LABEL_28;
          }
          v23 = *(_QWORD *)v14;
          v11 = v60;
        }
        goto LABEL_9;
      }
      goto LABEL_112;
    }
LABEL_12:
    v73 = a4;
    v26 = (((((((2 * v9 - 1) | ((unsigned __int64)(2 * v9 - 1) >> 1)) >> 2)
            | (2 * v9 - 1)
            | ((unsigned __int64)(2 * v9 - 1) >> 1)) >> 4)
          | (((2 * v9 - 1) | ((unsigned __int64)(2 * v9 - 1) >> 1)) >> 2)
          | (2 * v9 - 1)
          | ((unsigned __int64)(2 * v9 - 1) >> 1)) >> 8)
        | (((((2 * v9 - 1) | ((unsigned __int64)(2 * v9 - 1) >> 1)) >> 2)
          | (2 * v9 - 1)
          | ((unsigned __int64)(2 * v9 - 1) >> 1)) >> 4)
        | (((2 * v9 - 1) | ((unsigned __int64)(2 * v9 - 1) >> 1)) >> 2)
        | (2 * v9 - 1)
        | ((unsigned __int64)(2 * v9 - 1) >> 1);
    v27 = ((v26 >> 16) | v26) + 1;
    if ( (unsigned int)v27 < 0x40 )
      LODWORD(v27) = 64;
    *(_DWORD *)(a2 + 16) = v27;
    v28 = sub_22300B0((unsigned __int64)(unsigned int)v27 << 6, 8, 64, a4, a5, a6);
    a4 = v73;
    *(_QWORD *)a2 = v28;
    if ( v10 )
    {
      *(_QWORD *)(a2 + 8) = 0;
      v29 = (_QWORD *)v28;
      v30 = (unsigned __int64)v9 << 6;
      v31 = &v10[v30];
      v32 = *(unsigned int *)(a2 + 16);
      v33 = (_QWORD *)(v28 + (v32 << 6));
      if ( (_QWORD *)v28 != v33 )
      {
        do
        {
          *v29 = -4096;
          v29 += 8;
        }
        while ( v33 != v29 );
      }
      v34 = v10;
      for ( i = v32 - 1; v31 != v34; v34 += 64 )
      {
        v36 = *(_QWORD *)v34;
        if ( *(_QWORD *)v34 != -8192 && v36 != -4096 )
        {
          if ( !(_DWORD)v32 )
          {
LABEL_113:
            *(_QWORD *)&dword_0 = v36;
            BUG();
          }
          v37 = i & (((unsigned int)v36 >> 9) ^ ((unsigned int)v36 >> 4));
          v38 = v28 + ((unsigned __int64)v37 << 6);
          v39 = *(_QWORD *)v38;
          if ( v36 != *(_QWORD *)v38 && v39 != -4096 )
          {
            v79 = 1;
            v77 = 0;
            while ( 1 )
            {
              if ( v39 == -8192 )
              {
                if ( v77 )
                  v38 = v77;
                v77 = v38;
              }
              v37 = i & (v79 + v37);
              v38 = v28 + ((unsigned __int64)v37 << 6);
              v39 = *(_QWORD *)v38;
              if ( v36 == *(_QWORD *)v38 )
                break;
              if ( v39 == -4096 )
              {
                if ( v77 )
                  v38 = v77;
                break;
              }
              ++v79;
            }
          }
          v40 = _mm_loadu_si128((const __m128i *)(v34 + 8));
          *(_QWORD *)v38 = v36;
          *(__m128i *)(v38 + 8) = v40;
          *(__m128i *)(v38 + 24) = _mm_loadu_si128((const __m128i *)(v34 + 24));
          *(__m128i *)(v38 + 40) = _mm_loadu_si128((const __m128i *)(v34 + 40));
          v41 = *((_QWORD *)v34 + 7);
          ++*(_DWORD *)(a2 + 8);
          *(_QWORD *)(v38 + 56) = v41;
        }
      }
      v74 = a4;
      operator delete(v10, v30, 8);
      v10 = *(char **)a2;
      v9 = *(_DWORD *)(a2 + 16);
      a4 = v74;
      v20 = *(_DWORD *)(a2 + 8) + 1;
    }
    else
    {
      v44 = *(unsigned int *)(a2 + 16);
      *(_QWORD *)(a2 + 8) = 0;
      v9 = v44;
      v10 = (char *)(v28 + (v44 << 6));
      if ( (char *)v28 != v10 )
      {
        v45 = (char *)v28;
        do
        {
          *(_QWORD *)v45 = -4096;
          v45 += 64;
        }
        while ( v10 != v45 );
        v10 = (char *)v28;
      }
      v20 = 1;
    }
    if ( v9 )
    {
      v11 = *a3;
      v42 = v9 - 1;
      v43 = (v9 - 1) & (((unsigned int)*a3 >> 9) ^ ((unsigned int)*a3 >> 4));
      v14 = &v10[64 * (unsigned __int64)v43];
      v23 = *(_QWORD *)v14;
      if ( *(_QWORD *)v14 != *a3 )
      {
        if ( v23 != -4096 )
        {
          v69 = &v10[64 * (unsigned __int64)(v42 & (((unsigned int)*a3 >> 9) ^ ((unsigned int)*a3 >> 4)))];
          v70 = 1;
          v14 = nullptr;
          while ( 1 )
          {
            if ( v23 == -8192 && !v14 )
              v14 = v69;
            v71 = v70 + 1;
            v72 = v43 + v70;
            v43 = v42 & v72;
            v69 = &v10[64 * (unsigned __int64)(v42 & v72)];
            v23 = *(_QWORD *)v69;
            if ( v11 == *(_QWORD *)v69 )
            {
              v14 = &v10[64 * (unsigned __int64)(v42 & v72)];
              goto LABEL_9;
            }
            if ( v23 == -4096 )
              break;
            v70 = v71;
          }
          if ( v14 )
            goto LABEL_8;
          v14 = &v10[64 * (unsigned __int64)(v42 & v72)];
        }
LABEL_28:
        *(_DWORD *)(a2 + 8) = v20;
LABEL_11:
        v24 = _mm_loadu_si128(a4);
        *(_QWORD *)v14 = v11;
        *(__m128i *)(v14 + 8) = v24;
        *(__m128i *)(v14 + 24) = _mm_loadu_si128(a4 + 1);
        *(__m128i *)(v14 + 40) = _mm_loadu_si128(a4 + 2);
        *((_QWORD *)v14 + 7) = a4[3].m128i_i64[0];
        sub_9AC330(v81, v14, &v10[64 * (unsigned __int64)v9], a2, 1);
        si128 = _mm_load_si128((const __m128i *)v81);
        a1[1].m128i_i8[0] = 1;
        *a1 = si128;
        return a1;
      }
LABEL_9:
      *(_DWORD *)(a2 + 8) = v20;
      if ( v23 != -4096 )
        --*(_DWORD *)(a2 + 12);
      goto LABEL_11;
    }
LABEL_112:
    ++*(_DWORD *)(a2 + 8);
    BUG();
  }
LABEL_3:
  sub_9AC330(v81, v14, &v10[64 * (unsigned __int64)v9], a2, 1);
  v16 = _mm_load_si128((const __m128i *)v81);
  a1[1].m128i_i8[0] = 0;
  *a1 = v16;
  return a1;
}
