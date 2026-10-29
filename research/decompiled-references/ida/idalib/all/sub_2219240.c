__int64 __fastcall sub_2219240(unsigned int a1, __int64 a2, int a3)
{
  unsigned int v3; // eax

  v3 = a1 - 57344;
  LOBYTE(v3) = a1 - 57344 <= 0x1FFF;
  LOBYTE(a3) = a1 <= 0xD7FF;
  return a3 | v3;
}
