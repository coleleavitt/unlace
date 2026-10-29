/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_479450
// Address: 0x0000000000479450

//----- (0000000000479450) ----------------------------------------------------
__int64 __fastcall sub_479450(int a1, unsigned __int8 a2)
{
  int v3; // w20
  int v4; // w0
  unsigned int v5; // w2

  v3 = a2;
  v4 = fcntl(a1, 3, 0);
  v5 = 0;
  if ( v4 != -1 )
  {
    v5 = 1;
    if ( (((v4 ^ 0x800u) >> 11) & 1) != v3 )
      return fcntl(a1, 4, v4 ^ 0x800u) == 0;
  }
  return v5;
}
