__int64 __fastcall sub_369660(_QWORD *a1, __int64 a2)
{
  const char *v2; // r8
  const char *v3; // rcx
  const char *v4; // rdx

  v2 = haystack;
  if ( a1[18] )
    v2 = (const char *)a1[17];
  v3 = haystack;
  if ( a1[14] )
    v3 = (const char *)a1[13];
  v4 = haystack;
  if ( a1[10] )
    v4 = (const char *)a1[9];
  *(_QWORD *)(a2 + 8) = (unsigned __int8)add_hidden_range(a1[1], a1[5], v4, v3, v2, a1[21]);
  return 0;
}
