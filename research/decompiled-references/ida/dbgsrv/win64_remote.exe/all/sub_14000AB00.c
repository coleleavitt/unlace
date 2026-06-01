/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000AB00
// Address: 0x000000014000AB00

//----- (000000014000AB00) ----------------------------------------------------
void __fastcall sub_14000AB00(_QWORD *a1)
{
  void *v2; // rcx

  v2 = (void *)a1[9];
  if ( v2 )
  {
    a1[10] = 0;
    j_free(v2);
    a1[9] = 0;
    a1[11] = 0;
  }
}
