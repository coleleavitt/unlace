/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_58D28
// Address: 0x0000000000058D28

//----- (0000000000058D28) ----------------------------------------------------
__int64 __usercall sub_58D28@<X0>(__int64 result@<X0>, __int64 a2@<X1>, unsigned int a3@<W2>, _QWORD *a4@<X8>)
{
  *a4 = 0;
  a4[1] = 0;
  a4[2] = 0;
  if ( a2 > 1879047929 )
  {
    if ( (unsigned __int64)(a2 - 1879047930) >= 3 && a2 != 0x7FFFFFFF && a2 != 2147483645 )
      return result;
    return sub_55D60(result, (__int64)a4, (__int64 *)(result + 352), a3);
  }
  if ( (unsigned __int64)a2 <= 0x1D && ((1LL << a2) & 0x2000C002) != 0 )
    return sub_55D60(result, (__int64)a4, (__int64 *)(result + 352), a3);
  return result;
}
