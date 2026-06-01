unsigned __int64 __fastcall sub_43DAC0(__int64 *a1, __m128i *a2, _DWORD *a3, const __m128i *a4, const __m128i *a5)
{
  std::invalid_argument *exception; // rbx
  __int64 v6; // rax
  void (__fastcall *v7)(__int64 *, __m128i *, _DWORD *, __m128i *, __m128i *); // r9
  __int64 v8; // rax
  __m128i v9; // xmm1
  volatile signed __int32 *v10; // rbx
  volatile signed __int32 *v11; // rdx
  signed __int32 v12; // eax
  __int64 v14; // rax
  __int64 v15; // rdi
  __m128i v16; // [rsp+0h] [rbp-58h] BYREF
  __m128i v17; // [rsp+10h] [rbp-48h] BYREF
  void (__fastcall *v18)(__m128i *, __m128i *, __int64); // [rsp+20h] [rbp-38h]
  __int64 v19; // [rsp+28h] [rbp-30h]
  unsigned __int64 v20; // [rsp+38h] [rbp-20h]

  v20 = __readfsqword(0x28u);
  if ( *a3 )
  {
    exception = (std::invalid_argument *)__cxa_allocate_exception(0x10u);
    std::invalid_argument::invalid_argument(exception, "invalid match mode");
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::invalid_argument,
      (void (*)(void *))&std::invalid_argument::~invalid_argument);
  }
  v6 = *a1;
  v17 = 0;
  v16 = _mm_loadu_si128(a5);
  v7 = *(void (__fastcall **)(__int64 *, __m128i *, _DWORD *, __m128i *, __m128i *))(v6 + 32);
  *a5 = 0;
  v8 = a4[1].m128i_i64[1];
  v18 = nullptr;
  v19 = v8;
  if ( a4[1].m128i_i64[0] )
  {
    v9 = _mm_loadu_si128(a4);
    v18 = (void (__fastcall *)(__m128i *, __m128i *, __int64))a4[1].m128i_i64[0];
    a4[1] = 0;
    v17 = v9;
  }
  v7(a1, a2, a3, &v17, &v16);
  if ( v18 )
  {
    a2 = &v17;
    v18(&v17, &v17, 3);
  }
  v10 = (volatile signed __int32 *)v16.m128i_i64[1];
  if ( v16.m128i_i64[1] )
  {
    v11 = (volatile signed __int32 *)(v16.m128i_i64[1] + 8);
    if ( *(_QWORD *)(v16.m128i_i64[1] + 8) == 0x100000001LL )
    {
      v14 = *(_QWORD *)v16.m128i_i64[1];
      v15 = v16.m128i_i64[1];
      *(_QWORD *)(v16.m128i_i64[1] + 8) = 0;
      (*(void (__fastcall **)(__int64, __m128i *, volatile signed __int32 *))(v14 + 16))(v15, a2, v11);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 24LL))(v10);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v12 = _InterlockedExchangeAdd(v11, 0xFFFFFFFF);
      }
      else
      {
        v12 = *(_DWORD *)(v16.m128i_i64[1] + 8);
        *(_DWORD *)(v16.m128i_i64[1] + 8) = v12 - 1;
      }
      if ( v12 == 1 )
        sub_434350(v10);
    }
  }
  return v20 - __readfsqword(0x28u);
}
