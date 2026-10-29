unsigned __int64 __fastcall sub_1AE69F0(__int64 a1, int a2, int a3, int a4)
{
  unsigned __int64 result; // rax

  result = sub_FFEF20(a2);
  if ( (_BYTE)result )
  {
    LOBYTE(result) = a4 == 4;
    return (a3 ^ 1) & (unsigned int)result;
  }
  return result;
}
