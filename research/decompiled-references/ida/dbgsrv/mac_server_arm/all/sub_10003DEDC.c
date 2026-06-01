/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003DEDC
// Address: 0x000000010003DEDC

//----- (000000010003DEDC) ----------------------------------------------------
void **__fastcall sub_10003DEDC(void **a1)
{
  if ( *a1 )
  {
    sub_100044E2C(a1, 0);
    qfree(*a1);
    *a1 = nullptr;
    a1[2] = nullptr;
  }
  return a1;
}
