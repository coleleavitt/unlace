/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_81254
// Address: 0x00081254

//----- (00081254) --------------------------------------------------------
int __fastcall sub_81254(_DWORD *a1)
{
  _DWORD *v1; // r3
  int v2; // r3
  int v4; // r2
  int v5; // r3
  bool v6; // zf

  if ( !*a1 )
  {
    v1 = *(_DWORD **)(a1[1] + 4);
    if ( v1 == a1 )
      return v1[3];
  }
  v2 = a1[2];
  if ( v2 )
  {
    while ( *(_DWORD *)(v2 + 12) )
      v2 = *(_DWORD *)(v2 + 12);
    return v2;
  }
  v4 = a1[1];
  if ( a1 != *(_DWORD **)(v4 + 8) )
    return a1[1];
  do
  {
    v5 = *(_DWORD *)(v4 + 4);
    v6 = *(_DWORD *)(v5 + 8) == v4;
    v4 = v5;
  }
  while ( v6 );
  return v5;
}
