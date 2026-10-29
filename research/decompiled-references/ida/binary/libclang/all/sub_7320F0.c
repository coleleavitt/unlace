__int64 __fastcall sub_7320F0(__int64 a1, __int64 a2)
{
  unsigned int v3; // eax
  const char *v4; // rsi

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) != 0 )
    v3 = *(_BYTE *)(a1 + 30) >> 4;
  else
    v3 = sub_C4A760(a1);
  v4 = "[[noreturn";
  if ( v3 > 1 )
    v4 = "[[_Noreturn";
  sub_5FF0F0(a2, v4);
  return sub_5FF0F0(a2, "]]");
}

