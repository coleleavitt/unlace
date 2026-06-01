/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_28B60
// Address: 0x00028B60

//----- (00028B60) --------------------------------------------------------
int __cdecl sub_28B60(int a1, int a2)
{
  int v2; // edi
  int result; // eax
  int v4; // esi
  int v5; // ecx
  int v6; // ecx

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
        v5 = *(_DWORD *)(v4 + 28);
        if ( v5 <= 0 )
          return 2 * (sub_23D70(a1, a2, 0) != 0) - 1;
        v6 = v5 - 1;
        *(_DWORD *)(v4 + 28) = v6;
        result = 1;
        if ( v6 <= 0 )
          return 2 * (sub_23D70(a1, a2, 0) != 0) - 1;
      }
    }
  }
  return result;
}
