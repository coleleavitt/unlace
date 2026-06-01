__int64 __fastcall sub_40FEC0(__int64 a1)
{
  __m128i v2; // xmm0
  __int64 v4; // rax
  __int64 v5; // rdi
  std::logic_error *exception; // rbp
  __int64 *v7; // rax
  const char *v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // [rsp+10h] [rbp-98h] BYREF
  __int128 v11; // [rsp+18h] [rbp-90h]
  __int64 v12; // [rsp+30h] [rbp-78h] BYREF
  __m128i v13; // [rsp+38h] [rbp-70h] BYREF
  char v14; // [rsp+48h] [rbp-60h]
  __int64 v15; // [rsp+50h] [rbp-58h] BYREF
  __int64 v16; // [rsp+60h] [rbp-48h] BYREF
  char v17; // [rsp+68h] [rbp-40h]
  unsigned __int64 v18; // [rsp+78h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  sub_40FC80((__int64)&v12);
  if ( v14 )
  {
    sub_40C290();
    sub_40FC80((__int64)&v15);
    if ( v17 )
    {
      v10 = 0;
      exception = (std::logic_error *)__cxa_allocate_exception(0x10u);
      v11 = 0;
      v7 = sub_6AEF0(&v10);
      if ( v7[1] )
        v8 = (const char *)*v7;
      else
        v8 = s1;
      std::logic_error::logic_error(exception, v8);
      v9 = v10;
      *(_QWORD *)exception = &off_4EBCD0;
      if ( v9 )
      {
        *(_QWORD *)&v11 = 0;
        qfree();
      }
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'uh_throw_error_policy_t::exn_t,
        (void (*)(void *))sub_40BF70);
    }
    v4 = v15;
    v5 = v12;
    *(__m128 *)(a1 + 8) = _mm_loadh_ps((const double *)&v16);
    *(_QWORD *)a1 = v4;
    if ( v5 )
      qfree();
  }
  else
  {
    v2 = _mm_loadu_si128(&v13);
    *(_QWORD *)a1 = v12;
    *(__m128i *)(a1 + 8) = v2;
  }
  return a1;
}
