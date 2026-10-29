/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6AEDE
// Address: 0x0006AEDE

//----- (0006AEDE) --------------------------------------------------------
int __fastcall sub_6AEDE(int *a1, int a2, int a3, int a4)
{
  int v6; // r1
  int *v7; // r7
  int v8; // r0
  int v9; // r3
  int v10; // r5
  int v11; // r7
  int v12; // r2
  bool v13; // zf
  int v14; // r2
  int *v15; // r5
  int v16; // r0
  int v17; // r1
  int v19; // r1
  int *v20; // r5
  int v21; // r0
  int v22; // r5
  int v23; // r2
  int v24; // r3
  int v25; // r7
  int v26; // r7
  int result; // r0
  int v28; // [sp+8h] [bp-8h]

  if ( a2 == 8 )
  {
    v6 = a1[98];
    v7 = a1 + 98;
    if ( v6 < 0 )
    {
      v8 = (*(int (__fastcall **)(int *))(*a1 + 308))(a1);
      *v7 = v8;
      if ( v8 < 0 )
      {
        *v7 = 0;
        return 0;
      }
      v6 = v8;
      if ( v8 >= 16 )
        v6 = 16;
      *v7 = v6;
    }
    result = 0;
    if ( v6 >= 1 )
    {
      v9 = 101;
      result = 0;
      v10 = -1;
      v11 = 0;
      while ( 1 )
      {
        v12 = a1[v9];
        if ( v12 == a3 )
          break;
        v13 = v12 == -1;
        v14 = v11;
        if ( !v13 )
          v14 = v10;
        if ( v10 >= 0 )
          v14 = v10;
        v9 += 3;
        ++v11;
        v10 = v14;
        if ( v11 >= v6 )
        {
          if ( v14 < 0 )
            return result;
          v15 = &a1[3 * v14];
          v15[101] = a3;
          v15[100] = 8;
          v16 = (*(int (__fastcall **)(int *, int, int, int))(*a1 + 316))(a1, 8, a3, a4);
          v17 = 51;
          goto LABEL_33;
        }
      }
    }
  }
  else
  {
    v19 = a1[99];
    v20 = a1 + 99;
    if ( v19 < 0 )
    {
      v21 = (*(int (__fastcall **)(int *))(*a1 + 312))(a1);
      *v20 = v21;
      if ( v21 < 0 )
      {
        *v20 = 0;
        return 0;
      }
      v19 = v21;
      if ( v21 >= 16 )
        v19 = 16;
      *v20 = v19;
    }
    v28 = a2;
    result = 0;
    if ( v19 >= 1 )
    {
      result = 0;
      v22 = -1;
      v23 = 149;
      v24 = 0;
      while ( 1 )
      {
        v25 = a1[v23];
        if ( v25 == a3 )
          break;
        v13 = v25 == -1;
        v26 = v24;
        if ( !v13 )
          v26 = v22;
        if ( v22 >= 0 )
          v26 = v22;
        v23 += 3;
        ++v24;
        v22 = v26;
        if ( v24 >= v19 )
        {
          if ( v26 >= 0 )
          {
            v15 = &a1[3 * v26];
            v15[149] = a3;
            v15[148] = v28;
            v16 = (*(int (__fastcall **)(int *, int, int, int))(*a1 + 320))(a1, v28, a3, a4);
            v17 = 75;
LABEL_33:
            v15[2 * v17] = v16;
            return (*(int (__fastcall **)(int *))(*a1 + 324))(a1);
          }
          return result;
        }
      }
    }
  }
  return result;
}
