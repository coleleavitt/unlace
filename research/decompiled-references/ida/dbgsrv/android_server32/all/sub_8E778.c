/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8E778
// Address: 0x0008E778

//----- (0008E778) --------------------------------------------------------
int __fastcall sub_8E778(int a1)
{
  __int64 v2; // r0
  int v3; // r2

  LODWORD(v2) = -1;
  if ( a1 )
  {
    v3 = *(_DWORD *)(a1 + 224);
    if ( v3 )
      return *(_QWORD *)(v3 + 104);
  }
  return v2;
}
