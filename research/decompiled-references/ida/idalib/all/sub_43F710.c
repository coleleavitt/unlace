__int64 __fastcall sub_43F710(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const __m128i *a4,
        const __m128i *a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __m128 a9)
{
  __m128 v10; // xmm0
  volatile signed __int32 *v12; // xmm1_8
  void (__fastcall *v13)(__m128i *, const __m128i *, __int64); // rax
  size_t v14; // rbp
  void *v15; // rcx
  void **p_ptr; // rsi
  volatile signed __int32 *v17; // rdx
  signed __int32 v18; // eax
  void *v20; // rax
  const void *v21; // rsi
  __int64 v22; // rax
  __m128i v23; // [rsp+0h] [rbp-98h] BYREF
  void *ptr; // [rsp+10h] [rbp-88h] BYREF
  __int128 v25; // [rsp+18h] [rbp-80h]
  __m128i v26; // [rsp+30h] [rbp-68h] BYREF
  __m128i v27; // [rsp+40h] [rbp-58h]
  unsigned __int64 v28; // [rsp+58h] [rbp-40h]

  v10 = (__m128)_mm_loadu_si128(a5);
  v28 = __readfsqword(0x28u);
  v12 = (volatile signed __int32 *)_mm_movehl_ps(a7, v10).m128_u64[0];
  v23 = (__m128i)v10;
  if ( v12 )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd(v12 + 2, 1u);
    else
      ++*((_DWORD *)v12 + 2);
  }
  v13 = (void (__fastcall *)(__m128i *, const __m128i *, __int64))a4[1].m128i_i64[0];
  v27 = 0u;
  v26 = 0;
  if ( v13 )
  {
    v13(&v26, a4, 2);
    v27 = _mm_loadu_si128(a4 + 1);
  }
  v14 = *(_QWORD *)(a2 + 8);
  v15 = nullptr;
  v25 = 0;
  if ( v14 )
  {
    v20 = (void *)qalloc_or_throw(v14);
    v21 = *(const void **)a2;
    *((_QWORD *)&v25 + 1) = v14;
    *(_QWORD *)&v25 = v14;
    v15 = memcpy(v20, v21, v14);
  }
  ptr = v15;
  p_ptr = &ptr;
  sub_43EFF0(a1, (__int64)&ptr, a3, (__int64)sub_43AD00, &v26, &v23, 0.0, *(double *)&v12, a8, a9);
  if ( ptr )
    qfree(ptr);
  if ( v27.m128i_i64[0] )
  {
    p_ptr = (void **)&v26;
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v27.m128i_i64[0])(&v26, &v26, 3);
  }
  if ( !v12 )
    return v28 - __readfsqword(0x28u);
  v17 = v12 + 2;
  if ( *((_QWORD *)v12 + 1) == 0x100000001LL )
  {
    v22 = *(_QWORD *)v12;
    *((_QWORD *)v12 + 1) = 0;
    (*(void (__fastcall **)(volatile signed __int32 *, void **, volatile signed __int32 *))(v22 + 16))(v12, p_ptr, v17);
    return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 24LL))(v12);
  }
  else
  {
    if ( &_pthread_key_create )
    {
      v18 = _InterlockedExchangeAdd(v17, 0xFFFFFFFF);
    }
    else
    {
      v18 = *((_DWORD *)v12 + 2);
      *((_DWORD *)v12 + 2) = v18 - 1;
    }
    if ( v18 != 1 )
      return v28 - __readfsqword(0x28u);
    return sub_434350(v12);
  }
}
