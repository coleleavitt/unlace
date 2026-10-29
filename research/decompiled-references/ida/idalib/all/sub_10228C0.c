__int64 __fastcall sub_10228C0(__int64 a1, int a2, bool *a3)
{
  __int64 v4; // rax

  if ( a3 )
    *a3 = a2 == 0;
  if ( !a2 )
    return 0;
  v4 = sub_1021920(a1, a2);
  return sub_1022630(a1, v4, SHIDWORD(v4), nullptr);
}
