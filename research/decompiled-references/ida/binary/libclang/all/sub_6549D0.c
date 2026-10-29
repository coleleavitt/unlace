void __fastcall sub_6549D0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdx
  const char *v3; // rcx
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // r12
  __int64 v12; // rax
  __m128 v13; // xmm5
  __m128 v14; // xmm1
  unsigned __int64 v15; // rbp
  int v16; // esi
  bool v17; // al
  int v18; // eax
  _QWORD *v19; // rdi
  __int64 v20; // rax
  __m128i v21; // xmm2
  __int64 v22; // r14
  void **v23; // r13
  void **v24; // rbx
  void **v25; // rdi
  void **v26; // r13
  void **v27; // rbx
  void **v28; // rdi
  unsigned __int64 i; // rbx
  unsigned int *v30; // rcx
  __int64 v31; // rax
  char v32; // al
  __m128 v33; // [rsp+10h] [rbp-288h] BYREF
  const char *v34; // [rsp+20h] [rbp-278h]
  __int64 v35; // [rsp+28h] [rbp-270h]
  unsigned __int64 *v36; // [rsp+30h] [rbp-268h]
  _BYTE *v37; // [rsp+38h] [rbp-260h]
  __int64 *v38; // [rsp+40h] [rbp-258h]
  __int64 *v39; // [rsp+48h] [rbp-250h]
  const __m128i *v40; // [rsp+50h] [rbp-248h]
  __m128i *v41; // [rsp+58h] [rbp-240h]
  bool v42; // [rsp+6Fh] [rbp-229h] BYREF
  _BYTE v43[32]; // [rsp+70h] [rbp-228h] BYREF
  __m128i v44; // [rsp+90h] [rbp-208h] BYREF
  __int64 v45; // [rsp+A0h] [rbp-1F8h]
  void *v46; // [rsp+B0h] [rbp-1E8h] BYREF
  void **v47; // [rsp+B8h] [rbp-1E0h]
  __int64 v48; // [rsp+C0h] [rbp-1D8h]
  void *v49; // [rsp+D0h] [rbp-1C8h] BYREF
  void **v50; // [rsp+D8h] [rbp-1C0h]
  __int64 v51; // [rsp+E0h] [rbp-1B8h]
  void *v52[2]; // [rsp+F0h] [rbp-1A8h] BYREF
  __int64 v53; // [rsp+100h] [rbp-198h] BYREF
  __m128i v54[3]; // [rsp+110h] [rbp-188h] BYREF
  __int64 v55; // [rsp+140h] [rbp-158h]
  void *ptr[2]; // [rsp+150h] [rbp-148h] BYREF
  __int64 v57; // [rsp+160h] [rbp-138h] BYREF
  char v58; // [rsp+168h] [rbp-130h] BYREF
  void *v59; // [rsp+1C0h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+1C8h] [rbp-D0h]
  _BYTE v61[192]; // [rsp+1D8h] [rbp-C0h] BYREF

  v2 = 0;
  v3 = &byte_3B9466E;
  v6 = *(_QWORD *)(a2 + 40);
  if ( (v6 & 7) == 0 )
  {
    v7 = v6 & 0xFFFFFFFFFFFFFFF8LL;
    v2 = v7;
    if ( v7 )
    {
      v30 = *(unsigned int **)(v7 + 16);
      v2 = *v30;
      v3 = (const char *)(v30 + 4);
    }
  }
  v34 = v3;
  v35 = v2;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E280);
  v37 = v61;
  v59 = v61;
  sub_11240B0(a2, &v59);
  v8 = *(unsigned int *)(a2 + 24);
  v9 = *(_QWORD *)(*a1 + 2152LL);
  v40 = (const __m128i *)v43;
  sub_CAE550(v43, v9, v8, 1);
  v10 = a2;
  v11 = sub_6B37C0(*a1);
  if ( v11
    || (*(_BYTE *)(a2 + 28) & 0x7Fu) - 32 <= 0x11
    && (v31 = sub_B0D8A0(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL)), (v10 = v31) != 0)
    && (v32 = *(_BYTE *)(v31 + 74), (v32 & 4) != 0)
    && (v32 & 1) != 0
    && (v11 = sub_6B37C0(*a1)) != 0
    || (v10 = a2, (v11 = sub_6F4910(*a1, a2, 0)) != 0) )
  {
    v12 = sub_6BB140(*a1, v10);
    sub_AA92F0(ptr, v11, *(_QWORD *)(*a1 + 2152LL), v12);
    v11 = v57;
    v33 = (__m128)_mm_load_si128((const __m128i *)ptr);
    v14 = v33;
  }
  else
  {
    v14 = 0;
    v33 = 0;
  }
  v38 = (__int64 *)&v46;
  v15 = _mm_movehl_ps(v13, v14).m128_u64[0];
  sub_FD5950(&v46, a2);
  v39 = (__int64 *)&v49;
  sub_FCD270(&v49, a2);
  v16 = *(_DWORD *)(a2 + 24);
  v36 = (unsigned __int64 *)a1[1];
  v17 = 0;
  if ( v16 )
  {
    v18 = sub_CAE830(*(_QWORD *)(*a1 + 2152LL));
    v17 = v18 != 3 && v18 != 0;
  }
  v42 = v17;
  sub_643500((__int64 *)v52, a2);
  sub_766420(ptr, a2);
  v19 = (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    v19 = (_QWORD *)*v19;
  if ( v19 && (v20 = sub_79A2E0(v19)) != 0 && (*(_BYTE *)(v20 + 28) & 0x7F) != 0 )
  {
    v41 = v54;
    sub_63E460((__int64)v54, (__int64)a1, v20);
  }
  else
  {
    v55 = 0;
    memset(v54, 0, sizeof(v54));
  }
  v21 = _mm_load_si128((const __m128i *)&v33);
  v45 = v11;
  v44 = v21;
  v22 = sub_6543A0(
          v36,
          (__int64)v59,
          si128.m128i_i64[0],
          (__int64)v34,
          v35,
          v54,
          v40,
          (__int64)ptr,
          v44.m128i_i64,
          v38,
          v39,
          (__int64)v52,
          (unsigned __int8 *)&v42);
  if ( ptr[0] != &v58 )
    free(ptr[0]);
  if ( v52[0] != &v53 )
    operator delete(v52[0], v53 + 1);
  sub_640BE0((__int64)ptr, (__int64)a1, a2);
  sub_63E210(v22 + 400, (__int64)ptr);
  if ( ptr[0] != &v57 )
    free(ptr[0]);
  v23 = v50;
  v24 = (void **)v49;
  if ( v50 != v49 )
  {
    do
    {
      v25 = (void **)v24[5];
      if ( v25 != v24 + 7 )
        operator delete(v25, (unsigned __int64)v24[7] + 1);
      if ( *v24 != v24 + 2 )
        operator delete(*v24, (unsigned __int64)v24[2] + 1);
      v24 += 10;
    }
    while ( v23 != v24 );
    v24 = (void **)v49;
  }
  if ( v24 )
    operator delete(v24, v51 - (_QWORD)v24);
  v26 = v47;
  v27 = (void **)v46;
  if ( v47 != v46 )
  {
    do
    {
      v28 = (void **)v27[5];
      if ( v28 != v27 + 7 )
        operator delete(v28, (unsigned __int64)v27[7] + 1);
      if ( *v27 != v27 + 2 )
        operator delete(*v27, (unsigned __int64)v27[2] + 1);
      v27 += 10;
    }
    while ( v26 != v27 );
    v27 = (void **)v46;
  }
  if ( v27 )
    operator delete(v27, v48 - (_QWORD)v27);
  for ( i = v14.m128_u64[0]; i != v15; i += 80LL )
  {
    if ( *(_QWORD *)i != i + 16 )
      operator delete(*(void **)i, *(_QWORD *)(i + 16) + 1LL);
  }
  if ( v14.m128_u64[0] )
    operator delete((void *)v14.m128_u64[0], v11 - v14.m128_u64[0]);
  if ( v59 != v37 )
    free(v59);
}

