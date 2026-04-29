__int64 __fastcall sub_3C5560(__int64 a1, _QWORD *a2, char a3, double a4)
{
  const char *v4; // r13
  int tinfo_size; // eax

  v4 = s1;
  if ( a2[3] )
    v4 = (const char *)a2[2];
  if ( (int)sub_3C5170(v4) < 0 )
    return 1;
  tinfo_size = get_tinfo_size(0, a2[8], 0);
  return sub_3C5490(a1, v4, tinfo_size, a3, a4);
}
