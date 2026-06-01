unsigned __int64 __fastcall sub_43BB80(__int64 **a1, __int64 a2, __int64 a3)
{
  struct _Unwind_Exception *v3; // rbx
  __m128i v4; // xmm2
  __m128i v5; // xmm1
  void *v6; // rax
  __m128i v7; // xmm0
  __int64 v8; // rbx
  int v9; // eax
  _QWORD *addr; // rax
  bool v11; // zf
  char v13; // [rsp+7h] [rbp-B1h] BYREF
  __int64 v14; // [rsp+8h] [rbp-B0h] BYREF
  _QWORD *v15; // [rsp+10h] [rbp-A8h] BYREF
  char *v16; // [rsp+18h] [rbp-A0h] BYREF
  _QWORD v17[2]; // [rsp+20h] [rbp-98h] BYREF
  void *ptr; // [rsp+30h] [rbp-88h] BYREF
  __m128i v19; // [rsp+38h] [rbp-80h]
  _OWORD v20[2]; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v21[2]; // [rsp+70h] [rbp-48h] BYREF
  __m128i v22; // [rsp+80h] [rbp-38h]
  unsigned __int64 v23; // [rsp+98h] [rbp-20h]

  v4 = _mm_loadu_si128((const __m128i *)(a3 + 8));
  v23 = __readfsqword(0x28u);
  v19 = v4;
  *(_OWORD *)(a3 + 8) = 0;
  v5 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v17, (__m128i)(unsigned __int64)&v14);
  v6 = *(void **)a3;
  *(_QWORD *)a3 = 0;
  v7 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v15, (__m128i)(unsigned __int64)&v16);
  ptr = v6;
  v8 = **a1;
  if ( !v8 )
    std::__throw_future_error(3);
  v21[0] = *a1;
  v21[1] = &ptr;
  v20[0] = v5;
  v16 = &v13;
  v22 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2B28980), (__m128i)(unsigned __int64)sub_4399B0);
  v20[1] = v7;
  v13 = 0;
  v15 = v21;
  v14 = v8;
  v17[0] = sub_439930;
  v17[1] = 0;
  *(_QWORD *)__tls_get_addr(&std::__once_callable) = v20;
  *(_QWORD *)__tls_get_addr(&std::__once_call) = sub_438D10;
  if ( !&_pthread_key_create )
  {
    v9 = -1;
    goto LABEL_19;
  }
  v9 = pthread_once((pthread_once_t *)(v8 + 24), (void (*)(void))&_once_proxy);
  if ( v9 )
LABEL_19:
    std::__throw_system_error(v9);
  *(_QWORD *)__tls_get_addr(&std::__once_callable) = 0;
  addr = (_QWORD *)__tls_get_addr(&std::__once_call);
  v11 = v13 == 0;
  *addr = 0;
  if ( v11 )
  {
    v3 = (struct _Unwind_Exception *)std::__throw_future_error(2);
    if ( ptr )
    {
      v19.m128i_i64[0] = 0;
      qfree(ptr);
    }
    _Unwind_Resume(v3);
  }
  if ( _InterlockedExchange((volatile __int32 *)(v8 + 16), 1) < 0 )
    std::__atomic_futex_unsigned_base::_M_futex_notify_all(
      (std::__atomic_futex_unsigned_base *)(v8 + 16),
      (unsigned int *)&_once_proxy);
  if ( v22.m128i_i64[0] )
    ((void (__fastcall *)(_QWORD *, _QWORD *, __int64))v22.m128i_i64[0])(v21, v21, 3);
  if ( ptr )
  {
    v19.m128i_i64[0] = 0;
    qfree(ptr);
  }
  return v23 - __readfsqword(0x28u);
}
