__int64 __fastcall sub_36C1A0(_QWORD *a1, __int64 a2)
{
  const char *v2; // r15
  __int64 v4; // r12
  __int64 v5; // r13
  unsigned int default_radix; // r14d
  __int64 v7; // rsi

  v2 = haystack;
  v4 = a1[1];
  v5 = a1[5];
  default_radix = get_default_radix();
  if ( a1[10] )
    v2 = (const char *)a1[9];
  if ( (a1[5] & 1) != 0 )
    v7 = getinf(20);
  else
    v7 = getinf(19);
  *(_QWORD *)(a2 + 8) = find_binary(v4, v7, v2, default_radix, (unsigned int)v5, 0);
  return 0;
}
