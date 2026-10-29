__int64 __fastcall Z3_simplifier_and_then(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 *v3; // rdi
  __int64 j; // rcx
  __int128 *v5; // rdi
  __int64 i; // rcx
  char v8; // r12
  void (__fastcall *v9)(__int128 *, __int64, __int64); // rax
  void (__fastcall *v10)(__int128 *, __int64, __int64); // rcx
  __m128i v11; // xmm0
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // rbx
  void (__fastcall *v15)(__int64, __int128 *, __int64); // rax
  __m128i v16; // xmm1
  __m128i v17; // xmm0
  __int128 v19; // [rsp+10h] [rbp-D8h] BYREF
  __m128i v20; // [rsp+20h] [rbp-C8h] BYREF
  __int128 v21; // [rsp+30h] [rbp-B8h] BYREF
  __m128i v22; // [rsp+40h] [rbp-A8h] BYREF
  __m128i v23; // [rsp+50h] [rbp-98h] BYREF
  __m128i v24; // [rsp+60h] [rbp-88h]
  __int128 v25; // [rsp+70h] [rbp-78h] BYREF
  __m128i v26; // [rsp+80h] [rbp-68h] BYREF
  __int128 v27; // [rsp+90h] [rbp-58h] BYREF
  __m128i v28[4]; // [rsp+A0h] [rbp-48h] BYREF

  v8 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v8 )
    sub_29CDE0();
  *(_DWORD *)(a1 + 1520) = 0;
  if ( !a2 )
  {
    v5 = &v19;
    for ( i = 6; i; --i )
    {
      *(_DWORD *)v5 = 0;
      v5 = (__int128 *)((char *)v5 + 4);
    }
    v20.m128i_i64[1] = 0;
    BUG();
  }
  v9 = *(void (__fastcall **)(__int128 *, __int64, __int64))(a2 + 40);
  v20 = 0u;
  v19 = 0;
  if ( v9 )
  {
    v9(&v19, a2 + 24, 2);
    v9 = *(void (__fastcall **)(__int128 *, __int64, __int64))(a2 + 40);
    v20 = _mm_loadu_si128((const __m128i *)(a2 + 40));
  }
  if ( !a3 )
  {
    v3 = &v21;
    for ( j = 6; j; --j )
    {
      *(_DWORD *)v3 = 0;
      v3 = (__int128 *)((char *)v3 + 4);
    }
    v22.m128i_i64[1] = 0;
    BUG();
  }
  v10 = *(void (__fastcall **)(__int128 *, __int64, __int64))(a3 + 40);
  v22 = 0u;
  v21 = 0;
  if ( v10 )
  {
    v10(&v21, a3 + 24, 2);
    v11 = _mm_loadu_si128((const __m128i *)(a3 + 40));
    v10 = *(void (__fastcall **)(__int128 *, __int64, __int64))(a3 + 40);
    v26 = 0u;
    v9 = (void (__fastcall *)(__int128 *, __int64, __int64))v20.m128i_i64[0];
    v22 = v11;
    v25 = 0;
    if ( !v20.m128i_i64[0] )
      goto LABEL_10;
  }
  else
  {
    v26 = 0u;
    v25 = 0;
    if ( !v9 )
    {
      v28[0] = 0u;
      v27 = 0;
      goto LABEL_12;
    }
  }
  ((void (__fastcall *)(__int128 *, __int128 *, __int64, void (__fastcall *)(__int128 *, __int64, __int64)))v9)(
    &v25,
    &v19,
    2,
    v10);
  v10 = (void (__fastcall *)(__int128 *, __int64, __int64))v22.m128i_i64[0];
  v26 = _mm_load_si128(&v20);
LABEL_10:
  v28[0] = 0u;
  v27 = 0;
  if ( v10 )
  {
    v10(&v27, (__int64)&v21, 2);
    v28[0] = _mm_load_si128(&v22);
  }
LABEL_12:
  v12 = sub_186B270(0x38u);
  sub_2518F0(v12, a1);
  *(_QWORD *)(v12 + 40) = 0;
  *(_QWORD *)v12 = &off_1C4C920;
  *(_QWORD *)(v12 + 48) = 0;
  *(_OWORD *)(v12 + 24) = 0;
  v24 = 0u;
  v23 = 0;
  v13 = operator new(0x40u);
  *(_QWORD *)(v13 + 16) = 0;
  v14 = v13;
  *(_QWORD *)(v13 + 24) = 0;
  *(_OWORD *)v13 = 0;
  if ( v26.m128i_i64[0] )
  {
    ((void (__fastcall *)(__int64, __int128 *, __int64))v26.m128i_i64[0])(v13, &v25, 2);
    *(__m128i *)(v14 + 16) = _mm_load_si128(&v26);
  }
  v15 = (void (__fastcall *)(__int64, __int128 *, __int64))v28[0].m128i_i64[0];
  *(_QWORD *)(v14 + 48) = 0;
  *(_QWORD *)(v14 + 56) = 0;
  *(_OWORD *)(v14 + 32) = 0;
  if ( v15 )
  {
    v15(v14 + 32, &v27, 2);
    *(__m128i *)(v14 + 48) = _mm_load_si128(v28);
  }
  v23.m128i_i64[0] = v14;
  v16 = _mm_loadu_si128((const __m128i *)(v12 + 24));
  *(__m128i *)(v12 + 24) = _mm_load_si128(&v23);
  v17 = _mm_loadu_si128((const __m128i *)(v12 + 40));
  v23 = v16;
  v24 = v17;
  *(__m128i *)(v12 + 40) = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)off_1C4C9E0),
                             (__m128i)(unsigned __int64)sub_2470A0);
  if ( v17.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v17.m128i_i64[0])(&v23, &v23, 3);
  sub_24FBE0(a1, v12);
  if ( v8 )
    sub_2BB620(v12);
  if ( v28[0].m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v28[0].m128i_i64[0])(&v27, &v27, 3);
  if ( v26.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v26.m128i_i64[0])(&v25, &v25, 3);
  if ( v22.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v22.m128i_i64[0])(&v21, &v21, 3);
  if ( v20.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v20.m128i_i64[0])(&v19, &v19, 3);
  if ( v8 )
    byte_1C7EBA0 = 1;
  return v12;
}

