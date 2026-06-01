const char *__fastcall sub_4BA180(__int64 a1)
{
  const char *result; // rax

  sub_3572D0((char **)(a1 + 288));
  if ( (*(_DWORD *)&debug & 0x2000000) != 0 )
    sub_383DA0();
  result = haystack;
  if ( *(_QWORD *)(a1 + 296) )
    return *(const char **)(a1 + 288);
  return result;
}

