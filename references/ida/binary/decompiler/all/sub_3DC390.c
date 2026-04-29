__int64 __fastcall sub_3DC390(__m128i *a1)
{
  _DWORD *exception; // rax
  unsigned int v2; // ebp
  int v3; // r12d

  if ( a1[66].m128i_i64[0] != (int)a1[66].m128i_i64[0] )
    sub_5882E();
  v2 = a1[66].m128i_i64[0];
  v3 = sub_3DB1C0(a1);
  if ( v3 )
  {
    exception = __cxa_allocate_exception(4u);
    *exception = v3;
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'int, 0);
  }
  if ( a1[67].m128i_i16[2] == 4 )
    a1[67].m128i_i16[2] = 2;
  return v2;
}
