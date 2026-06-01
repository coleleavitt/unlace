/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_713AC
// Address: 0x000713AC

//----- (000713AC) --------------------------------------------------------
char *__fastcall sub_713AC(int a1)
{
  char *result; // r0
  unsigned int v3; // r7
  int v4; // r6
  unsigned int i; // r4
  void **v6; // r5
  void *v7; // r0
  _DWORD *v8; // [sp+0h] [bp-Ch]
  int v9; // [sp+4h] [bp-8h]
  void **v10; // [sp+8h] [bp-4h]

  result = *(char **)(a1 + 136);
  v3 = *(_DWORD *)(a1 + 140);
  v10 = (void **)(a1 + 136);
  v9 = a1;
  v8 = (_DWORD *)(a1 + 140);
  if ( v3 )
  {
    v4 = 0;
    for ( i = 0; i < v3; ++i )
    {
      v6 = *(void ***)&result[v4];
      if ( v6 )
      {
        v7 = *v6;
        if ( *v6 )
        {
          v6[1] = nullptr;
          qfree(v7);
          v6[2] = nullptr;
          *v6 = nullptr;
        }
        qfree(v6);
        result = (char *)*v10;
      }
      v4 += 4;
    }
  }
  if ( result )
  {
    *v8 = 0;
    qfree(result);
    *v10 = nullptr;
    *(_DWORD *)(v9 + 144) = 0;
    return (char *)&dword_90;
  }
  return result;
}
// 90: using guessed type int;
