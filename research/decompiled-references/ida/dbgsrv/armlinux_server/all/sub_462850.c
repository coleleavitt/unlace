/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_462850
// Address: 0x0000000000462850

//----- (0000000000462850) ----------------------------------------------------
void __fastcall sub_462850(_QWORD *a1)
{
  void *v1; // x2

  v1 = (void *)a1[1];
  *a1 = off_51ACC0;
  if ( v1 )
  {
    a1[2] = 0;
    j__free(v1);
  }
}
// 51ACC0: using guessed type __int64 (__fastcall *off_51ACC0[3])();
