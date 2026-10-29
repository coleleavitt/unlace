unsigned __int64 __fastcall sub_4F2010(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r12
  __int64 *v3; // rax
  int v4; // edx
  __m128i *exception; // r12
  __int64 v6; // rax
  __m128i v7; // xmm0
  int v9; // edx
  __int64 v10; // [rsp+20h] [rbp-78h] BYREF
  __int64 v11; // [rsp+28h] [rbp-70h] BYREF
  char *v12; // [rsp+30h] [rbp-68h] BYREF
  __int64 v13; // [rsp+38h] [rbp-60h]
  __m128i v14; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v15; // [rsp+58h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  if ( *a2 )
  {
    v2 = std::future_category();
    (*(void (__fastcall **)(__int64 *, __int64, __int64))(*(_QWORD *)v2 + 24LL))(&v10, v2, 4);
    v3 = (__int64 *)std::string::insert((std::string *)&v10, 0, "std::future_error: ", 0x13u);
    v11 = *v3;
    *v3 = (__int64)&std::string::_Rep::_S_empty_rep_storage + 24;
    std::logic_error::logic_error((std::logic_error *)&v12, (const std::string *)&v11);
    if ( (_UNKNOWN *)(v11 - 24) != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        v9 = _InterlockedExchangeAdd((volatile signed __int32 *)(v11 - 8), 0xFFFFFFFF);
      }
      else
      {
        v9 = *(_DWORD *)(v11 - 8);
        *(_DWORD *)(v11 - 8) = v9 - 1;
      }
      if ( v9 <= 0 )
        std::string::_Rep::_M_destroy();
    }
    if ( (_UNKNOWN *)(v10 - 24) != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        v4 = _InterlockedExchangeAdd((volatile signed __int32 *)(v10 - 8), 0xFFFFFFFF);
      }
      else
      {
        v4 = *(_DWORD *)(v10 - 8);
        *(_DWORD *)(v10 - 8) = v4 - 1;
      }
      if ( v4 <= 0 )
        std::string::_Rep::_M_destroy();
    }
    v14.m128i_i64[1] = v2;
    v14.m128i_i32[0] = 4;
    v12 = (char *)&`vtable for'std::future_error + 16;
    exception = (__m128i *)__cxa_allocate_exception(0x20u);
    exception->m128i_i64[0] = (__int64)&`vtable for'std::logic_error + 16;
    v6 = v13;
    if ( *(int *)(v13 - 8) >= 0 )
    {
      if ( (_UNKNOWN *)(v13 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      {
        if ( &_pthread_key_create )
          _InterlockedAdd((volatile signed __int32 *)(v13 - 8), 1u);
        else
          ++*(_DWORD *)(v13 - 8);
      }
    }
    else
    {
      v6 = std::string::_Rep::_M_clone();
    }
    exception->m128i_i64[1] = v6;
    v7 = _mm_load_si128(&v14);
    exception->m128i_i64[0] = (__int64)&`vtable for'std::future_error + 16;
    exception[1] = v7;
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::future_error,
      (void (*)(void *))&std::future_error::~future_error);
  }
  return v15 - __readfsqword(0x28u);
}

