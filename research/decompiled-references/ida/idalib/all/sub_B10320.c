__int64 __fastcall sub_B10320(__int64 a1, __int64 a2)
{
  int v2; // eax

  if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
    v2 = sub_FA77D0(a1);
  else
    v2 = *(_BYTE *)(a1 + 34) >> 4;
  if ( v2 == 1 )
  {
    sub_995540(a2, "__attribute__((require_constant_initialization");
    return sub_995540(a2, "))");
  }
  else if ( v2 )
  {
    sub_995540(a2, "[[clang::require_constant_initialization");
    return sub_995540(a2, "]]");
  }
  else
  {
    sub_995540(a2, "constinit");
    return sub_995540(a2, &byte_22F0C30);
  }
}
