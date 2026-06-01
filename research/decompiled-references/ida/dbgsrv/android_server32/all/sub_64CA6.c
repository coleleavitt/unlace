/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_64CA6
// Address: 0x00064CA6

//----- (00064CA6) --------------------------------------------------------
void *__fastcall sub_64CA6(int a1, int *a2, signed int a3)
{
  void **v6; // r6
  void *result; // r0

  v6 = (void **)(a1 + 20);
  sub_1B7F4((int *)(a1 + 20), 0);
  result = *(void **)(a1 + 28);
  if ( (unsigned int)result < a3 )
  {
    result = qvector_reserve((int)v6, *v6, a3, 0x20u);
    *v6 = result;
  }
  if ( a3 >= 1 )
  {
    do
    {
      result = (void *)sub_64CE8((int)v6, a2);
      --a3;
      a2 += 8;
    }
    while ( a3 );
  }
  return result;
}
