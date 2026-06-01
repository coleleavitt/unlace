__int64 __fastcall sub_36AC00(_QWORD *a1, __int64 a2)
{
  const char *v3; // rsi

  v3 = haystack;
  if ( a1[6] )
    v3 = (const char *)a1[5];
  *(_QWORD *)(a2 + 8) = (unsigned __int8)netnode_hashdel(a1[1], v3, 72);
  return 0;
}
