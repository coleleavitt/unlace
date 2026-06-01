/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1B72C
// Address: 0x0001B72C

//----- (0001B72C) --------------------------------------------------------
unsigned int __fastcall sub_1B72C(_DWORD *a1)
{
  void **v2; // r6
  void **v3; // r2
  void **v4; // r7
  char *v5; // r5
  _DWORD *v6; // r1
  unsigned int result; // r0
  int v8; // r1
  unsigned int v9; // [sp+Ch] [bp-Ch]
  unsigned int v10; // [sp+10h] [bp-8h]
  _DWORD *v11; // [sp+10h] [bp-8h]
  unsigned int v12; // [sp+14h] [bp-4h]

  v10 = a1[4];
  v2 = (void **)a1[1];
  v3 = (void **)a1[2];
  v4 = &v2[v10 / 0x5D];
  if ( v3 == v2 )
  {
    v6 = a1 + 5;
  }
  else
  {
    v9 = a1[5] + v10;
    v5 = (char *)*v4 + 44 * (v10 % 0x5D);
    v11 = a1 + 5;
    v12 = (unsigned int)v2[v9 / 0x5D] + 44 * (v9 % 0x5D);
    if ( (char *)v12 == v5 )
    {
      v6 = a1 + 5;
      v3 = (void **)a1[2];
    }
    else
    {
      do
      {
        free_debug_event(v5);
        v5 += 44;
        if ( v5 - (_BYTE *)*v4 == loc_1B7F0 )
        {
          v5 = (char *)v4[1];
          ++v4;
        }
      }
      while ( (char *)v12 != v5 );
      v2 = (void **)a1[1];
      v3 = (void **)a1[2];
      v6 = v11;
    }
  }
  *v6 = 0;
  result = v3 - v2;
  if ( result >= 3 )
  {
    do
    {
      operator delete(*v2);
      v2 = (void **)(a1[1] + 4);
      a1[1] = v2;
      result = (a1[2] - (int)v2) >> 2;
    }
    while ( result > 2 );
  }
  v8 = 46;
  if ( result != 1 )
  {
    if ( result != 2 )
      return result;
    v8 = 93;
  }
  a1[4] = v8;
  return result;
}
