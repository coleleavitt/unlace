__int64 __fastcall sub_42B980(
        __int64 a1,
        const char *a2,
        __int64 a3,
        const __m128i *a4,
        const __m128i *a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __m128 a9)
{
  const char *v10; // r12
  __m128 v11; // xmm0
  volatile signed __int32 *v13; // xmm1_8
  void (__fastcall *v14)(__m128i *, const __m128i *, __int64); // rax
  size_t v15; // rbp
  void *v16; // rcx
  void **p_ptr; // rsi
  volatile signed __int32 *v18; // rdx
  signed __int32 v19; // eax
  void *v21; // rax
  const void *v22; // rsi
  __int64 v23; // rax
  __m128i v24; // [rsp+0h] [rbp-98h] BYREF
  void *ptr; // [rsp+10h] [rbp-88h] BYREF
  __int128 v26; // [rsp+18h] [rbp-80h]
  __m128i v27; // [rsp+30h] [rbp-68h] BYREF
  __m128i v28; // [rsp+40h] [rbp-58h]
  unsigned __int64 v29; // [rsp+58h] [rbp-40h]

  v10 = a2;
  v11 = (__m128)_mm_loadu_si128(a5);
  v29 = __readfsqword(0x28u);
  v13 = (volatile signed __int32 *)_mm_movehl_ps(a7, v11).m128_u64[0];
  v24 = (__m128i)v11;
  if ( v13 )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd(v13 + 2, 1u);
    else
      ++*((_DWORD *)v13 + 2);
  }
  v14 = (void (__fastcall *)(__m128i *, const __m128i *, __int64))a4[1].m128i_i64[0];
  v28 = 0u;
  v27 = 0;
  if ( v14 )
  {
    a2 = (const char *)a4;
    v14(&v27, a4, 2);
    v28 = _mm_loadu_si128(a4 + 1);
  }
  v15 = *((_QWORD *)v10 + 1);
  v16 = nullptr;
  v26 = 0;
  if ( v15 )
  {
    v21 = (void *)qalloc_or_throw(v15, a2, a3, 0);
    v22 = *(const void **)v10;
    *((_QWORD *)&v26 + 1) = v15;
    *(_QWORD *)&v26 = v15;
    v16 = memcpy(v21, v22, v15);
  }
  ptr = v16;
  p_ptr = &ptr;
  sub_42B0B0(a1, (__int64)&ptr, a3, (__int64)sub_426E00, &v27, &v24, 0.0, *(double *)&v13, a8, a9);
  if ( ptr )
    qfree(ptr);
  if ( v28.m128i_i64[0] )
  {
    p_ptr = (void **)&v27;
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v28.m128i_i64[0])(&v27, &v27, 3);
  }
  if ( !v13 )
    return v29 - __readfsqword(0x28u);
  v18 = v13 + 2;
  if ( *((_QWORD *)v13 + 1) == 0x100000001LL )
  {
    v23 = *(_QWORD *)v13;
    *((_QWORD *)v13 + 1) = 0;
    (*(void (__fastcall **)(volatile signed __int32 *, void **, volatile signed __int32 *))(v23 + 16))(v13, p_ptr, v18);
    return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 24LL))(v13);
  }
  else
  {
    if ( &_pthread_key_create )
    {
      v19 = _InterlockedExchangeAdd(v18, 0xFFFFFFFF);
    }
    else
    {
      v19 = *((_DWORD *)v13 + 2);
      *((_DWORD *)v13 + 2) = v19 - 1;
    }
    if ( v19 != 1 )
      return v29 - __readfsqword(0x28u);
    return sub_420480(v13);
  }
}

