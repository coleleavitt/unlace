/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: log2floor
// Address: 0x00071E52

//----- (00071E52) --------------------------------------------------------
int __fastcall log2floor(unsigned int a1, unsigned int a2)
{
  unsigned int v2; // r6
  int v3; // r4
  unsigned int v4; // r7
  unsigned int v5; // r3
  unsigned int v6; // r5
  int v7; // r2
  int v8; // r0
  int v9; // r2
  int v10; // r0
  unsigned int v12; // [sp+8h] [bp-8h]

  v12 = a2;
  if ( !a2 )
    a2 = a1;
  v2 = HIWORD(a2);
  if ( !HIWORD(a2) )
    v2 = a2;
  v3 = 1;
  v4 = v2 >> 8;
  if ( v2 <= 0xFFuLL )
    v4 = v2;
  v5 = v4 >> 4;
  if ( v4 <= 0xFuLL )
    v5 = v4;
  v6 = v5 >> 2;
  if ( v5 <= 3uLL )
    v6 = v5;
  if ( !v12 )
    v3 = 0;
  v7 = 32 * v3 + 16;
  if ( !HIWORD(a2) )
    v7 = 32 * v3;
  v8 = v7 + 8;
  if ( v2 <= 0xFFuLL )
    v8 = v7;
  v9 = v8 + 4;
  if ( v4 <= 0xFuLL )
    v9 = v8;
  v10 = v9 | 2;
  if ( v5 <= 3uLL )
    v10 = v9;
  return v10 | (v6 > 1uLL);
}
