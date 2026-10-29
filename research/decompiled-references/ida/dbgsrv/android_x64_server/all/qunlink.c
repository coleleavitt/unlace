/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qunlink
// Address: 0x00000000000C2500

//----- (00000000000C2500) ----------------------------------------------------
__int64 __fastcall qunlink(const char *a1)
{
  unsigned int v1; // ebx

  v1 = unlink(a1);
  if ( v1 )
    set_qerrno(1u);
  return v1;
}
