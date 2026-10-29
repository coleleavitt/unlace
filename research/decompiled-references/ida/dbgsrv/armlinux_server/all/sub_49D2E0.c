/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49D2E0
// Address: 0x000000000049D2E0

//----- (000000000049D2E0) ----------------------------------------------------
__int64 __fastcall sub_49D2E0(unsigned int a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // w5
  int i; // w10
  unsigned int v5; // w6
  unsigned int v6; // w3
  int v7; // w7
  int v8; // w5
  unsigned int j; // w3

  if ( a3 )
  {
    v3 = 0x80000000;
    for ( i = 3; ; ++i )
    {
      for ( ; (a3 & 1) == 0; ++i )
        a3 >>= 1;
      v5 = 0;
      v6 = 0x80000000;
      v7 = *((_DWORD *)qword_4DE920 + (i & 0x1F));
      while ( 1 )
      {
        if ( (v7 & v6) != 0 )
        {
          v5 ^= v3;
          if ( ((v6 - 1) & v7) == 0 )
            break;
        }
        v6 >>= 1;
        v3 = ((int)(v3 << 31) >> 31) & 0xEDB88320 ^ (v3 >> 1);
      }
      a3 >>= 1;
      if ( !a3 )
        break;
      v3 = v5;
    }
  }
  else
  {
    v5 = 0x80000000;
  }
  v8 = 0;
  for ( j = 0x80000000; ; j >>= 1 )
  {
    if ( (j & v5) != 0 )
    {
      v8 ^= a1;
      if ( ((j - 1) & v5) == 0 )
        break;
    }
    a1 = ((int)(a1 << 31) >> 31) & 0xEDB88320 ^ (a1 >> 1);
  }
  return v8 ^ a2;
}
// 4DE920: using guessed type __int64 qword_4DE920[16];
