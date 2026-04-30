__int64 __fastcall sub_3D5770(double a1, __int64 a2, const char *a3, __int64 a4, __int64 a5)
{
  if ( *(_WORD *)(a4 + 24) != 4 )
    return 2;
  if ( *(_QWORD *)(a4 + 8) )
    sub_23ACE0(*(const char **)a4, a3, a4, a5, a1);
  else
    sub_23ACE0(&s1, a3, a4, a5, a1);
  return 0;
}
