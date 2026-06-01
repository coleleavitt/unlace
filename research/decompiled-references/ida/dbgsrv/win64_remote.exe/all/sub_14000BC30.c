/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000BC30
// Address: 0x000000014000BC30

//----- (000000014000BC30) ----------------------------------------------------
void __fastcall sub_14000BC30(_QWORD *a1)
{
  void *v2; // rcx

  v2 = (void *)a1[101];
  if ( v2 )
  {
    a1[102] = 0;
    j_free(v2);
    a1[101] = 0;
    a1[103] = 0;
  }
  sub_14000B140((__int64)a1);
}
