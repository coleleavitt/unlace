/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qtell
// Address: 0x00000000000C1E30

//----- (00000000000C1E30) ----------------------------------------------------
__off_t __fastcall qtell(int a1)
{
  __off_t v1; // rbx

  v1 = lseek(a1, 0, 1);
  if ( v1 == -1 )
    set_qerrno(1u);
  return v1;
}
