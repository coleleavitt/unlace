/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4790D0
// Address: 0x00000000004790D0

//----- (00000000004790D0) ----------------------------------------------------
__int64 __fastcall sub_4790D0(__int64 result, __int64 a2)
{
  __int64 v2; // x2

  if ( *(_QWORD *)(result + 40) )
  {
    v2 = *(_QWORD *)(result + 32);
    result = *(_QWORD *)(v2 + 8);
    *(_QWORD *)(v2 + 8) = result + a2;
  }
  return result;
}
