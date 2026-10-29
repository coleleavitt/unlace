/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4C1D8
// Address: 0x0004C1D8

//----- (0004C1D8) --------------------------------------------------------
__int64 __fastcall sub_4C1D8(int a1, int a2)
{
  __int64 v2; // r6
  __int64 v3; // r2

  v2 = *(_QWORD *)(a1 + 8);
  LODWORD(v3) = *(_DWORD *)(a2 + 8);
  if ( *(_BYTE *)a1 || *(_BYTE *)a2 )
  {
    HIDWORD(v3) = *(_DWORD *)(a2 + 12);
    *(_QWORD *)(a1 + 8) = v2 / (unsigned __int64)v3;
    return v2 / (unsigned __int64)v3;
  }
  else
  {
    HIDWORD(v3) = *(_DWORD *)(a2 + 12);
    *(_QWORD *)(a1 + 8) = v2 / v3;
    return v2 / v3;
  }
}
