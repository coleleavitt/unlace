unsigned __int64 __fastcall sub_4074C0(__int64 a1, __int64 a2, const __m128i *a3)
{
  __m128i v3; // xmm0
  __int64 v4; // rax
  __int64 v5; // rax
  void (__fastcall *v6)(__int64, __int64, __int64); // rcx
  void (__fastcall *v7)(__int128 *, __int64, __int64); // rcx
  __m128i v8; // xmm0
  void (__fastcall *v9)(__int128 *, __int128 *, __int64); // rcx
  __int64 v10; // r12
  __int64 v11; // rbx
  __m128i v12; // xmm0
  void (__fastcall *v13)(__int128 *, __int128 *, __int64); // rax
  __int64 v14; // r12
  __int64 v15; // r12
  __int64 i; // r15
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r8
  unsigned __int64 v20; // [rsp+0h] [rbp-D8h]
  unsigned __int64 v21; // [rsp+8h] [rbp-D0h]
  __int64 v22; // [rsp+10h] [rbp-C8h]
  __int128 v23; // [rsp+18h] [rbp-C0h] BYREF
  __m128i v24; // [rsp+28h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+40h] [rbp-98h]
  __int128 v26; // [rsp+48h] [rbp-90h] BYREF
  __m128i v27; // [rsp+58h] [rbp-80h] BYREF
  __int64 v28; // [rsp+70h] [rbp-68h] BYREF
  __int128 v29; // [rsp+78h] [rbp-60h] BYREF
  __m128i v30; // [rsp+88h] [rbp-50h] BYREF
  unsigned __int64 v31; // [rsp+98h] [rbp-40h]

  v3 = _mm_loadu_si128(a3);
  v4 = a3[1].m128i_i64[0];
  v31 = __readfsqword(0x28u);
  a3[1].m128i_i64[0] = 0;
  *(__m128i *)a1 = v3;
  *a3 = 0;
  *(_QWORD *)(a1 + 16) = v4;
  v5 = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 24) = v5;
  v6 = *(void (__fastcall **)(__int64, __int64, __int64))(a2 + 24);
  *(_QWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  if ( !v6 )
  {
    v24 = 0u;
    v23 = 0;
    v10 = *(_QWORD *)(a1 + 8);
    v11 = *(_QWORD *)a1;
    goto LABEL_21;
  }
  v6(a1 + 32, a2 + 8, 2);
  v5 = *(_QWORD *)(a1 + 24);
  v24 = 0u;
  v7 = *(void (__fastcall **)(__int128 *, __int64, __int64))(a2 + 24);
  *(__m128i *)(a1 + 48) = _mm_loadu_si128((const __m128i *)(a2 + 24));
  v22 = v5;
  v23 = 0;
  if ( !v7 )
  {
    v10 = *(_QWORD *)(a1 + 8);
    v11 = *(_QWORD *)a1;
    goto LABEL_21;
  }
  v7(&v23, a1 + 32, 2);
  v8 = _mm_loadu_si128((const __m128i *)(a1 + 48));
  v9 = *(void (__fastcall **)(__int128 *, __int128 *, __int64))(a1 + 48);
  v30 = 0u;
  v5 = v22;
  v10 = *(_QWORD *)(a1 + 8);
  v24 = v8;
  v11 = *(_QWORD *)a1;
  v28 = v22;
  v29 = 0;
  if ( !v9 )
  {
LABEL_21:
    v25 = v5;
    v27 = 0u;
    v26 = 0;
LABEL_22:
    v14 = v10 - v11;
    v13 = nullptr;
    if ( v14 <= 16 )
      goto LABEL_17;
    goto LABEL_7;
  }
  v9(&v29, &v23, 2);
  v12 = _mm_loadu_si128(&v24);
  v27 = 0u;
  v30 = v12;
  v25 = v28;
  v26 = 0;
  if ( !v24.m128i_i64[0] )
    goto LABEL_22;
  ((void (__fastcall *)(__int128 *, __int128 *, __int64))v24.m128i_i64[0])(&v26, &v29, 2);
  v13 = (void (__fastcall *)(__int128 *, __int128 *, __int64))v30.m128i_i64[0];
  v27 = _mm_loadu_si128(&v30);
  if ( !v30.m128i_i64[0] )
  {
    v14 = v10 - v11;
    if ( v14 <= 16 )
      goto LABEL_17;
    goto LABEL_7;
  }
  v14 = v10 - v11;
  ((void (__fastcall *)(__int128 *, __int128 *, __int64))v30.m128i_i64[0])(&v29, &v29, 3);
  v13 = (void (__fastcall *)(__int128 *, __int128 *, __int64))v27.m128i_i64[0];
  if ( v14 > 16 )
  {
LABEL_7:
    v15 = v14 >> 4;
    for ( i = (v15 - 2) / 2; ; --i )
    {
      v17 = *(_QWORD *)(v11 + 16 * i);
      v18 = *(_QWORD *)(v11 + 16 * i + 8);
      v29 = 0;
      v30 = 0u;
      v28 = v25;
      if ( v13 )
      {
        v21 = v18;
        v20 = v17;
        v13(&v29, &v26, 2);
        v18 = v21;
        v17 = v20;
        v30 = _mm_loadu_si128(&v27);
      }
      sub_4071F0(v11, i, v15, v17, v18, &v28);
      if ( v30.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v30.m128i_i64[0])(&v29, &v29, 3);
      if ( !i )
        break;
      v13 = (void (__fastcall *)(__int128 *, __int128 *, __int64))v27.m128i_i64[0];
    }
    v13 = (void (__fastcall *)(__int128 *, __int128 *, __int64))v27.m128i_i64[0];
  }
  if ( v13 )
    v13(&v26, &v26, 3);
LABEL_17:
  if ( v24.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v24.m128i_i64[0])(&v23, &v23, 3);
  return v31 - __readfsqword(0x28u);
}
