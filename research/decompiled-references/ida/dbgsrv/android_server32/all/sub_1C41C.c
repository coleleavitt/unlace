/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1C41C
// Address: 0x0001C41C

//----- (0001C41C) --------------------------------------------------------
int __fastcall sub_1C41C(_DWORD *a1, const char *a2)
{
  int v2; // r2
  _DWORD *v3; // r7
  int v4; // r5
  int v5; // r0
  int v6; // r4
  int v7; // r6
  int v8; // r0
  bool v9; // zf
  unsigned int v10; // r6
  int v11; // r4
  int v12; // r7
  int v13; // r5
  int v15; // [sp+0h] [bp-Ch]

  v2 = -1;
  if ( a2 )
  {
    v3 = a1 + 213;
    v4 = a1[211];
    v5 = 4 * v4;
    while ( 1 )
    {
      v6 = v5 - 4;
      if ( --v4 < 0 )
        break;
      v7 = v2;
      v8 = strcmp(*(const char **)(*v3 + v5 + 4 * v2), a2);
      v2 = v7;
      v9 = v8 == 0;
      v5 = v6;
      if ( v9 )
        return *(_DWORD *)(a1[210] + v6);
    }
    v10 = a1[217];
    if ( v10 )
    {
      v15 = v2;
      v11 = a1[219];
      v12 = 0;
      v13 = 0;
      while ( strcmp(*(const char **)(v11 + v12), a2) )
      {
        v12 += 4;
        if ( ++v13 >= v10 )
          return v15;
      }
      return *(_DWORD *)(a1[216] + v12);
    }
  }
  return v2;
}
