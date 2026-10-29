_BOOL8 __fastcall sub_106F6E0(__int64 a1, unsigned int a2)
{
  _BOOL8 result; // rax

  result = 1;
  if ( a2 <= 0xF )
    return ((1LL << a2) & 0xE600) == 0;
  return result;
}
