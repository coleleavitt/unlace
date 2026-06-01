/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qclose
// Address: 0x00000000000C1CC0

//----- (00000000000C1CC0) ----------------------------------------------------
__int64 __fastcall qclose(int a1)
{
  unsigned int v1; // ebx

  v1 = close(a1);
  if ( v1 == -1 )
    set_qerrno(1u);
  return v1;
}
