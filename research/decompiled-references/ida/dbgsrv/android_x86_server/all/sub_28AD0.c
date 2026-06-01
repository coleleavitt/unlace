/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_28AD0
// Address: 0x00028AD0

//----- (00028AD0) --------------------------------------------------------
int __cdecl sub_28AD0(int a1, int a2)
{
  int v2; // edi
  int result; // eax
  int v4; // esi

  v2 = *(_DWORD *)(a1 + 572);
  result = -1;
  if ( v2 )
  {
    v4 = a1 + 572;
    do
    {
      if ( *(_DWORD *)(v2 + 16) >= a2 )
        v4 = v2;
      v2 = *(_DWORD *)(v2 + 4 * (*(_DWORD *)(v2 + 16) < a2));
    }
    while ( v2 );
    if ( v4 == a1 + 572 )
    {
      return -1;
    }
    else
    {
      result = -1;
      if ( *(_DWORD *)(v4 + 16) <= a2 )
      {
        sub_1E2C0(a1, a2, 0);
        ++*(_DWORD *)(v4 + 28);
        return 1;
      }
    }
  }
  return result;
}
