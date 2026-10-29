__int64 __fastcall sub_7610A0(__int64 a1, __int64 a2)
{
  unsigned int v3; // eax
  bool v4; // cc
  const char *v5; // rsi
  const char *v7; // rsi

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
  {
    v3 = sub_C4A760(a1);
    v4 = v3 <= 3;
    if ( v3 != 3 )
      goto LABEL_3;
LABEL_8:
    v7 = "__attribute__((xray_never_instrument";
    goto LABEL_10;
  }
  v3 = *(_BYTE *)(a1 + 30) >> 4;
  v4 = v3 <= 3;
  if ( v3 == 3 )
    goto LABEL_8;
LABEL_3:
  if ( !v4 )
  {
    v5 = "[[clang::xray_never_instrument";
    goto LABEL_5;
  }
  v5 = "[[clang::xray_always_instrument";
  if ( v3 )
  {
LABEL_5:
    sub_5FF0F0(a2, v5);
    return sub_5FF0F0(a2, "]]");
  }
  v7 = "__attribute__((xray_always_instrument";
LABEL_10:
  sub_5FF0F0(a2, v7);
  return sub_5FF0F0(a2, "))");
}

