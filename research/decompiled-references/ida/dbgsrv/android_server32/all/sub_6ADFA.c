/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6ADFA
// Address: 0x0006ADFA

//----- (0006ADFA) --------------------------------------------------------
int __fastcall sub_6ADFA(int *a1, int a2, int a3)
{
  int v4; // r2
  int v6; // r0
  int *v7; // r6
  _DWORD *v8; // r1
  int v9; // r3
  int v10; // r5
  int v11; // r2
  int v13; // r0
  _DWORD *v14; // r1
  int v15; // r3
  int v16; // r5
  int v17; // r2

  v4 = 0;
  if ( a2 == 4 )
    return v4;
  if ( a2 != 8 )
  {
    v13 = a1[99];
    v7 = a1 + 99;
    if ( v13 < 0 )
    {
      v13 = (*(int (__fastcall **)(int *))(*a1 + 312))(a1);
      *v7 = v13;
      if ( v13 < 0 )
        goto LABEL_32;
      if ( v13 >= 16 )
        v13 = 16;
      *v7 = v13;
    }
    v4 = 2;
    if ( v13 >= 1 )
    {
      v14 = a1 + 149;
      v15 = 0;
      v16 = -1;
      while ( 1 )
      {
        v4 = 4;
        if ( *v14 == a3 )
          break;
        v17 = v15;
        if ( *v14 != -1 )
          v17 = v16;
        if ( v16 >= 0 )
          v17 = v16;
        v14 += 3;
        ++v15;
        v16 = v17;
        if ( v15 >= v13 )
          return (v17 >> 31) & 6;
      }
    }
    return v4;
  }
  v6 = a1[98];
  v7 = a1 + 98;
  if ( v6 >= 0 )
    goto LABEL_8;
  v6 = (*(int (__fastcall **)(int *))(*a1 + 308))(a1);
  *v7 = v6;
  if ( v6 >= 0 )
  {
    if ( v6 >= 16 )
      v6 = 16;
    *v7 = v6;
LABEL_8:
    v4 = 2;
    if ( v6 >= 1 )
    {
      v8 = a1 + 101;
      v9 = 0;
      v10 = -1;
      while ( 1 )
      {
        v4 = 4;
        if ( *v8 == a3 )
          break;
        v11 = v9;
        if ( *v8 != -1 )
          v11 = v10;
        if ( v10 >= 0 )
          v11 = v10;
        v8 += 3;
        ++v9;
        v10 = v11;
        if ( v9 >= v6 )
          return (v11 >> 31) & 6;
      }
    }
    return v4;
  }
LABEL_32:
  *v7 = 0;
  return 2;
}
