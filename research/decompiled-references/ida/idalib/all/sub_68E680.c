__int64 __fastcall sub_68E680(unsigned __int64 *a1, __int64 a2)
{
  const char *v3; // rsi

  v3 = haystack;
  if ( a1[6] )
    v3 = (const char *)a1[5];
  *(_QWORD *)(a2 + 8) = (unsigned __int8)apply_startup_sig(a1[1], v3);
  return 0;
}
