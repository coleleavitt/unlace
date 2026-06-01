/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_50EB4
// Address: 0x00050EB4

//----- (00050EB4) --------------------------------------------------------
int __fastcall sub_50EB4(int a1, int a2)
{
  int v3; // r2
  int v4; // r4
  int result; // r0
  _DWORD *v7; // r6
  const char *v8; // r7
  const char *v9; // r0
  const char *v10; // r1
  int v11; // [sp+10h] [bp-4h]

  v3 = *(_DWORD *)(a1 + 32);
  v4 = v3 - 1;
  result = 0;
  if ( v3 - 1 >= 0 )
  {
    v7 = (_DWORD *)(*(_DWORD *)(a1 + 28) + 28 * v3 - 8);
    v11 = a1;
    while ( 1 )
    {
      if ( *v7 == a2 )
      {
        if ( !*(_BYTE *)(a2 + 13) )
          break;
        v8 = *(_DWORD *)(a2 + 4) ? *(const char **)a2 : &byte_B3CBE;
        v9 = &v8[strlen(v8)];
        v10 = *(const char **)(v11 + 4);
        if ( v8 <= v10 && v10 <= v9 )
          break;
        if ( *(_DWORD *)(v11 + 40) > v7[1] )
          break;
      }
      v7 -= 7;
      if ( --v4 < 0 )
        return 0;
    }
    return 1;
  }
  return result;
}
// B3CBE: using guessed type char byte_B3CBE;
