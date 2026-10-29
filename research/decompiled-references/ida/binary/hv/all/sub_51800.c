unsigned __int64 __fastcall sub_51800(_QWORD *a1, __int64 *a2)
{
  const char *v2; // r13
  size_t v3; // rdx

  v2 = haystack;
  sub_51240((__int64)(a1 + 2), a2);
  if ( a1[15] )
    v2 = (const char *)a1[14];
  if ( v2 )
  {
    v3 = strlen(v2) + 1;
  }
  else
  {
    v3 = 1;
    v2 = "";
  }
  sub_3DC50(a2, v2, v3);
  return sub_51710(a1 + 17, a2);
}

