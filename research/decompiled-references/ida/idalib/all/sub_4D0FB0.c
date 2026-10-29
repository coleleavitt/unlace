const char *__fastcall sub_4D0FB0(__int64 a1)
{
  const char *result; // rax

  sub_35A6C0((char **)(a1 + 296));
  if ( (*(_DWORD *)&debug & 0x2000000) != 0 )
    sub_3879F0();
  result = haystack;
  if ( *(_QWORD *)(a1 + 304) )
    return *(const char **)(a1 + 296);
  return result;
}
