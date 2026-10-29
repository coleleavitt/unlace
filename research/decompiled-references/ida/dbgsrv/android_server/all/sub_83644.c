/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_83644
// Address: 0x0000000000083644

//----- (0000000000083644) ----------------------------------------------------
__int64 __fastcall sub_83644(__int64 result, __int64 a2)
{
  __int64 v2; // x8
  __int64 v3; // x9
  unsigned __int64 v4; // x10

  if ( *(_BYTE *)result || *(_BYTE *)a2 )
  {
    v2 = *(_QWORD *)(result + 8);
    v3 = *(_QWORD *)(a2 + 8);
    v4 = v2 / (unsigned __int64)v3;
  }
  else
  {
    v2 = *(_QWORD *)(result + 8);
    v3 = *(_QWORD *)(a2 + 8);
    v4 = v2 / v3;
  }
  *(_QWORD *)(result + 8) = v2 - v4 * v3;
  return result;
}
