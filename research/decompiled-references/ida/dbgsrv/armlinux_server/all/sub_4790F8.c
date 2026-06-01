/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4790F8
// Address: 0x00000000004790F8

//----- (00000000004790F8) ----------------------------------------------------
__int64 __fastcall sub_4790F8(__int64 result, int a2, __int64 a3, __int64 a4)
{
  bool v4; // cc

  *(_QWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 24) = -1;
  if ( a3 )
    v4 = a2 < 0;
  else
    v4 = 1;
  if ( !v4 )
  {
    *(_QWORD *)(result + 8) = a3;
    *(_QWORD *)(result + 16) = a4;
    *(_DWORD *)(result + 24) = a2;
  }
  return result;
}
