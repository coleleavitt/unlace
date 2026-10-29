/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3AEF0
// Address: 0x000000000003AEF0

//----- (000000000003AEF0) ----------------------------------------------------
bool __fastcall sub_3AEF0(__int64 a1, __int64 a2)
{
  __int64 v2; // x11
  __int64 v3; // x8
  int v4; // w10
  __int64 v5; // x9

  v2 = *(_QWORD *)(a1 + 1744);
  v3 = a1 + 1744;
  if ( !v2 )
    goto LABEL_8;
  v4 = *(_DWORD *)(a2 + 16);
  v5 = a1 + 1744;
  do
  {
    if ( *(_DWORD *)(v2 + 32) >= v4 )
      v5 = v2;
    v2 = *(_QWORD *)(v2 + 8LL * (*(_DWORD *)(v2 + 32) < v4));
  }
  while ( v2 );
  if ( v5 == v3 || v4 < *(_DWORD *)(v5 + 32) )
LABEL_8:
    v5 = a1 + 1744;
  return v5 != v3;
}
