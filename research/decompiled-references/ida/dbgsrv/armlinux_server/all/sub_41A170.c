/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41A170
// Address: 0x000000000041A170

//----- (000000000041A170) ----------------------------------------------------
unsigned __int64 __fastcall sub_41A170(_QWORD *a1, _QWORD *a2)
{
  unsigned __int64 v2; // x6
  unsigned __int64 v3; // x5
  unsigned __int64 v4; // x2
  unsigned __int64 result; // x0
  unsigned __int64 v6; // x2
  unsigned __int64 v7; // x0

  v2 = a1[4];
  v3 = a2[3];
  v4 = *(_QWORD *)(a1[20] + 488LL) - *(_QWORD *)(a1[20] + 480LL);
  if ( (unsigned __int64)(a2 + 8) >= v2 && (unsigned __int64)(a2 + 8) < v2 + (a1[5] << 6) )
  {
    v7 = a2[11];
    if ( v4 > v7 && v7 >= v3 )
      v4 = a2[11];
  }
  result = 0;
  if ( v4 > v3 )
  {
    result = a2[4];
    v6 = v4 - v3;
    if ( v6 <= result )
      return v6;
  }
  return result;
}
