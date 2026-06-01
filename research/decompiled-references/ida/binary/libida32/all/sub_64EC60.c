__int64 *__fastcall sub_64EC60(__int64 *a1, __int64 a2, _QWORD *a3, char a4)
{
  unsigned int v5; // r13d
  __int64 i; // rcx
  __int64 v8; // rdx

  v5 = 0;
  for ( i = 0; (unsigned __int64)(int)v5 < a3[1]; i = (int)v5 )
  {
    v8 = v5++;
    sub_64E810(a1, a2, v8, (__int64 *)(*a3 + (i << 7)), a4);
  }
  if ( a3[3] != a3[4] )
    sub_357520(a1);
  return sub_357520(a1);
}

