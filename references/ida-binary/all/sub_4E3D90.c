unsigned __int64 __fastcall sub_4E3D90(__int64 *a1, __int64 a2, const __m128i *a3)
{
  struct _Unwind_Exception *v3; // rbp
  __int64 v4; // r13
  __int64 v5; // r14
  __m128i v6; // xmm0
  __int64 v7; // rbp
  __int64 v8; // rax
  pthread_rwlock_t *v9; // rbx
  __int64 *v10; // rax
  __int64 v11; // rbp
  __m128i v12; // xmm6
  __m128i v13; // xmm7
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int v19; // eax
  __m128i v20; // [rsp+0h] [rbp-E8h] BYREF
  __m128i v21; // [rsp+10h] [rbp-D8h] BYREF
  char v22; // [rsp+27h] [rbp-C1h] BYREF
  __int64 v23; // [rsp+28h] [rbp-C0h] BYREF
  _QWORD *v24; // [rsp+30h] [rbp-B8h] BYREF
  char *v25; // [rsp+38h] [rbp-B0h] BYREF
  _QWORD v26[2]; // [rsp+40h] [rbp-A8h] BYREF
  void *v27[2]; // [rsp+50h] [rbp-98h] BYREF
  __int64 v28; // [rsp+60h] [rbp-88h]
  _OWORD v29[2]; // [rsp+70h] [rbp-78h] BYREF
  _QWORD v30[2]; // [rsp+90h] [rbp-58h] BYREF
  __m128i v31; // [rsp+A0h] [rbp-48h]
  unsigned __int64 v32; // [rsp+B8h] [rbp-30h]

  v6 = _mm_loadu_si128(a3);
  v7 = *a1;
  v32 = __readfsqword(0x28u);
  *(__m128i *)v27 = v6;
  v8 = a3[1].m128i_i64[0];
  *a3 = 0;
  a3[1].m128i_i64[0] = 0;
  v28 = v8;
  v9 = *(pthread_rwlock_t **)(v7 + 8);
  v21 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v26, (__m128i)(unsigned __int64)&v23);
  v20 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v24, (__m128i)(unsigned __int64)&v25);
  if ( &_pthread_key_create )
  {
    do
      v19 = pthread_rwlock_rdlock(v9);
    while ( v19 == 11 );
    if ( v19 == 35 )
      std::__throw_system_error(35);
  }
  v10 = *(__int64 **)(v7 + 24);
  v11 = *v10;
  if ( !*v10 )
  {
    v3 = (struct _Unwind_Exception *)std::__throw_future_error(3);
    std::__once_callable = nullptr;
    std::__once_call = 0;
    sub_2E6A10(v4);
    if ( &_pthread_key_create )
      pthread_rwlock_unlock(v9);
    sub_4DAE10(v5);
    _Unwind_Resume(v3);
  }
  v12 = _mm_load_si128(&v21);
  v13 = _mm_load_si128(&v20);
  v30[0] = v10;
  v25 = &v22;
  v29[0] = v12;
  v31 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_86D538), (__m128i)(unsigned __int64)sub_4DCD00);
  v29[1] = v13;
  v30[1] = v27;
  v22 = 0;
  v24 = v30;
  v23 = v11;
  v26[0] = sub_4DCE90;
  v26[1] = 0;
  std::__once_callable = v29;
  std::__once_call = sub_4DCB40;
  if ( !&_pthread_key_create )
    goto LABEL_19;
  v14 = pthread_once((pthread_once_t *)(v11 + 24), (void (*)(void))&_once_proxy);
  if ( v14 )
LABEL_20:
    std::__throw_system_error(v14);
  std::__once_callable = nullptr;
  std::__once_call = 0;
  if ( !v22 )
  {
    std::__throw_future_error(2);
LABEL_19:
    v14 = -1;
    goto LABEL_20;
  }
  if ( _InterlockedExchange((volatile __int32 *)(v11 + 16), 1) < 0 )
    std::__atomic_futex_unsigned_base::_M_futex_notify_all(
      (std::__atomic_futex_unsigned_base *)(v11 + 16),
      (unsigned int *)&_once_proxy);
  if ( v31.m128i_i64[0] )
    ((void (__fastcall *)(_QWORD *, _QWORD *, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))v31.m128i_i64[0])(
      v30,
      v30,
      3,
      v15,
      v16,
      v17,
      v20.m128i_i64[0],
      v20.m128i_i64[1],
      v21.m128i_i64[0],
      v21.m128i_i64[1]);
  pthread_rwlock_unlock(v9);
  if ( v27[0] )
    operator delete(v27[0], v28 - (unsigned __int64)v27[0]);
  return v32 - __readfsqword(0x28u);
}
