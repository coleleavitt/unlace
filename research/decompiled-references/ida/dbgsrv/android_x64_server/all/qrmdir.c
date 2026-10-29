/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qrmdir
// Address: 0x00000000000C1EE0

//----- (00000000000C1EE0) ----------------------------------------------------
__int64 __fastcall qrmdir(const char *a1)
{
  unsigned int v1; // ebx

  v1 = rmdir(a1);
  if ( v1 == -1 )
    set_qerrno(1u);
  return v1;
}
