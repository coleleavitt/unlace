/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_84798
// Address: 0x00084798

//----- (00084798) --------------------------------------------------------
bool __fastcall sub_84798(unsigned __int8 *a1)
{
  int v1; // r2
  bool v2; // zf
  int v3; // r3
  int v5; // r3
  unsigned int v6; // r0
  unsigned int v7; // r3
  bool v8; // cc

  v1 = *a1;
  v2 = v1 == 86;
  if ( v1 != 86 )
    v2 = v1 == 114;
  v3 = v2;
  if ( v1 == 75 )
    v3 |= 1u;
  if ( v3 )
    return 1;
  if ( v1 != 68 )
    return 0;
  v5 = a1[1];
  v6 = v5 - 119;
  v7 = v5 & 0xDF;
  v8 = v7 > 0x4F;
  if ( v7 != 79 )
    v8 = v6 > 1;
  return !v8;
}
