__int64 __fastcall sub_5DA250(_QWORD *a1, __int64 a2)
{
  const char *v2; // rdx
  __int64 v3; // rbp

  v2 = haystack;
  v3 = *(_QWORD *)(a1[2] + 1624LL);
  if ( a1[4] )
    v2 = (const char *)a1[3];
  sub_391AE0(a2, (__int64)"title: \"%s\"\n", v2);
  return sub_5DA140(v3, a2);
}
