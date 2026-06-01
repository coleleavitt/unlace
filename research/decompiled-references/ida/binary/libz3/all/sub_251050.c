void __fastcall sub_251050(__int64 a1)
{
  char **exception; // rbx
  pthread_mutex_t *v2; // r13
  int v4; // eax
  _QWORD *v5; // rbx
  unsigned __int64 v6; // rax
  __m128i v7; // xmm0
  _QWORD *i; // r12
  __int64 v9; // rsi
  __int64 v10; // rdi
  bool v11; // zf
  unsigned int **v12; // r13
  unsigned int **v13; // rbx
  unsigned int *v14; // r12
  _QWORD *v15; // rdx
  unsigned int v16; // r15d
  __int64 v17; // rax
  unsigned int *v18; // rax
  _DWORD *v19; // r8
  __int64 v20; // rax
  _DWORD *v21; // rsi
  int v22; // edx
  __int64 v23; // rcx
  __int64 v24; // rdx
  _DWORD *v25; // rdi
  _DWORD *v26; // rax
  __int64 v27; // rax
  __m128i v28; // xmm0
  unsigned int v29; // r14d
  size_t v30; // rsi
  unsigned int *v31; // rax
  __int64 v32; // rax
  _QWORD *v33; // rax
  int v34; // eax
  unsigned int v35; // eax
  unsigned int v36; // r14d
  __m128i *v37; // rax
  __m128i *v38; // r15
  __m128i *v39; // rax
  __int64 v40; // rax
  const __m128i *v41; // r14
  unsigned int v42; // r9d
  __int64 v43; // r8
  __m128i *v44; // r10
  __int64 v45; // rax
  __m128i *v46; // rdx
  __m128i *v47; // rax
  __int64 v48[11]; // [rsp+2Ch] [rbp-58h] BYREF

  if ( !*(_BYTE *)(a1 + 225) )
    return;
  v2 = (pthread_mutex_t *)(a1 + 256);
  if ( &_pthread_key_create )
  {
    v4 = pthread_mutex_lock((pthread_mutex_t *)(a1 + 256));
    if ( v4 )
      std::__throw_system_error(v4);
  }
  v5 = *(_QWORD **)(a1 + 1352);
  v6 = *(_QWORD *)(a1 + 1368);
  if ( v5 && *((_DWORD *)v5 - 1) )
  {
    v7 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)(a1 + 1376)), (__m128i)v6);
    *(__m128i *)(a1 + 1352) = _mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)(a1 + 1360)),
                                (__m128i)(unsigned __int64)v5);
    *(__m128i *)(a1 + 1368) = v7;
    if ( !&_pthread_key_create )
      goto LABEL_9;
    goto LABEL_7;
  }
  if ( !v6 || !*(_DWORD *)(v6 - 4) )
  {
    if ( &_pthread_key_create )
      pthread_mutex_unlock(v2);
    return;
  }
  v28 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)(a1 + 1376)), (__m128i)v6);
  *(__m128i *)(a1 + 1352) = _mm_unpacklo_epi64(
                              _mm_loadl_epi64((const __m128i *)(a1 + 1360)),
                              (__m128i)(unsigned __int64)v5);
  *(__m128i *)(a1 + 1368) = v28;
  if ( &_pthread_key_create )
  {
LABEL_7:
    pthread_mutex_unlock(v2);
    v5 = *(_QWORD **)(a1 + 1360);
  }
  if ( v5 )
  {
LABEL_9:
    for ( i = &v5[*((unsigned int *)v5 - 1)]; i != v5; ++v5 )
    {
      while ( 1 )
      {
        v9 = *v5;
        if ( *v5 )
        {
          v10 = *(_QWORD *)(a1 + 232);
          v11 = (*(_DWORD *)(v9 + 8))-- == 1;
          if ( v11 )
            break;
        }
        if ( i == ++v5 )
          goto LABEL_15;
      }
      sub_15D7BC0(v10, v9);
    }
  }
LABEL_15:
  v12 = *(unsigned int ***)(a1 + 1376);
  if ( !v12 )
    goto LABEL_34;
  v13 = &v12[*((unsigned int *)v12 - 1)];
  if ( v12 == v13 )
    goto LABEL_33;
  do
  {
    v14 = *v12;
    v15 = *(_QWORD **)(a1 + 1432);
    v16 = (*v12)[3];
    if ( v15 )
    {
      v17 = *((unsigned int *)v15 - 1);
      if ( (_DWORD)v17 == *((_DWORD *)v15 - 2) )
      {
        v29 = (unsigned int)(3 * v17 + 1) >> 1;
        v30 = 4 * v29 + 8;
        if ( 4 * (int)v17 + 8 >= (unsigned int)v30 || (unsigned int)v17 >= v29 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v48, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v48);
          sub_233E40((__int64)v48);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v31 = (unsigned int *)sub_186B300(v15 - 1, v30);
        v15 = v31 + 2;
        *v31 = v29;
        v32 = v31[1];
        *(_QWORD *)(a1 + 1432) = v15;
        v18 = (unsigned int *)v15 + v32;
      }
      else
      {
        v18 = (unsigned int *)v15 + v17;
      }
    }
    else
    {
      v33 = (_QWORD *)sub_186B270(0x10u);
      v15 = v33 + 1;
      *v33 = 2;
      *(_QWORD *)(a1 + 1432) = v33 + 1;
      v18 = (unsigned int *)(v33 + 1);
    }
    *v18 = v16;
    v19 = *(_DWORD **)(a1 + 1408);
    ++*((_DWORD *)v15 - 1);
    v20 = *(unsigned int *)(a1 + 1416);
    v21 = (_DWORD *)v14[3];
    v22 = v20 - 1;
    v20 *= 24;
    v23 = (__int64)v19 + v20;
    v24 = 24LL * ((unsigned int)v21 & v22);
    v25 = (_DWORD *)((char *)v19 + v24);
    if ( v24 == v20 )
    {
LABEL_43:
      if ( v19 != v25 )
      {
        v26 = v19;
        while ( 1 )
        {
          v24 = (unsigned int)v26[1];
          if ( (_DWORD)v24 == 2 )
          {
            if ( (_DWORD)v21 == *v26 && (_DWORD)v21 == v26[2] )
              goto LABEL_27;
          }
          else if ( !(_DWORD)v24 )
          {
            goto LABEL_31;
          }
          v26 += 6;
          if ( v25 == v26 )
            goto LABEL_31;
        }
      }
      goto LABEL_31;
    }
    v26 = (_DWORD *)((char *)v19 + v24);
    while ( 1 )
    {
      v24 = (unsigned int)v26[1];
      if ( (_DWORD)v24 != 2 )
      {
        if ( !(_DWORD)v24 )
          goto LABEL_31;
        goto LABEL_23;
      }
      if ( (_DWORD)v21 == *v26 && (_DWORD)v21 == v26[2] )
        break;
LABEL_23:
      v26 += 6;
      if ( (_DWORD *)v23 == v26 )
        goto LABEL_43;
    }
LABEL_27:
    v21 = v26 + 6;
    v11 = v23 == (_QWORD)(v26 + 6);
    v23 = *(unsigned int *)(a1 + 1420);
    if ( v11 )
      v21 = v19;
    v24 = (unsigned int)(v23 - 1);
    if ( !v21[1] )
    {
      v26[1] = 0;
      *(_DWORD *)(a1 + 1420) = v24;
      goto LABEL_31;
    }
    v26[1] = 1;
    v34 = *(_DWORD *)(a1 + 1424);
    v23 = 64;
    *(_DWORD *)(a1 + 1420) = v24;
    v35 = v34 + 1;
    if ( (unsigned int)v24 < 0x40 )
      v24 = 64;
    *(_DWORD *)(a1 + 1424) = v35;
    if ( (unsigned int)v24 < v35 && !(unsigned __int8)sub_186AF10(v25) )
    {
      v36 = *(_DWORD *)(a1 + 1416);
      v37 = (__m128i *)sub_186B270(24LL * v36);
      v38 = v37;
      if ( v36 )
      {
        if ( v36 == 1 )
          goto LABEL_65;
        v24 = (__int64)v37;
        v39 = &v37[3 * (v36 >> 1)];
        do
        {
          *(_QWORD *)v24 = 0;
          v24 += 48;
          *(_QWORD *)(v24 - 24) = 0;
        }
        while ( v39 != (__m128i *)v24 );
        if ( (v36 & 1) != 0 )
        {
          v37 = (__m128i *)((char *)v38 + 24 * (v36 & 0xFFFFFFFE));
LABEL_65:
          v37->m128i_i64[0] = 0;
        }
      }
      v40 = *(unsigned int *)(a1 + 1416);
      v41 = *(const __m128i **)(a1 + 1408);
      v42 = v40 - 1;
      v43 = 24 * v40;
      v23 = (__int64)&v41->m128i_i64[3 * v40];
      v44 = (__m128i *)((char *)v38 + 24 * v40);
      if ( v41 != (const __m128i *)v23 )
      {
        do
        {
          if ( v41->m128i_i32[1] == 2 )
          {
            v45 = 24LL * (v41->m128i_i32[0] & v42);
            v46 = (__m128i *)((char *)v38 + v45);
            if ( v43 == v45 )
            {
LABEL_79:
              if ( v38 == v46 )
              {
LABEL_84:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v47 = v38;
              while ( 1 )
              {
                v21 = (_DWORD *)v47->m128i_u32[1];
                if ( !(_DWORD)v21 )
                  break;
                v47 = (__m128i *)((char *)v47 + 24);
                if ( v46 == v47 )
                  goto LABEL_84;
              }
            }
            else
            {
              v47 = (__m128i *)((char *)v38 + v45);
              while ( v47->m128i_i32[1] )
              {
                v47 = (__m128i *)((char *)v47 + 24);
                if ( v44 == v47 )
                  goto LABEL_79;
              }
            }
            *v47 = _mm_loadu_si128(v41);
            v24 = v41[1].m128i_i64[0];
            v47[1].m128i_i64[0] = v24;
          }
          v41 = (const __m128i *)((char *)v41 + 24);
        }
        while ( (const __m128i *)v23 != v41 );
        v23 = *(_QWORD *)(a1 + 1408);
      }
      if ( v23 )
        sub_186B220((void *)v23);
      *(_QWORD *)(a1 + 1408) = v38;
      *(_DWORD *)(a1 + 1424) = 0;
    }
LABEL_31:
    ++v12;
    (**(void (__fastcall ***)(void *, _DWORD *, __int64, __int64))v14)(v14, v21, v24, v23);
    sub_186B220(v14);
  }
  while ( v13 != v12 );
  v13 = *(unsigned int ***)(a1 + 1376);
  if ( v13 )
LABEL_33:
    *((_DWORD *)v13 - 1) = 0;
LABEL_34:
  v27 = *(_QWORD *)(a1 + 1360);
  if ( v27 )
    *(_DWORD *)(v27 - 4) = 0;
}

