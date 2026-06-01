/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qchsize
// Address: 0x00000000000C1D60

//----- (00000000000C1D60) ----------------------------------------------------
__int64 __fastcall qchsize(int a1, __off_t a2)
{
  if ( !ftruncate(a1, a2) )
    return 0;
  set_qerrno(1u);
  return 0xFFFFFFFFLL;
}
