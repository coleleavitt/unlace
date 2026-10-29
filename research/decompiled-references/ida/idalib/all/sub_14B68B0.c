__int64 __fastcall sub_14B68B0(__int64 a1, unsigned __int16 a2)
{
  int v2; // eax
  unsigned int v3; // edx

  v2 = sub_FFF790(a2, *(_BYTE *)(a1 + 1952), 1);
  v3 = v2 & 0xFFFFFFF7;
  LOBYTE(v3) = (v2 & 0xFFFFFFF7) != 3;
  LOBYTE(v2) = v2 > 0;
  return v3 & v2;
}
