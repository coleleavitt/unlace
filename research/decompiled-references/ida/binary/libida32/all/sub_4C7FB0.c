unsigned __int64 __fastcall sub_4C7FB0(__int64 a1)
{
  pthread_rwlock_t *v2; // rdi
  void *v3; // rdi
  __int64 v4; // rsi
  _QWORD *v5; // rbp
  void *v6; // rdi
  void *v7; // rdi
  __int64 v8; // rsi
  void *v9; // rdi
  __int64 v10; // rsi
  __m128i si128; // xmm0
  void *v12; // rax
  void *v13; // rdi
  __int64 v14; // rsi
  __m128i v15; // xmm0
  void *v16; // rax
  void *v17; // rdi
  __int64 v18; // rsi
  __m128i v19; // xmm0
  __int64 v20; // rax
  void *v21; // rdi
  __int64 v22; // rsi
  __m128i v23; // xmm0
  void *v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rax
  __m128i v27; // xmm0
  void *v28; // rax
  void *v29; // rdi
  __int64 v30; // rsi
  __m128i v31; // xmm0
  void *v32; // rax
  void *v33; // rdi
  __int64 v34; // rsi
  __m128i v35; // xmm0
  __int64 v36; // rax
  void *v37; // rdi
  __int64 v38; // rsi
  __m128i v39; // xmm0
  void *v40; // rdi
  __int64 v41; // rsi
  __int64 v42; // rax
  __int64 v44; // [rsp+8h] [rbp-B0h] BYREF
  pthread_rwlock_t *rwlock; // [rsp+10h] [rbp-A8h]
  char v46; // [rsp+18h] [rbp-A0h]
  void *v47[2]; // [rsp+20h] [rbp-98h] BYREF
  void *v48[4]; // [rsp+30h] [rbp-88h] BYREF
  void *v49[2]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v50; // [rsp+60h] [rbp-58h]
  __int64 v51; // [rsp+68h] [rbp-50h]
  void *v52[2]; // [rsp+70h] [rbp-48h] BYREF
  __int64 v53; // [rsp+80h] [rbp-38h]
  unsigned __int64 v54; // [rsp+88h] [rbp-30h]

  v54 = __readfsqword(0x28u);
  v2 = *(pthread_rwlock_t **)a1;
  v46 = 0;
  rwlock = v2;
  if ( !v2 )
    std::__throw_system_error(1);
  if ( &_pthread_key_create && pthread_rwlock_wrlock(v2) == 35 )
    std::__throw_system_error(35);
  v3 = *(void **)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 32);
  v46 = 1;
  *(_QWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 16) = 0;
  if ( v3 )
    operator delete(v3, v4 - (_QWORD)v3);
  v5 = *(_QWORD **)(a1 + 64);
  *(_DWORD *)(a1 + 40) = 0;
  while ( v5 )
  {
    v6 = v5;
    v5 = (_QWORD *)*v5;
    operator delete(v6, 0x10u);
  }
  memset(*(void **)(a1 + 48), 0, 8LL * *(_QWORD *)(a1 + 56));
  v7 = *(void **)(a1 + 104);
  v8 = *(_QWORD *)(a1 + 120);
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  *(_OWORD *)(a1 + 104) = 0;
  if ( v7 )
    operator delete(v7, v8 - (_QWORD)v7);
  v9 = *(void **)(a1 + 128);
  v10 = *(_QWORD *)(a1 + 144);
  *(_QWORD *)(a1 + 144) = 0;
  *(_OWORD *)(a1 + 128) = 0;
  if ( v9 )
    operator delete(v9, v10 - (_QWORD)v9);
  v50 = 0;
  v51 = 0;
  v53 = 0;
  v44 = 0;
  *(_OWORD *)v47 = 0;
  memset(v48, 0, sizeof(v48));
  *(_OWORD *)v49 = 0;
  *(_OWORD *)v52 = 0;
  sub_421320((__int64)v49, &v44);
  si128 = _mm_load_si128((const __m128i *)v47);
  v12 = v48[0];
  v48[0] = nullptr;
  v13 = *(void **)(a1 + 152);
  v14 = *(_QWORD *)(a1 + 168);
  *(__m128i *)(a1 + 152) = si128;
  *(_QWORD *)(a1 + 168) = v12;
  *(_OWORD *)v47 = 0;
  if ( v13 )
    operator delete(v13, v14 - (_QWORD)v13);
  v15 = _mm_loadu_si128((const __m128i *)&v48[1]);
  v16 = v48[3];
  v48[3] = nullptr;
  v17 = *(void **)(a1 + 176);
  v18 = *(_QWORD *)(a1 + 192);
  *(__m128i *)(a1 + 176) = v15;
  *(_QWORD *)(a1 + 192) = v16;
  *(_OWORD *)&v48[1] = 0;
  if ( v17 )
    operator delete(v17, v18 - (_QWORD)v17);
  v19 = _mm_load_si128((const __m128i *)v49);
  v20 = v50;
  v50 = 0;
  v21 = *(void **)(a1 + 200);
  v22 = *(_QWORD *)(a1 + 216);
  *(__m128i *)(a1 + 200) = v19;
  *(_QWORD *)(a1 + 216) = v20;
  *(_OWORD *)v49 = 0;
  if ( v21 )
    operator delete(v21, v22 - (_QWORD)v21);
  v23 = _mm_load_si128((const __m128i *)v52);
  v24 = *(void **)(a1 + 232);
  v25 = *(_QWORD *)(a1 + 248);
  *(_QWORD *)(a1 + 224) = v51;
  v26 = v53;
  *(__m128i *)(a1 + 232) = v23;
  *(_QWORD *)(a1 + 248) = v26;
  v53 = 0;
  *(_OWORD *)v52 = 0;
  if ( v24 )
  {
    operator delete(v24, v25 - (_QWORD)v24);
    if ( v52[0] )
      operator delete(v52[0], v53 - (unsigned __int64)v52[0]);
  }
  if ( v49[0] )
    operator delete(v49[0], v50 - (unsigned __int64)v49[0]);
  if ( v48[1] )
    operator delete(v48[1], (char *)v48[3] - (char *)v48[1]);
  if ( v47[0] )
    operator delete(v47[0], (char *)v48[0] - (char *)v47[0]);
  v50 = 0;
  v51 = 0;
  v53 = 0;
  v44 = 0;
  *(_OWORD *)v47 = 0;
  memset(v48, 0, sizeof(v48));
  *(_OWORD *)v49 = 0;
  *(_OWORD *)v52 = 0;
  sub_421320((__int64)v49, &v44);
  v27 = _mm_load_si128((const __m128i *)v47);
  v28 = v48[0];
  v48[0] = nullptr;
  v29 = *(void **)(a1 + 256);
  v30 = *(_QWORD *)(a1 + 272);
  *(__m128i *)(a1 + 256) = v27;
  *(_QWORD *)(a1 + 272) = v28;
  *(_OWORD *)v47 = 0;
  if ( v29 )
    operator delete(v29, v30 - (_QWORD)v29);
  v31 = _mm_loadu_si128((const __m128i *)&v48[1]);
  v32 = v48[3];
  v48[3] = nullptr;
  v33 = *(void **)(a1 + 280);
  v34 = *(_QWORD *)(a1 + 296);
  *(__m128i *)(a1 + 280) = v31;
  *(_QWORD *)(a1 + 296) = v32;
  *(_OWORD *)&v48[1] = 0;
  if ( v33 )
    operator delete(v33, v34 - (_QWORD)v33);
  v35 = _mm_load_si128((const __m128i *)v49);
  v36 = v50;
  v50 = 0;
  v37 = *(void **)(a1 + 304);
  v38 = *(_QWORD *)(a1 + 320);
  *(__m128i *)(a1 + 304) = v35;
  *(_QWORD *)(a1 + 320) = v36;
  *(_OWORD *)v49 = 0;
  if ( v37 )
    operator delete(v37, v38 - (_QWORD)v37);
  v39 = _mm_load_si128((const __m128i *)v52);
  v40 = *(void **)(a1 + 336);
  v41 = *(_QWORD *)(a1 + 352);
  *(_QWORD *)(a1 + 328) = v51;
  v42 = v53;
  *(__m128i *)(a1 + 336) = v39;
  *(_QWORD *)(a1 + 352) = v42;
  v53 = 0;
  *(_OWORD *)v52 = 0;
  if ( v40 )
  {
    operator delete(v40, v41 - (_QWORD)v40);
    if ( v52[0] )
      operator delete(v52[0], v53 - (unsigned __int64)v52[0]);
  }
  if ( v49[0] )
    operator delete(v49[0], v50 - (unsigned __int64)v49[0]);
  if ( v48[1] )
    operator delete(v48[1], (char *)v48[3] - (char *)v48[1]);
  if ( v47[0] )
    operator delete(v47[0], (char *)v48[0] - (char *)v47[0]);
  if ( rwlock && &_pthread_key_create )
    pthread_rwlock_unlock(rwlock);
  return v54 - __readfsqword(0x28u);
}

