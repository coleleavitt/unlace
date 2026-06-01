unsigned __int64 __fastcall sub_5096D0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r12
  __int64 *v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rdi
  int v6; // edx
  __m128i *exception; // r12
  __int64 v8; // rax
  void *v9; // rdi
  __m128i v10; // xmm0
  int v12; // edx
  char v13; // [rsp+1Fh] [rbp-79h] BYREF
  __int64 v14; // [rsp+20h] [rbp-78h] BYREF
  __int64 v15; // [rsp+28h] [rbp-70h] BYREF
  char *v16; // [rsp+30h] [rbp-68h] BYREF
  __int64 v17; // [rsp+38h] [rbp-60h]
  __m128i v18; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v19; // [rsp+58h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  if ( *a2 )
  {
    v2 = std::future_category();
    (*(void (__fastcall **)(__int64 *, __int64, __int64))(*(_QWORD *)v2 + 24LL))(&v14, v2, 4);
    v3 = (__int64 *)std::string::insert((std::string *)&v14, 0, "std::future_error: ", 0x13u);
    v15 = *v3;
    *v3 = (__int64)&std::string::_Rep::_S_empty_rep_storage + 24;
    std::logic_error::logic_error((std::logic_error *)&v16, (const std::string *)&v15);
    v4 = v15 - 24;
    if ( (_UNKNOWN *)(v15 - 24) != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        v12 = _InterlockedExchangeAdd((volatile signed __int32 *)(v15 - 8), 0xFFFFFFFF);
      }
      else
      {
        v12 = *(_DWORD *)(v15 - 8);
        *(_DWORD *)(v15 - 8) = v12 - 1;
      }
      if ( v12 <= 0 )
        std::string::_Rep::_M_destroy(v4, &v13);
    }
    v5 = v14 - 24;
    if ( (_UNKNOWN *)(v14 - 24) != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        v6 = _InterlockedExchangeAdd((volatile signed __int32 *)(v14 - 8), 0xFFFFFFFF);
      }
      else
      {
        v6 = *(_DWORD *)(v14 - 8);
        *(_DWORD *)(v14 - 8) = v6 - 1;
      }
      if ( v6 <= 0 )
        std::string::_Rep::_M_destroy(v5, &v13);
    }
    v18.m128i_i64[1] = v2;
    v18.m128i_i32[0] = 4;
    v16 = (char *)&`vtable for'std::future_error + 16;
    exception = (__m128i *)__cxa_allocate_exception(0x20u);
    exception->m128i_i64[0] = (__int64)&`vtable for'std::logic_error + 16;
    v8 = v17;
    v9 = (void *)(v17 - 24);
    if ( *(int *)(v17 - 8) >= 0 )
    {
      if ( v9 != &std::string::_Rep::_S_empty_rep_storage )
      {
        if ( &_pthread_key_create )
          _InterlockedAdd((volatile signed __int32 *)(v17 - 8), 1u);
        else
          ++*(_DWORD *)(v17 - 8);
      }
    }
    else
    {
      v8 = std::string::_Rep::_M_clone(v9, &v13, 0);
    }
    exception->m128i_i64[1] = v8;
    v10 = _mm_load_si128(&v18);
    exception->m128i_i64[0] = (__int64)&`vtable for'std::future_error + 16;
    exception[1] = v10;
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::future_error,
      (void (*)(void *))&std::future_error::~future_error);
  }
  return v19 - __readfsqword(0x28u);
}
