__int64 __fastcall sub_36DFC0(_QWORD *a1, __int64 a2)
{
  char *v3; // rsi

  v3 = (char *)haystack;
  if ( a1[6] )
    v3 = (char *)a1[5];
  *(_QWORD *)(a2 + 8) = (unsigned __int8)set_name(a1[1], v3);
  return 0;
}
