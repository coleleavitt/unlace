/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47FCC0
// Address: 0x000000000047FCC0

//----- (000000000047FCC0) ----------------------------------------------------
__int64 __fastcall sub_47FCC0(unsigned __int64 a1)
{
  unsigned int v1; // w1

  v1 = 0;
  if ( a1 > 0xFFFFFFFF )
  {
    a1 >>= 32;
    v1 = 32;
  }
  if ( a1 > 0xFFFF )
  {
    a1 >>= 16;
    v1 |= 0x10u;
  }
  if ( a1 > 0xFF )
  {
    a1 >>= 8;
    v1 |= 8u;
  }
  if ( a1 > 0xF )
  {
    a1 >>= 4;
    v1 |= 4u;
  }
  if ( a1 > 3 )
  {
    a1 >>= 2;
    v1 |= 2u;
  }
  if ( a1 <= 1 )
    return v1;
  else
    return v1 | 1;
}
