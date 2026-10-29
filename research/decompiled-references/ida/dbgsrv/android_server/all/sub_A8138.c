/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A8138
// Address: 0x00000000000A8138

//----- (00000000000A8138) ----------------------------------------------------
__int64 __fastcall sub_A8138(__int64 result, int a2, __int64 a3, __int64 a4)
{
  *(_QWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 24) = -1;
  if ( (a2 & 0x80000000) == 0 )
  {
    if ( a3 )
    {
      *(_QWORD *)(result + 8) = a3;
      *(_QWORD *)(result + 16) = a4;
      *(_DWORD *)(result + 24) = a2;
    }
  }
  return result;
}
