void *__fastcall sub_7E1590(_QWORD *a1, __int64 *a2)
{
  const char *v3; // rsi
  const char *v4; // rsi

  v3 = haystack;
  if ( a1[3] )
    v3 = (const char *)a1[2];
  sub_649F10(a2, v3);
  v4 = haystack;
  if ( a1[6] )
    v4 = (const char *)a1[5];
  return sub_649F10(a2, v4);
}
