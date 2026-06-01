/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qclose
// Address: 0x00000000000BD05C

//----- (00000000000BD05C) ----------------------------------------------------
__int64 __fastcall qclose(int a1)
{
  unsigned int v1; // w19

  v1 = close(a1);
  if ( v1 == -1 )
    set_qerrno(1u);
  return v1;
}
