/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6C370
// Address: 0x0006C370

//----- (0006C370) --------------------------------------------------------
unsigned int __fastcall sub_6C370(unsigned __int64 a1)
{
  unsigned int v1; // r3
  bool v2; // cf
  unsigned int v3; // r3
  unsigned int v4; // r2
  unsigned int v5; // r4
  unsigned int v6; // r2
  unsigned int v7; // r1
  int v8; // r3
  unsigned int v9; // r2
  int v10; // r1
  unsigned int v11; // r0

  v1 = (a1 >> 1) & 0x55555555;
  v2 = (unsigned int)a1 >= v1;
  v3 = a1 - v1;
  v4 = v3 >> 2;
  v5 = HIDWORD(a1) - (((a1 >> 1 >> 32) & 0x55555555) + !v2);
  v3 &= 0x33333333u;
  v4 &= 0x33333333u;
  v2 = __CFADD__(v3, v4);
  v6 = v3 + v4;
  v7 = (v5 & 0x33333333) + v2 + ((v5 >> 2) & 0x33333333);
  v8 = (v6 >> 4) | (v7 << 28);
  v2 = __CFADD__(v8, v6);
  v9 = (v8 + v6) & 0xF0F0F0F;
  v10 = (v7 + v2 + (v7 >> 4)) & 0xF0F0F0F;
  v11 = ((((((((v10 << 8) | HIBYTE(v9)) + __CFADD__(v9 << 8, v9) + v10) << 24) | ((257 * v9) >> 8))
         + __CFADD__(v9 << 24, v9)
         + v10) << 8)
       | ((16777217 * v9) >> 24))
      + __CFADD__(v9 << 8, v9)
      + v10;
  return (v11 + __CFADD__(257 * v9, 16842752 * v9) + ((v11 << 16) | ((257 * v9) >> 16))) >> 24;
}
