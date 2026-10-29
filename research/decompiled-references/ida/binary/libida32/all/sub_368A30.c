__int64 __fastcall sub_368A30(__int64 a1, __int64 a2)
{
  const char *v2; // r15
  unsigned int v4; // r12d
  unsigned int v5; // r13d
  unsigned int default_radix; // r14d
  __int64 v7; // rsi

  v2 = haystack;
  v4 = *(_DWORD *)(a1 + 8);
  v5 = *(_DWORD *)(a1 + 40);
  default_radix = get_default_radix();
  if ( *(_QWORD *)(a1 + 80) )
    v2 = *(const char **)(a1 + 72);
  if ( (*(_BYTE *)(a1 + 40) & 1) != 0 )
    v7 = (unsigned int)getinf(20);
  else
    v7 = (unsigned int)getinf(19);
  *(_DWORD *)(a2 + 8) = find_binary(v4, v7, v2, default_radix, v5, 0);
  return 0;
}

