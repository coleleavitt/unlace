/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C855C
// Address: 0x00000000000C855C

//----- (00000000000C855C) ----------------------------------------------------
__int64 __fastcall sub_C855C(__int64 a1)
{
  char v1; // w8
  unsigned int v2; // w12
  unsigned int v3; // w11
  int v4; // w13
  unsigned int v5; // w14

  if ( a1 )
  {
    v1 = 3;
    v2 = 0x80000000;
    while ( (a1 & 1) == 0 )
    {
      v3 = v2;
LABEL_11:
      a1 >>= 1;
      ++v1;
      v2 = v3;
      if ( !a1 )
        return v3;
    }
    v4 = dword_11E7B4[v1 & 0x1F];
    v3 = 0;
    v5 = 0x80000000;
    if ( v4 < 0 )
      goto LABEL_10;
    while ( 1 )
    {
      do
      {
        v5 >>= 1;
        if ( (v2 & 1) != 0 )
          v2 = (v2 >> 1) ^ 0xEDB88320;
        else
          v2 >>= 1;
      }
      while ( (v5 & v4) == 0 );
LABEL_10:
      v3 ^= v2;
      if ( ((v5 - 1) & v4) == 0 )
        goto LABEL_11;
    }
  }
  return 0x80000000LL;
}
// 11E7B4: using guessed type int dword_11E7B4[];
