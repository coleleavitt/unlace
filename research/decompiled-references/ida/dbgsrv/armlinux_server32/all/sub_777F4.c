/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_777F4
// Address: 0x000777F4

//----- (000777F4) --------------------------------------------------------
int __fastcall sub_777F4(FILE *s, void *ptr, size_t a3)
{
  int v4; // r5
  signed int v6; // r0
  int v7; // r0

  if ( !s )
  {
    v4 = -1;
    sub_70B98(1);
    *_errno_location() = 9;
    sub_70B98(1);
    return v4;
  }
  v4 = a3;
  if ( !a3 )
    return v4;
  v6 = fwrite(ptr, 1u, a3, s);
  v4 = v6;
  if ( a3 == v6 )
    return v4;
  if ( v6 <= 0 )
    v7 = 1;
  else
    v7 = 2;
  sub_70B98(v7);
  return v4;
}
