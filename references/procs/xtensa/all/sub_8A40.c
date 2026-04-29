void __fastcall sub_8A40(__int64 a1, __int64 a2, unsigned int a3)
{
  *(_BYTE *)(a2 + 41) = 1;
  *(_BYTE *)(a2 + 45) = 0;
  *(_WORD *)(a2 + 46) = (a3 >> 8) & 0xF;
}
