/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_480B2D
// Address: 0x00480B2D

//----- (00480B2D) --------------------------------------------------------
unsigned int sub_480B2D()
{
  int v0; // esi
  unsigned int v1; // ecx
  int v2; // eax
  _WORD v4[14]; // [esp+8h] [ebp-20h] BYREF
  int v5; // [esp+24h] [ebp-4h]

  memset(v4, 0, sizeof(v4));
  __asm
  {
    fnstenv byte ptr [ebp+var_20]
    fldenv  byte ptr [ebp+var_20]
  }
  v0 = sub_4808AA(v4[0] & 0x1F3F);
  if ( dword_4B7844 >= 1 )
  {
    v5 = _mm_getcsr();
    v1 = v5 & 0xFFC0;
  }
  else
  {
    v1 = 0;
  }
  v2 = sub_4807EE(v1);
  return v0 | ((v0 & 0x300 | (4 * (v0 & 0x3F | ((v2 & 0xFFFFFF00 | (4 * (v2 & 0x3F))) << 6)))) << 14) | v2;
}
// 4B7844: using guessed type int dword_4B7844;
