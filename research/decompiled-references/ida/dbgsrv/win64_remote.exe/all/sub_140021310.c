/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140021310
// Address: 0x0000000140021310

//----- (0000000140021310) ----------------------------------------------------
void __fastcall sub_140021310(__int64 *a1)
{
  void **v1; // rbx

  v1 = (void **)a1[1];
  if ( v1 )
  {
    sub_140020A50(a1[1], *a1, *((_QWORD *)*v1 + 1));
    j_j_free(*v1);
  }
}
