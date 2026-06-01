__int64 __fastcall sub_74C4C0(__int64 a1, __int64 a2)
{
  int v2; // eax

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) != 0 )
    v2 = *(_BYTE *)(a1 + 30) >> 4;
  else
    v2 = sub_C4A760(a1);
  if ( v2 )
  {
    sub_5FF0F0(a2, "[[clang::objc_precise_lifetime");
    return sub_5FF0F0(a2, "]]");
  }
  else
  {
    sub_5FF0F0(a2, "__attribute__((objc_precise_lifetime");
    return sub_5FF0F0(a2, "))");
  }
}

