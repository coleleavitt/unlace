/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003FDB0
// Address: 0x000000010003FDB0

//----- (000000010003FDB0) ----------------------------------------------------
void **__fastcall sub_10003FDB0(void **a1)
{
  if ( *a1 )
  {
    sub_100046E7C(a1, 0);
    qfree(*a1);
    *a1 = nullptr;
    a1[2] = nullptr;
  }
  return a1;
}
