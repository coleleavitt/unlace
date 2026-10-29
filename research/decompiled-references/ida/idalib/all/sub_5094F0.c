unsigned __int64 __fastcall sub_5094F0(pthread_once_t ****a1)
{
  __m128i v1; // xmm1
  __m128i v2; // xmm0
  pthread_once_t *v3; // rbx
  unsigned __int64 (__fastcall *v4)(__int64); // rax
  int v5; // eax
  _QWORD *addr; // rax
  bool v7; // zf
  char v9; // [rsp+Fh] [rbp-99h] BYREF
  pthread_once_t *v10; // [rsp+10h] [rbp-98h] BYREF
  pthread_once_t *v11; // [rsp+18h] [rbp-90h] BYREF
  _QWORD *v12; // [rsp+20h] [rbp-88h] BYREF
  char *v13; // [rsp+28h] [rbp-80h] BYREF
  _QWORD v14[2]; // [rsp+30h] [rbp-78h] BYREF
  _OWORD v15[2]; // [rsp+40h] [rbp-68h] BYREF
  _QWORD v16[2]; // [rsp+60h] [rbp-48h] BYREF
  __m128i v17; // [rsp+70h] [rbp-38h]
  unsigned __int64 v18; // [rsp+88h] [rbp-20h]

  v18 = __readfsqword(0x28u);
  v1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v14, (__m128i)(unsigned __int64)&v11);
  v2 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v12, (__m128i)(unsigned __int64)&v13);
  v3 = ***a1;
  if ( !v3 )
    std::__throw_future_error(3);
  v4 = *(unsigned __int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL);
  if ( v4 != sub_509270 )
  {
    ((void (__fastcall *)(pthread_once_t *, double, double))v4)(***a1, *(double *)v2.m128i_i64, *(double *)v1.m128i_i64);
    return v18 - __readfsqword(0x28u);
  }
  v15[0] = v1;
  v16[0] = v3 + 8;
  v16[1] = &v10;
  v15[1] = v2;
  v13 = &v9;
  v17 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2B2D7A0), (__m128i)(unsigned __int64)sub_50AB60);
  v10 = v3;
  v9 = 0;
  v12 = v16;
  v11 = v3;
  v14[0] = sub_439930;
  v14[1] = 0;
  *(_QWORD *)__tls_get_addr(&std::__once_callable) = v15;
  *(_QWORD *)__tls_get_addr(&std::__once_call) = sub_438D10;
  if ( !&_pthread_key_create )
  {
    v5 = -1;
    goto LABEL_16;
  }
  v5 = pthread_once(v3 + 6, (void (*)(void))&_once_proxy);
  if ( v5 )
LABEL_16:
    std::__throw_system_error(v5);
  *(_QWORD *)__tls_get_addr(&std::__once_callable) = 0;
  addr = (_QWORD *)__tls_get_addr(&std::__once_call);
  v7 = v9 == 0;
  *addr = 0;
  if ( v7 )
    std::__throw_future_error(2);
  if ( _InterlockedExchange(v3 + 4, 1) < 0 )
    std::__atomic_futex_unsigned_base::_M_futex_notify_all(
      (std::__atomic_futex_unsigned_base *)(v3 + 4),
      (unsigned int *)&_once_proxy);
  if ( v17.m128i_i64[0] )
    ((void (__fastcall *)(_QWORD *, _QWORD *, __int64))v17.m128i_i64[0])(v16, v16, 3);
  return v18 - __readfsqword(0x28u);
}
