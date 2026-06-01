unsigned __int64 __fastcall sub_1059E0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  pthread_mutex_t *v10; // rdi
  unsigned __int64 align; // r12
  unsigned __int64 v12; // rbx
  __int64 v13; // r9
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rbp
  __int64 v16; // r14
  unsigned int v17; // ebp
  char *v18; // rax
  unsigned __int64 v19; // rax
  unsigned int i; // eax
  __m128i *v21; // rbp
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rax
  bool v24; // zf
  __int64 v25; // r12
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // r14
  __int64 v28; // rbp
  unsigned int v29; // r12d
  pthread_mutex_t *v30; // rbp
  __int64 count; // rax
  struct __pthread_internal_list *next; // rdx
  __int64 v33; // rax
  int v35; // eax
  unsigned __int64 v36; // rbp
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // rdx
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rax
  char *v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rcx
  char *v45; // rdx
  unsigned int v46; // esi
  __m128i v47; // xmm5
  __m128i v48; // xmm6
  int v49; // eax
  unsigned __int64 v50; // r8
  unsigned __int64 v51; // rdx
  void *v52; // rax
  unsigned __int64 v53; // rdx
  _QWORD *v54; // [rsp+8h] [rbp-180h]
  pthread_cond_t *cond; // [rsp+10h] [rbp-178h]
  unsigned __int64 v56; // [rsp+18h] [rbp-170h]
  unsigned __int64 v57; // [rsp+18h] [rbp-170h]
  unsigned __int64 v58; // [rsp+18h] [rbp-170h]
  unsigned __int64 v59; // [rsp+20h] [rbp-168h]
  __m128i *v60; // [rsp+20h] [rbp-168h]
  void *ptr; // [rsp+28h] [rbp-160h]
  __int64 v62; // [rsp+30h] [rbp-158h]
  char *v63; // [rsp+38h] [rbp-150h]
  __int64 v64[3]; // [rsp+40h] [rbp-148h] BYREF
  __int64 v65; // [rsp+58h] [rbp-130h]
  unsigned __int64 v66; // [rsp+60h] [rbp-128h]
  _OWORD v67[2]; // [rsp+70h] [rbp-118h] BYREF
  __m128i v68; // [rsp+90h] [rbp-F8h]
  __m128i v69; // [rsp+A0h] [rbp-E8h]
  __m128i v70; // [rsp+B0h] [rbp-D8h]
  __m128i v71; // [rsp+C0h] [rbp-C8h]
  __m128i v72; // [rsp+D0h] [rbp-B8h]
  __m128i v73; // [rsp+E0h] [rbp-A8h]
  __m128i v74; // [rsp+F0h] [rbp-98h]
  __m128i v75; // [rsp+100h] [rbp-88h]
  __m128i v76; // [rsp+110h] [rbp-78h]
  __m128i v77; // [rsp+120h] [rbp-68h]
  __m128i v78; // [rsp+130h] [rbp-58h]
  __int64 v79; // [rsp+140h] [rbp-48h]
  unsigned __int64 v80; // [rsp+148h] [rbp-40h]

  v80 = __readfsqword(0x28u);
  v67[0] = _mm_loadu_si128((const __m128i *)(a1 + 200));
  v67[1] = _mm_loadu_si128((const __m128i *)(a1 + 216));
  v68 = _mm_loadu_si128((const __m128i *)(a1 + 232));
  v69 = _mm_loadu_si128((const __m128i *)(a1 + 248));
  v70 = _mm_loadu_si128((const __m128i *)(a1 + 264));
  v71 = _mm_loadu_si128((const __m128i *)(a1 + 280));
  v72 = _mm_loadu_si128((const __m128i *)(a1 + 296));
  v73 = _mm_loadu_si128((const __m128i *)(a1 + 312));
  v74 = _mm_loadu_si128((const __m128i *)(a1 + 328));
  v75 = _mm_loadu_si128((const __m128i *)(a1 + 344));
  v76 = _mm_loadu_si128((const __m128i *)(a1 + 360));
  v77 = _mm_loadu_si128((const __m128i *)(a1 + 376));
  v4 = *(_QWORD *)(a1 + 408);
  v3 = *(_QWORD *)(a1 + 104);
  v78 = _mm_loadu_si128((const __m128i *)(a1 + 392));
  v79 = v4;
  pthread_mutex_lock((pthread_mutex_t *)v3);
  v5 = *(_DWORD *)(v3 + 44);
  if ( v5 )
  {
    v39 = v5 - 1;
    v40 = *(_QWORD *)(v3 + 72);
    *(_DWORD *)(v3 + 44) = v39;
    v54 = *(_QWORD **)(v40 + 8LL * v39);
    pthread_mutex_unlock((pthread_mutex_t *)v3);
  }
  else
  {
    pthread_mutex_unlock((pthread_mutex_t *)v3);
    v54 = sub_AF260(v3, a2, v6, v7, v8, v9, *(_OWORD *)(v3 + 48), *(_QWORD *)(v3 + 64));
  }
  v10 = *(pthread_mutex_t **)(a1 + 120);
  align = v10[1].__align;
  if ( align )
  {
    ptr = sub_1052B0(v10);
    align = v38 / 0xC;
    v62 = 12 * (v38 / 0xC);
  }
  else
  {
    v62 = 0;
    ptr = nullptr;
  }
  v12 = *(_QWORD *)(a1 + 136);
  cond = (pthread_cond_t *)(a1 + 56);
  if ( !v54 )
    goto LABEL_58;
  if ( v12 )
  {
    v56 = *(_QWORD *)(a1 + 144);
  }
  else
  {
    v52 = sub_1052B0(*(pthread_mutex_t **)(a1 + 112));
    v12 = (unsigned __int64)v52;
    v56 = v53;
    if ( !v52 )
    {
      pthread_mutex_lock((pthread_mutex_t *)(a1 + 16));
      *(_QWORD *)(a1 + 8) = -64;
      pthread_mutex_unlock((pthread_mutex_t *)(a1 + 16));
      goto LABEL_26;
    }
    *(_QWORD *)(a1 + 136) = v52;
    *(_QWORD *)(a1 + 144) = v53;
  }
  if ( v72.m128i_i32[0] == 1 && !ptr )
  {
LABEL_58:
    v12 = 0;
    pthread_mutex_lock((pthread_mutex_t *)(a1 + 16));
    *(_QWORD *)(a1 + 8) = -64;
    pthread_mutex_unlock((pthread_mutex_t *)(a1 + 16));
    goto LABEL_26;
  }
  if ( *(_DWORD *)(a1 + 184) )
    v68.m128i_i32[1] = 0;
  v13 = *(_QWORD *)(a1 + 416);
  v72.m128i_i32[0] = 2;
  v70.m128i_i32[3] = 0;
  if ( v13 )
  {
    v14 = sub_AF760((__int64)v54, nullptr, 0, 0, 0, v13, (__int64)v67, *(_QWORD *)(a1 + 424));
  }
  else
  {
    v35 = *(_DWORD *)(a1 + 188);
    if ( v35 )
      v36 = *(_QWORD *)(a1 + 424);
    else
      v36 = *(_QWORD *)(a1 + 176);
    v37 = sub_AF7F0((__int64)v67, 0x3E8u, v35 == 0);
    if ( v37 > 0xFFFFFFFFFFFFFF88LL
      || !*(_DWORD *)(a1 + 188) && (v37 = sub_AF7F0((__int64)v67, 0x3F4u, 0), v37 > 0xFFFFFFFFFFFFFF88LL) )
    {
      v58 = v37;
      v12 = 0;
      pthread_mutex_lock((pthread_mutex_t *)(a1 + 16));
      *(_QWORD *)(a1 + 8) = v58;
      pthread_mutex_unlock((pthread_mutex_t *)(a1 + 16));
      goto LABEL_26;
    }
    v14 = sub_AF760((__int64)v54, *(_DWORD **)(a1 + 152), *(_QWORD *)(a1 + 160), 1, 0, 0, (__int64)v67, v36);
  }
  v15 = v14;
  if ( v14 > 0xFFFFFFFFFFFFFF88LL )
    goto LABEL_42;
  v16 = *(_QWORD *)(a1 + 128);
  v66 = align;
  v64[1] = 0;
  v17 = *(_DWORD *)(a1 + 184);
  v64[0] = (__int64)ptr;
  v18 = *(char **)(a1 + 168);
  v64[2] = 0;
  v63 = v18;
  v19 = *(_QWORD *)(a1 + 176);
  v65 = 0;
  v59 = v19;
  pthread_mutex_lock((pthread_mutex_t *)v16);
  for ( i = *(_DWORD *)(v16 + 2504); v17 > i; i = *(_DWORD *)(v16 + 2504) )
    pthread_cond_wait((pthread_cond_t *)(v16 + 40), (pthread_mutex_t *)v16);
  if ( v17 == i )
  {
    if ( *(_DWORD *)(v16 + 184) == 1 )
    {
      if ( v59 )
      {
        v42 = *(char **)(v16 + 304);
        v43 = *(unsigned int *)(v16 + 328);
        if ( v63 == v42 )
        {
          v46 = *(_DWORD *)(v16 + 328);
          v44 = *(_QWORD *)(v16 + 320);
          v43 = *(unsigned int *)(v16 + 332);
        }
        else
        {
          v44 = *(_QWORD *)(v16 + 312);
          *(_DWORD *)(v16 + 332) = v43;
          v45 = &v42[-v44];
          *(_QWORD *)(v16 + 320) = v44;
          v46 = (unsigned int)v45;
          *(_DWORD *)(v16 + 328) = (_DWORD)v45;
          *(_QWORD *)(v16 + 312) = v63 - v45;
          if ( (unsigned int)((_DWORD)v45 - v43) <= 7 )
          {
            *(_DWORD *)(v16 + 332) = (_DWORD)v45;
            v43 = (unsigned int)v45;
          }
        }
        *(_QWORD *)(v16 + 304) = &v63[v59];
        if ( (unsigned __int64)&v63[v59] > v44 + v43 && (unsigned __int64)v63 < v44 + (unsigned __int64)v46 )
        {
          if ( (__int64)&v63[v59 - v44] <= v46 )
            v46 = (_DWORD)v63 + v59 - v44;
          *(_DWORD *)(v16 + 332) = v46;
        }
      }
      sub_F6D80(v16 + 304, v64, (_DWORD *)(v16 + 184), v63, v59);
      pthread_mutex_lock((pthread_mutex_t *)(v16 + 2512));
      v47 = _mm_loadu_si128((const __m128i *)(v16 + 304));
      v48 = _mm_loadu_si128((const __m128i *)(v16 + 320));
      *(_QWORD *)(v16 + 2632) = *(_QWORD *)(v16 + 336);
      *(__m128i *)(v16 + 2600) = v47;
      *(__m128i *)(v16 + 2616) = v48;
      pthread_cond_signal((pthread_cond_t *)(v16 + 2552));
      pthread_mutex_unlock((pthread_mutex_t *)(v16 + 2512));
    }
    if ( *(_DWORD *)(v16 + 124) && v59 )
      sub_117D30(v16 + 2416, v63, v59);
  }
  ++*(_DWORD *)(v16 + 2504);
  pthread_cond_broadcast((pthread_cond_t *)(v16 + 40));
  pthread_mutex_unlock((pthread_mutex_t *)v16);
  if ( v65 )
    sub_ADCE0(v54, v64[0], v65);
  v21 = *(__m128i **)(a1 + 168);
  if ( *(_DWORD *)(a1 + 188) )
    goto LABEL_21;
  v15 = sub_ADD10((__int64)v54, (_DWORD *)v12, v56, *(__m128i **)(a1 + 168), 0);
  if ( v15 > 0xFFFFFFFFFFFFFF88LL )
  {
LABEL_42:
    v12 = 0;
    pthread_mutex_lock((pthread_mutex_t *)(a1 + 16));
    *(_QWORD *)(a1 + 8) = v15;
    pthread_mutex_unlock((pthread_mutex_t *)(a1 + 16));
    goto LABEL_26;
  }
  sub_A9D80((__int64)v54);
  v21 = *(__m128i **)(a1 + 168);
LABEL_21:
  v22 = *(_QWORD *)(a1 + 176);
  v23 = (v22 + 0x7FFFF) >> 19;
  v57 = v12 + v56;
  v24 = (_DWORD)v23 == 1;
  if ( (int)v23 <= 1 )
  {
    v49 = *(_DWORD *)(a1 + 192);
    if ( !(v49 | v24) )
    {
      v12 = 0;
LABEL_68:
      sub_AEC20((__int64)v54);
      goto LABEL_26;
    }
    v60 = v21;
  }
  else
  {
    v25 = 0x80000;
    v60 = &v21[0x8000 * (unsigned int)(v23 - 2) + 0x8000];
    do
    {
      v26 = sub_ADD10((__int64)v54, (_DWORD *)v12, v57 - v12, v21, 0x80000u);
      v27 = v26;
      if ( v26 > 0xFFFFFFFFFFFFFF88LL )
      {
        v12 = 0;
        pthread_mutex_lock((pthread_mutex_t *)(a1 + 16));
        *(_QWORD *)(a1 + 8) = v27;
        pthread_mutex_unlock((pthread_mutex_t *)(a1 + 16));
        goto LABEL_26;
      }
      v12 += v26;
      v21 += 0x8000;
      pthread_mutex_lock((pthread_mutex_t *)(a1 + 16));
      *(_QWORD *)(a1 + 8) += v27;
      *(_QWORD *)a1 = v25;
      v25 += 0x80000;
      pthread_cond_signal(cond);
      pthread_mutex_unlock((pthread_mutex_t *)(a1 + 16));
    }
    while ( v21 != v60 );
    v49 = *(_DWORD *)(a1 + 192);
    v22 = *(_QWORD *)(a1 + 176);
  }
  v50 = v22 & 0x7FFFF;
  if ( (v22 & 0x7FFFF) == 0 && v22 > 0x7FFFF )
    v50 = 0x80000;
  v51 = v57 - v12;
  if ( v49 )
    v12 = sub_AED20((__int64)v54, (_DWORD *)v12, v51, v60, v50);
  else
    v12 = sub_ADD10((__int64)v54, (_DWORD *)v12, v51, v60, v50);
  if ( v12 <= 0xFFFFFFFFFFFFFF88LL )
    goto LABEL_68;
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 16));
  *(_QWORD *)(a1 + 8) = v12;
  v12 = 0;
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 16));
LABEL_26:
  v28 = *(_QWORD *)(a1 + 128);
  v29 = *(_DWORD *)(a1 + 184);
  pthread_mutex_lock((pthread_mutex_t *)v28);
  if ( v29 >= *(_DWORD *)(v28 + 2504) )
  {
    *(_DWORD *)(v28 + 2504) = v29 + 1;
    pthread_cond_broadcast((pthread_cond_t *)(v28 + 40));
    pthread_mutex_lock((pthread_mutex_t *)(v28 + 2512));
    v41 = *(_QWORD *)(v28 + 2600) - *(_QWORD *)(v28 + 2608);
    *(_DWORD *)(v28 + 2628) = v41;
    *(_DWORD *)(v28 + 2624) = v41;
    pthread_cond_signal((pthread_cond_t *)(v28 + 2552));
    pthread_mutex_unlock((pthread_mutex_t *)(v28 + 2512));
  }
  pthread_mutex_unlock((pthread_mutex_t *)v28);
  sub_104FA0(*(pthread_mutex_t **)(a1 + 120), ptr, v62);
  if ( v54 )
  {
    v30 = *(pthread_mutex_t **)(a1 + 104);
    pthread_mutex_lock(v30);
    count = (int)v30[1].__count;
    if ( (int)count >= v30[1].__lock )
    {
      sub_AF0B0(v54);
    }
    else
    {
      next = v30[1].__list.__next;
      v30[1].__count = count + 1;
      *((_QWORD *)&next->__prev + count) = v54;
    }
    pthread_mutex_unlock(v30);
  }
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 16));
  v33 = *(_QWORD *)(a1 + 176);
  *(_QWORD *)(a1 + 8) += v12;
  *(_QWORD *)a1 = v33;
  pthread_cond_signal(cond);
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 16));
  return __readfsqword(0x28u) ^ v80;
}

