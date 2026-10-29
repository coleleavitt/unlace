__m128i *__fastcall sub_2102F60(__int64 a1)
{
  __m128i *v1; // rbx
  __m128i *v3; // rax
  __m128i si128; // xmm0
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 *v7; // r12
  __int64 v8; // rax
  __m128i v9; // xmm0
  __int64 v10; // r12
  __int64 v11; // rax
  void **v12; // rbx
  void **v13; // r15
  __int64 v14; // rcx
  __int64 v15; // rax
  void ***v16; // rbp
  void **v17; // rax
  __int64 v18; // r14
  void *v19; // rdi
  void **v20; // r13
  void **v21; // rdi
  void **v22; // rdi
  void *v23; // rdi
  void **v24; // rbx
  unsigned __int64 v25; // r13
  void *v26; // rdi
  __int64 v27; // r13
  __int64 v28; // rbx
  __int64 v29; // rsi
  __int64 v30; // rdi
  void *v31; // rdi
  __int64 v32; // rbx
  __int64 v33; // r13
  void *v34; // rdi
  void *v35; // rdi
  char *v36; // rdi
  int v37; // eax
  __int64 v38; // rbx
  __int64 v39; // r13
  _QWORD *v40; // rax
  void **v41; // rdi
  __m128i v42; // [rsp+8h] [rbp-70h] BYREF
  void **v43; // [rsp+18h] [rbp-60h]
  __int64 v44; // [rsp+20h] [rbp-58h]
  __int64 v45; // [rsp+28h] [rbp-50h]
  char v46; // [rsp+3Fh] [rbp-39h] BYREF
  char v47[56]; // [rsp+40h] [rbp-38h] BYREF

  v1 = *(__m128i **)(a1 + 184);
  if ( !v1 )
  {
    v44 = a1;
    v3 = (__m128i *)operator new(0x188u);
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D60);
    v1 = v3;
    v3->m128i_i64[0] = a1;
    v3 += 4;
    v3[-3] = si128;
    v3[-4].m128i_i64[1] = 0;
    v3[-2].m128i_i64[0] = 0;
    v1[2].m128i_i64[1] = (__int64)v3;
    v1[3] = 0;
    v46 = 0;
    sub_A1FE50(&v1[2].m128i_i64[1], &v46, v47);
    v1[13].m128i_i32[2] = 0;
    v1[4].m128i_i64[0] = (__int64)v1[5].m128i_i64;
    v1[4].m128i_i64[1] = 0x400000000LL;
    v1[14].m128i_i64[0] = 0;
    v1[14].m128i_i64[1] = (__int64)&v1[13].m128i_i64[1];
    v1[15].m128i_i64[0] = (__int64)&v1[13].m128i_i64[1];
    v1[15].m128i_i64[1] = 0;
    v1[16].m128i_i64[0] = 0;
    v1[16].m128i_i64[1] = 0;
    v1[17].m128i_i64[0] = 0;
    v1[17].m128i_i64[1] = 0;
    v1[18].m128i_i64[0] = 0;
    v1[18].m128i_i64[1] = 0;
    v1[19].m128i_i8[0] = 0;
    v1[19].m128i_i64[1] = 0;
    v1[20].m128i_i64[1] = 0;
    v1[21].m128i_i64[0] = 0;
    v1[21].m128i_i64[1] = 0;
    v1[22].m128i_i64[0] = 0;
    v1[22].m128i_i64[1] = 0;
    v1[23].m128i_i64[0] = 0;
    v1[23].m128i_i64[1] = 0;
    v1[24].m128i_i64[0] = 0;
    v1[20].m128i_i64[0] = 8;
    v5 = operator new(0x40u);
    v6 = v1[20].m128i_i64[0];
    v1[19].m128i_i64[1] = v5;
    v7 = (__int64 *)(v5 + 8 * ((unsigned __int64)(v6 - 1) >> 1));
    v8 = operator new(0x200u);
    v1[22].m128i_i64[0] = (__int64)v7;
    v42.m128i_i64[0] = v8;
    v9 = _mm_loadl_epi64(&v42);
    *v7 = v8;
    v1[24].m128i_i64[0] = (__int64)v7;
    v10 = *(_QWORD *)(a1 + 184);
    v1[21].m128i_i64[1] = v8 + 512;
    v1[23].m128i_i64[0] = v8;
    v1[23].m128i_i64[1] = v8 + 512;
    *(__m128i *)((char *)v1 + 328) = _mm_unpacklo_epi64(v9, v9);
    v1[22].m128i_i64[1] = v8;
    *(_QWORD *)(a1 + 184) = v1;
    if ( v10 )
    {
      v11 = *(_QWORD *)(v10 + 360);
      v12 = *(void ***)(v10 + 368);
      v13 = *(void ***)(v10 + 328);
      v43 = *(void ***)(v10 + 344);
      v14 = *(_QWORD *)(v10 + 352);
      v42.m128i_i64[1] = v11;
      v15 = *(_QWORD *)(v10 + 384);
      v16 = (void ***)(v14 + 8);
      v45 = v14;
      v42.m128i_i64[0] = v15;
      if ( v15 > (unsigned __int64)(v14 + 8) )
      {
        do
        {
          v17 = *v16;
          v18 = (__int64)(*v16 + 64);
          do
          {
            while ( 1 )
            {
              v19 = *v17;
              v20 = v17 + 2;
              if ( *v17 == v17 + 2 )
                break;
              free(v19);
              v17 = v20;
              if ( v20 == (void **)v18 )
                goto LABEL_8;
            }
            v17 = (void **)*v17;
          }
          while ( v19 != (void *)v18 );
LABEL_8:
          ++v16;
        }
        while ( v42.m128i_i64[0] > (unsigned __int64)v16 );
      }
      if ( v42.m128i_i64[0] == v45 )
      {
        while ( (void **)v42.m128i_i64[1] != v13 )
        {
          while ( 1 )
          {
            v41 = (void **)*v13;
            v13 += 2;
            if ( v41 == v13 )
              break;
            free(v41);
            if ( (void **)v42.m128i_i64[1] == v13 )
              goto LABEL_16;
          }
          v13 = v41;
        }
      }
      else
      {
        if ( v13 != v43 )
        {
          do
          {
            while ( 1 )
            {
              v21 = (void **)*v13;
              v13 += 2;
              if ( v21 == v13 )
                break;
              free(v21);
              if ( v43 == v13 )
                goto LABEL_13;
            }
            v13 = v21;
          }
          while ( v43 != v21 );
        }
LABEL_13:
        if ( (void **)v42.m128i_i64[1] != v12 )
        {
          do
          {
            while ( 1 )
            {
              v22 = (void **)*v12;
              v12 += 2;
              if ( v22 == v12 )
                break;
              free(v22);
              if ( (void **)v42.m128i_i64[1] == v12 )
                goto LABEL_16;
            }
            v12 = v22;
          }
          while ( (void **)v42.m128i_i64[1] != v22 );
        }
      }
LABEL_16:
      v23 = *(void **)(v10 + 312);
      if ( v23 )
      {
        v24 = *(void ***)(v10 + 352);
        v25 = *(_QWORD *)(v10 + 384) + 8LL;
        if ( v25 > (unsigned __int64)v24 )
        {
          do
          {
            v26 = *v24++;
            operator delete(v26);
          }
          while ( v25 > (unsigned __int64)v24 );
          v23 = *(void **)(v10 + 312);
        }
        operator delete(v23);
      }
      v27 = *(_QWORD *)(v10 + 288);
      v28 = *(_QWORD *)(v10 + 280);
      if ( v27 != v28 )
      {
        do
        {
          v29 = *(unsigned int *)(v28 + 40);
          v30 = *(_QWORD *)(v28 + 24);
          v28 += 48;
          operator delete(v30, 16 * v29, 4);
        }
        while ( v27 != v28 );
        v28 = *(_QWORD *)(v10 + 280);
      }
      if ( v28 )
        operator delete((void *)v28);
      v31 = *(void **)(v10 + 256);
      if ( v31 )
        operator delete(v31);
      v32 = *(_QWORD *)(v10 + 224);
      if ( v32 )
      {
        do
        {
          sub_2102F20(v10 + 208, *(_QWORD **)(v32 + 24));
          v33 = *(_QWORD *)(v32 + 16);
          operator delete((void *)v32);
          v32 = v33;
        }
        while ( v33 );
      }
      v34 = *(void **)(v10 + 64);
      if ( v34 != (void *)(v10 + 80) )
        free(v34);
      v35 = *(void **)(v10 + 40);
      if ( (void *)(v10 + 64) != v35 )
        free(v35);
      v36 = *(char **)(v10 + 8);
      if ( *(_DWORD *)(v10 + 20) )
      {
        v37 = *(_DWORD *)(v10 + 16);
        if ( v37 )
        {
          v38 = 0;
          v39 = 8LL * (unsigned int)(v37 - 1) + 8;
          do
          {
            v40 = *(_QWORD **)&v36[v38];
            if ( v40 != (_QWORD *)-8LL && v40 )
            {
              operator delete(*(_QWORD *)&v36[v38], *v40 + 17LL, 8);
              v36 = *(char **)(v10 + 8);
            }
            v38 += 8;
          }
          while ( v39 != v38 );
        }
      }
      free(v36);
      operator delete((void *)v10, 0x188u);
      return *(__m128i **)(v44 + 184);
    }
  }
  return v1;
}
