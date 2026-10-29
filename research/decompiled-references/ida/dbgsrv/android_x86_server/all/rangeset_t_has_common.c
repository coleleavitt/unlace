/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_has_common
// Address: 0x000B7CD0

//----- (000B7CD0) --------------------------------------------------------
bool __cdecl rangeset_t_has_common(_DWORD *a1, unsigned int *a2, char a3)
{
  int v3; // edx
  unsigned int v4; // eax
  unsigned int *v5; // edi
  int v6; // edx
  unsigned int v7; // ebx
  unsigned int v8; // edi
  unsigned int v9; // edx
  bool result; // al

  v3 = a1[1];
  if ( (v3 & 0x1FFFFFFF) == 0 )
    return 0;
  v4 = *a2;
  v5 = (unsigned int *)(*a1 + 4);
  v6 = 8 * v3;
  while ( 1 )
  {
    v7 = *v5;
    if ( *v5 > v4 )
      break;
    v5 += 2;
    v6 -= 8;
    if ( !v6 )
      return 0;
  }
  v8 = *(v5 - 1);
  v9 = a2[1];
  if ( v8 < v9 && a3 )
    return v4 >= v8 && v9 <= v7;
  result = 1;
  if ( v8 >= v9 )
    return 0;
  return result;
}
