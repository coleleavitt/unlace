/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: func
// Address: 0x0000000100023FF0

//----- (0000000100023FF0) ----------------------------------------------------
void __fastcall func(void **a1)
{
  void *v2; // rdi

  v2 = *a1;
  if ( v2 )
  {
    a1[1] = nullptr;
    qfree(v2);
    *a1 = nullptr;
    a1[2] = nullptr;
  }
}
