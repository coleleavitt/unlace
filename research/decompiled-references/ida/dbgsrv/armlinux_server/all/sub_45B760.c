/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45B760
// Address: 0x000000000045B760

//----- (000000000045B760) ----------------------------------------------------
bool __fastcall sub_45B760(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // w0
  _BOOL8 result; // x0

  v4 = *(_DWORD *)(a3 + 20) & 0xFFFFFFF;
  if ( v4 == 5 )
    return *(_QWORD *)(a3 + 8) == a4;
  if ( v4 != 7 )
    return 0;
  result = 1;
  if ( *(_QWORD *)(a3 + 32) != a4 )
    return *(_QWORD *)(a3 + 8) == a4;
  return result;
}
