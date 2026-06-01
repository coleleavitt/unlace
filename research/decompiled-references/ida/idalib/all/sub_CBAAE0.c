__m128i *__fastcall sub_CBAAE0(__m128i *a1, __int64 a2, __int64 *a3, _DWORD *a4, __int64 a5, __int64 a6)
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
  __int64 v30; // r15
  _QWORD *v31; // r9
  __int64 v32; // r10
  _QWORD *v33; // rsi
  _QWORD *v34; // rdx
  int i; // r14d
  __int64 v36; // rsi
  unsigned int v37; // r8d
  __int64 v38; // rdi
  __int64 v39; // r11
  int v40; // esi
  int v41; // esi
  int v42; // r9d
  unsigned int v43; // r8d
  __int64 v44; // r12
  _QWORD *v45; // rdx
  unsigned __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  _QWORD *v49; // rdx
  __int64 v50; // r15
  __int64 v51; // r10
  _QWORD *v52; // rsi
  _QWORD *v53; // rdx
  int v54; // r14d
  unsigned int v55; // r8d
  __int64 v56; // rdi
  __int64 v57; // r11
  int v58; // esi
  int v59; // esi
  int v60; // r9d
  unsigned int v61; // r8d
  __int64 v62; // r12
  _QWORD *v63; // rdx
  _QWORD *v64; // r11
  int v65; // edi
  _QWORD *v66; // r10
  int v67; // r11d
  _DWORD *v68; // [rsp+8h] [rbp-60h]
  _DWORD *v69; // [rsp+8h] [rbp-60h]
  _DWORD *v70; // [rsp+8h] [rbp-60h]
  _DWORD *v71; // [rsp+8h] [rbp-60h]
  __int64 v72; // [rsp+8h] [rbp-60h]
  __int64 v73; // [rsp+8h] [rbp-60h]
  int v74; // [rsp+14h] [rbp-54h]
  int v75; // [rsp+14h] [rbp-54h]
  __m128 v76[4]; // [rsp+20h] [rbp-48h] BYREF

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
      v70 = a4;
      v46 = (((v12 >> 1) | v12 | (((v12 >> 1) | v12) >> 2)) >> 4) | (v12 >> 1) | v12 | (((v12 >> 1) | v12) >> 2);
      v47 = ((((v46 >> 8) | v46) >> 16) | (v46 >> 8) | v46) + 1;
      if ( (unsigned int)v47 < 0x40 )
        LODWORD(v47) = 64;
      *(_DWORD *)(a2 + 16) = v47;
      v48 = sub_22300B0(16LL * (unsigned int)v47, 8, 64, a4, v21, v22);
      a4 = v70;
      *(_QWORD *)a2 = v48;
      if ( v10 )
      {
        *(_QWORD *)(a2 + 8) = 0;
        v49 = (_QWORD *)v48;
        v50 = 2LL * v9;
        v51 = *(unsigned int *)(a2 + 16);
        v52 = (_QWORD *)(v48 + 16 * v51);
        if ( (_QWORD *)v48 != v52 )
        {
          do
          {
            *v49 = -4096;
            v49 += 2;
          }
          while ( v52 != v49 );
        }
        v53 = v10;
        v54 = v51 - 1;
        do
        {
          v36 = *v53;
          if ( *v53 != -4096 && v36 != -8192 )
          {
            if ( !(_DWORD)v51 )
              goto LABEL_113;
            v55 = v54 & (((unsigned int)v36 >> 9) ^ ((unsigned int)v36 >> 4));
            v56 = v48 + 16LL * v55;
            v57 = *(_QWORD *)v56;
            if ( v36 != *(_QWORD *)v56 && v57 != -4096 )
            {
              v75 = 1;
              v73 = 0;
              while ( 1 )
              {
                if ( v57 == -8192 )
                {
                  if ( v73 )
                    v56 = v73;
                  v73 = v56;
                }
                v55 = v54 & (v75 + v55);
                v56 = v48 + 16LL * v55;
                v57 = *(_QWORD *)v56;
                if ( v36 == *(_QWORD *)v56 )
                  break;
                if ( v57 == -4096 )
                {
                  if ( v73 )
                    v56 = v73;
                  break;
                }
                ++v75;
              }
            }
            *(_QWORD *)v56 = v36;
            v58 = *((_DWORD *)v53 + 2);
            ++*(_DWORD *)(a2 + 8);
            *(_DWORD *)(v56 + 8) = v58;
          }
          v53 += 2;
        }
        while ( &v10[v50] != v53 );
        v71 = a4;
        operator delete(v10, v50 * 8, 8);
        v10 = *(_QWORD **)a2;
        v59 = *(_DWORD *)(a2 + 16);
        a4 = v71;
        v20 = *(_DWORD *)(a2 + 8) + 1;
      }
      else
      {
        v62 = *(unsigned int *)(a2 + 16);
        *(_QWORD *)(a2 + 8) = 0;
        v59 = v62;
        v10 = (_QWORD *)(v48 + 16 * v62);
        if ( (_QWORD *)v48 != v10 )
        {
          v63 = (_QWORD *)v48;
          do
          {
            *v63 = -4096;
            v63 += 2;
          }
          while ( v10 != v63 );
          v10 = (_QWORD *)v48;
        }
        v20 = 1;
      }
      if ( v59 )
      {
        v60 = v59 - 1;
        v61 = (v59 - 1) & (((unsigned int)*a3 >> 9) ^ ((unsigned int)*a3 >> 4));
        v14 = &v10[2 * v61];
        v11 = *v14;
        v23 = *v14;
        if ( *a3 != *v14 )
        {
          if ( v11 == -4096 )
          {
            v11 = *a3;
            goto LABEL_28;
          }
          v64 = &v10[2 * (v60 & (((unsigned int)*a3 >> 9) ^ ((unsigned int)*a3 >> 4)))];
          v65 = 1;
          v14 = nullptr;
          while ( 1 )
          {
            if ( v11 == -8192 && !v14 )
              v14 = v64;
            v61 = v60 & (v65 + v61);
            v64 = &v10[2 * v61];
            v11 = *v64;
            if ( *a3 == *v64 )
            {
              v23 = *v64;
              v14 = &v10[2 * v61];
              goto LABEL_9;
            }
            if ( v11 == -4096 )
              break;
            ++v65;
          }
          if ( !v14 )
          {
            v11 = *a3;
            v14 = &v10[2 * v61];
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
    v68 = a4;
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
    v28 = sub_22300B0(16LL * (unsigned int)v27, 8, 64, a4, a5, a6);
    a4 = v68;
    *(_QWORD *)a2 = v28;
    if ( v10 )
    {
      *(_QWORD *)(a2 + 8) = 0;
      v29 = (_QWORD *)v28;
      v30 = 2LL * v9;
      v31 = &v10[v30];
      v32 = *(unsigned int *)(a2 + 16);
      v33 = (_QWORD *)(v28 + 16 * v32);
      if ( (_QWORD *)v28 != v33 )
      {
        do
        {
          *v29 = -4096;
          v29 += 2;
        }
        while ( v33 != v29 );
      }
      v34 = v10;
      for ( i = v32 - 1; v31 != v34; v34 += 2 )
      {
        v36 = *v34;
        if ( *v34 != -8192 && v36 != -4096 )
        {
          if ( !(_DWORD)v32 )
          {
LABEL_113:
            *(_QWORD *)&dword_0 = v36;
            BUG();
          }
          v37 = i & (((unsigned int)v36 >> 9) ^ ((unsigned int)v36 >> 4));
          v38 = v28 + 16LL * v37;
          v39 = *(_QWORD *)v38;
          if ( v36 != *(_QWORD *)v38 && v39 != -4096 )
          {
            v74 = 1;
            v72 = 0;
            while ( 1 )
            {
              if ( !v72 )
              {
                if ( v39 != -8192 )
                  v38 = 0;
                v72 = v38;
              }
              v37 = i & (v74 + v37);
              v38 = v28 + 16LL * v37;
              v39 = *(_QWORD *)v38;
              if ( v36 == *(_QWORD *)v38 )
                break;
              if ( v39 == -4096 )
              {
                if ( v72 )
                  v38 = v72;
                break;
              }
              ++v74;
            }
          }
          *(_QWORD *)v38 = v36;
          v40 = *((_DWORD *)v34 + 2);
          ++*(_DWORD *)(a2 + 8);
          *(_DWORD *)(v38 + 8) = v40;
        }
      }
      v69 = a4;
      operator delete(v10, v30 * 8, 8);
      v10 = *(_QWORD **)a2;
      v41 = *(_DWORD *)(a2 + 16);
      a4 = v69;
      v20 = *(_DWORD *)(a2 + 8) + 1;
    }
    else
    {
      v44 = *(unsigned int *)(a2 + 16);
      *(_QWORD *)(a2 + 8) = 0;
      v41 = v44;
      v10 = (_QWORD *)(v28 + 16 * v44);
      if ( (_QWORD *)v28 != v10 )
      {
        v45 = (_QWORD *)v28;
        do
        {
          *v45 = -4096;
          v45 += 2;
        }
        while ( v10 != v45 );
        v10 = (_QWORD *)v28;
      }
      v20 = 1;
    }
    if ( v41 )
    {
      v11 = *a3;
      v42 = v41 - 1;
      v43 = (v41 - 1) & (((unsigned int)*a3 >> 9) ^ ((unsigned int)*a3 >> 4));
      v14 = &v10[2 * v43];
      v23 = *v14;
      if ( *v14 != *a3 )
      {
        if ( v23 != -4096 )
        {
          v66 = &v10[2 * (v42 & (((unsigned int)*a3 >> 9) ^ ((unsigned int)*a3 >> 4)))];
          v67 = 1;
          v14 = nullptr;
          while ( 1 )
          {
            if ( v23 == -8192 && !v14 )
              v14 = v66;
            v43 = v42 & (v67 + v43);
            v66 = &v10[2 * v43];
            v23 = *v66;
            if ( v11 == *v66 )
            {
              v14 = &v10[2 * v43];
              goto LABEL_9;
            }
            if ( v23 == -4096 )
              break;
            ++v67;
          }
          if ( v14 )
            goto LABEL_8;
          v14 = &v10[2 * v43];
        }
LABEL_28:
        *(_DWORD *)(a2 + 8) = v20;
LABEL_11:
        v24 = *a4;
        *v14 = v11;
        *((_DWORD *)v14 + 2) = v24;
        sub_CBAA70(v76, v14, &v10[2 * *(unsigned int *)(a2 + 16)], a2, 1);
        si128 = _mm_load_si128((const __m128i *)v76);
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
  sub_CBAA70(v76, v14, &v10[2 * v9], a2, 1);
  v16 = _mm_load_si128((const __m128i *)v76);
  a1[1].m128i_i8[0] = 0;
  *a1 = v16;
  return a1;
}
