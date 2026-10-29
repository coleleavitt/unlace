/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C83FC
// Address: 0x00000000000C83FC

//----- (00000000000C83FC) ----------------------------------------------------
unsigned __int64 __fastcall sub_C83FC(unsigned int a1, unsigned int a2, __int64 a3)
{
  char v3; // w10
  unsigned int v4; // w12
  int v5; // w9
  int v6; // w13
  unsigned int v7; // w14
  unsigned int v8; // w10
  unsigned int v9; // w11

  if ( a3 )
  {
    v3 = 3;
    v4 = 0x80000000;
    while ( (a3 & 1) == 0 )
    {
      v5 = v4;
LABEL_11:
      a3 >>= 1;
      ++v3;
      v4 = v5;
      if ( !a3 )
        goto LABEL_14;
    }
    v6 = dword_11E7B4[v3 & 0x1F];
    v5 = 0;
    v7 = 0x80000000;
    if ( v6 < 0 )
      goto LABEL_10;
    while ( 1 )
    {
      do
      {
        v7 >>= 1;
        if ( (v4 & 1) != 0 )
          v4 = (v4 >> 1) ^ 0xEDB88320;
        else
          v4 >>= 1;
      }
      while ( (v7 & v6) == 0 );
LABEL_10:
      v5 ^= v4;
      if ( ((v7 - 1) & v6) == 0 )
        goto LABEL_11;
    }
  }
  v5 = 0x80000000;
LABEL_14:
  v8 = 0;
  v9 = 0x80000000;
  if ( v5 < 0 )
    goto LABEL_19;
  do
  {
    do
    {
      v9 >>= 1;
      if ( (a1 & 1) != 0 )
        a1 = (a1 >> 1) ^ 0xEDB88320;
      else
        a1 >>= 1;
    }
    while ( (v9 & v5) == 0 );
LABEL_19:
    v8 ^= a1;
  }
  while ( ((v9 - 1) & v5) != 0 );
  return a2 ^ (unsigned __int64)v8;
}
// 11E7B4: using guessed type int dword_11E7B4[];
