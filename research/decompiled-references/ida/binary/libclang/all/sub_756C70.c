__int64 __fastcall sub_756C70(__int64 a1, __int64 a2)
{
  unsigned int v3; // eax
  const char *v5; // rsi

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) != 0 )
    v3 = *(_BYTE *)(a1 + 30) >> 4;
  else
    v3 = sub_C4A760(a1);
  if ( v3 > 2 )
  {
    v5 = "__stdcall";
    if ( v3 != 3 )
      v5 = "_stdcall";
    sub_5FF0F0(a2, v5);
    return sub_5FF0F0(a2, &byte_3B9466E);
  }
  else if ( v3 )
  {
    sub_5FF0F0(a2, "[[gnu::stdcall");
    return sub_5FF0F0(a2, "]]");
  }
  else
  {
    sub_5FF0F0(a2, "__attribute__((stdcall");
    return sub_5FF0F0(a2, "))");
  }
}

