/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1DAA0
// Address: 0x0001DAA0

//----- (0001DAA0) --------------------------------------------------------
bool __cdecl sub_1DAA0(int a1, int a2)
{
  int v2; // edx
  int v3; // eax
  int v4; // esi
  int v5; // ecx

  v2 = *(_DWORD *)(a1 + 572);
  v3 = a1 + 572;
  if ( !v2 )
    goto LABEL_8;
  v4 = *(_DWORD *)(a2 + 8);
  v5 = a1 + 572;
  do
  {
    if ( *(_DWORD *)(v2 + 16) >= v4 )
      v5 = v2;
    v2 = *(_DWORD *)(v2 + 4 * (*(_DWORD *)(v2 + 16) < v4));
  }
  while ( v2 );
  if ( v5 == v3 || v4 < *(_DWORD *)(v5 + 16) )
LABEL_8:
    v5 = a1 + 572;
  return v5 != v3;
}
