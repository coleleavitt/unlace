/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1F460
// Address: 0x0001F460

//----- (0001F460) --------------------------------------------------------
char __cdecl sub_1F460(int a1, int a2)
{
  int v2; // esi
  int v3; // eax
  int v4; // ecx

  v2 = a1;
  v3 = *(_DWORD *)(a1 + 572);
  if ( v3 )
  {
    v4 = a1 + 572;
    do
    {
      if ( *(_DWORD *)(v3 + 16) >= a2 )
        v4 = v3;
      v3 = *(_DWORD *)(v3 + 4 * (*(_DWORD *)(v3 + 16) < a2));
    }
    while ( v3 );
    v2 = a1;
    if ( v4 != a1 + 572 && *(_DWORD *)(v4 + 16) <= a2 )
      return 0;
  }
  if ( *(_DWORD *)(v2 + 624) != a2 )
    sub_1E2C0(v2, a2, 0);
  return sub_1DE40(v2, a2, -1);
}
