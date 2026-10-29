/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_85514
// Address: 0x00085514

//----- (00085514) --------------------------------------------------------
int __fastcall sub_85514(unsigned int a1, int a2, int a3)
{
  unsigned int v3; // r6
  unsigned int v4; // r4
  int v5; // r3
  int v6; // r7
  unsigned int v7; // r1
  unsigned int v8; // r3
  unsigned int v9; // r6
  int v10; // r2
  unsigned int v11; // r3
  unsigned int v14; // [sp+8h] [bp-Ch]
  int v15; // [sp+10h] [bp-4h]

  v3 = 0x80000000;
  v4 = 0x80000000;
  if ( a3 )
  {
    v5 = 3;
    v4 = 0x80000000;
    v14 = a1;
    while ( 1 )
    {
      v15 = v5;
      if ( a3 << 31 )
        break;
LABEL_10:
      v5 = v15 + 1;
      a3 >>= 1;
      v3 = 0x80000000;
      a1 = v14;
      if ( !a3 )
        goto LABEL_11;
    }
    v6 = dword_C7D7C[v5 & 0x1F];
    v7 = v4;
    v8 = 0x80000000;
    v4 = 0;
    if ( v6 < 0 )
      goto LABEL_7;
    while ( 1 )
    {
      do
      {
        v9 = v7 >> 1;
        if ( v7 << 31 )
          v9 = (v7 >> 1) ^ 0xEDB88320;
        v8 >>= 1;
        v7 = v9;
      }
      while ( (v8 & v6) == 0 );
LABEL_7:
      v4 ^= v7;
      if ( ((v8 - 1) & v6) == 0 )
        goto LABEL_10;
    }
  }
LABEL_11:
  v10 = 0;
  if ( (v4 & 0x80000000) != 0 )
    goto LABEL_14;
  do
  {
    do
    {
      v11 = a1 >> 1;
      if ( a1 << 31 )
        v11 = (a1 >> 1) ^ 0xEDB88320;
      v3 >>= 1;
      a1 = v11;
    }
    while ( (v3 & v4) == 0 );
LABEL_14:
    v10 ^= a1;
  }
  while ( ((v3 - 1) & v4) != 0 );
  return v10 ^ a2;
}
// C7D7C: using guessed type int dword_C7D7C[32];
