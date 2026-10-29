/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qseek
// Address: 0x00000000000C1E60

//----- (00000000000C1E60) ----------------------------------------------------
__off_t __fastcall qseek(int a1, __off_t a2, int a3)
{
  __off_t v3; // rbx

  v3 = lseek(a1, a2, a3);
  if ( v3 == -1 )
    set_qerrno(1u);
  return v3;
}
