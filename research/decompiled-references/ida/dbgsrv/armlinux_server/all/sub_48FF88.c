/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48FF88
// Address: 0x000000000048FF88

//----- (000000000048FF88) ----------------------------------------------------
__int64 __fastcall sub_48FF88(int a1)
{
  unsigned int v1; // w19

  v1 = close(a1);
  if ( v1 != -1 )
    return v1;
  sub_4869C8(1);
  return 0xFFFFFFFFLL;
}
