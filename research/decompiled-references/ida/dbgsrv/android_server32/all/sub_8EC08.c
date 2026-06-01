/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8EC08
// Address: 0x0008EC08

//----- (0008EC08) --------------------------------------------------------
int __fastcall sub_8EC08(unsigned int a1, unsigned int a2, int a3)
{
  int result; // r0
  unsigned __int16 v5; // r3
  unsigned int v6; // r0
  unsigned int v7; // r1
  int v8; // r0
  unsigned int v9; // r3
  unsigned int v10; // r1
  unsigned int v11; // r2

  result = -1;
  if ( a3 >= 0 )
  {
    v5 = a2;
    v6 = HIWORD(a1) + HIWORD(a2) + 65521 - a3 % 0xFFF1u + (unsigned __int16)a1 * (a3 % 0xFFF1u) % 0xFFF1;
    v7 = v6 - 131042;
    if ( v6 <= 0x1FFE1 )
      v7 = v6;
    v8 = (v7 << 16) + 983040;
    if ( v7 <= 0xFFF0 )
      v8 = v7 << 16;
    v9 = (unsigned __int16)a1 + v5 + 65520;
    v10 = v9 - 65521;
    if ( v9 <= 0xFFF0 )
      v10 = v9;
    v11 = v10 - 65521;
    if ( v10 <= 0xFFF0 )
      v11 = v10;
    return v8 | v11;
  }
  return result;
}
