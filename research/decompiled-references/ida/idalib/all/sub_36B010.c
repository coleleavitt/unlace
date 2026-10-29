__int64 __fastcall sub_36B010(_QWORD *a1, __int64 a2)
{
  const char *v2; // rdx

  v2 = haystack;
  if ( a1[10] )
    v2 = (const char *)a1[9];
  *(_QWORD *)(a2 + 8) = (unsigned __int8)add_sourcefile(a1[1], a1[5], v2);
  return 0;
}
