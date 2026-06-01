/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qwrite
// Address: 0x00000000000C1DF0

//----- (00000000000C1DF0) ----------------------------------------------------
__int64 __fastcall qwrite(int a1, const void *a2, size_t a3)
{
  unsigned int v4; // r14d

  v4 = write(a1, a2, a3);
  if ( v4 != a3 )
    set_qerrno(2 - (v4 == -1));
  return v4;
}
