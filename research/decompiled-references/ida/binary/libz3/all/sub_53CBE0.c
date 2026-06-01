_QWORD *__fastcall sub_53CBE0(__int64 a1)
{
  _QWORD *v1; // rax
  __int64 v2; // r13
  char v3; // bl
  _QWORD *v4; // r15
  __int64 v5; // rbp
  __int64 v6; // rax
  __m128i v7; // xmm0
  _QWORD *v8; // rax
  _QWORD *v9; // rsi
  size_t v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rax
  __m128i v14; // xmm0
  _QWORD *v15; // rax
  __int64 *v16; // r14
  _QWORD *v17; // r15
  __int64 v18; // rax
  unsigned int v19; // ebp
  __int64 v20; // rbx
  _QWORD *v21; // rax
  __m128i v22; // xmm0
  _QWORD *v23; // rbx
  __m128i v24; // xmm1
  __int64 v25; // rbp
  __int64 v26; // rax
  __int64 v27; // r15
  int v28; // eax
  void *v29; // r13
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rbp
  void *v33; // r13
  __int64 v34; // rsi
  __int64 v35; // rbx
  __int64 v36; // rax
  __m128i v37; // xmm0
  _QWORD *v38; // rax
  __int64 v39; // rbp
  _QWORD *v40; // r15
  __int64 v41; // rax
  __int64 v42; // r14
  _QWORD *v43; // rbx
  int v44; // eax
  void *v45; // r13
  __int64 v46; // rdi
  __int64 v47; // rax
  __m128i v48; // xmm0
  __int64 v49; // rax
  _BYTE *v50; // rsi
  size_t v51; // rdx
  __int64 *v52; // r15
  __int64 v53; // rax
  __int64 *v54; // r12
  __int64 v55; // rbx
  __int64 v56; // r13
  __int64 v57; // r13
  void *v58; // rbp
  __int64 v59; // rsi
  __int64 v60; // rax
  __m128i v61; // xmm0
  _QWORD *v62; // rax
  __int64 *v63; // r15
  _QWORD *v64; // r14
  __int64 v65; // rax
  unsigned int v66; // ebp
  __int64 v67; // rbx
  _QWORD *v68; // rax
  __m128i v69; // xmm0
  _QWORD *v70; // rbx
  __m128i v71; // xmm2
  __int64 v72; // rbp
  __int64 v73; // r14
  int v74; // eax
  void *v75; // r13
  __int64 v76; // rbx
  __int64 v77; // rax
  __int64 v78; // r13
  void *v79; // rbp
  __int64 v80; // rsi
  __int64 v81; // rax
  __m128i v82; // xmm0
  _QWORD *v83; // rax
  __int64 v84; // rbp
  _QWORD *v85; // r15
  __int64 v86; // rax
  __int64 v87; // r14
  _QWORD *v88; // rbx
  int v89; // eax
  void *v90; // r13
  __int64 v91; // rdi
  __int64 v92; // rax
  __m128i v93; // xmm0
  __int64 v94; // rax
  _BYTE *v95; // rsi
  size_t v96; // rdx
  _QWORD *v98; // [rsp+8h] [rbp-70h]
  _QWORD *v100; // [rsp+18h] [rbp-60h]
  __int64 *v101; // [rsp+20h] [rbp-58h]
  void *v102; // [rsp+28h] [rbp-50h]
  void *v103; // [rsp+30h] [rbp-48h]
  _QWORD *v104; // [rsp+38h] [rbp-40h]

  v1 = (_QWORD *)sub_186B270(0x98u);
  v2 = *(_QWORD *)(a1 + 32);
  v3 = *(_BYTE *)(a1 + 80);
  v98 = v1;
  v4 = v1;
  v5 = *(_QWORD *)(a1 + 64);
  *v1 = qword_1C665B0;
  v1[1] = v2;
  v1[2] = 0;
  v6 = *(_QWORD *)(a1 + 16);
  if ( v6 )
  {
    v7 = _mm_loadl_epi64((const __m128i *)(v6 - 8));
    v100 = (_QWORD *)v7.m128i_i64[0];
    v8 = (_QWORD *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v7) + 8);
    v9 = *(_QWORD **)(a1 + 16);
    v4[2] = v8 + 1;
    *v8 = v7.m128i_i64[0];
    if ( v9 )
    {
      v10 = 8LL * *((unsigned int *)v9 - 1);
      if ( v10 <= 8 )
      {
        if ( v10 == 8 )
          v8[1] = *v9;
      }
      else
      {
        memmove(v8 + 1, v9, v10);
      }
    }
  }
  v11 = *(_QWORD *)(v2 + 24);
  *((_DWORD *)v98 + 6) = *(_DWORD *)(v2 + 8);
  *v98 = &off_1C67178;
  v98[4] = v2;
  v12 = sub_4D6490(v11);
  v98[5] = v12;
  sub_16669D0(v98 + 6, v12);
  *((__m128 *)v98 + 4) = _mm_loadh_ps((const double *)v98 + 5);
  if ( v5 )
    ++*(_DWORD *)(v5 + 8);
  *((_BYTE *)v98 + 80) = v3;
  v98[13] = 0;
  *((_BYTE *)v98 + 112) = v3 ^ 1;
  v98[17] = 0;
  *((_BYTE *)v98 + 144) = 0;
  *(_OWORD *)(v98 + 11) = 0;
  *(_OWORD *)(v98 + 15) = 0;
  v102 = v98 + 15;
  if ( v98 + 11 == (_QWORD *)(a1 + 88) || (v13 = *(_QWORD *)(a1 + 88)) == 0 )
  {
    if ( v98 + 12 == (_QWORD *)(a1 + 96) )
      goto LABEL_38;
    v35 = a1;
    v36 = *(_QWORD *)(a1 + 96);
    if ( v36 )
      goto LABEL_30;
LABEL_102:
    v98[12] = 0;
    goto LABEL_38;
  }
  v14 = _mm_loadl_epi64((const __m128i *)(v13 - 8));
  v100 = (_QWORD *)v14.m128i_i64[0];
  v15 = (_QWORD *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v14) + 8);
  v16 = *(__int64 **)(a1 + 88);
  *v15 = v14.m128i_i64[0];
  v104 = v15 + 1;
  v98[11] = v15 + 1;
  if ( v16 )
  {
    v101 = &v16[*((unsigned int *)v16 - 1)];
    if ( v16 != v101 )
    {
      v100 = v15 + 1;
      while ( 1 )
      {
        v17 = v100;
        v18 = *v16;
        *v100 = 0;
        if ( v18 )
        {
          v19 = *(_DWORD *)(v18 - 4);
          v20 = *(unsigned int *)(v18 - 8);
          v21 = (_QWORD *)sub_186B270(32 * v20 + 8);
          v22 = _mm_cvtsi32_si128(v20);
          v23 = v21 + 1;
          v24 = _mm_cvtsi32_si128(v19);
          *v17 = v21 + 1;
          v25 = *v16;
          v103 = v21 + 1;
          *v21 = _mm_unpacklo_epi32(v22, v24).m128i_u64[0];
          if ( v25 )
          {
            v26 = 32LL * *(unsigned int *)(v25 - 4);
            v27 = v25 + v26;
            if ( v25 != v25 + v26 )
              break;
          }
        }
LABEL_21:
        ++v100;
        if ( v101 == ++v16 )
          goto LABEL_22;
      }
      while ( 1 )
      {
        *((_BYTE *)v23 + 4) &= 0xFCu;
        v29 = qword_1C7F2C0;
        *((_BYTE *)v23 + 20) &= 0xFCu;
        *(_DWORD *)v23 = 0;
        v23[1] = 0;
        *((_DWORD *)v23 + 4) = 1;
        v23[3] = 0;
        if ( (*(_BYTE *)(v25 + 4) & 1) != 0 )
        {
          sub_182C690(v29, v23, v25);
          if ( (*(_BYTE *)(v25 + 20) & 1) != 0 )
            goto LABEL_20;
LABEL_17:
          v28 = *(_DWORD *)(v25 + 16);
          v25 += 32;
          *((_BYTE *)v23 + 20) &= ~1u;
          v23 += 4;
          *((_DWORD *)v23 - 4) = v28;
          if ( v27 == v25 )
            goto LABEL_21;
        }
        else
        {
          *(_DWORD *)v23 = *(_DWORD *)v25;
          if ( (*(_BYTE *)(v25 + 20) & 1) == 0 )
            goto LABEL_17;
LABEL_20:
          sub_182C690(v29, v23 + 2, v25 + 16);
          v25 += 32;
          v23 += 4;
          if ( v27 == v25 )
            goto LABEL_21;
        }
      }
    }
  }
LABEL_22:
  if ( (_QWORD *)(a1 + 96) == v98 + 12 )
    goto LABEL_38;
  v30 = v98[12];
  if ( v30 )
  {
    v31 = *(unsigned int *)(v30 - 4);
    if ( (_DWORD)v31 )
    {
      v32 = v30 + 32 * v31;
      do
      {
        v33 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v30);
        v34 = v30 + 16;
        v30 += 32;
        sub_182CBA0(v33, v34);
      }
      while ( v30 != v32 );
      v30 = v98[12];
    }
    sub_186B220((void *)(v30 - 8));
  }
  v35 = a1;
  v36 = *(_QWORD *)(a1 + 96);
  if ( !v36 )
    goto LABEL_102;
LABEL_30:
  v37 = _mm_loadl_epi64((const __m128i *)(v36 - 8));
  v100 = (_QWORD *)v37.m128i_i64[0];
  v38 = (_QWORD *)sub_186B270(32LL * (unsigned int)_mm_cvtsi128_si32(v37) + 8);
  v39 = *(_QWORD *)(v35 + 96);
  v40 = v38 + 1;
  *v38 = v37.m128i_i64[0];
  v98[12] = v38 + 1;
  if ( v39 )
  {
    v41 = 32LL * *(unsigned int *)(v39 - 4);
    v42 = v39 + v41;
    if ( v39 != v39 + v41 )
    {
      v43 = v40;
      while ( 1 )
      {
        *((_BYTE *)v43 + 4) &= 0xFCu;
        v45 = qword_1C7F2C0;
        *((_BYTE *)v43 + 20) &= 0xFCu;
        *(_DWORD *)v43 = 0;
        v43[1] = 0;
        *((_DWORD *)v43 + 4) = 1;
        v43[3] = 0;
        if ( (*(_BYTE *)(v39 + 4) & 1) != 0 )
        {
          sub_182C690(v45, v43, v39);
          if ( (*(_BYTE *)(v39 + 20) & 1) != 0 )
            goto LABEL_37;
LABEL_34:
          v44 = *(_DWORD *)(v39 + 16);
          v39 += 32;
          *((_BYTE *)v43 + 20) &= ~1u;
          v43 += 4;
          *((_DWORD *)v43 - 4) = v44;
          if ( v42 == v39 )
            break;
        }
        else
        {
          *(_DWORD *)v43 = *(_DWORD *)v39;
          if ( (*(_BYTE *)(v39 + 20) & 1) == 0 )
            goto LABEL_34;
LABEL_37:
          sub_182C690(v45, v43 + 2, v39 + 16);
          v39 += 32;
          v43 += 4;
          if ( v42 == v39 )
            break;
        }
      }
    }
  }
LABEL_38:
  if ( v98 + 13 != (_QWORD *)(a1 + 104) )
  {
    v46 = v98[13];
    if ( v46 )
      sub_186B220((void *)(v46 - 8));
    v47 = *(_QWORD *)(a1 + 104);
    if ( v47 )
    {
      v48 = _mm_loadl_epi64((const __m128i *)(v47 - 8));
      v100 = (_QWORD *)v48.m128i_i64[0];
      v49 = sub_186B270((unsigned int)_mm_cvtsi128_si32(v48) + 8LL);
      v48.m128i_i64[0] = (__int64)v100;
      v50 = *(_BYTE **)(a1 + 104);
      v98[13] = v49 + 8;
      *(_QWORD *)v49 = v48.m128i_i64[0];
      if ( v50 )
      {
        v51 = *((unsigned int *)v50 - 1);
        if ( v51 <= 1 )
        {
          if ( v51 == 1 )
            *(_BYTE *)(v49 + 8) = *v50;
        }
        else
        {
          memmove((void *)(v49 + 8), v50, v51);
        }
      }
    }
    else
    {
      v98[13] = 0;
    }
  }
  if ( v102 != (void *)(a1 + 120) )
  {
    v52 = (__int64 *)v98[15];
    if ( v52 )
    {
      v53 = *((unsigned int *)v52 - 1);
      if ( (_DWORD)v53 )
      {
        v54 = &v52[v53];
        do
        {
          v55 = *v52;
          if ( *v52 )
          {
            v56 = *(unsigned int *)(v55 - 4);
            if ( (_DWORD)v56 )
            {
              v57 = v55 + 32 * v56;
              do
              {
                v58 = qword_1C7F2C0;
                sub_182CBA0(qword_1C7F2C0, v55);
                v59 = v55 + 16;
                v55 += 32;
                sub_182CBA0(v58, v59);
              }
              while ( v55 != v57 );
              v55 = *v52;
            }
            sub_186B220((void *)(v55 - 8));
          }
          ++v52;
        }
        while ( v54 != v52 );
        v52 = (__int64 *)v98[15];
      }
      sub_186B220(v52 - 1);
    }
    v60 = *(_QWORD *)(a1 + 120);
    if ( v60 )
    {
      v61 = _mm_loadl_epi64((const __m128i *)(v60 - 8));
      v100 = (_QWORD *)v61.m128i_i64[0];
      v62 = (_QWORD *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v61) + 8);
      v63 = *(__int64 **)(a1 + 120);
      *v62 = v100;
      v103 = v62 + 1;
      v98[15] = v62 + 1;
      if ( v63 )
      {
        v101 = &v63[*((unsigned int *)v63 - 1)];
        if ( v63 != v101 )
        {
          v100 = v62 + 1;
          while ( 1 )
          {
            v64 = v100;
            v65 = *v63;
            *v100 = 0;
            if ( v65 )
            {
              v66 = *(_DWORD *)(v65 - 4);
              v67 = *(unsigned int *)(v65 - 8);
              v68 = (_QWORD *)sub_186B270(32 * v67 + 8);
              v69 = _mm_cvtsi32_si128(v67);
              v70 = v68 + 1;
              v71 = _mm_cvtsi32_si128(v66);
              *v64 = v68 + 1;
              v72 = *v63;
              v102 = v68 + 1;
              *v68 = _mm_unpacklo_epi32(v69, v71).m128i_u64[0];
              if ( v72 )
              {
                v73 = v72 + 32LL * *(unsigned int *)(v72 - 4);
                if ( v72 != v73 )
                  break;
              }
            }
LABEL_71:
            ++v100;
            if ( v101 == ++v63 )
              goto LABEL_72;
          }
          while ( 1 )
          {
            *((_BYTE *)v70 + 4) &= 0xFCu;
            v75 = qword_1C7F2C0;
            *((_BYTE *)v70 + 20) &= 0xFCu;
            *(_DWORD *)v70 = 0;
            v70[1] = 0;
            *((_DWORD *)v70 + 4) = 1;
            v70[3] = 0;
            if ( (*(_BYTE *)(v72 + 4) & 1) != 0 )
            {
              sub_182C690(v75, v70, v72);
              if ( (*(_BYTE *)(v72 + 20) & 1) != 0 )
                goto LABEL_70;
LABEL_67:
              v74 = *(_DWORD *)(v72 + 16);
              v72 += 32;
              *((_BYTE *)v70 + 20) &= ~1u;
              v70 += 4;
              *((_DWORD *)v70 - 4) = v74;
              if ( v73 == v72 )
                goto LABEL_71;
            }
            else
            {
              *(_DWORD *)v70 = *(_DWORD *)v72;
              if ( (*(_BYTE *)(v72 + 20) & 1) == 0 )
                goto LABEL_67;
LABEL_70:
              sub_182C690(v75, v70 + 2, v72 + 16);
              v72 += 32;
              v70 += 4;
              if ( v73 == v72 )
                goto LABEL_71;
            }
          }
        }
      }
    }
    else
    {
      v98[15] = 0;
    }
  }
LABEL_72:
  if ( (_QWORD *)(a1 + 128) != v98 + 16 )
  {
    v76 = v98[16];
    if ( v76 )
    {
      v77 = *(unsigned int *)(v76 - 4);
      if ( (_DWORD)v77 )
      {
        v78 = v76 + 32 * v77;
        do
        {
          v79 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v76);
          v80 = v76 + 16;
          v76 += 32;
          sub_182CBA0(v79, v80);
        }
        while ( v76 != v78 );
        v76 = v98[16];
      }
      sub_186B220((void *)(v76 - 8));
    }
    v81 = *(_QWORD *)(a1 + 128);
    if ( v81 )
    {
      v82 = _mm_loadl_epi64((const __m128i *)(v81 - 8));
      v100 = (_QWORD *)v82.m128i_i64[0];
      v83 = (_QWORD *)sub_186B270(32LL * (unsigned int)_mm_cvtsi128_si32(v82) + 8);
      v84 = *(_QWORD *)(a1 + 128);
      v85 = v83 + 1;
      *v83 = v100;
      v98[16] = v83 + 1;
      if ( v84 )
      {
        v86 = 32LL * *(unsigned int *)(v84 - 4);
        v87 = v84 + v86;
        if ( v84 != v84 + v86 )
        {
          v88 = v85;
          while ( 1 )
          {
            *((_BYTE *)v88 + 4) &= 0xFCu;
            v90 = qword_1C7F2C0;
            *((_BYTE *)v88 + 20) &= 0xFCu;
            *(_DWORD *)v88 = 0;
            v88[1] = 0;
            *((_DWORD *)v88 + 4) = 1;
            v88[3] = 0;
            if ( (*(_BYTE *)(v84 + 4) & 1) != 0 )
            {
              sub_182C690(v90, v88, v84);
              if ( (*(_BYTE *)(v84 + 20) & 1) != 0 )
                goto LABEL_87;
LABEL_84:
              v89 = *(_DWORD *)(v84 + 16);
              v84 += 32;
              *((_BYTE *)v88 + 20) &= ~1u;
              v88 += 4;
              *((_DWORD *)v88 - 4) = v89;
              if ( v87 == v84 )
                break;
            }
            else
            {
              *(_DWORD *)v88 = *(_DWORD *)v84;
              if ( (*(_BYTE *)(v84 + 20) & 1) == 0 )
                goto LABEL_84;
LABEL_87:
              sub_182C690(v90, v88 + 2, v84 + 16);
              v84 += 32;
              v88 += 4;
              if ( v87 == v84 )
                break;
            }
          }
        }
      }
    }
    else
    {
      v98[16] = 0;
    }
  }
  if ( v98 + 17 != (_QWORD *)(a1 + 136) )
  {
    v91 = v98[17];
    if ( v91 )
      sub_186B220((void *)(v91 - 8));
    v92 = *(_QWORD *)(a1 + 136);
    if ( v92 )
    {
      v93 = _mm_loadl_epi64((const __m128i *)(v92 - 8));
      v100 = (_QWORD *)v93.m128i_i64[0];
      v94 = sub_186B270((unsigned int)_mm_cvtsi128_si32(v93) + 8LL);
      v93.m128i_i64[0] = (__int64)v100;
      v95 = *(_BYTE **)(a1 + 136);
      v98[17] = v94 + 8;
      *(_QWORD *)v94 = v93.m128i_i64[0];
      if ( v95 )
      {
        v96 = *((unsigned int *)v95 - 1);
        if ( v96 <= 1 )
        {
          if ( v96 == 1 )
            *(_BYTE *)(v94 + 8) = *v95;
        }
        else
        {
          memmove((void *)(v94 + 8), v95, v96);
        }
      }
    }
    else
    {
      v98[17] = 0;
    }
  }
  *((_BYTE *)v98 + 144) = *(_BYTE *)(a1 + 144);
  *((_BYTE *)v98 + 112) = *(_BYTE *)(a1 + 112);
  *((_BYTE *)v98 + 80) = *(_BYTE *)(a1 + 80);
  return v98;
}

