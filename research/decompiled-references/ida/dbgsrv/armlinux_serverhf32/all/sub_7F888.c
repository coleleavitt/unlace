/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7F888
// Address: 0x0007F888

//----- (0007F888) --------------------------------------------------------
unsigned int __fastcall sub_7F888(int a1)
{
  int v1; // r6
  unsigned int result; // r0
  char v3; // r7
  unsigned int v4; // r3
  int v5; // r4
  unsigned int v6; // r2
  bool v7; // zf
  unsigned int v8; // r5
  int v9; // r1

  if ( !a1 )
    return 0x80000000;
  v1 = a1;
  result = 0x80000000;
  v3 = 3;
  do
  {
    if ( (v1 & 1) != 0 )
    {
      v4 = result;
      v5 = dword_B59B4[v3 & 0x1F];
      result = 0;
      v6 = 0x80000000;
      while ( 1 )
      {
        v7 = (v5 & v6) == 0;
        v8 = v6 - 1;
        v9 = v4 & 1;
        v6 >>= 1;
        if ( !v7 )
        {
          result ^= v4;
          if ( (v8 & v5) == 0 )
            break;
        }
        v4 >>= 1;
        if ( v9 )
          v4 ^= 0xEDB88320;
      }
    }
    v1 >>= 1;
    ++v3;
  }
  while ( v1 );
  return result;
}
// B59B4: using guessed type int dword_B59B4[32];
