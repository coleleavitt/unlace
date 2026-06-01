__int64 __fastcall sub_945130(__int64 a1, _QWORD *a2, _QWORD *a3, int a4)
{
  unsigned __int64 v4; // r12
  int v5; // ebp
  bool v6; // cl
  _QWORD *v7; // rbx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r12
  int v12; // r10d
  __int64 v13; // rdx
  unsigned int v14; // ecx
  unsigned int v15; // edi
  __int64 v16; // rsi
  unsigned int v17; // eax
  int v18; // r9d
  __int64 v19; // rdx
  __int64 v20; // r14
  __int64 v21; // rdi
  bool v22; // zf
  size_t v23; // rcx
  size_t v24; // r15
  size_t v25; // rcx
  int v26; // eax
  unsigned __int64 v28; // rdi
  size_t v29; // rax
  size_t v30; // r14
  unsigned __int8 *v31; // rsi
  __int64 v32; // r9
  unsigned __int64 v33; // rdx
  __int64 v34; // r8
  unsigned __int64 v35; // rax
  unsigned __int8 *v36; // r10
  __int64 v37; // r11
  __int64 v38; // r12
  unsigned __int64 v39; // rax
  __int64 v40; // r12
  bool v41; // r15
  unsigned __int64 v42; // rdi
  __int64 v43; // rdx
  __int64 v44; // r9
  __int64 v45; // rax
  __int64 v46; // rsi
  __int64 v47; // rsi
  __int64 v48; // rsi
  _BOOL4 v49; // esi
  __int64 v50; // rcx
  int v51; // r8d
  unsigned __int64 v52; // rcx
  _QWORD *v53; // r14
  void *v54; // rdi
  __int64 v55; // rdx
  unsigned __int64 v56; // rsi
  int v57; // edi
  __int64 v58; // rdx
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

  v4 = -60;
  v5 = a4;
  v6 = a4 == 0 && *(_DWORD *)(a1 + 3020) != 0;
  if ( v6 )
    return v4;
  v7 = a3;
  v9 = a3[2];
  v10 = v7[1];
  if ( *(_DWORD *)(a1 + 272) )
  {
    LODWORD(v11) = 0;
    if ( v9 >= v10 || v5 != 2 )
      goto LABEL_6;
    goto LABEL_5;
  }
  if ( v9 >= v10 )
  {
    v18 = *(_DWORD *)(a1 + 3012);
    v17 = *(_DWORD *)(a1 + 3008);
    v16 = *(_QWORD *)(a1 + 8);
    v41 = v5 == 2;
    LODWORD(v11) = 0;
LABEL_53:
    v42 = *(_QWORD *)(a1 + 312);
    if ( v42 >= *(_QWORD *)(a1 + 256) )
      goto LABEL_59;
    if ( !v5 )
      goto LABEL_12;
    if ( v42 )
    {
LABEL_59:
      v6 = v5 == 2;
    }
    else
    {
      if ( !v41 )
        goto LABEL_12;
      if ( *(_DWORD *)(a1 + 3020) )
      {
        v5 = 2;
        goto LABEL_12;
      }
      v6 = v41;
      v5 = 2;
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
      v11 = (unsigned __int64)&v77[v83];
LABEL_134:
      v98 = v6;
      sub_942FB0(a1, v11, v75);
      *(_QWORD *)(a1 + 296) = v11;
      v6 = v98;
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
    v102 = v7;
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
        v6 = 0;
        v7 = v102;
        goto LABEL_132;
      }
    }
    v73 = v72[20];
    v6 = 0;
    v7 = v102;
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
      v22 = &v77[v74] == nullptr;
      v11 = (unsigned __int64)&v77[v74];
      v81 = v76 || v22;
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
  v104 = v6;
  v103 = v79;
  nb = v78;
  sub_942FB0(a1, (unsigned __int64)v77, v78);
  memmove(v77, *(const void **)(a1 + 280), nb);
  *(_QWORD *)(a1 + 280) = v77;
  v6 = v104;
  *(_QWORD *)(a1 + 336) = nb;
  v11 = *(_QWORD *)(a1 + 320) + nb;
  v81 = (v11 == 0) | v103;
LABEL_121:
  if ( v81 )
    goto LABEL_134;
  v82 = v95 + v73;
  if ( v11 + v75 == v11 || v82 == v95 || v82 <= v11 || v11 + v75 <= v95 )
    goto LABEL_134;
LABEL_126:
  v11 = *(_QWORD *)(a1 + 296);
LABEL_127:
  v9 = v7[2];
  v10 = v7[1];
  if ( !v11 )
  {
    v41 = v5 == 2;
    goto LABEL_81;
  }
  v95 = v11;
LABEL_36:
  v28 = *(_QWORD *)(a1 + 312);
  v29 = v10 - v9;
  v30 = *(_QWORD *)(a1 + 256) - v28;
  v31 = (unsigned __int8 *)(v9 + *v7);
  if ( v30 > v29 )
    v30 = v29;
  if ( *(_DWORD *)(a1 + 132) && v28 + v29 > 0x1FFFF && v28 + v30 > 0x1F )
  {
    v32 = *(_QWORD *)(a1 + 2992);
    if ( v28 <= 0x1FFFF )
    {
      v33 = 0x20000 - v28;
      if ( 0x20000 - v28 <= 0x1F )
      {
        v34 = v95 + v28 - 32;
        v35 = v28 - 131040;
        if ( v28 != 131040 )
        {
          v88 = (unsigned __int8 *)(v95 + 131040);
          v35 = 0;
          do
          {
            v89 = *v88++;
            v35 = 0xCF1BBCDCB7A56463LL * v35 + v89 + 10;
          }
          while ( (unsigned __int8 *)(v95 + v28) != v88 );
        }
        v90 = v31;
        do
        {
          v91 = *v90++;
          v35 = 0xCF1BBCDCB7A56463LL * v35 + v91 + 10;
        }
        while ( &v31[v33] != v90 );
      }
      else
      {
        v34 = (__int64)&v31[-v28 + 131040];
        v35 = 0;
        v36 = (unsigned __int8 *)v34;
        do
        {
          v37 = *v36++;
          v35 = 0xCF1BBCDCB7A56463LL * v35 + v37 + 10;
        }
        while ( &v31[-v28 + 0x20000] != v36 );
      }
LABEL_45:
      LODWORD(v11) = v30 != 0;
      if ( v30 > v33 )
      {
        do
        {
          if ( v33 <= 0x1F )
            v38 = *(unsigned __int8 *)(v34 + v33);
          else
            v38 = v31[v33 - 32];
          v39 = v35 - *(_QWORD *)(a1 + 3000) * (v38 + 10);
          v40 = v31[v33++];
          v35 = 0xCF1BBCDCB7A56463LL * v39 + v40 + 10;
          if ( v32 == (v35 & v32) )
          {
            v30 = v33;
            LODWORD(v11) = 1;
            goto LABEL_140;
          }
        }
        while ( v30 > v33 );
        LODWORD(v11) = 1;
      }
      goto LABEL_143;
    }
    v34 = v95 + v28 - 32;
    v35 = 0;
    v86 = (unsigned __int8 *)v34;
    do
    {
      v87 = *v86++;
      v35 = 0xCF1BBCDCB7A56463LL * v35 + v87 + 10;
    }
    while ( (unsigned __int8 *)(v95 + v28) != v86 );
    if ( v32 != (v35 & v32) )
    {
      v33 = 0;
      goto LABEL_45;
    }
    LODWORD(v11) = 0;
    v30 = 0;
LABEL_140:
    if ( v5 )
    {
LABEL_143:
      v41 = v5 == 2;
      goto LABEL_80;
    }
    v41 = 0;
    v5 = 1;
  }
  else
  {
    v41 = v5 == 2;
    LODWORD(v11) = v30 != 0;
  }
LABEL_80:
  n = v6;
  memcpy((void *)(v95 + v28), v31, v30);
  v7[2] += v30;
  v6 = n;
  *(_QWORD *)(a1 + 312) += v30;
  v9 = v7[2];
  v10 = v7[1];
LABEL_81:
  v57 = *(_DWORD *)(a1 + 272);
  if ( v9 >= v10 || !v41 )
  {
    v12 = *(_DWORD *)(a1 + 3012);
    v14 = *(_DWORD *)(a1 + 3008);
    v13 = *(_QWORD *)(a1 + 8);
    v18 = v12;
    v17 = v14;
    v16 = v13;
    if ( v57 )
      goto LABEL_7;
    goto LABEL_53;
  }
  if ( v57 )
  {
LABEL_5:
    v5 = 1;
LABEL_6:
    v12 = *(_DWORD *)(a1 + 3012);
    v13 = *(_QWORD *)(a1 + 8);
    v14 = *(_DWORD *)(a1 + 3008);
LABEL_7:
    v15 = *(_DWORD *)(a1 + 3016);
    v16 = v13;
    v17 = v14;
    v18 = v12;
    if ( v15 > v14 + v12 )
      goto LABEL_12;
    v19 = 448LL * (v15 & v14);
    goto LABEL_9;
  }
  v42 = *(_QWORD *)(a1 + 312);
  if ( *(_QWORD *)(a1 + 256) > v42 && !v42 )
  {
    v18 = *(_DWORD *)(a1 + 3012);
    v16 = *(_QWORD *)(a1 + 8);
    v5 = 1;
    v17 = *(_DWORD *)(a1 + 3008);
    goto LABEL_12;
  }
  v16 = *(_QWORD *)(a1 + 8);
  v17 = *(_DWORD *)(a1 + 3008);
  v5 = 1;
  v18 = *(_DWORD *)(a1 + 3012);
LABEL_60:
  v43 = v17 & *(_DWORD *)(a1 + 3016);
  if ( *(_DWORD *)(a1 + 3016) > v17 + v18 )
    goto LABEL_12;
  v44 = *(_QWORD *)(a1 + 296);
  v45 = 448 * v43;
  *(_QWORD *)(v16 + v45 + 168) = v44;
  v19 = 448 * v43;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + v45 + 176) = v42;
  *(__m128i *)(*(_QWORD *)(a1 + 8) + v45 + 152) = _mm_loadu_si128((const __m128i *)(a1 + 280));
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + v45) = 0;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + v45 + 8) = 0;
  v46 = *(_QWORD *)(a1 + 8);
  *(__m128i *)(v46 + v45 + 200) = _mm_loadu_si128((const __m128i *)(a1 + 40));
  *(__m128i *)(v46 + v45 + 216) = _mm_loadu_si128((const __m128i *)(a1 + 56));
  *(__m128i *)(v46 + v45 + 232) = _mm_loadu_si128((const __m128i *)(a1 + 72));
  *(__m128i *)(v46 + v45 + 248) = _mm_loadu_si128((const __m128i *)(a1 + 88));
  *(__m128i *)(v46 + v45 + 264) = _mm_loadu_si128((const __m128i *)(a1 + 104));
  *(__m128i *)(v46 + v45 + 280) = _mm_loadu_si128((const __m128i *)(a1 + 120));
  *(__m128i *)(v46 + v45 + 296) = _mm_loadu_si128((const __m128i *)(a1 + 136));
  *(__m128i *)(v46 + v45 + 312) = _mm_loadu_si128((const __m128i *)(a1 + 152));
  *(__m128i *)(v46 + v45 + 328) = _mm_loadu_si128((const __m128i *)(a1 + 168));
  *(__m128i *)(v46 + v45 + 344) = _mm_loadu_si128((const __m128i *)(a1 + 184));
  *(__m128i *)(v46 + v45 + 360) = _mm_loadu_si128((const __m128i *)(a1 + 200));
  *(__m128i *)(v46 + v45 + 376) = _mm_loadu_si128((const __m128i *)(a1 + 216));
  *(__m128i *)(v46 + v45 + 392) = _mm_loadu_si128((const __m128i *)(a1 + 232));
  *(_QWORD *)(v46 + v45 + 408) = *(_QWORD *)(a1 + 248);
  v47 = 0;
  if ( !*(_DWORD *)(a1 + 3016) )
    v47 = *(_QWORD *)(a1 + 3088);
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + v45 + 416) = v47;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + v45 + 424) = *(_QWORD *)(a1 + 3032);
  v48 = v45 + *(_QWORD *)(a1 + 8);
  *(_QWORD *)(v48 + 136) = 0;
  *(_QWORD *)(v48 + 144) = 0;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + v45 + 104) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + v45 + 112) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + v45 + 120) = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + v45 + 128) = a1 + 344;
  LODWORD(v48) = *(_DWORD *)(a1 + 3016);
  *(_DWORD *)(*(_QWORD *)(a1 + 8) + v45 + 184) = v48;
  *(_DWORD *)(*(_QWORD *)(a1 + 8) + v45 + 188) = v48 == 0;
  v49 = v6;
  *(_DWORD *)(*(_QWORD *)(a1 + 8) + v45 + 192) = v6;
  if ( *(_DWORD *)(a1 + 76) && v6 )
  {
    v50 = v45 + *(_QWORD *)(a1 + 8);
    if ( *(_DWORD *)(a1 + 3016) )
      *(_DWORD *)(v50 + 440) = 1;
    else
      *(_DWORD *)(v50 + 440) = 0;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + v45 + 432) = 0;
    *(_QWORD *)(a1 + 336) += v42;
    *(_QWORD *)(a1 + 296) = 0;
    *(_QWORD *)(a1 + 304) = 0;
    *(_QWORD *)(a1 + 312) = 0;
  }
  else
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 8) + v45 + 440) = 0;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + v45 + 432) = 0;
    *(_QWORD *)(a1 + 296) = 0;
    *(_QWORD *)(a1 + 336) += v42;
    *(_QWORD *)(a1 + 304) = 0;
    *(_QWORD *)(a1 + 312) = 0;
    if ( v5 != 2 )
    {
      v52 = v42;
      if ( *(_QWORD *)(a1 + 264) <= v42 )
        v52 = *(_QWORD *)(a1 + 264);
      *(_QWORD *)(a1 + 288) = v52;
      v16 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(a1 + 280) = v42 - v52 + v44;
      if ( v42 || !*(_DWORD *)(a1 + 3016) )
        goto LABEL_9;
      goto LABEL_75;
    }
  }
  v51 = *(_DWORD *)(a1 + 3016);
  *(_DWORD *)(a1 + 3020) = v49;
  *(_QWORD *)(a1 + 280) = 0;
  v16 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 288) = 0;
  if ( !v51 )
  {
    *(_DWORD *)(a1 + 76) = 0;
LABEL_9:
    if ( (unsigned int)sub_8DF5D0(*(_QWORD *)a1, (__int64)sub_943600, v16 + v19) )
    {
      ++*(_DWORD *)(a1 + 3016);
      v18 = *(_DWORD *)(a1 + 3012);
      *(_DWORD *)(a1 + 272) = 0;
    }
    else
    {
      *(_DWORD *)(a1 + 272) = 1;
      v18 = *(_DWORD *)(a1 + 3012);
    }
    v17 = *(_DWORD *)(a1 + 3008);
    v16 = *(_QWORD *)(a1 + 8);
    goto LABEL_12;
  }
  if ( v42 )
    goto LABEL_9;
LABEL_75:
  v53 = (_QWORD *)(v16 + v45);
  v54 = sub_942ED0(*(pthread_mutex_t **)(v16 + v45 + 112));
  v53[17] = v54;
  v53[18] = v55;
  if ( v54 )
  {
    v53[21] = 0;
    v56 = v53[18];
    v53[22] = 0;
    v53[1] = sub_8EB8E0((__int64)v54, v56);
  }
  else
  {
    v53[1] = -64;
  }
  ++*(_DWORD *)(a1 + 3016);
  v18 = *(_DWORD *)(a1 + 3012);
  v17 = *(_DWORD *)(a1 + 3008);
  v16 = *(_QWORD *)(a1 + 8);
LABEL_12:
  v20 = 448LL * (v18 & v17);
  pthread_mutex_lock((pthread_mutex_t *)(v16 + v20 + 16));
  v21 = v20 + *(_QWORD *)(a1 + 8);
  v22 = (_DWORD)v11 == 0;
  v23 = *(_QWORD *)v21;
  v4 = *(_QWORD *)(v21 + 8);
  v24 = *(_QWORD *)(v21 + 176);
  if ( v22 && *(_DWORD *)(a1 + 3012) < *(_DWORD *)(a1 + 3016) && *(_QWORD *)(v21 + 432) == v4 )
  {
    if ( v23 == v24 )
    {
LABEL_85:
      pthread_mutex_unlock((pthread_mutex_t *)(v21 + 16));
      if ( v4 <= 0xFFFFFFFFFFFFFF88LL )
      {
LABEL_86:
        v58 = *(_QWORD *)(a1 + 8);
        v96 = v58 + v20;
        if ( *(_DWORD *)(v58 + v20 + 440) )
        {
          v4 += 4LL;
          v59 = sub_8DFBC0(a1 + 2760);
          v25 = v24;
          *(_DWORD *)(*(_QWORD *)(v96 + 136) + *(_QWORD *)(v96 + 8)) = v59;
          *(_QWORD *)(v20 + *(_QWORD *)(a1 + 8) + 8) += 4LL;
          *(_DWORD *)(*(_QWORD *)(a1 + 8) + v20 + 440) = 0;
          v58 = *(_QWORD *)(a1 + 8);
        }
        else
        {
          if ( !v4 )
            goto LABEL_24;
          v25 = v24;
        }
        goto LABEL_88;
      }
LABEL_96:
      sub_942DC0(a1);
      sub_942C40(a1);
      goto LABEL_30;
    }
    while ( 1 )
    {
      pthread_cond_wait((pthread_cond_t *)(v21 + 56), (pthread_mutex_t *)(v21 + 16));
      v21 = v20 + *(_QWORD *)(a1 + 8);
      v4 = *(_QWORD *)(v21 + 8);
      if ( *(_QWORD *)(v21 + 432) != v4 )
        break;
      v24 = *(_QWORD *)(v21 + 176);
      if ( *(_QWORD *)v21 == v24 )
        goto LABEL_85;
    }
    v23 = *(_QWORD *)v21;
    v24 = *(_QWORD *)(v21 + 176);
  }
  v94 = v23;
  pthread_mutex_unlock((pthread_mutex_t *)(v21 + 16));
  v25 = v94;
  if ( v4 > 0xFFFFFFFFFFFFFF88LL )
    goto LABEL_96;
  if ( v94 == v24 )
    goto LABEL_86;
  if ( !v4 )
    goto LABEL_23;
  v58 = *(_QWORD *)(a1 + 8);
LABEL_88:
  v60 = v20 + v58;
  v61 = *(_QWORD *)(v60 + 432);
  v62 = a2[2];
  v63 = a2[1] - v62;
  if ( v63 > v4 - v61 )
    v63 = v4 - v61;
  if ( v63 )
  {
    na = v25;
    v97 = v63;
    memcpy((void *)(*a2 + v62), (const void *)(*(_QWORD *)(v60 + 136) + v61), v63);
    v25 = na;
    v63 = v97;
    v62 = a2[2];
  }
  a2[2] = v63 + v62;
  *(_QWORD *)(v20 + *(_QWORD *)(a1 + 8) + 432) += v63;
  if ( v25 == v24 )
  {
    v65 = v20 + *(_QWORD *)(a1 + 8);
    v64 = *(_QWORD *)(v65 + 432);
    if ( v64 == v4 )
    {
      v93 = v25;
      sub_942BC0(*(pthread_mutex_t **)(a1 + 16), *(void **)(v65 + 136), *(_QWORD *)(v65 + 144));
      v84 = v20 + *(_QWORD *)(a1 + 8);
      *(_QWORD *)(v84 + 136) = 0;
      *(_QWORD *)(v84 + 144) = 0;
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + v20 + 8) = 0;
      v85 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(a1 + 3040) += v93;
      *(_QWORD *)(a1 + 3048) += v4;
      ++*(_DWORD *)(a1 + 3012);
      v64 = *(_QWORD *)(v85 + v20 + 432);
    }
    if ( v4 > v64 )
      goto LABEL_94;
    goto LABEL_24;
  }
  v64 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + v20 + 432);
  if ( v64 < v4 )
  {
LABEL_94:
    v4 -= v64;
    goto LABEL_30;
  }
LABEL_23:
  if ( v25 >= v24 )
  {
LABEL_24:
    if ( *(_DWORD *)(a1 + 3012) >= *(_DWORD *)(a1 + 3016) && !*(_DWORD *)(a1 + 272) )
    {
      v4 = *(_QWORD *)(a1 + 312);
      if ( !v4 )
      {
        v26 = *(_DWORD *)(a1 + 3020);
        *(_DWORD *)(a1 + 3024) = v26;
        if ( v5 == 2 )
          v4 = v26 == 0;
        goto LABEL_30;
      }
    }
  }
  v4 = 1;
LABEL_30:
  if ( v7[2] < v7[1] && !v4 )
    return 1;
  return v4;
}

