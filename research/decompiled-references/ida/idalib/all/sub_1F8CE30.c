void __fastcall sub_1F8CE30(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v9; // rax
  __int64 *v10; // rax
  __int64 v11; // rbp
  __int64 v12; // r14
  __int64 v13; // rcx
  __int64 *v14; // r12
  unsigned __int64 v15; // rdi
  int v16; // edx
  __int64 *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rbp
  __int64 v20; // rcx
  unsigned __int64 v21; // rax
  _QWORD *v22; // rdi
  __int64 v23; // rcx
  _DWORD *v24; // rcx
  __int64 v25; // rdi
  int v26; // eax
  __int64 *v27; // r8
  int v28; // eax
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rax
  unsigned __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rsi
  __int64 v36; // r15
  __int64 *v37; // r8
  int v38; // r10d
  __int64 v39; // rsi
  __m128i *v40; // rdx
  unsigned __int64 v41; // rdi
  __m128i v42; // xmm0
  __int64 *v43; // rdx
  int i; // r14d
  __int64 v45; // rsi
  unsigned int v46; // edi
  _QWORD *v47; // r9
  __int64 v48; // r11
  int v49; // edi
  unsigned __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rsi
  __int64 v54; // r15
  __int64 *v55; // r8
  int v56; // r14d
  __int64 v57; // rsi
  __m128i *v58; // rdx
  unsigned __int64 v59; // rdi
  __m128i si128; // xmm0
  __int64 *v61; // rdx
  int v62; // r11d
  __int64 v63; // rsi
  unsigned int v64; // r10d
  _QWORD *v65; // rdi
  __int64 v66; // r9
  int v67; // r13d
  int v68; // r9d
  __int64 *v69; // r8
  __int64 v70; // rsi
  __int64 v71; // rsi
  __m128i *v72; // rdx
  unsigned __int64 v73; // rdi
  __m128i v74; // xmm0
  __int64 v75; // rsi
  __int64 v76; // rsi
  __m128i *v77; // rdx
  unsigned __int64 v78; // rdi
  __m128i v79; // xmm0
  _QWORD *v80; // r13
  int v81; // r10d
  __int64 *v82; // r9
  int v83; // [rsp+0h] [rbp-60h]
  _QWORD *v84; // [rsp+0h] [rbp-60h]
  int v85; // [rsp+8h] [rbp-58h]
  __m128 v86[4]; // [rsp+18h] [rbp-48h] BYREF

  v6 = *(_QWORD *)(a1 + 40);
  if ( (!v6 || !*(_BYTE *)(v6 + 9267)) && *(char *)(a3 + 29) < 0 )
  {
    v9 = *(_QWORD *)(a3 + 120);
    if ( !v9 )
    {
      v19 = *(_QWORD *)(a3 + 96);
      v20 = *(_QWORD *)(v19 + 88);
      v21 = v20 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v20 & 1) == 0 )
      {
        v22 = (_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v20 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        {
          v23 = v20 & 2;
          if ( !(_DWORD)v23 )
            goto LABEL_14;
          v21 = sub_6E2500(v22, *(_QWORD *)(a3 + 96), a3, v23, a5, a6) & 0xFFFFFFFFFFFFFFFELL;
          v20 = v21 | 1;
          *(_QWORD *)(v19 + 88) = v21 | 1;
        }
      }
      if ( v21 )
      {
        if ( (v21 & 4) != 0 )
        {
          v24 = (_DWORD *)(v20 & 0xFFFFFFFFFFFFFFF8LL);
          if ( v24 )
          {
            v25 = *(_QWORD *)v24;
            v26 = *(_DWORD *)(*(_QWORD *)v24 + 12LL);
            if ( v24[2] != v26 )
            {
              v24[2] = v26;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v25 + 152LL))(v25, v19);
            }
          }
        }
      }
      v9 = *(_QWORD *)(a3 + 120);
    }
    v10 = (__int64 *)(v9 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v10 )
    {
      v11 = *v10;
LABEL_8:
      v12 = *(unsigned int *)(a1 + 2848);
      v13 = a1 + 2832;
      v14 = *(__int64 **)(a1 + 2832);
      if ( !(_DWORD)v12 )
        goto LABEL_31;
      v15 = (unsigned int)(v12 - 1);
      v16 = v15 & (((unsigned int)v11 >> 9) ^ ((unsigned int)v11 >> 4));
      v17 = &v14[v16];
      v18 = *v17;
      if ( v11 == *v17 )
      {
LABEL_10:
        sub_1F8CDC0(v86, v17, &v14[v12], v13, 1);
        return;
      }
      a6 = 1;
      v27 = nullptr;
      if ( v18 != -4096 )
      {
        while ( 1 )
        {
          if ( !v27 && v18 == -8192 )
            v27 = v17;
          v16 = v15 & (a6 + v16);
          v17 = &v14[v16];
          v18 = *v17;
          if ( v11 == *v17 )
            goto LABEL_10;
          if ( v18 == -4096 )
            break;
          a6 = (unsigned int)(a6 + 1);
        }
        if ( v27 )
          v17 = v27;
      }
      v28 = *(_DWORD *)(a1 + 2840) + 1;
      a5 = (unsigned int)(4 * v28);
      if ( (unsigned int)a5 < 3 * (int)v12 )
      {
        v29 = (unsigned int)v12 >> 3;
        if ( (int)v12 - *(_DWORD *)(a1 + 2844) - v28 > (unsigned int)v29 )
        {
          v30 = *v17;
          goto LABEL_26;
        }
        v50 = (v15 >> 1) | v15 | (((v15 >> 1) | v15) >> 2);
        v51 = ((((((v50 >> 4) | v50) >> 8) | (v50 >> 4) | v50) >> 16) | (((v50 >> 4) | v50) >> 8) | (v50 >> 4) | v50)
            + 1;
        if ( (unsigned int)v51 < 0x40 )
          LODWORD(v51) = 64;
        *(_DWORD *)(a1 + 2848) = v51;
        v52 = sub_22300B0(8LL * (unsigned int)v51, 8, 64, v13, v29, a6);
        v13 = a1 + 2832;
        *(_QWORD *)(a1 + 2832) = v52;
        if ( v14 )
        {
          v53 = *(unsigned int *)(a1 + 2848);
          v54 = 8 * v12;
          *(_QWORD *)(a1 + 2840) = 0;
          v55 = &v14[v12];
          v56 = v53;
          v57 = 8 * v53;
          if ( v52 != v52 + v57 )
          {
            v58 = (__m128i *)v52;
            v59 = ((unsigned __int64)(v57 - 8) >> 3) + 1;
            if ( v57 == 8 )
              goto LABEL_59;
            si128 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
            do
              *v58++ = si128;
            while ( v58 != (__m128i *)(v52 + 16 * (v59 >> 1)) );
            v58 = (__m128i *)(v52 + 8 * (v59 & 0xFFFFFFFFFFFFFFFELL));
            if ( (v59 & 0xFFFFFFFFFFFFFFFELL) != v59 )
LABEL_59:
              v58->m128i_i64[0] = -4096;
          }
          v61 = v14;
          v62 = v56 - 1;
          do
          {
            v63 = *v61;
            if ( *v61 != -4096 && v63 != -8192 )
            {
              if ( !v56 )
              {
                *(_QWORD *)&dword_0 = *v61;
                BUG();
              }
              v64 = v62 & (((unsigned int)v63 >> 9) ^ ((unsigned int)v63 >> 4));
              v65 = (_QWORD *)(v52 + 8LL * v64);
              v66 = *v65;
              if ( *v65 != v63 && v66 != -4096 )
              {
                v85 = 1;
                v84 = nullptr;
                while ( 1 )
                {
                  if ( !v84 )
                  {
                    if ( v66 != -8192 )
                      v65 = nullptr;
                    v84 = v65;
                  }
                  v64 = v62 & (v85 + v64);
                  v65 = (_QWORD *)(v52 + 8LL * v64);
                  v66 = *v65;
                  if ( v63 == *v65 )
                    break;
                  if ( v66 == -4096 )
                  {
                    if ( v84 )
                      v65 = v84;
                    break;
                  }
                  ++v85;
                }
              }
              ++*(_DWORD *)(a1 + 2840);
              *v65 = v63;
            }
            ++v61;
          }
          while ( v55 != v61 );
          operator delete(v14, v54, 8);
          v13 = a1 + 2832;
          v14 = *(__int64 **)(a1 + 2832);
          v12 = *(unsigned int *)(a1 + 2848);
          v28 = *(_DWORD *)(a1 + 2840) + 1;
        }
        else
        {
          v75 = *(unsigned int *)(a1 + 2848);
          *(_QWORD *)(a1 + 2840) = 0;
          v12 = v75;
          v76 = 8 * v75;
          v14 = (__int64 *)(v52 + v76);
          if ( v52 == v52 + v76 )
          {
            v28 = 1;
          }
          else
          {
            v77 = (__m128i *)v52;
            v78 = ((unsigned __int64)(v76 - 8) >> 3) + 1;
            if ( v76 == 8 )
              goto LABEL_84;
            v79 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
            do
              *v77++ = v79;
            while ( v77 != (__m128i *)(v52 + 16 * (v78 >> 1)) );
            v77 = (__m128i *)(v52 + 8 * (v78 & 0xFFFFFFFFFFFFFFFELL));
            if ( (v78 & 0xFFFFFFFFFFFFFFFELL) != v78 )
LABEL_84:
              v77->m128i_i64[0] = -4096;
            v14 = (__int64 *)v52;
            v28 = 1;
          }
        }
        if ( (_DWORD)v12 )
        {
          v67 = (v12 - 1) & (((unsigned int)v11 >> 9) ^ ((unsigned int)v11 >> 4));
          v17 = &v14[v67];
          v30 = *v17;
          if ( v11 != *v17 )
          {
            v68 = 1;
            v69 = nullptr;
            if ( v30 != -4096 )
            {
              while ( 1 )
              {
                if ( v30 == -8192 && !v69 )
                  v69 = v17;
                v67 = (v12 - 1) & (v68 + v67);
                v17 = &v14[v67];
                v30 = *v17;
                if ( v11 == *v17 )
                  goto LABEL_26;
                if ( v30 == -4096 )
                {
                  if ( !v69 )
                    break;
                  v30 = *v69;
                  v17 = v69;
                  goto LABEL_26;
                }
                ++v68;
              }
            }
LABEL_71:
            *(_DWORD *)(a1 + 2840) = v28;
LABEL_28:
            *v17 = v11;
            sub_1F8CDC0(v86, v17, &v14[v12], v13, 1);
            v31 = *(unsigned int *)(a1 + 2864);
            if ( v31 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 2868) )
            {
              sub_2237220(a1 + 2856, a1 + 2872, v31 + 1, 8);
              v31 = *(unsigned int *)(a1 + 2864);
            }
            *(_QWORD *)(*(_QWORD *)(a1 + 2856) + 8 * v31) = v11;
            ++*(_DWORD *)(a1 + 2864);
            return;
          }
          goto LABEL_26;
        }
      }
      else
      {
LABEL_31:
        v32 = (((((((unsigned int)(2 * v12 - 1) | ((unsigned __int64)(unsigned int)(2 * v12 - 1) >> 1)) >> 2)
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
        v33 = ((v32 >> 16) | v32) + 1;
        if ( (unsigned int)v33 < 0x40 )
          LODWORD(v33) = 64;
        *(_DWORD *)(a1 + 2848) = v33;
        v34 = sub_22300B0(8LL * (unsigned int)v33, 8, 64, v13, a5, a6);
        v13 = a1 + 2832;
        *(_QWORD *)(a1 + 2832) = v34;
        if ( v14 )
        {
          v35 = *(unsigned int *)(a1 + 2848);
          v36 = 8 * v12;
          *(_QWORD *)(a1 + 2840) = 0;
          v37 = &v14[v12];
          v38 = v35;
          v39 = 8 * v35;
          if ( v34 != v34 + v39 )
          {
            v40 = (__m128i *)v34;
            v41 = ((unsigned __int64)(v39 - 8) >> 3) + 1;
            if ( v39 == 8 )
              goto LABEL_39;
            v42 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
            do
              *v40++ = v42;
            while ( (__m128i *)(v34 + 16 * (v41 >> 1)) != v40 );
            v40 = (__m128i *)(v34 + 8 * (v41 & 0xFFFFFFFFFFFFFFFELL));
            if ( (v41 & 0xFFFFFFFFFFFFFFFELL) != v41 )
LABEL_39:
              v40->m128i_i64[0] = -4096;
          }
          v43 = v14;
          for ( i = v38 - 1; v37 != v43; ++v43 )
          {
            v45 = *v43;
            if ( *v43 != -8192 && v45 != -4096 )
            {
              if ( !v38 )
              {
                *(_QWORD *)&dword_0 = *v43;
                BUG();
              }
              v46 = i & (((unsigned int)v45 >> 9) ^ ((unsigned int)v45 >> 4));
              v47 = (_QWORD *)(v34 + 8LL * v46);
              v48 = *v47;
              if ( *v47 != v45 && v48 != -4096 )
              {
                v83 = 1;
                v80 = nullptr;
                while ( 1 )
                {
                  if ( !v80 && v48 == -8192 )
                    v80 = v47;
                  v46 = i & (v83 + v46);
                  v47 = (_QWORD *)(v34 + 8LL * v46);
                  v48 = *v47;
                  if ( v45 == *v47 )
                    break;
                  if ( v48 == -4096 )
                  {
                    if ( v80 )
                      v47 = v80;
                    break;
                  }
                  ++v83;
                }
              }
              ++*(_DWORD *)(a1 + 2840);
              *v47 = v45;
            }
          }
          operator delete(v14, v36, 8);
          v13 = a1 + 2832;
          v14 = *(__int64 **)(a1 + 2832);
          v12 = *(unsigned int *)(a1 + 2848);
          v28 = *(_DWORD *)(a1 + 2840) + 1;
        }
        else
        {
          v70 = *(unsigned int *)(a1 + 2848);
          *(_QWORD *)(a1 + 2840) = 0;
          v12 = v70;
          v71 = 8 * v70;
          v14 = (__int64 *)(v34 + v71);
          if ( v34 == v34 + v71 )
          {
            v28 = 1;
          }
          else
          {
            v72 = (__m128i *)v34;
            v73 = ((unsigned __int64)(v71 - 8) >> 3) + 1;
            if ( v71 == 8 )
              goto LABEL_77;
            v74 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
            do
              *v72++ = v74;
            while ( v72 != (__m128i *)(v34 + 16 * (v73 >> 1)) );
            v72 = (__m128i *)(v34 + 8 * (v73 & 0xFFFFFFFFFFFFFFFELL));
            if ( (v73 & 0xFFFFFFFFFFFFFFFELL) != v73 )
LABEL_77:
              v72->m128i_i64[0] = -4096;
            v14 = (__int64 *)v34;
            v28 = 1;
          }
        }
        if ( (_DWORD)v12 )
        {
          v49 = (v12 - 1) & (((unsigned int)v11 >> 9) ^ ((unsigned int)v11 >> 4));
          v17 = &v14[v49];
          v30 = *v17;
          if ( *v17 != v11 )
          {
            v81 = 1;
            v82 = nullptr;
            if ( v30 != -4096 )
            {
              while ( 1 )
              {
                if ( v30 == -8192 && !v82 )
                  v82 = v17;
                v49 = (v12 - 1) & (v81 + v49);
                v17 = &v14[v49];
                v30 = *v17;
                if ( v11 == *v17 )
                  goto LABEL_26;
                if ( v30 == -4096 )
                {
                  if ( !v82 )
                    goto LABEL_71;
                  v30 = *v82;
                  v17 = v82;
                  goto LABEL_26;
                }
                ++v81;
              }
            }
            goto LABEL_71;
          }
          v30 = v11;
LABEL_26:
          *(_DWORD *)(a1 + 2840) = v28;
          if ( v30 != -4096 )
            --*(_DWORD *)(a1 + 2844);
          goto LABEL_28;
        }
      }
      ++*(_DWORD *)(a1 + 2840);
      BUG();
    }
LABEL_14:
    v11 = 0;
    goto LABEL_8;
  }
}
