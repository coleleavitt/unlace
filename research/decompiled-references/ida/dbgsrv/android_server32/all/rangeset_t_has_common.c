/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_has_common
// Address: 0x00082E3C

//----- (00082E3C) --------------------------------------------------------
int __fastcall rangeset_t_has_common(int a1, unsigned int *a2, int a3)
{
  int v3; // r3
  unsigned int *v4; // r0
  int v5; // r4
  unsigned int v6; // r3
  unsigned int v7; // r5
  unsigned int v8; // r4
  unsigned int v9; // r1
  char v10; // r2
  int result; // r0

  v3 = *(_DWORD *)(a1 + 4);
  if ( !(8 * v3) )
    return 0;
  v4 = *(unsigned int **)a1;
  v5 = 8 * v3;
  v6 = *a2;
  while ( 1 )
  {
    v7 = v4[1];
    if ( v7 > v6 )
      break;
    v5 -= 8;
    v4 += 2;
    if ( !v5 )
      return 0;
  }
  v8 = a2[1];
  v9 = *v4;
  if ( *v4 >= v8 || !a3 )
  {
    result = 1;
    if ( v9 < v8 )
      return result;
    return 0;
  }
  v10 = 1;
  if ( v8 > v7 )
  {
    v10 = 0;
    if ( v6 >= v9 )
      return v10 & 1;
  }
  else if ( v6 >= v9 )
  {
    return v10 & 1;
  }
  return 0;
}
