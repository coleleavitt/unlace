__int64 __fastcall sub_F79BF0(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rsi

  v2 = *a1;
  if ( *a1 < 0 )
    std::__throw_length_error("basic_string::_M_create");
  if ( v2 <= a2 )
    return operator new(v2 + 1);
  v3 = 2 * a2;
  if ( v2 >= v3 )
    return operator new(v2 + 1);
  if ( v3 < 0 )
  {
    *a1 = 0x7FFFFFFFFFFFFFFFLL;
    return operator new(0x8000000000000000LL);
  }
  else
  {
    *a1 = v3;
    return operator new(v3 + 1);
  }
}
