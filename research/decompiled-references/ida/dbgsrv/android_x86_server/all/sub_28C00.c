/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_28C00
// Address: 0x00028C00

//----- (00028C00) --------------------------------------------------------
int __cdecl sub_28C00(int a1, int a2, int a3)
{
  int result; // eax
  int v4; // edi
  int v5; // edx

  result = -1;
  if ( a3 == 1 )
  {
    v4 = *(_DWORD *)(a1 + 572);
    if ( v4 )
    {
      v5 = a1 + 572;
      do
      {
        if ( *(_DWORD *)(v4 + 16) >= a2 )
          v5 = v4;
        v4 = *(_DWORD *)(v4 + 4 * (*(_DWORD *)(v4 + 16) < a2));
      }
      while ( v4 );
      if ( v5 != a1 + 572 && *(_DWORD *)(v5 + 16) <= a2 )
      {
        *(_BYTE *)(v5 + 36) = 1;
        return 1;
      }
    }
  }
  return result;
}
