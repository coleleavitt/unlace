/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46676D
// Address: 0x0046676D

//----- (0046676D) --------------------------------------------------------
int __cdecl sub_46676D(int a1, int a2)
{
  _BYTE *v3; // ecx
  _BYTE *i; // eax
  bool v5; // cf
  unsigned __int8 v6; // dl

  if ( a1 == a2 )
    return 0;
  v3 = (_BYTE *)(a2 + 5);
  for ( i = (_BYTE *)(a1 + 5); ; i += 2 )
  {
    v5 = *i < *v3;
    if ( *i != *v3 )
      break;
    if ( !*i )
      return 0;
    v6 = i[1];
    v5 = v6 < v3[1];
    if ( v6 != v3[1] )
      break;
    v3 += 2;
    if ( !v6 )
      return 0;
  }
  return v5 ? -1 : 1;
}
