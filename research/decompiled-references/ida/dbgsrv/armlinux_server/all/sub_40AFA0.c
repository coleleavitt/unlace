/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40AFA0
// Address: 0x000000000040AFA0

//----- (000000000040AFA0) ----------------------------------------------------
bool __fastcall sub_40AFA0(__int64 a1, __int64 a2)
{
  __int64 v2; // x4
  __int64 v3; // x0
  int v4; // w2
  __int64 v5; // x3

  v2 = a1 + 1920;
  v3 = *(_QWORD *)(a1 + 1928);
  if ( !v3 )
    return 0;
  v4 = *(_DWORD *)(a2 + 104);
  v5 = v2;
  do
  {
    while ( *(_DWORD *)(v3 + 32) >= v4 )
    {
      v5 = v3;
      v3 = *(_QWORD *)(v3 + 16);
      if ( !v3 )
        return v2 != v5 && v4 >= *(_DWORD *)(v5 + 32);
    }
    v3 = *(_QWORD *)(v3 + 24);
  }
  while ( v3 );
  return v2 != v5 && v4 >= *(_DWORD *)(v5 + 32);
}
