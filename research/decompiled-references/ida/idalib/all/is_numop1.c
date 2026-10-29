__int64 __fastcall is_numop1(int a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // eax
  void *v5; // rdx

  v5 = (void *)(a1 & 0xF000000);
  LOBYTE(v4) = (a1 & 0xB000000) == 0x2000000;
  LOBYTE(a4) = v5 == (void *)117440512;
  LOBYTE(v5) = v5 == &loc_1000000;
  return (unsigned int)v5 | a4 | v4;
}
