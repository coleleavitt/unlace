/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: fopenWT
// Address: 0x00000000000BAEF8

//----- (00000000000BAEF8) ----------------------------------------------------
FILE *__fastcall fopenWT(const char *a1)
{
  FILE *v1; // x19

  v1 = sub_BAD80(a1, "wte", 1);
  if ( !v1 )
    set_qerrno(1u);
  return v1;
}
