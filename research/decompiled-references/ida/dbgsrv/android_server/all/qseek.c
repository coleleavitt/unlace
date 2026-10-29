/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qseek
// Address: 0x00000000000BD20C

//----- (00000000000BD20C) ----------------------------------------------------
__off_t __fastcall qseek(int a1, __off_t a2, int a3)
{
  __off_t v3; // x19

  v3 = lseek(a1, a2, a3);
  if ( v3 == -1 )
    set_qerrno(1u);
  return v3;
}
