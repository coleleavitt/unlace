/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8064340
// Address: 0x08064340

//----- (08064340) --------------------------------------------------------
int __cdecl sub_8064340(int a1, int a2)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi
  int v4; // ecx
  int v5; // edx
  int v7; // eax
  int v8; // eax

  v2 = *(_DWORD **)(a1 + 664);
  if ( !v2 )
    return -1;
  v3 = (_DWORD *)(a1 + 660);
  do
  {
    while ( 1 )
    {
      v4 = v2[2];
      v5 = v2[3];
      if ( a2 > v2[4] )
        break;
      v3 = v2;
      v2 = (_DWORD *)v2[2];
      if ( !v4 )
        goto LABEL_6;
    }
    v2 = (_DWORD *)v2[3];
  }
  while ( v5 );
LABEL_6:
  if ( v3 != (_DWORD *)(a1 + 660)
    && a2 >= v3[4]
    && ((v7 = v3[7], v7 > 0) && (v8 = v7 - 1, (v3[7] = v8) != 0) || sub_8062200(a1, a2, 0)) )
  {
    return 1;
  }
  else
  {
    return -1;
  }
}
