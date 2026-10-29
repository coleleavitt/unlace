/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8061D60
// Address: 0x08061D60

//----- (08061D60) --------------------------------------------------------
int __cdecl sub_8061D60(int a1, int a2)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi
  int v4; // edx
  int v5; // ecx
  int result; // eax

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
      if ( a2 <= v2[4] )
        break;
      v2 = (_DWORD *)v2[3];
      if ( !v5 )
        goto LABEL_6;
    }
    v3 = v2;
    v2 = (_DWORD *)v2[2];
  }
  while ( v4 );
LABEL_6:
  result = -1;
  if ( (_DWORD *)(a1 + 660) != v3 && a2 >= v3[4] )
  {
    sub_8061880(a1, a2, 0);
    ++v3[7];
    return 1;
  }
  return result;
}
