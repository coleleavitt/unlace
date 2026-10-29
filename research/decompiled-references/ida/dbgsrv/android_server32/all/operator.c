/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: operator
// Address: 0x0008FB6C

//----- (0008FB6C) --------------------------------------------------------
unsigned int __fastcall std::__murmur2_or_cityhash<unsigned int,32u>::operator()(int a1, int *a2, unsigned int a3)
{
  int v3; // r3
  unsigned int v4; // r4
  unsigned int v5; // lr
  unsigned int v6; // r3
  unsigned __int8 *v7; // r12
  int v8; // t1
  unsigned int v9; // r1

  v3 = ~a3;
  if ( a3 == 3 || ~a3 < 0xFFFFFFFC )
    v3 = -4;
  v4 = a3;
  v5 = (v3 + a3 + 4) & 0xFFFFFFFC;
  v6 = a3;
  v7 = (unsigned __int8 *)a2 + v5;
  while ( v4 >= 4 )
  {
    v8 = *a2++;
    v4 -= 4;
    v6 = (1540483477 * v6) ^ (1540483477 * ((1540483477 * v8) ^ ((unsigned int)(1540483477 * v8) >> 24)));
  }
  v9 = a3 - v5;
  if ( a3 - v5 == 1 )
    goto LABEL_11;
  if ( v9 == 2 )
  {
LABEL_10:
    v6 ^= v7[1] << 8;
LABEL_11:
    v6 = 1540483477 * (*v7 ^ v6);
    return (1540483477 * (v6 ^ (v6 >> 13))) ^ ((1540483477 * (v6 ^ (v6 >> 13))) >> 15);
  }
  if ( v9 == 3 )
  {
    v6 ^= v7[2] << 16;
    goto LABEL_10;
  }
  return (1540483477 * (v6 ^ (v6 >> 13))) ^ ((1540483477 * (v6 ^ (v6 >> 13))) >> 15);
}
