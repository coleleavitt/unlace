/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4628B8
// Address: 0x00000000004628B8

//----- (00000000004628B8) ----------------------------------------------------
void __fastcall sub_4628B8(_QWORD *a1)
{
  void *v2; // x0

  v2 = (void *)a1[1];
  *a1 = off_51ACC0;
  if ( v2 )
  {
    a1[2] = 0;
    j__free(v2);
  }
  j_j__free_0(a1);
}
// 51ACC0: using guessed type __int64 (__fastcall *off_51ACC0[3])();
