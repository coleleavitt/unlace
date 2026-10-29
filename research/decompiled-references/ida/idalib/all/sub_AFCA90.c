__int64 __fastcall sub_AFCA90(__int64 a1, __int64 a2)
{
  int v3; // eax
  const char *v4; // rsi

  if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
    v3 = sub_FA77D0(a1);
  else
    v3 = *(_BYTE *)(a1 + 34) >> 4;
  v4 = "[[clang::unlikely";
  if ( !v3 )
    v4 = "[[unlikely";
  sub_995540(a2, v4);
  return sub_995540(a2, "]]");
}
