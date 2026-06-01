/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42B680
// Address: 0x000000000042B680

//----- (000000000042B680) ----------------------------------------------------
_QWORD *__usercall sub_42B680@<X0>(__int64 a1@<X0>, __int64 a2@<X1>, unsigned int a3@<W2>, _QWORD *a4@<X8>)
{
  *a4 = 0;
  a4[1] = 0;
  a4[2] = 0;
  if ( a2 == 29 )
    goto LABEL_10;
  if ( a2 <= 29 )
  {
    if ( a2 != 1 && (a2 < 1 || (unsigned __int64)(a2 - 14) > 1) )
      return a4;
    goto LABEL_10;
  }
  if ( a2 == 2147483645 )
    goto LABEL_10;
  if ( a2 <= 2147483645 )
  {
    if ( (unsigned __int64)(a2 - 1879047930) > 2 )
      return a4;
    goto LABEL_10;
  }
  if ( a2 == 0x7FFFFFFF )
  {
LABEL_10:
    sub_42AA98(a1, (__int64)a4, (__int64 *)(a1 + 352), a3);
    return a4;
  }
  return a4;
}
