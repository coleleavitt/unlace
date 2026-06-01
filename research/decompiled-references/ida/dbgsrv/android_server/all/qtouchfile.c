/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qtouchfile
// Address: 0x00000000000BD574

//----- (00000000000BD574) ----------------------------------------------------
__int64 __fastcall qtouchfile(const char *a1)
{
  unsigned int v1; // w19

  v1 = utime(a1, nullptr);
  if ( v1 == -1 )
    set_qerrno(1u);
  return v1;
}
