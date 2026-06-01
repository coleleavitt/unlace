/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_772A8
// Address: 0x000772A8

//----- (000772A8) --------------------------------------------------------
ssize_t __fastcall sub_772A8(int a1, const void *a2, size_t a3)
{
  ssize_t v4; // r0
  ssize_t v5; // r4
  int v6; // r0

  v4 = write(a1, a2, a3);
  v5 = v4;
  if ( v4 != a3 )
  {
    if ( v4 == -1 )
      v6 = 1;
    else
      v6 = 2;
    sub_70B98(v6);
  }
  return v5;
}
