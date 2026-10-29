__int64 __fastcall sub_36B560(_QWORD *a1, __int64 a2)
{
  const char *v3; // rsi

  v3 = haystack;
  if ( a1[6] )
    v3 = (const char *)a1[5];
  *(_QWORD *)(a2 + 8) = (unsigned __int8)rename_entry(a1[1], v3, 0);
  return 0;
}
