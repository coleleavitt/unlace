/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140044800
// Address: 0x0000000140044800

//----- (0000000140044800) ----------------------------------------------------
bool __fastcall sub_140044800(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax

  v4 = *(_DWORD *)(a3 + 20) & 0xFFFFFFF;
  if ( v4 != 5 )
  {
    if ( v4 != 7 )
      return 0;
    if ( *(_QWORD *)(a3 + 32) == a4 )
      return 1;
  }
  return *(_QWORD *)(a3 + 8) == a4;
}
