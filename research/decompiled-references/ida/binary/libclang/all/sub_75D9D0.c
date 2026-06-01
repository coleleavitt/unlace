__int64 __fastcall sub_75D9D0(__int64 a1, __int64 a2)
{
  unsigned int v3; // eax
  const char *v4; // rsi

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) != 0 )
    v3 = *(_BYTE *)(a1 + 30) >> 4;
  else
    v3 = sub_C4A760(a1);
  if ( v3 > 3 )
    goto LABEL_8;
  v4 = "[[gnu::unused";
  if ( v3 > 1 )
  {
LABEL_5:
    sub_5FF0F0(a2, v4);
    return sub_5FF0F0(a2, "]]");
  }
  if ( !v3 )
  {
LABEL_8:
    v4 = "[[maybe_unused";
    goto LABEL_5;
  }
  sub_5FF0F0(a2, "__attribute__((unused");
  return sub_5FF0F0(a2, "))");
}

