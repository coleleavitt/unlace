/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1DA98
// Address: 0x0001DA98

//----- (0001DA98) --------------------------------------------------------
int __fastcall sub_1DA98(int a1, int a2)
{
  _DWORD *v4; // r2
  int v5; // r0
  _DWORD *v6; // r1
  int v7; // r3
  _DWORD *v8; // r6
  int result; // r0

  v4 = *(_DWORD **)(a1 + 916);
  v5 = a1 + 916;
  if ( !v4 )
    goto LABEL_10;
  v6 = (_DWORD *)v5;
  do
  {
    v7 = v4[4];
    if ( v7 >= a2 )
      v6 = v4;
    v8 = v4 + 1;
    if ( v7 >= a2 )
      v8 = v4;
    v4 = (_DWORD *)*v8;
  }
  while ( *v8 );
  if ( v6 == (_DWORD *)v5 || (result = 0, v6[4] > a2) )
  {
LABEL_10:
    if ( *(_DWORD *)(a1 + 968) != a2 )
      sub_1CD58(a1, a2, 0);
    return sub_1C9F8(a1, a2, -1);
  }
  return result;
}
