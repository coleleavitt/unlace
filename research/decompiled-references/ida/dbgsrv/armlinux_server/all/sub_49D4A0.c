/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49D4A0
// Address: 0x000000000049D4A0

//----- (000000000049D4A0) ----------------------------------------------------
__int64 __fastcall sub_49D4A0(__int64 a1)
{
  unsigned int v1; // w3
  int i; // w8
  unsigned int v3; // w6
  unsigned int v4; // w1
  int v5; // w4

  if ( !a1 )
    return 0x80000000LL;
  v1 = 0x80000000;
  for ( i = 3; ; ++i )
  {
    for ( ; (a1 & 1) == 0; ++i )
      a1 >>= 1;
    v3 = 0;
    v4 = 0x80000000;
    v5 = *((_DWORD *)qword_4DE920 + (i & 0x1F));
    while ( 1 )
    {
      if ( (v5 & v4) != 0 )
      {
        v3 ^= v1;
        if ( ((v4 - 1) & v5) == 0 )
          break;
      }
      v4 >>= 1;
      v1 = ((int)(v1 << 31) >> 31) & 0xEDB88320 ^ (v1 >> 1);
    }
    a1 >>= 1;
    if ( !a1 )
      break;
    v1 = v3;
  }
  return v3;
}
// 4DE920: using guessed type __int64 qword_4DE920[16];
