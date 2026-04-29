__int64 __fastcall std::string::_S_compare(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 result; // rax

  v2 = a1 - a2;
  result = 0x7FFFFFFF;
  if ( v2 <= 0x7FFFFFFF )
  {
    result = 0x80000000LL;
    if ( v2 >= (__int64)0xFFFFFFFF80000000LL )
      return (unsigned int)v2;
  }
  return result;
}
