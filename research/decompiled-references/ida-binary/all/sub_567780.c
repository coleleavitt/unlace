__int64 __fastcall sub_567780(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 result; // rax

  if ( WORD2(a8) )
  {
    result = 1;
    if ( WORD2(a8) != 0xFFFF )
    {
      result = 0;
      if ( WORD2(a8) != 0xFFFE )
        return *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(a10 + 8) + 104LL) + 3LL * WORD2(a8) + 1);
    }
  }
  else
  {
    result = (*(_BYTE *)a9 & 4) != 0;
    if ( (*(_QWORD *)a9 & 1) == 0 )
      return (*(_BYTE *)(*(_QWORD *)a9 + 44LL) & 2) != 0;
  }
  return result;
}
