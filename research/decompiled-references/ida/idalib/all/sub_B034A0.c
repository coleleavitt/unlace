__int64 __fastcall sub_B034A0(__int64 a1, __int64 a2)
{
  int v3; // eax
  const char *v4; // rsi

  if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
    v3 = sub_FA77D0(a1);
  else
    v3 = *(_BYTE *)(a1 + 34) >> 4;
  v4 = "__multiple_inheritance";
  if ( v3 != 1 )
  {
    v4 = "__single_inheritance";
    if ( v3 )
    {
      v4 = "__unspecified_inheritance";
      if ( v3 == 2 )
        v4 = "__virtual_inheritance";
    }
  }
  sub_995540(a2, v4);
  return sub_995540(a2, &byte_22F0C30);
}
