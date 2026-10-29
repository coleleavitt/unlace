/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40968
// Address: 0x00040968

//----- (00040968) --------------------------------------------------------
int __fastcall sub_40968(int a1, int a2)
{
  int result; // r0
  unsigned int v4; // r3
  _DWORD *v5; // r4
  int v6; // r2

  result = -1;
  if ( a2 )
  {
    v4 = *(_DWORD *)(a1 + 4);
    if ( v4 )
    {
      v5 = *(_DWORD **)a1;
      v6 = 0;
      while ( *v5 != a2 )
      {
        ++v5;
        if ( ++v6 >= v4 )
          return result;
      }
      return v6;
    }
  }
  return result;
}
