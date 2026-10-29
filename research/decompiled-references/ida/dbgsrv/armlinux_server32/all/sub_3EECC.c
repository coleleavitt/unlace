/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3EECC
// Address: 0x0003EECC

//----- (0003EECC) --------------------------------------------------------
int __fastcall sub_3EECC(int a1, int a2)
{
  int v2; // r4
  _DWORD *v3; // r3
  int result; // r0
  int v5; // t1

  if ( !a2 )
    return -1;
  v2 = *(_DWORD *)(a1 + 4);
  if ( v2 )
  {
    v3 = *(_DWORD **)a1;
    result = 0;
    if ( a2 == *v3 )
      return result;
    while ( ++result != v2 )
    {
      v5 = v3[1];
      ++v3;
      if ( v5 == a2 )
        return result;
    }
  }
  return -1;
}
