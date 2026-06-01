/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7FDEC
// Address: 0x0007FDEC

//----- (0007FDEC) --------------------------------------------------------
unsigned int __fastcall sub_7FDEC(unsigned __int8 *a1, unsigned int a2, int a3)
{
  unsigned int v3; // r2
  unsigned __int8 *v4; // r5
  int v5; // t1

  v3 = a3 ^ a2;
  if ( a2 > 3 )
  {
    v4 = &a1[((a2 - 4) & 0xFFFFFFFC) + 4];
    do
    {
      v5 = *(_DWORD *)a1;
      a1 += 4;
      v3 = (1540483477 * v3) ^ (1540483477 * ((1540483477 * v5) ^ ((unsigned int)(1540483477 * v5) >> 24)));
    }
    while ( a1 != v4 );
    a2 &= 3u;
  }
  switch ( a2 )
  {
    case 2u:
      goto LABEL_10;
    case 3u:
      v3 ^= a1[2] << 16;
LABEL_10:
      v3 ^= a1[1] << 8;
      goto LABEL_11;
    case 1u:
LABEL_11:
      v3 = 1540483477 * (*a1 ^ v3);
      break;
  }
  return (1540483477 * (v3 ^ (v3 >> 13))) ^ ((1540483477 * (v3 ^ (v3 >> 13))) >> 15);
}
