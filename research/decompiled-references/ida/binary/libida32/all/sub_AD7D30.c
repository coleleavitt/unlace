__int64 __fastcall sub_AD7D30(__int64 a1, __int64 a2)
{
  int v3; // eax
  const char *v4; // rsi
  const char *v6; // rsi

  if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
    v3 = sub_F83A90(a1);
  else
    v3 = *(_BYTE *)(a1 + 34) >> 4;
  switch ( v3 )
  {
    case 0:
      v6 = "__attribute__((xray_always_instrument";
      goto LABEL_9;
    case 1:
    case 2:
      v4 = "[[clang::xray_always_instrument";
      goto LABEL_5;
    case 3:
      v6 = "__attribute__((xray_never_instrument";
LABEL_9:
      sub_971800(a2, v6);
      return sub_971800(a2, "))");
    case 4:
    case 5:
      v4 = "[[clang::xray_never_instrument";
LABEL_5:
      sub_971800(a2, v4);
      return sub_971800(a2, "]]");
  }
}

