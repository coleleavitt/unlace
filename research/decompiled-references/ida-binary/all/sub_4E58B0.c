std::__exception_ptr::exception_ptr *__fastcall sub_4E58B0(
        std::__exception_ptr::exception_ptr *this,
        const __m128i *a2)
{
  __m128i *exception; // rbx
  __int64 v4; // rax
  void *v5; // rdi
  __m128i v6; // xmm0
  char v8; // [rsp+7h] [rbp-21h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  exception = (__m128i *)__cxa_allocate_exception(0x20u);
  __cxa_init_primary_exception(exception, &`typeinfo for'std::future_error, sub_4DC8B0);
  exception->m128i_i64[0] = (__int64)&`vtable for'std::logic_error + 16;
  v4 = a2->m128i_i64[1];
  v5 = (void *)(v4 - 24);
  if ( *(int *)(v4 - 8) < 0 )
  {
    v4 = std::string::_Rep::_M_clone(v5, &v8, 0);
  }
  else if ( v5 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd((volatile signed __int32 *)(v4 - 8), 1u);
    else
      ++*(_DWORD *)(v4 - 8);
  }
  exception->m128i_i64[1] = v4;
  v6 = _mm_loadu_si128(a2 + 1);
  exception->m128i_i64[0] = (__int64)&`vtable for'std::future_error + 16;
  exception[1] = v6;
  std::__exception_ptr::exception_ptr::exception_ptr(this, exception);
  return this;
}
