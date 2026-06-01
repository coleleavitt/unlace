__int64 __fastcall sub_107510(__int64 a1, _QWORD *a2, _QWORD *a3, int a4, __int64 a5)
{
  unsigned __int64 v5; // r12
  int v6; // ebp
  bool v7; // cl
  _QWORD *v8; // rbx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r12
  unsigned int v13; // r10d
  __int64 v14; // rdx
  unsigned int v15; // ecx
  unsigned int v16; // edi
  __int64 v17; // rsi
  unsigned int v18; // eax
  __int64 v19; // r9
  unsigned __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r14
  __int64 v23; // rdi
  bool v24; // zf
  size_t v25; // rcx
  size_t v26; // r15
  size_t v27; // rcx
  int v28; // eax
  unsigned __int64 v30; // rdi
  size_t v31; // rax
  size_t v32; // r14
  unsigned __int8 *v33; // rsi
  __int64 v34; // r9
  size_t v35; // rdx
  __int64 v36; // r8
  unsigned __int64 v37; // rax
  unsigned __int8 *v38; // r10
  __int64 v39; // r11
  __int64 v40; // r12
  unsigned __int64 v41; // rax
  __int64 v42; // r12
  bool v43; // r15
  unsigned __int64 v44; // rdi
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rsi
  __int64 v48; // rsi
  __int64 v49; // rsi
  _BOOL4 v50; // esi
  __int64 v51; // rcx
  _QWORD *v52; // r14
  void *v53; // rdi
  __int64 v54; // rdx
  unsigned __int64 v55; // rsi
  int v56; // edi
  __int64 v57; // rdx
  __int64 v58; // rsi
  int v59; // eax
  __int64 v60; // rdx
  __int64 v61; // rsi
  __int64 v62; // rdi
  size_t v63; // r9
  unsigned __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rax
  unsigned int v67; // ebx
  unsigned int v68; // r15d
  __int64 v69; // r12
  __int64 v70; // rdi
  unsigned __int64 v71; // r14
  _QWORD *v72; // r12
  __int64 v73; // r15
  __int64 v74; // rsi
  unsigned __int64 v75; // r14
  bool v76; // dl
  char *v77; // r12
  __int64 v78; // r10
  char v79; // r9
  unsigned __int64 v80; // rdx
  char v81; // r9
  unsigned __int64 v82; // r15
  __int64 v83; // rdx
  __int64 v84; // rax
  __int64 v85; // rax
  unsigned __int8 *v86; // rdx
  __int64 v87; // r10
  unsigned __int8 *v88; // r10
  __int64 v89; // r11
  unsigned __int8 *v90; // r10
  __int64 v91; // r11
  size_t v93; // [rsp+8h] [rbp-60h]
  size_t v94; // [rsp+10h] [rbp-58h]
  unsigned __int64 v95; // [rsp+10h] [rbp-58h]
  __int64 v96; // [rsp+10h] [rbp-58h]
  size_t v97; // [rsp+10h] [rbp-58h]
  bool v98; // [rsp+10h] [rbp-58h]
  bool n; // [rsp+18h] [rbp-50h]
  size_t na; // [rsp+18h] [rbp-50h]
  size_t nb; // [rsp+18h] [rbp-50h]
  _QWORD *v102; // [rsp+20h] [rbp-48h]
  char v103; // [rsp+20h] [rbp-48h]
  bool v104; // [rsp+2Fh] [rbp-39h]

  v5 = -60;
  v6 = a4;
  v7 = a4 == 0 && *(_DWORD *)(a1 + 3020) != 0;
  if ( v7 )
    return v5;
  v8 = a3;
  v10 = a3[2];
  v11 = v8[1];
  if ( *(_DWORD *)(a1 + 272) )
  {
    LODWORD(v12) = 0;
    if ( v10 >= v11 || v6 != 2 )
      goto LABEL_6;
    goto LABEL_5;
  }
  if ( v10 >= v11 )
  {
    LODWORD(v19) = *(_DWORD *)(a1 + 3012);
    v18 = *(_DWORD *)(a1 + 3008);
    v17 = *(_QWORD *)(a1 + 8);
    v43 = v6 == 2;
    LODWORD(v12) = 0;
LABEL_53:
    v44 = *(_QWORD *)(a1 + 312);
    if ( v44 >= *(_QWORD *)(a1 + 256) )
      goto LABEL_59;
    if ( !v6 )
      goto LABEL_12;
    if ( v44 )
    {
LABEL_59:
      v7 = v6 == 2;
    }
    else
    {
      if ( !v43 )
        goto LABEL_12;
      if ( *(_DWORD *)(a1 + 3020) )
      {
        v6 = 2;
        goto LABEL_12;
      }
      v7 = v43;
      v6 = 2;
    }
    goto LABEL_60;
  }
  v95 = *(_QWORD *)(a1 + 296);
  if ( v95 )
    goto LABEL_36;
  if ( *(_DWORD *)(a1 + 3012) >= *(_DWORD *)(a1 + 3016) )
  {
LABEL_132:
    v83 = *(_QWORD *)(a1 + 336);
    v75 = *(_QWORD *)(a1 + 256);
    v77 = *(char **)(a1 + 320);
    if ( *(_QWORD *)(a1 + 328) - v83 >= v75 )
    {
      v12 = (unsigned __int64)&v77[v83];
LABEL_134:
      v98 = v7;
      sub_105390(a1, v12, v75);
      *(_QWORD *)(a1 + 296) = v12;
      v7 = v98;
      *(_QWORD *)(a1 + 304) = v75;
      *(_QWORD *)(a1 + 312) = 0;
      goto LABEL_127;
    }
    v78 = *(_QWORD *)(a1 + 288);
    v79 = 1;
    v73 = 0;
  }
  else
  {
    v102 = v8;
    v66 = *(_QWORD *)(a1 + 8);
    v67 = *(_DWORD *)(a1 + 3012);
    v68 = *(_DWORD *)(a1 + 3016);
    while ( 1 )
    {
      v69 = 448LL * (*(_DWORD *)(a1 + 3008) & v67);
      pthread_mutex_lock((pthread_mutex_t *)(v66 + v69 + 16));
      v70 = v69 + *(_QWORD *)(a1 + 8);
      v71 = *(_QWORD *)v70;
      pthread_mutex_unlock((pthread_mutex_t *)(v70 + 16));
      v66 = *(_QWORD *)(a1 + 8);
      v72 = (_QWORD *)(v66 + v69);
      if ( v71 < v72[22] )
        break;
      if ( v68 <= ++v67 )
      {
        v7 = 0;
        v8 = v102;
        goto LABEL_132;
      }
    }
    v73 = v72[20];
    v7 = 0;
    v8 = v102;
    v95 = v72[19];
    if ( !v73 )
    {
      v73 = v72[22];
      v95 = v72[21];
    }
    v74 = *(_QWORD *)(a1 + 336);
    v75 = *(_QWORD *)(a1 + 256);
    v76 = v95 == 0;
    v77 = *(char **)(a1 + 320);
    if ( *(_QWORD *)(a1 + 328) - v74 >= v75 )
    {
      v24 = &v77[v74] == nullptr;
      v12 = (unsigned __int64)&v77[v74];
      v81 = v76 || v24;
      goto LABEL_121;
    }
    v78 = *(_QWORD *)(a1 + 288);
    v79 = v76 || v77 == nullptr;
    if ( v79 )
    {
      v79 = v95 == 0;
    }
    else
    {
      v80 = v95 + v73;
      if ( &v77[v78] != v77 && v80 != v95 )
      {
        v79 = (unsigned __int64)&v77[v78] > v95 && v80 > (unsigned __int64)v77;
        if ( v79 )
          goto LABEL_126;
      }
    }
  }
  v104 = v7;
  v103 = v79;
  nb = v78;
  sub_105390(a1, (unsigned __int64)v77, v78);
  memmove(v77, *(const void **)(a1 + 280), nb);
  *(_QWORD *)(a1 + 280) = v77;
  v7 = v104;
  *(_QWORD *)(a1 + 336) = nb;
  v12 = *(_QWORD *)(a1 + 320) + nb;
  v81 = (v12 == 0) | v103;
LABEL_121:
  if ( v81 )
    goto LABEL_134;
  v82 = v95 + v73;
  if ( v12 + v75 == v12 || v82 == v95 || v82 <= v12 || v12 + v75 <= v95 )
    goto LABEL_134;
LABEL_126:
  v12 = *(_QWORD *)(a1 + 296);
LABEL_127:
  v10 = v8[2];
  v11 = v8[1];
  if ( !v12 )
  {
    v43 = v6 == 2;
    goto LABEL_81;
  }
  v95 = v12;
LABEL_36:
  v30 = *(_QWORD *)(a1 + 312);
  v31 = v11 - v10;
  v32 = *(_QWORD *)(a1 + 256) - v30;
  v33 = (unsigned __int8 *)(v10 + *v8);
  if ( v32 > v31 )
    v32 = v31;
  if ( *(_DWORD *)(a1 + 132) && v30 + v31 > 0x1FFFF && v30 + v32 > 0x1F )
  {
    v34 = *(_QWORD *)(a1 + 2992);
    if ( v30 <= 0x1FFFF )
    {
      v35 = (size_t)&loc_20000 - v30;
      if ( (unsigned __int64)&loc_20000 - v30 <= 0x1F )
      {
        v36 = v95 + v30 - 32;
        v37 = v30 - 131040;
        if ( v30 != 131040 )
        {
          v88 = (unsigned __int8 *)(v95 + 131040);
          v37 = 0;
          do
          {
            v89 = *v88++;
            v37 = 0xCF1BBCDCB7A56463LL * v37 + v89 + 10;
          }
          while ( (unsigned __int8 *)(v95 + v30) != v88 );
        }
        v90 = v33;
        do
        {
          v91 = *v90++;
          v37 = 0xCF1BBCDCB7A56463LL * v37 + v91 + 10;
        }
        while ( &v33[v35] != v90 );
      }
      else
      {
        v36 = (__int64)&v33[-v30 + 131040];
        v37 = 0;
        v38 = (unsigned __int8 *)v36;
        do
        {
          v39 = *v38++;
          v37 = 0xCF1BBCDCB7A56463LL * v37 + v39 + 10;
        }
        while ( &v33[-v30 + 0x20000] != v38 );
      }
LABEL_45:
      LODWORD(v12) = v32 != 0;
      if ( v32 > v35 )
      {
        do
        {
          if ( v35 <= 0x1F )
            v40 = *(unsigned __int8 *)(v36 + v35);
          else
            v40 = v33[v35 - 32];
          v41 = v37 - *(_QWORD *)(a1 + 3000) * (v40 + 10);
          v42 = v33[v35++];
          v37 = 0xCF1BBCDCB7A56463LL * v41 + v42 + 10;
          if ( v34 == (v37 & v34) )
          {
            v32 = v35;
            LODWORD(v12) = 1;
            goto LABEL_140;
          }
        }
        while ( v32 > v35 );
        LODWORD(v12) = 1;
      }
      goto LABEL_143;
    }
    v36 = v95 + v30 - 32;
    v37 = 0;
    v86 = (unsigned __int8 *)v36;
    do
    {
      v87 = *v86++;
      v37 = 0xCF1BBCDCB7A56463LL * v37 + v87 + 10;
    }
    while ( (unsigned __int8 *)(v95 + v30) != v86 );
    if ( v34 != (v37 & v34) )
    {
      v35 = 0;
      goto LABEL_45;
    }
    LODWORD(v12) = 0;
    v32 = 0;
LABEL_140:
    if ( v6 )
    {
LABEL_143:
      v43 = v6 == 2;
      goto LABEL_80;
    }
    v43 = 0;
    v6 = 1;
  }
  else
  {
    v43 = v6 == 2;
    LODWORD(v12) = v32 != 0;
  }
LABEL_80:
  n = v7;
  memcpy((void *)(v95 + v30), v33, v32);
  v8[2] += v32;
  v7 = n;
  *(_QWORD *)(a1 + 312) += v32;
  v10 = v8[2];
  v11 = v8[1];
LABEL_81:
  v56 = *(_DWORD *)(a1 + 272);
  if ( v10 >= v11 || !v43 )
  {
    v13 = *(_DWORD *)(a1 + 3012);
    v15 = *(_DWORD *)(a1 + 3008);
    v14 = *(_QWORD *)(a1 + 8);
    LODWORD(v19) = v13;
    v18 = v15;
    v17 = v14;
    if ( v56 )
      goto LABEL_7;
    goto LABEL_53;
  }
  if ( v56 )
  {
LABEL_5:
    v6 = 1;
LABEL_6:
    v13 = *(_DWORD *)(a1 + 3012);
    v14 = *(_QWORD *)(a1 + 8);
    v15 = *(_DWORD *)(a1 + 3008);
LABEL_7:
    v16 = *(_DWORD *)(a1 + 3016);
    v17 = v14;
    v18 = v15;
    v19 = v13;
    if ( v16 > v15 + v13 )
      goto LABEL_12;
    v20 = v16 & v15;
    v21 = 448 * v20;
    goto LABEL_9;
  }
  v44 = *(_QWORD *)(a1 + 312);
  if ( *(_QWORD *)(a1 + 256) > v44 && !v44 )
  {
    LODWORD(v19) = *(_DWORD *)(a1 + 3012);
    v17 = *(_QWORD *)(a1 + 8);
    v6 = 1;
    v18 = *(_DWORD *)(a1 + 3008);
    goto LABEL_12;
  }
  v17 = *(_QWORD *)(a1 + 8);
  v18 = *(_DWORD *)(a1 + 3008);
  v6 = 1;
  LODWORD(v19) = *(_DWORD *)(a1 + 3012);
LABEL_60:
  v45 = v18 & *(_DWORD *)(a1 + 3016);
  if ( *(_DWORD *)(a1 + 3016) > v18 + (unsigned int)v19 )
    goto LABEL_12;
  v19 = *(_QWORD *)(a1 + 296);
  v46 = 448 * v45;
  *(_QWORD *)(v17 + v46 + 168) = v19;
  v21 = 448 * v45;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + v46 + 176) = v44;
  *(__m128i *)(*(_QWORD *)(a1 + 8) + v46 + 152) = _mm_loadu_si128((const __m128i *)(a1 + 280));
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + v46) = 0;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + v46 + 8) = 0;
  v47 = *(_QWORD *)(a1 + 8);
  *(__m128i *)(v47 + v46 + 200) = _mm_loadu_si128((const __m128i *)(a1 + 40));
  *(__m128i *)(v47 + v46 + 216) = _mm_loadu_si128((const __m128i *)(a1 + 56));
  *(__m128i *)(v47 + v46 + 232) = _mm_loadu_si128((const __m128i *)(a1 + 72));
  *(__m128i *)(v47 + v46 + 248) = _mm_loadu_si128((const __m128i *)(a1 + 88));
  *(__m128i *)(v47 + v46 + 264) = _mm_loadu_si128((const __m128i *)(a1 + 104));
  *(__m128i *)(v47 + v46 + 280) = _mm_loadu_si128((const __m128i *)(a1 + 120));
  *(__m128i *)(v47 + v46 + 296) = _mm_loadu_si128((const __m128i *)(a1 + 136));
  *(__m128i *)(v47 + v46 + 312) = _mm_loadu_si128((const __m128i *)(a1 + 152));
  *(__m128i *)(v47 + v46 + 328) = _mm_loadu_si128((const __m128i *)(a1 + 168));
  *(__m128i *)(v47 + v46 + 344) = _mm_loadu_si128((const __m128i *)(a1 + 184));
  *(__m128i *)(v47 + v46 + 360) = _mm_loadu_si128((const __m128i *)(a1 + 200));
  *(__m128i *)(v47 + v46 + 376) = _mm_loadu_si128((const __m128i *)(a1 + 216));
  *(__m128i *)(v47 + v46 + 392) = _mm_loadu_si128((const __m128i *)(a1 + 232));
  *(_QWORD *)(v47 + v46 + 408) = *(_QWORD *)(a1 + 248);
  v48 = 0;
  if ( !*(_DWORD *)(a1 + 3016) )
    v48 = *(_QWORD *)(a1 + 3088);
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + v46 + 416) = v48;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + v46 + 424) = *(_QWORD *)(a1 + 3032);
  v49 = v46 + *(_QWORD *)(a1 + 8);
  *(_QWORD *)(v49 + 136) = 0;
  *(_QWORD *)(v49 + 144) = 0;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + v46 + 104) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + v46 + 112) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + v46 + 120) = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + v46 + 128) = a1 + 344;
  LODWORD(v49) = *(_DWORD *)(a1 + 3016);
  *(_DWORD *)(*(_QWORD *)(a1 + 8) + v46 + 184) = v49;
  *(_DWORD *)(*(_QWORD *)(a1 + 8) + v46 + 188) = v49 == 0;
  v50 = v7;
  *(_DWORD *)(*(_QWORD *)(a1 + 8) + v46 + 192) = v7;
  if ( *(_DWORD *)(a1 + 76) && v7 )
  {
    v19 = *(unsigned int *)(a1 + 3016);
    v51 = v46 + *(_QWORD *)(a1 + 8);
    if ( (_DWORD)v19 )
      *(_DWORD *)(v51 + 440) = 1;
    else
      *(_DWORD *)(v51 + 440) = 0;
    v20 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(v20 + v46 + 432) = 0;
    *(_QWORD *)(a1 + 336) += v44;
    *(_QWORD *)(a1 + 296) = 0;
    *(_QWORD *)(a1 + 304) = 0;
    *(_QWORD *)(a1 + 312) = 0;
  }
  else
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 8) + v46 + 440) = 0;
    v20 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(v20 + v46 + 432) = 0;
    *(_QWORD *)(a1 + 296) = 0;
    *(_QWORD *)(a1 + 336) += v44;
    *(_QWORD *)(a1 + 304) = 0;
    *(_QWORD *)(a1 + 312) = 0;
    if ( v6 != 2 )
    {
      v20 = v44;
      if ( *(_QWORD *)(a1 + 264) <= v44 )
        v20 = *(_QWORD *)(a1 + 264);
      *(_QWORD *)(a1 + 288) = v20;
      v19 += v44 - v20;
      v17 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(a1 + 280) = v19;
      if ( v44 || !*(_DWORD *)(a1 + 3016) )
        goto LABEL_9;
      goto LABEL_75;
    }
  }
  a5 = *(unsigned int *)(a1 + 3016);
  *(_DWORD *)(a1 + 3020) = v50;
  *(_QWORD *)(a1 + 280) = 0;
  v17 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 288) = 0;
  if ( !(_DWORD)a5 )
  {
    *(_DWORD *)(a1 + 76) = 0;
LABEL_9:
    if ( (unsigned int)sub_117950(*(_QWORD *)a1, sub_1059E0, v17 + v21, v20, a5, v19) )
    {
      ++*(_DWORD *)(a1 + 3016);
      LODWORD(v19) = *(_DWORD *)(a1 + 3012);
      *(_DWORD *)(a1 + 272) = 0;
    }
    else
    {
      *(_DWORD *)(a1 + 272) = 1;
      LODWORD(v19) = *(_DWORD *)(a1 + 3012);
    }
    v18 = *(_DWORD *)(a1 + 3008);
    v17 = *(_QWORD *)(a1 + 8);
    goto LABEL_12;
  }
  if ( v44 )
    goto LABEL_9;
LABEL_75:
  v52 = (_QWORD *)(v17 + v46);
  v53 = sub_1052B0(*(pthread_mutex_t **)(v17 + v46 + 112));
  v52[17] = v53;
  v52[18] = v54;
  if ( v53 )
  {
    v52[21] = 0;
    v55 = v52[18];
    v52[22] = 0;
    v52[1] = sub_ADCC0((__int64)v53, v55);
  }
  else
  {
    v52[1] = -64;
  }
  ++*(_DWORD *)(a1 + 3016);
  LODWORD(v19) = *(_DWORD *)(a1 + 3012);
  v18 = *(_DWORD *)(a1 + 3008);
  v17 = *(_QWORD *)(a1 + 8);
LABEL_12:
  v22 = 448LL * ((unsigned int)v19 & v18);
  pthread_mutex_lock((pthread_mutex_t *)(v17 + v22 + 16));
  v23 = v22 + *(_QWORD *)(a1 + 8);
  v24 = (_DWORD)v12 == 0;
  v25 = *(_QWORD *)v23;
  v5 = *(_QWORD *)(v23 + 8);
  v26 = *(_QWORD *)(v23 + 176);
  if ( v24 && *(_DWORD *)(a1 + 3012) < *(_DWORD *)(a1 + 3016) && *(_QWORD *)(v23 + 432) == v5 )
  {
    if ( v25 == v26 )
    {
LABEL_85:
      pthread_mutex_unlock((pthread_mutex_t *)(v23 + 16));
      if ( v5 <= 0xFFFFFFFFFFFFFF88LL )
      {
LABEL_86:
        v57 = *(_QWORD *)(a1 + 8);
        v58 = *(unsigned int *)(v57 + v22 + 440);
        v96 = v57 + v22;
        if ( (_DWORD)v58 )
        {
          v5 += 4LL;
          v59 = sub_117F40(a1 + 2760, v58);
          v27 = v26;
          *(_DWORD *)(*(_QWORD *)(v96 + 136) + *(_QWORD *)(v96 + 8)) = v59;
          *(_QWORD *)(v22 + *(_QWORD *)(a1 + 8) + 8) += 4LL;
          *(_DWORD *)(*(_QWORD *)(a1 + 8) + v22 + 440) = 0;
          v57 = *(_QWORD *)(a1 + 8);
        }
        else
        {
          if ( !v5 )
            goto LABEL_24;
          v27 = v26;
        }
        goto LABEL_88;
      }
LABEL_96:
      sub_1051A0(a1);
      sub_105020(a1);
      goto LABEL_30;
    }
    while ( 1 )
    {
      pthread_cond_wait((pthread_cond_t *)(v23 + 56), (pthread_mutex_t *)(v23 + 16));
      v23 = v22 + *(_QWORD *)(a1 + 8);
      v5 = *(_QWORD *)(v23 + 8);
      if ( *(_QWORD *)(v23 + 432) != v5 )
        break;
      v26 = *(_QWORD *)(v23 + 176);
      if ( *(_QWORD *)v23 == v26 )
        goto LABEL_85;
    }
    v25 = *(_QWORD *)v23;
    v26 = *(_QWORD *)(v23 + 176);
  }
  v94 = v25;
  pthread_mutex_unlock((pthread_mutex_t *)(v23 + 16));
  v27 = v94;
  if ( v5 > 0xFFFFFFFFFFFFFF88LL )
    goto LABEL_96;
  if ( v94 == v26 )
    goto LABEL_86;
  if ( !v5 )
    goto LABEL_23;
  v57 = *(_QWORD *)(a1 + 8);
LABEL_88:
  v60 = v22 + v57;
  v61 = *(_QWORD *)(v60 + 432);
  v62 = a2[2];
  v63 = a2[1] - v62;
  if ( v63 > v5 - v61 )
    v63 = v5 - v61;
  if ( v63 )
  {
    na = v27;
    v97 = v63;
    memcpy((void *)(*a2 + v62), (const void *)(*(_QWORD *)(v60 + 136) + v61), v63);
    v27 = na;
    v63 = v97;
    v62 = a2[2];
  }
  a2[2] = v63 + v62;
  *(_QWORD *)(v22 + *(_QWORD *)(a1 + 8) + 432) += v63;
  if ( v27 == v26 )
  {
    v65 = v22 + *(_QWORD *)(a1 + 8);
    v64 = *(_QWORD *)(v65 + 432);
    if ( v64 == v5 )
    {
      v93 = v27;
      sub_104FA0(*(pthread_mutex_t **)(a1 + 16), *(void **)(v65 + 136), *(_QWORD *)(v65 + 144));
      v84 = v22 + *(_QWORD *)(a1 + 8);
      *(_QWORD *)(v84 + 136) = 0;
      *(_QWORD *)(v84 + 144) = 0;
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + v22 + 8) = 0;
      v85 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(a1 + 3040) += v93;
      *(_QWORD *)(a1 + 3048) += v5;
      ++*(_DWORD *)(a1 + 3012);
      v64 = *(_QWORD *)(v85 + v22 + 432);
    }
    if ( v5 > v64 )
      goto LABEL_94;
    goto LABEL_24;
  }
  v64 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + v22 + 432);
  if ( v64 < v5 )
  {
LABEL_94:
    v5 -= v64;
    goto LABEL_30;
  }
LABEL_23:
  if ( v27 >= v26 )
  {
LABEL_24:
    if ( *(_DWORD *)(a1 + 3012) >= *(_DWORD *)(a1 + 3016) && !*(_DWORD *)(a1 + 272) )
    {
      v5 = *(_QWORD *)(a1 + 312);
      if ( !v5 )
      {
        v28 = *(_DWORD *)(a1 + 3020);
        *(_DWORD *)(a1 + 3024) = v28;
        if ( v6 == 2 )
          v5 = v28 == 0;
        goto LABEL_30;
      }
    }
  }
  v5 = 1;
LABEL_30:
  if ( v8[2] < v8[1] && !v5 )
    return 1;
  return v5;
}

