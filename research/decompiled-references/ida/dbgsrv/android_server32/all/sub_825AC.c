/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_825AC
// Address: 0x000825AC

//----- (000825AC) --------------------------------------------------------
int __fastcall sub_825AC(_DWORD *a1, unsigned int *a2)
{
  unsigned int v4; // r0
  unsigned int v5; // r1
  unsigned int v6; // r0
  unsigned int v7; // r3
  _DWORD *v8; // r7
  _DWORD *v9; // r2
  _DWORD *v10; // r0
  int v11; // r1
  int v12; // r6
  _DWORD *v13; // r5
  int v14; // r7
  char *v15; // r0
  char v16; // r1
  int v17; // r7
  _DWORD *v19; // r2
  _DWORD *v20; // r0
  int v21; // r1
  int v22; // r6
  _DWORD *v23; // r1
  unsigned int v24; // r3
  int v25; // r6
  _DWORD *v26; // r1
  int v27; // r1
  _DWORD *v28; // r1
  unsigned int v29; // r0
  int v30; // r6
  _DWORD *v31; // r1
  int v32; // r1
  int v33; // r2
  unsigned int v34; // [sp+4h] [bp-2Ch]
  int v35; // [sp+8h] [bp-28h]
  int v36; // [sp+8h] [bp-28h]
  unsigned int v37; // [sp+10h] [bp-20h]
  int v38; // [sp+14h] [bp-1Ch] BYREF
  int v39; // [sp+18h] [bp-18h]
  int v40; // [sp+1Ch] [bp-14h]
  int v41; // [sp+20h] [bp-10h]
  int v42; // [sp+24h] [bp-Ch]
  int v43; // [sp+28h] [bp-8h]
  int v44; // [sp+2Ch] [bp-4h]

  a1[1] = 0;
  v4 = *a2;
  v5 = a2[1];
  if ( v4 >= v5 )
    return _stack_chk_guard - v44;
  v6 = unpack_dd(a2, v5);
  v7 = a1[1];
  if ( v7 != v6 )
  {
    LOBYTE(v40) = 0;
    v39 = 0;
    v38 = 0;
    if ( v7 > v6 )
    {
LABEL_4:
      a1[1] = v6;
      goto LABEL_14;
    }
    if ( v7 < v6 )
    {
      v37 = v6;
      v34 = a1[2];
      v8 = (_DWORD *)*a1;
      if ( *a1 > (unsigned int)&v38 || *a1 + 12 * v34 <= (unsigned int)&v38 )
      {
        if ( v34 < v6 )
        {
          v19 = qvector_reserve((int)a1, nullptr, v6, 0xCu);
          v36 = a1[2];
          a1[2] = v34;
          v20 = (_DWORD *)*a1;
          v21 = a1[1] - 1;
          if ( v21 < 0 )
          {
            v8 = v19;
          }
          else
          {
            v8 = v19;
            do
            {
              v19[2] = v20[2];
              v19[1] = v20[1];
              *v19 = *v20;
              --v21;
              v19 += 3;
              v20 += 3;
            }
            while ( v21 >= 0 );
            v20 = (_DWORD *)*a1;
          }
          qfree(v20);
          a1[2] = v36;
          *a1 = v8;
          v7 = a1[1];
          v6 = v37;
        }
        if ( v7 < v6 )
        {
          v22 = 12 * v7;
          v8[3 * v7] = v38;
          v23 = &v8[3 * v7];
          v23[2] = v40;
          v23[1] = v39;
          if ( v7 + 1 != v6 )
          {
            v24 = v6 - 1 - v7;
            v25 = v22 + 12;
            do
            {
              v26 = (_DWORD *)*a1;
              *(_DWORD *)((char *)v26 + v25) = v38;
              v27 = (int)v26 + v25;
              *(_DWORD *)(v27 + 8) = v40;
              *(_DWORD *)(v27 + 4) = v39;
              --v24;
              v25 += 12;
            }
            while ( v24 );
          }
        }
      }
      else
      {
        LOBYTE(v43) = v40;
        v42 = v39;
        v41 = v38;
        if ( v34 < v6 )
        {
          v9 = qvector_reserve((int)a1, nullptr, v6, 0xCu);
          v35 = a1[2];
          a1[2] = v34;
          v10 = (_DWORD *)*a1;
          v11 = a1[1] - 1;
          if ( v11 < 0 )
          {
            v8 = v9;
          }
          else
          {
            v8 = v9;
            do
            {
              v9[2] = v10[2];
              v9[1] = v10[1];
              *v9 = *v10;
              --v11;
              v9 += 3;
              v10 += 3;
            }
            while ( v11 >= 0 );
            v10 = (_DWORD *)*a1;
          }
          qfree(v10);
          a1[2] = v35;
          *a1 = v8;
          v7 = a1[1];
          v6 = v37;
        }
        if ( v7 < v6 )
        {
          v8[3 * v7] = v41;
          v28 = &v8[3 * v7];
          v28[2] = v43;
          v28[1] = v42;
          if ( v7 + 1 != v37 )
          {
            v29 = v37 - 1 - v7;
            v30 = 12 * v7 + 12;
            do
            {
              v31 = (_DWORD *)*a1;
              *(_DWORD *)((char *)v31 + v30) = v41;
              v32 = (int)v31 + v30;
              v33 = v43;
              *(_DWORD *)(v32 + 4) = v42;
              *(_DWORD *)(v32 + 8) = v33;
              --v29;
              v30 += 12;
            }
            while ( v29 );
          }
        }
        v6 = v37;
      }
      goto LABEL_4;
    }
    v6 = v7;
  }
LABEL_14:
  v12 = 12 * v6;
  if ( 12 * v6 )
  {
    v13 = (_DWORD *)*a1;
    v14 = 0;
    do
    {
      v15 = (char *)*a2;
      if ( *a2 >= a2[1] )
        v16 = 0;
      else
        v16 = *v15++;
      *a2 = (unsigned int)v15;
      *((_BYTE *)v13 + 8) = v16;
      v17 = unpack_dd(a2, a2[1]) + v14;
      *v13 = v17;
      v14 = unpack_dd(a2, a2[1]) + v17;
      v13[1] = v14;
      v12 -= 12;
      v13 += 3;
    }
    while ( v12 );
  }
  return _stack_chk_guard - v44;
}
