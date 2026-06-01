/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6B3D4
// Address: 0x0006B3D4

//----- (0006B3D4) --------------------------------------------------------
int __fastcall sub_6B3D4(unsigned int a1)
{
  unsigned int v2; // r2
  unsigned int v3; // r3
  int result; // r0
  bool v5; // cc
  bool v6; // cc
  int v7; // r0

  if ( a1 > 0x7F )
  {
    v7 = sub_6B24C(a1);
    v2 = (unsigned __int16)v7;
    v3 = BYTE2(v7);
  }
  else
  {
    v2 = LOWORD(dword_A0424[a1]);
    v3 = BYTE2(dword_A0424[a1]);
  }
  if ( v3 <= 1 )
    return 0;
  v5 = v2 > 0x122;
  if ( v2 != 290 )
    v5 = a1 - 8232 > 6;
  result = !v5;
  if ( v2 == 270 )
    result |= 1u;
  if ( result )
    return 0;
  v6 = a1 > 0x61C;
  if ( a1 != 1564 )
    v6 = a1 - 8206 > 1;
  if ( v6 )
    return v3 != 5;
  return result;
}
// A0424: using guessed type int dword_A0424[157];
