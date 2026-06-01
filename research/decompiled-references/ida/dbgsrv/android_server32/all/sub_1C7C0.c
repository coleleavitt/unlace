/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1C7C0
// Address: 0x0001C7C0

//----- (0001C7C0) --------------------------------------------------------
bool __fastcall sub_1C7C0(int a1, int a2)
{
  _DWORD *v2; // r3
  _DWORD *v3; // r0
  int v4; // r2
  _DWORD *v5; // r1
  int v6; // r4
  _DWORD *v7; // r5

  v2 = *(_DWORD **)(a1 + 916);
  v3 = (_DWORD *)(a1 + 916);
  if ( !v2 )
    goto LABEL_10;
  v4 = *(_DWORD *)(a2 + 8);
  v5 = v3;
  do
  {
    v6 = v2[4];
    if ( v6 >= v4 )
      v5 = v2;
    v7 = v2 + 1;
    if ( v6 >= v4 )
      v7 = v2;
    v2 = (_DWORD *)*v7;
  }
  while ( *v7 );
  if ( v5 == v3 || v4 < v5[4] )
LABEL_10:
    v5 = v3;
  return v5 != v3;
}
