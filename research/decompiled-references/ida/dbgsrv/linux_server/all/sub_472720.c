/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_472720
// Address: 0x0000000000472720

//----- (0000000000472720) ----------------------------------------------------
void __fastcall sub_472720(_QWORD *a1)
{
  void *v1; // rax

  v1 = (void *)a1[1];
  if ( v1 )
  {
    a1[2] = 0;
    j__free(v1);
  }
}
