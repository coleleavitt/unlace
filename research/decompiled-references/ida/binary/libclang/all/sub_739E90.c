__int64 __fastcall sub_739E90(__int64 a1, __int64 a2)
{
  unsigned int v3; // eax
  bool v4; // cc
  const char *v5; // rsi

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
  {
    v3 = sub_C4A760(a1);
    v4 = v3 <= 3;
    if ( v3 != 3 )
      goto LABEL_3;
LABEL_8:
    sub_5FF0F0(a2, "__attribute__((fallthrough");
    return sub_5FF0F0(a2, "))");
  }
  v3 = *(_BYTE *)(a1 + 30) >> 4;
  v4 = v3 <= 3;
  if ( v3 == 3 )
    goto LABEL_8;
LABEL_3:
  v5 = "[[gnu::fallthrough";
  if ( v4 )
  {
    v5 = "[[fallthrough";
    if ( v3 == 2 )
      v5 = "[[clang::fallthrough";
  }
  sub_5FF0F0(a2, v5);
  return sub_5FF0F0(a2, "]]");
}

