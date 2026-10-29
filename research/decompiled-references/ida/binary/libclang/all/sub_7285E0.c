__int64 __fastcall sub_7285E0(__int64 a1, __int64 a2)
{
  unsigned int v3; // eax
  const char *v4; // rsi

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
  {
    v3 = sub_C4A760(a1);
    if ( v3 <= 4 )
      goto LABEL_3;
LABEL_8:
    sub_5FF0F0(a2, "__forceinline");
    return sub_5FF0F0(a2, &byte_3B9466E);
  }
  v3 = *(_BYTE *)(a1 + 30) >> 4;
  if ( v3 > 4 )
    goto LABEL_8;
LABEL_3:
  if ( v3 > 2 )
  {
    v4 = "[[clang::always_inline";
    goto LABEL_5;
  }
  v4 = "[[gnu::always_inline";
  if ( v3 )
  {
LABEL_5:
    sub_5FF0F0(a2, v4);
    return sub_5FF0F0(a2, "]]");
  }
  sub_5FF0F0(a2, "__attribute__((always_inline");
  return sub_5FF0F0(a2, "))");
}

