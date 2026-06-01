_BOOL8 __fastcall sub_105E3D0(__int64 a1, unsigned int a2)
{
  _BOOL8 result; // rax

  result = 1;
  if ( a2 <= 0x15 )
    return ((1LL << a2) & 0x2FE041) == 0;
  return result;
}
