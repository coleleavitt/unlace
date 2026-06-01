/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46280E
// Address: 0x0046280E

//----- (0046280E) --------------------------------------------------------
int __cdecl sub_46280E(int a1, unsigned int a2)
{
  int v2; // ecx
  int v3; // edx
  int v4; // esi
  unsigned int v5; // ecx

  v2 = a1 + *(_DWORD *)(a1 + 60);
  v3 = *(unsigned __int16 *)(v2 + 20) + v2 + 24;
  v4 = v3 + 40 * *(unsigned __int16 *)(v2 + 6);
  while ( 1 )
  {
    if ( v3 == v4 )
      return 0;
    v5 = *(_DWORD *)(v3 + 12);
    if ( a2 >= v5 && a2 < v5 + *(_DWORD *)(v3 + 8) )
      break;
    v3 += 40;
  }
  return v3;
}
