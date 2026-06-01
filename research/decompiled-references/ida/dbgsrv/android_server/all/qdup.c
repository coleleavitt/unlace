/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qdup
// Address: 0x00000000000BD234

//----- (00000000000BD234) ----------------------------------------------------
__int64 __fastcall qdup(int a1)
{
  unsigned int v1; // w19

  v1 = dup(a1);
  if ( v1 == -1 )
    set_qerrno(1u);
  return v1;
}
