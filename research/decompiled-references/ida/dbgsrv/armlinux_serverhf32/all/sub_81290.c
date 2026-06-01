/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_81290
// Address: 0x00081290

//----- (00081290) --------------------------------------------------------
int __fastcall sub_81290(int a1)
{
  int v1; // r3
  int v3; // r2
  int v4; // r3

  v1 = *(_DWORD *)(a1 + 12);
  if ( v1 )
  {
    while ( *(_DWORD *)(v1 + 8) )
      v1 = *(_DWORD *)(v1 + 8);
    return v1;
  }
  v3 = *(_DWORD *)(a1 + 4);
  if ( a1 != *(_DWORD *)(v3 + 12) )
    return *(_DWORD *)(a1 + 4);
  while ( 1 )
  {
    v4 = *(_DWORD *)(v3 + 4);
    if ( *(_DWORD *)(v4 + 12) != v3 )
      break;
    v3 = *(_DWORD *)(v3 + 4);
  }
  if ( v4 == *(_DWORD *)(v3 + 12) )
    return v3;
  return v4;
}
