/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_430D78
// Address: 0x0000000000430D78

//----- (0000000000430D78) ----------------------------------------------------
__int64 __fastcall sub_430D78(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // x0
  FILE *v4; // x0
  int v5; // w0

  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 >= qword_522130 || (v4 = *(FILE **)(qword_522128 + 8 * v3)) == nullptr || (v5 = sub_490CD0(v4), v5 == -1) )
  {
    *(_QWORD *)(a2 + 8) = -1;
    return 0;
  }
  else
  {
    *(_QWORD *)(a2 + 8) = (unsigned __int8)v5;
    return 0;
  }
}
// 522128: using guessed type __int64 qword_522128;
// 522130: using guessed type __int64 qword_522130;
