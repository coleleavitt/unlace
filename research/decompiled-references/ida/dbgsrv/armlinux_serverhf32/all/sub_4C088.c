/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4C088
// Address: 0x0004C088

//----- (0004C088) --------------------------------------------------------
__int64 __fastcall sub_4C088(int a1, int a2)
{
  __int64 v2; // r6
  __int64 v3; // r2

  v2 = *(_QWORD *)(a1 + 8);
  LODWORD(v3) = *(_DWORD *)(a2 + 8);
  if ( *(_BYTE *)a1 || *(_BYTE *)a2 )
  {
    HIDWORD(v3) = *(_DWORD *)(a2 + 12);
    *(_QWORD *)(a1 + 8) = v2 % (unsigned __int64)v3;
    return v2 / (unsigned __int64)v3;
  }
  else
  {
    HIDWORD(v3) = *(_DWORD *)(a2 + 12);
    *(_QWORD *)(a1 + 8) = v2 % v3;
    return v2 / v3;
  }
}
