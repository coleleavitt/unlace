/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_has_common2
// Address: 0x00082E90

//----- (00082E90) --------------------------------------------------------
int __fastcall rangeset_t_has_common2(_DWORD *a1, int a2)
{
  int v2; // r4
  int v3; // r3
  unsigned int *v4; // r1
  unsigned int *v5; // r3
  _DWORD *v6; // r5
  int v7; // r4
  unsigned int v8; // r6
  unsigned int v9; // r7
  int result; // r0

  v2 = a1[1];
  if ( !v2 )
    return 0;
  v3 = *(_DWORD *)(a2 + 4);
  if ( !v3 )
    return 0;
  v4 = *(unsigned int **)a2;
  v5 = &v4[2 * v3];
  v6 = (_DWORD *)*a1;
  v7 = *a1 + 8 * v2 - 8;
  v8 = *(_DWORD *)(*a1 + 4);
  while ( 1 )
  {
    v9 = *v4;
    if ( *v4 < v8 )
    {
      result = 1;
      if ( *v6 < v4[1] )
        return result;
    }
    if ( v8 > v9 )
      goto LABEL_9;
    do
    {
      if ( (_DWORD *)v7 == v6 )
        return 0;
      v8 = v6[3];
      v6 += 2;
    }
    while ( v8 <= v9 );
LABEL_9:
    while ( v4[1] <= *v6 )
    {
      v4 += 2;
      if ( v5 == v4 )
        return 0;
    }
  }
}
