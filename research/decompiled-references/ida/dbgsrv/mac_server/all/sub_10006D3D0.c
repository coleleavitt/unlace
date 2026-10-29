/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006D3D0
// Address: 0x000000010006D3D0

//----- (000000010006D3D0) ----------------------------------------------------
bool __fastcall sub_10006D3D0(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  bool result; // al

  *(_OWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 24) = -1;
  result = a3 == 0;
  if ( a3 != 0 && a2 >= 0 )
  {
    *(_QWORD *)(a1 + 8) = a3;
    *(_QWORD *)(a1 + 16) = a4;
    *(_DWORD *)(a1 + 24) = a2;
  }
  return result;
}
