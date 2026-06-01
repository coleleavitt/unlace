/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000455A0
// Address: 0x00000001000455A0

//----- (00000001000455A0) ----------------------------------------------------
void __fastcall sub_1000455A0(void **a1)
{
  if ( *a1 )
  {
    sub_10004CD30(a1, 0);
    qfree(*a1);
    *a1 = nullptr;
    a1[2] = nullptr;
  }
}
