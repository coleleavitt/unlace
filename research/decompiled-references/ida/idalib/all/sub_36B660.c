__int64 __fastcall sub_36B660(_QWORD *a1, __int64 a2)
{
  const char *v2; // rdx

  v2 = haystack;
  if ( a1[10] )
    v2 = (const char *)a1[9];
  *(_QWORD *)(a2 + 8) = (unsigned __int8)add_entry(a1[1], a1[5], v2, a1[13] != 0, 0);
  return 0;
}
