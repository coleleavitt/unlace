/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_77140
// Address: 0x00077140

//----- (00077140) --------------------------------------------------------
ssize_t __fastcall sub_77140(int a1, const void *a2, size_t a3)
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
    sub_70A2C(v6);
  }
  return v5;
}
