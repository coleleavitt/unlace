/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_469F50
// Address: 0x00469F50

//----- (00469F50) --------------------------------------------------------
unsigned __int8 *__cdecl sub_469F50(unsigned __int8 *a1, int *a2)
{
  int v2; // esi
  _BYTE *v3; // eax
  int v4; // edi
  unsigned __int8 v5; // bl
  unsigned __int8 *result; // eax
  unsigned __int8 v7; // cl
  unsigned __int8 v8; // dl

  v2 = *a2;
  v3 = a1;
  v4 = *(_DWORD *)(*a2 + 148);
  v5 = *a1;
  if ( *(_BYTE *)(*a1 + v4) != 101 )
  {
    do
      v5 = *++v3;
    while ( (*(_BYTE *)(*(_DWORD *)v2 + 2 * v5) & 4) != 0 );
  }
  if ( *(_BYTE *)(v5 + v4) == 120 )
  {
    v5 = v3[2];
    v3 += 2;
  }
  *v3 = ***(_BYTE ***)(v2 + 136);
  result = v3 + 1;
  do
  {
    v7 = *result++;
    v8 = v5;
    *(result - 1) = v5;
    v5 = v7;
  }
  while ( v8 );
  return result;
}
