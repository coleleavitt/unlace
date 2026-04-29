bool __fastcall sub_B5C0(const void *a1, __int64 a2, const void *a3, size_t a4)
{
  bool result; // al

  result = 0;
  if ( a4 == a2 )
  {
    result = 1;
    if ( a4 )
      return memcmp(a1, a3, a4) == 0;
  }
  return result;
}
