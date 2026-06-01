/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qrename
// Address: 0x00000000000BD8B8

//----- (00000000000BD8B8) ----------------------------------------------------
__int64 __fastcall qrename(const char *a1, const char *a2)
{
  unsigned int v2; // w19

  v2 = rename(a1, a2);
  if ( v2 )
    set_qerrno(1u);
  return v2;
}
