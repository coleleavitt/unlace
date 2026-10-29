/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qdup
// Address: 0x00000000000C1E80

//----- (00000000000C1E80) ----------------------------------------------------
__int64 __fastcall qdup(int a1)
{
  unsigned int v1; // ebx

  v1 = dup(a1);
  if ( v1 == -1 )
    set_qerrno(1u);
  return v1;
}
