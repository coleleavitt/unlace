__int64 __fastcall sub_36DF80(_QWORD *a1, __int64 a2)
{
  const char *v3; // rsi

  v3 = haystack;
  if ( a1[6] )
    v3 = (const char *)a1[5];
  *(_QWORD *)(a2 + 8) = (unsigned __int8)set_cmt(a1[1], v3, a1[9] != 0);
  return 0;
}
