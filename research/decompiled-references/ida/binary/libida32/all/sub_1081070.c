_BOOL8 __fastcall sub_1081070(__int64 a1, unsigned int a2)
{
  _BOOL8 result; // rax

  result = 1;
  if ( a2 <= 0x22 )
    return ((1LL << a2) & 0x7FFC00001LL) == 0;
  return result;
}

