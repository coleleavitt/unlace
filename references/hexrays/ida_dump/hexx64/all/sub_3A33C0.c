__int64 __fastcall sub_3A33C0(__int64 a1, double a2)
{
  if ( !*(_BYTE *)(a1 + 64) && *(_QWORD *)(a1 + 32) )
    qsnprintf(a1 + 64, 32, "$%a", a2);
  return a1 + 64;
}
