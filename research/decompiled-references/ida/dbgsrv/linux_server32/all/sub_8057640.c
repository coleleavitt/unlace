/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8057640
// Address: 0x08057640

//----- (08057640) --------------------------------------------------------
int __cdecl sub_8057640(int a1, int a2, int a3)
{
  _DWORD *v3; // eax
  _DWORD *v4; // esi
  int v5; // edx
  int v6; // ecx

  if ( a3 != 1 )
    return -1;
  v3 = *(_DWORD **)(a1 + 664);
  if ( !v3 )
    return -1;
  v4 = (_DWORD *)(a1 + 660);
  do
  {
    while ( 1 )
    {
      v5 = v3[2];
      v6 = v3[3];
      if ( a2 <= v3[4] )
        break;
      v3 = (_DWORD *)v3[3];
      if ( !v6 )
        goto LABEL_7;
    }
    v4 = v3;
    v3 = (_DWORD *)v3[2];
  }
  while ( v5 );
LABEL_7:
  if ( (_DWORD *)(a1 + 660) == v4 || a2 < v4[4] )
    return -1;
  *((_BYTE *)v4 + 36) = 1;
  return 1;
}
