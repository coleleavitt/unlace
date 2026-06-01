__m128i *__fastcall sub_C96DA0(__m128i *a1, __int64 a2, __int64 *a3, _DWORD *a4, __int64 a5, __int64 a6)
{
  unsigned int v9; // r14d
  _QWORD *v10; // r12
  __int64 v11; // rdx
  unsigned __int64 v12; // rdi
  __int64 v13; // rax
  _QWORD *v14; // rsi
  __int64 v15; // r8
  __m128i v16; // xmm0
  int v18; // r9d
  _QWORD *v19; // r10
  int v20; // eax
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdi
  int v24; // eax
  __m128i si128; // xmm1
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rdx
  _QWORD *v30; // r9
  __int64 v31; // r10
  _QWORD *v32; // rsi
  _QWORD *v33; // rdx
  int i; // r14d
  __int64 v35; // rsi
  unsigned int v36; // r8d
  __int64 v37; // rdi
  __int64 v38; // r11
  int v39; // esi
  int v40; // esi
  int v41; // r9d
  unsigned int v42; // r8d
  __int64 v43; // r12
  _QWORD *v44; // rdx
  unsigned __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  _QWORD *v48; // rdx
  _QWORD *v49; // r9
  __int64 v50; // r10
  _QWORD *v51; // rsi
  _QWORD *v52; // rdx
  int v53; // r14d
  unsigned int v54; // r8d
  __int64 v55; // rdi
  __int64 v56; // r11
  int v57; // esi
  int v58; // esi
  int v59; // r9d
  unsigned int v60; // r8d
  __int64 v61; // r12
  _QWORD *v62; // rdx
  _QWORD *v63; // r11
  int v64; // edi
  _QWORD *v65; // r10
  int v66; // r11d
  _DWORD *v67; // [rsp+8h] [rbp-60h]
  _DWORD *v68; // [rsp+8h] [rbp-60h]
  _DWORD *v69; // [rsp+8h] [rbp-60h]
  _DWORD *v70; // [rsp+8h] [rbp-60h]
  __int64 v71; // [rsp+8h] [rbp-60h]
  __int64 v72; // [rsp+8h] [rbp-60h]
  int v73; // [rsp+14h] [rbp-54h]
  int v74; // [rsp+14h] [rbp-54h]
  __m128 v75[4]; // [rsp+20h] [rbp-48h] BYREF

  v9 = *(_DWORD *)(a2 + 16);
  v10 = *(_QWORD **)a2;
  if ( !v9 )
    goto LABEL_12;
  v11 = *a3;
  v12 = v9 - 1;
  LODWORD(v13) = v12 & (((unsigned int)v11 >> 9) ^ ((unsigned int)v11 >> 4));
  v14 = &v10[2 * (unsigned int)v13];
  v15 = *v14;
  if ( v11 != *v14 )
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
        v14 = &v10[2 * v13];
        v15 = *v14;
        if ( v11 == *v14 )
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
        v23 = *v14;
        goto LABEL_9;
      }
      v69 = a4;
      v45 = (((v12 >> 1) | v12 | (((v12 >> 1) | v12) >> 2)) >> 4) | (v12 >> 1) | v12 | (((v12 >> 1) | v12) >> 2);
      v46 = ((((v45 >> 8) | v45) >> 16) | (v45 >> 8) | v45) + 1;
      if ( (unsigned int)v46 < 0x40 )
        LODWORD(v46) = 64;
      *(_DWORD *)(a2 + 16) = v46;
      v47 = sub_220C370(16LL * (unsigned int)v46, 8, 64, a4, v21, v22);
      a4 = v69;
      *(_QWORD *)a2 = v47;
      if ( v10 )
      {
        *(_QWORD *)(a2 + 8) = 0;
        v48 = (_QWORD *)v47;
        v49 = &v10[2 * v9];
        v50 = *(unsigned int *)(a2 + 16);
        v51 = (_QWORD *)(v47 + 16 * v50);
        if ( (_QWORD *)v47 != v51 )
        {
          do
          {
            *v48 = -4096;
            v48 += 2;
          }
          while ( v51 != v48 );
        }
        v52 = v10;
        v53 = v50 - 1;
        do
        {
          v35 = *v52;
          if ( *v52 != -4096 && v35 != -8192 )
          {
            if ( !(_DWORD)v50 )
              goto LABEL_113;
            v54 = v53 & (((unsigned int)v35 >> 9) ^ ((unsigned int)v35 >> 4));
            v55 = v47 + 16LL * v54;
            v56 = *(_QWORD *)v55;
            if ( v35 != *(_QWORD *)v55 && v56 != -4096 )
            {
              v74 = 1;
              v72 = 0;
              while ( 1 )
              {
                if ( v56 == -8192 )
                {
                  if ( v72 )
                    v55 = v72;
                  v72 = v55;
                }
                v54 = v53 & (v74 + v54);
                v55 = v47 + 16LL * v54;
                v56 = *(_QWORD *)v55;
                if ( v35 == *(_QWORD *)v55 )
                  break;
                if ( v56 == -4096 )
                {
                  if ( v72 )
                    v55 = v72;
                  break;
                }
                ++v74;
              }
            }
            *(_QWORD *)v55 = v35;
            v57 = *((_DWORD *)v52 + 2);
            ++*(_DWORD *)(a2 + 8);
            *(_DWORD *)(v55 + 8) = v57;
          }
          v52 += 2;
        }
        while ( v49 != v52 );
        v70 = a4;
        operator delete();
        v10 = *(_QWORD **)a2;
        v58 = *(_DWORD *)(a2 + 16);
        a4 = v70;
        v20 = *(_DWORD *)(a2 + 8) + 1;
      }
      else
      {
        v61 = *(unsigned int *)(a2 + 16);
        *(_QWORD *)(a2 + 8) = 0;
        v58 = v61;
        v10 = (_QWORD *)(v47 + 16 * v61);
        if ( (_QWORD *)v47 != v10 )
        {
          v62 = (_QWORD *)v47;
          do
          {
            *v62 = -4096;
            v62 += 2;
          }
          while ( v10 != v62 );
          v10 = (_QWORD *)v47;
        }
        v20 = 1;
      }
      if ( v58 )
      {
        v59 = v58 - 1;
        v60 = (v58 - 1) & (((unsigned int)*a3 >> 9) ^ ((unsigned int)*a3 >> 4));
        v14 = &v10[2 * v60];
        v11 = *v14;
        v23 = *v14;
        if ( *a3 != *v14 )
        {
          if ( v11 == -4096 )
          {
            v11 = *a3;
            goto LABEL_28;
          }
          v63 = &v10[2 * (v59 & (((unsigned int)*a3 >> 9) ^ ((unsigned int)*a3 >> 4)))];
          v64 = 1;
          v14 = nullptr;
          while ( 1 )
          {
            if ( v11 == -8192 && !v14 )
              v14 = v63;
            v60 = v59 & (v64 + v60);
            v63 = &v10[2 * v60];
            v11 = *v63;
            if ( *a3 == *v63 )
            {
              v23 = *v63;
              v14 = &v10[2 * v60];
              goto LABEL_9;
            }
            if ( v11 == -4096 )
              break;
            ++v64;
          }
          if ( !v14 )
          {
            v11 = *a3;
            v14 = &v10[2 * v60];
            goto LABEL_28;
          }
          v23 = *v14;
          v11 = *a3;
        }
        goto LABEL_9;
      }
      goto LABEL_112;
    }
LABEL_12:
    v67 = a4;
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
    v28 = sub_220C370(16LL * (unsigned int)v27, 8, 64, a4, a5, a6);
    a4 = v67;
    *(_QWORD *)a2 = v28;
    if ( v10 )
    {
      *(_QWORD *)(a2 + 8) = 0;
      v29 = (_QWORD *)v28;
      v30 = &v10[2 * v9];
      v31 = *(unsigned int *)(a2 + 16);
      v32 = (_QWORD *)(v28 + 16 * v31);
      if ( (_QWORD *)v28 != v32 )
      {
        do
        {
          *v29 = -4096;
          v29 += 2;
        }
        while ( v32 != v29 );
      }
      v33 = v10;
      for ( i = v31 - 1; v30 != v33; v33 += 2 )
      {
        v35 = *v33;
        if ( *v33 != -8192 && v35 != -4096 )
        {
          if ( !(_DWORD)v31 )
          {
LABEL_113:
            *(_QWORD *)&dword_0 = v35;
            BUG();
          }
          v36 = i & (((unsigned int)v35 >> 9) ^ ((unsigned int)v35 >> 4));
          v37 = v28 + 16LL * v36;
          v38 = *(_QWORD *)v37;
          if ( v35 != *(_QWORD *)v37 && v38 != -4096 )
          {
            v73 = 1;
            v71 = 0;
            while ( 1 )
            {
              if ( !v71 )
              {
                if ( v38 != -8192 )
                  v37 = 0;
                v71 = v37;
              }
              v36 = i & (v73 + v36);
              v37 = v28 + 16LL * v36;
              v38 = *(_QWORD *)v37;
              if ( v35 == *(_QWORD *)v37 )
                break;
              if ( v38 == -4096 )
              {
                if ( v71 )
                  v37 = v71;
                break;
              }
              ++v73;
            }
          }
          *(_QWORD *)v37 = v35;
          v39 = *((_DWORD *)v33 + 2);
          ++*(_DWORD *)(a2 + 8);
          *(_DWORD *)(v37 + 8) = v39;
        }
      }
      v68 = a4;
      operator delete();
      v10 = *(_QWORD **)a2;
      v40 = *(_DWORD *)(a2 + 16);
      a4 = v68;
      v20 = *(_DWORD *)(a2 + 8) + 1;
    }
    else
    {
      v43 = *(unsigned int *)(a2 + 16);
      *(_QWORD *)(a2 + 8) = 0;
      v40 = v43;
      v10 = (_QWORD *)(v28 + 16 * v43);
      if ( (_QWORD *)v28 != v10 )
      {
        v44 = (_QWORD *)v28;
        do
        {
          *v44 = -4096;
          v44 += 2;
        }
        while ( v10 != v44 );
        v10 = (_QWORD *)v28;
      }
      v20 = 1;
    }
    if ( v40 )
    {
      v11 = *a3;
      v41 = v40 - 1;
      v42 = (v40 - 1) & (((unsigned int)*a3 >> 9) ^ ((unsigned int)*a3 >> 4));
      v14 = &v10[2 * v42];
      v23 = *v14;
      if ( *v14 != *a3 )
      {
        if ( v23 != -4096 )
        {
          v65 = &v10[2 * (v41 & (((unsigned int)*a3 >> 9) ^ ((unsigned int)*a3 >> 4)))];
          v66 = 1;
          v14 = nullptr;
          while ( 1 )
          {
            if ( v23 == -8192 && !v14 )
              v14 = v65;
            v42 = v41 & (v66 + v42);
            v65 = &v10[2 * v42];
            v23 = *v65;
            if ( v11 == *v65 )
            {
              v14 = &v10[2 * v42];
              goto LABEL_9;
            }
            if ( v23 == -4096 )
              break;
            ++v66;
          }
          if ( v14 )
            goto LABEL_8;
          v14 = &v10[2 * v42];
        }
LABEL_28:
        *(_DWORD *)(a2 + 8) = v20;
LABEL_11:
        v24 = *a4;
        *v14 = v11;
        *((_DWORD *)v14 + 2) = v24;
        sub_C96D30(v75, v14, &v10[2 * *(unsigned int *)(a2 + 16)], a2, 1);
        si128 = _mm_load_si128((const __m128i *)v75);
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
  sub_C96D30(v75, v14, &v10[2 * v9], a2, 1);
  v16 = _mm_load_si128((const __m128i *)v75);
  a1[1].m128i_i8[0] = 0;
  *a1 = v16;
  return a1;
}

