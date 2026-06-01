/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_332CC
// Address: 0x000332CC

//----- (000332CC) --------------------------------------------------------
int __fastcall sub_332CC(int a1, int a2)
{
  int v2; // r1
  int v3; // r3
  int v4; // r7
  int v5; // r5
  const char *v6; // r0
  int v8; // r0
  int v9; // r5
  int i; // r4
  unsigned __int8 *v11; // r0
  int v12; // [sp+0h] [bp-Ch]

  if ( !*(_BYTE *)(a1 + 16) )
  {
    if ( !under_debugger )
      interr(20082);
    __debugbreak();
  }
  v2 = *(_DWORD *)(a1 + 8);
  v3 = 0;
  if ( 28 * v2 )
  {
    v12 = 0;
    v4 = *(_DWORD *)(a1 + 4);
    v5 = 28 * v2;
    while ( 1 )
    {
      v6 = &byte_B3CBE;
      if ( *(_DWORD *)(v4 + 4) )
        v6 = *(const char **)v4;
      if ( !strcmp(v6, "GNU") && *(_DWORD *)(v4 + 24) == 3 )
        break;
      v5 -= 28;
      v4 += 28;
      if ( !v5 )
        return v12;
    }
    v8 = *(_DWORD *)(v4 + 16);
    *(_DWORD *)(a2 + 4) = 0;
    v9 = v8 - 1;
    if ( !v8 )
      v9 = 0;
    if ( *(_DWORD *)(a2 + 8) < (unsigned int)(2 * v9) )
      *(_DWORD *)a2 = qvector_reserve(a2, *(void **)a2, 2 * v9, 1u);
    v3 = 1;
    if ( v9 >= 1 )
    {
      v12 = 1;
      for ( i = 0; i < v9; ++i )
      {
        v11 = (unsigned __int8 *)dword_B3DF8;
        if ( *(_DWORD *)(v4 + 16) | i )
          v11 = (unsigned __int8 *)(*(_DWORD *)(v4 + 12) + i);
        sub_28C8C(a2, "%02x", *v11);
      }
      return v12;
    }
  }
  return v3;
}
// B3CBE: using guessed type char byte_B3CBE;
// B3DF8: using guessed type int dword_B3DF8[41];
// E0550: using guessed type char under_debugger;
