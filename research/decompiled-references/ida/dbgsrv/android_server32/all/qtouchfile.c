/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qtouchfile
// Address: 0x0007E04C

//----- (0007E04C) --------------------------------------------------------
int __fastcall qtouchfile(const char *a1)
{
  int v1; // r4

  v1 = utime(a1, nullptr);
  if ( v1 != -1 )
    return v1;
  set_qerrno(1);
  return -1;
}
