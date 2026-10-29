__int64 __fastcall sub_741510(__int64 a1, __int64 a2)
{
  unsigned int v3; // eax
  const char *v4; // rsi

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) != 0 )
    v3 = *(_BYTE *)(a1 + 30) >> 4;
  else
    v3 = sub_C4A760(a1);
  v4 = "__virtual_inheritance";
  if ( v3 != 2 )
  {
    v4 = "__unspecified_inheritance";
    if ( v3 <= 2 )
    {
      v4 = "__single_inheritance";
      if ( v3 )
        v4 = "__multiple_inheritance";
    }
  }
  sub_5FF0F0(a2, v4);
  return sub_5FF0F0(a2, &byte_3B9466E);
}

