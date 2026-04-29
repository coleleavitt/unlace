__int64 __fastcall sub_3E4940(__m128i *a1, __int64 a2, __int64 a3, __m128 a4)
{
  _DWORD *exception; // rax

  a1[1].m128i_i64[0] = a2;
  sub_3E16E0(a1);
  sub_3E2F50(a1, a3, 1, a4);
  if ( a1[67].m128i_i16[2] != 1 )
  {
    exception = __cxa_allocate_exception(4u);
    *exception = 47;
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'int, nullptr);
  }
  return 1;
}
