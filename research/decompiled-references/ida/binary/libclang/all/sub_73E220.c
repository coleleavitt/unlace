__int64 __fastcall sub_73E220(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) != 0 )
    v2 = *(_BYTE *)(a1 + 30) >> 4;
  else
    v2 = sub_C4A760(a1);
  if ( v2 > 1 )
  {
    sub_5FF0F0(a2, "[[clang::hybrid_patchable");
    return sub_5FF0F0(a2, "]]");
  }
  else if ( v2 )
  {
    sub_5FF0F0(a2, "__attribute__((hybrid_patchable");
    return sub_5FF0F0(a2, "))");
  }
  else
  {
    sub_5FF0F0(a2, "__declspec(hybrid_patchable");
    return sub_5FF0F0(a2, ")");
  }
}

