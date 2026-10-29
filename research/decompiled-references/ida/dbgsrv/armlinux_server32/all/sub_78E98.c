/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_78E98
// Address: 0x00078E98

//----- (00078E98) --------------------------------------------------------
bool __fastcall sub_78E98(void *a1, size_t a2)
{
  int v4; // r0
  _BOOL4 v5; // r4
  int v6; // r5

  v4 = open("/dev/urandom", 0);
  if ( v4 == -1 )
    return 0;
  v6 = v4;
  v5 = read(v4, a1, a2) == a2;
  close(v6);
  return v5;
}
