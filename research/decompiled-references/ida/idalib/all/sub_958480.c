__int64 __fastcall sub_958480(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned int a8)
{
  __int64 result; // rax
  char v9; // cl

  result = 0;
  v9 = a8;
  if ( (_DWORD)a7 == 1 )
  {
    if ( a8 > HIDWORD(a7) )
      v9 = BYTE4(a7);
    return (8LL << SBYTE4(a7)) + (1LL << (BYTE4(a7) - v9));
  }
  return result;
}
