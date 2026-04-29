__int64 __fastcall sub_3DB880(__m128i *a1)
{
  _DWORD *exception; // rax
  __int16 v2; // ax
  __int64 v3; // r12
  int v4; // ebp

  v2 = a1[67].m128i_i16[2];
  if ( v2 != 45 )
  {
    if ( v2 == 3 )
    {
      v3 = a1[66].m128i_i64[0];
      goto LABEL_4;
    }
LABEL_11:
    sub_5880C();
  }
  sub_3DB660(a1);
  if ( a1[67].m128i_i16[2] != 3 )
    goto LABEL_11;
  v3 = -a1[66].m128i_i64[0];
LABEL_4:
  v4 = sub_3DB1C0(a1);
  if ( v4 )
  {
    exception = __cxa_allocate_exception(4u);
    *exception = v4;
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'int, 0);
  }
  if ( a1[67].m128i_i16[2] == 4 )
    a1[67].m128i_i16[2] = 2;
  return v3;
}
