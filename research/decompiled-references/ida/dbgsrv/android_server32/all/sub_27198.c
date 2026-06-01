/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_27198
// Address: 0x00027198

//----- (00027198) --------------------------------------------------------
_DWORD *__fastcall sub_27198(_DWORD *a1, _DWORD *a2, int a3, _DWORD *a4, int a5, _DWORD *a6, int a7)
{
  _DWORD *v8; // r6
  int v9; // r3
  int v10; // r7
  int v11; // r1
  int v12; // r0
  int v13; // r6
  int v14; // r4
  int v15; // r0
  int v16; // r1
  int v17; // r7
  int v18; // r5
  _DWORD *v19; // r5
  int v20; // r4
  int v21; // r1
  int v22; // r2
  int v23; // r0
  int v24; // r4
  unsigned int v25; // r4
  signed int v26; // r4
  int v27; // r0
  _DWORD *v30; // [sp+8h] [bp-24h]
  int v31; // [sp+Ch] [bp-20h]
  int v32; // [sp+10h] [bp-1Ch]
  int v33; // [sp+14h] [bp-18h]
  int v34; // [sp+14h] [bp-18h]
  int v35; // [sp+20h] [bp-Ch]
  _DWORD *v36; // [sp+24h] [bp-8h]

  if ( a5 != a3 )
  {
    v8 = a2;
    v32 = a3;
    if ( -1171354717 * ((a5 - *a4) >> 2) + 93 * (a4 - a2) + (a3 - *a2) / -44 >= 1 )
    {
      v9 = -1171354717 * ((a5 - *a4) >> 2) + 93 * (a4 - a2) + (a3 - *a2) / -44;
      do
      {
        v10 = v32 + 44 * v9;
        v11 = *v8 + 4092;
        v12 = -1171354717 * ((v11 - v32) >> 2);
        v33 = v9;
        if ( v12 <= v9 )
          v10 = *v8 + 4092;
        v31 = v9;
        if ( v12 <= v9 )
          v31 = -1171354717 * ((v11 - v32) >> 2);
        v30 = v8;
        if ( v10 != v32 )
        {
          v13 = v32;
          v35 = v10;
          do
          {
            v14 = v13;
            v15 = -1171354717 * ((v10 - v13) >> 2);
            v16 = *a6 + 4092 - a7;
            v13 += v16;
            v17 = -1171354717 * (v16 >> 2);
            if ( v15 <= v17 )
              v13 = v35;
            v36 = a6;
            if ( v15 <= v17 )
              v17 = v15;
            if ( v14 != v13 )
            {
              v18 = a7;
              do
              {
                copy_debug_event(v18, v14);
                v18 += 44;
                v14 += 44;
              }
              while ( v13 != v14 );
            }
            if ( v17 )
            {
              v19 = v36;
              v20 = -1171354717 * ((a7 - *v36) >> 2) + v17;
              if ( v20 < 1 )
              {
                v24 = 92 - v20;
                v23 = 44 * (92 - v24 % 93);
                v21 = v24 / -93;
                v19 = v36;
                v22 = v36[v21];
              }
              else
              {
                v21 = v20 / 0x5Du;
                v22 = v36[v21];
                v23 = 44 * (v20 % 0x5Du);
              }
              a7 = v22 + v23;
              a6 = &v19[v21];
            }
            else
            {
              a6 = v36;
            }
            v10 = v35;
          }
          while ( v13 != v35 );
        }
        v34 = v33 - v31;
        if ( v31 )
        {
          v25 = -1171354717 * ((v32 - *v30) >> 2) + v31;
          if ( (int)v25 < 1 )
          {
            v26 = 92 - v25;
            v27 = v26 / -93;
            v32 = v30[v27] + 44 * (92 - v26 % 93);
            v8 = &v30[v27];
          }
          else
          {
            v32 = v30[v25 / 0x5D] + 44 * (v25 % 0x5D);
            v8 = &v30[v25 / 0x5D];
          }
        }
        else
        {
          v8 = v30;
        }
        v9 = v34;
      }
      while ( v34 > 0 );
    }
  }
  *a1 = a6;
  a1[1] = a7;
  return a1;
}
