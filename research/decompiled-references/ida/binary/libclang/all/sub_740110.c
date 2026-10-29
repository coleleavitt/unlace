__int64 __fastcall sub_740110(__int64 a1, __int64 a2)
{
  int v3; // eax
  const char *v4; // rsi

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) != 0 )
    v3 = *(_BYTE *)(a1 + 30) >> 4;
  else
    v3 = sub_C4A760(a1);
  v4 = "[[likely";
  if ( v3 )
    v4 = "[[clang::likely";
  sub_5FF0F0(a2, v4);
  return sub_5FF0F0(a2, "]]");
}

