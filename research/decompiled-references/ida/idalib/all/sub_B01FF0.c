__int64 __fastcall sub_B01FF0(__int64 a1, __int64 a2)
{
  int v3; // eax
  const char *v4; // rsi

  if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
    v3 = sub_FA77D0(a1);
  else
    v3 = *(_BYTE *)(a1 + 34) >> 4;
  v4 = "[[msvc::no_unique_address";
  if ( !v3 )
    v4 = "[[no_unique_address";
  sub_995540(a2, v4);
  return sub_995540(a2, "]]");
}
