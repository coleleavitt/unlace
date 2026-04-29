__int64 __fastcall sub_3E2700(__m128i *a1)
{
  _DWORD *exception; // rax
  int v2; // ebp
  __int64 result; // rax

  if ( (unsigned int)asctoreal(&a1[1]) != 1 )
    JUMPOUT(0x5AF82);
  v2 = sub_3E1FC0(a1);
  if ( v2 )
  {
    exception = __cxa_allocate_exception(4u);
    *exception = v2;
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'int, nullptr);
  }
  result = a1[67].m128i_u16[2];
  if ( (_WORD)result == 4 )
  {
    a1[67].m128i_i16[2] = 2;
LABEL_7:
    sub_5AE3A();
  }
  if ( (_WORD)result != 41 )
    goto LABEL_7;
  return result;
}
