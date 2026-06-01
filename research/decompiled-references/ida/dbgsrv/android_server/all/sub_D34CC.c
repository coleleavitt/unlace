/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D34CC
// Address: 0x00000000000D34CC

//----- (00000000000D34CC) ----------------------------------------------------
__int64 __fastcall sub_D34CC(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // x0

  result = 4294967194LL;
  if ( a1 && a2 )
  {
    if ( a1[18] )
    {
      result = 0;
      *a2 = a1[17];
      a2[1] = a1[16];
    }
    else
    {
      return 4294967196LL;
    }
  }
  return result;
}
