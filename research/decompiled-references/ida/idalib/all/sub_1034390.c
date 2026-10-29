_BOOL8 __fastcall sub_1034390(__int64 a1, unsigned int a2)
{
  _BOOL8 result; // rax

  result = 1;
  if ( a2 <= 7 )
    return ((1LL << a2) & 0xC1) == 0;
  return result;
}
