/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qunlink
// Address: 0x00000000000BD870

//----- (00000000000BD870) ----------------------------------------------------
__int64 __fastcall qunlink(const char *a1)
{
  unsigned int v1; // w19

  v1 = unlink(a1);
  if ( v1 )
    set_qerrno(1u);
  return v1;
}
