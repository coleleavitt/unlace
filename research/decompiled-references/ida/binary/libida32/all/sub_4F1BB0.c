unsigned __int64 __fastcall sub_4F1BB0(__int64 a1)
{
  struct _Unwind_Exception *v1; // rbx
  int v3; // eax
  _QWORD *addr; // rax
  bool v5; // zf
  std::__atomic_futex_unsigned_base *v6; // rdi
  char v8; // [rsp+Fh] [rbp-99h] BYREF
  __int64 v9; // [rsp+10h] [rbp-98h] BYREF
  __int64 v10; // [rsp+18h] [rbp-90h] BYREF
  _QWORD *v11; // [rsp+20h] [rbp-88h] BYREF
  char *v12; // [rsp+28h] [rbp-80h] BYREF
  _QWORD v13[2]; // [rsp+30h] [rbp-78h] BYREF
  _OWORD v14[2]; // [rsp+40h] [rbp-68h] BYREF
  _QWORD v15[2]; // [rsp+60h] [rbp-48h] BYREF
  __m128i v16; // [rsp+70h] [rbp-38h]
  unsigned __int64 v17; // [rsp+88h] [rbp-20h]

  v17 = __readfsqword(0x28u);
  v15[0] = a1 + 32;
  v15[1] = &v9;
  v9 = a1;
  v12 = &v8;
  v13[0] = sub_425A10;
  v16 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2B037E0), (__m128i)(unsigned __int64)sub_4F34A0);
  v10 = a1;
  v8 = 0;
  v14[0] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v13, (__m128i)(unsigned __int64)&v10);
  v11 = v15;
  v13[1] = 0;
  v14[1] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v11, (__m128i)(unsigned __int64)&v12);
  *(_QWORD *)__tls_get_addr() = v14;
  *(_QWORD *)__tls_get_addr() = sub_424DE0;
  if ( !&_pthread_key_create )
  {
    v3 = -1;
    goto LABEL_12;
  }
  v3 = pthread_once((pthread_once_t *)(a1 + 24), (void (*)(void))&_once_proxy);
  if ( v3 )
LABEL_12:
    std::__throw_system_error(v3);
  *(_QWORD *)__tls_get_addr() = 0;
  addr = (_QWORD *)__tls_get_addr();
  v5 = v8 == 0;
  *addr = 0;
  if ( v5 )
  {
    v1 = (struct _Unwind_Exception *)std::__throw_future_error(2);
    *(_QWORD *)__tls_get_addr() = 0;
    *(_QWORD *)__tls_get_addr() = 0;
    sub_374250((__int64)v15);
    _Unwind_Resume(v1);
  }
  v6 = (std::__atomic_futex_unsigned_base *)(a1 + 16);
  if ( _InterlockedExchange((volatile __int32 *)(a1 + 16), 1) < 0 )
    std::__atomic_futex_unsigned_base::_M_futex_notify_all(v6, (unsigned int *)&_once_proxy);
  if ( v16.m128i_i64[0] )
    ((void (__fastcall *)(_QWORD *, _QWORD *, __int64))v16.m128i_i64[0])(v15, v15, 3);
  return v17 - __readfsqword(0x28u);
}

