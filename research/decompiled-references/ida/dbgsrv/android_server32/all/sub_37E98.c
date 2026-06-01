/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_37E98
// Address: 0x00037E98

//----- (00037E98) --------------------------------------------------------
int __fastcall sub_37E98(_DWORD *a1, int a2)
{
  int v2; // r6
  int v3; // r3
  int v4; // r4
  unsigned int v5; // r2
  int v6; // r5
  unsigned int v7; // r2
  int (__fastcall **v8)(int, int, int); // r1
  int (__fastcall *v9)(int, int, int); // r4
  int v10; // r6
  int v11; // r7
  void *s2; // [sp+4h] [bp-8h]
  unsigned int v15; // [sp+8h] [bp-4h]

  v2 = a1[14];
  v3 = a1[9];
  v4 = a1[3];
  *(_DWORD *)(a2 + 8) = -1;
  v5 = v4 - 1;
  if ( !v4 )
    v5 = 0;
  v6 = v3 - 1;
  if ( !v3 )
    v6 = 0;
  if ( v6 - 1 < v5 )
  {
    v7 = v5 + 1;
    v15 = v7 - v6;
    if ( v7 != v6 )
    {
      s2 = (void *)a1[8];
      if ( v2 )
        v8 = (int (__fastcall **)(int, int, int))&memicmp_ptr;
      else
        v8 = (int (__fastcall **)(int, int, int))&memcmp_ptr;
      v9 = *v8;
      v10 = a1[2];
      v11 = 0;
      while ( v9(v10 + v11, (int)s2, v6) )
      {
        if ( ++v11 >= v15 )
          return 0;
      }
      *(_DWORD *)(a2 + 8) = v11;
    }
  }
  return 0;
}
// DCBC0: using guessed type _UNKNOWN *memcmp_ptr;
// DCBC4: using guessed type _UNKNOWN *memicmp_ptr;
