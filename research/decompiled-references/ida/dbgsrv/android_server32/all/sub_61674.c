/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_61674
// Address: 0x00061674

//----- (00061674) --------------------------------------------------------
int __fastcall sub_61674(void **a1, unsigned int a2, _DWORD *a3)
{
  void **v4; // r4
  unsigned int v5; // r0
  char *v7; // r1
  unsigned int v8; // r2
  char *v9; // r0
  unsigned int v10; // r5
  int v11; // r2
  char *v12; // r6
  _DWORD *v13; // r3
  int v14; // r1
  int v15; // r4
  int v16; // r5
  int v17; // r7
  int v18; // r4
  int v19; // r5
  int v20; // r7
  _DWORD *v21; // r5
  unsigned int v22; // r0
  int v23; // r2
  _DWORD *v24; // r1
  _DWORD *v25; // r3
  int v26; // r4
  int v27; // r5
  int v28; // r6
  int v29; // r7
  int v30; // r5
  int v31; // r6
  int v32; // r7
  char *v33; // r0
  unsigned int v34; // r0
  int v35; // r2
  _DWORD *v36; // r1
  unsigned int v38; // [sp+4h] [bp-3Ch]
  unsigned int v39; // [sp+10h] [bp-30h]
  _DWORD *v40; // [sp+14h] [bp-2Ch]
  int v41; // [sp+18h] [bp-28h]
  int v42; // [sp+1Ch] [bp-24h]
  int v43; // [sp+20h] [bp-20h]
  int v44; // [sp+24h] [bp-1Ch]
  int v45; // [sp+28h] [bp-18h]
  int v46; // [sp+2Ch] [bp-14h]
  int v47; // [sp+30h] [bp-10h]
  int v48; // [sp+34h] [bp-Ch]
  int v49; // [sp+38h] [bp-8h]
  int v50; // [sp+3Ch] [bp-4h]

  v4 = a1;
  v5 = (unsigned int)a1[1];
  if ( v5 <= a2 )
  {
    if ( v5 >= a2 )
      return _stack_chk_guard - v50;
    v7 = (char *)*v4;
    v8 = (unsigned int)v4[2];
    v41 = (int)v4;
    v39 = a2;
    if ( *v4 > a3 || (char *)*v4 + 32 * v8 <= (char *)a3 )
    {
      if ( v8 < a2 )
      {
        v7 = (char *)qvector_reserve((int)v4, v7, a2, 0x20u);
        *v4 = v7;
        v5 = (unsigned int)v4[1];
      }
      if ( v5 < a2 )
      {
        v11 = 32 * v5;
        v12 = &v7[32 * v5];
        v13 = a3;
        v40 = a3;
        v14 = *a3;
        v15 = a3[1];
        v16 = a3[2];
        v17 = a3[3];
        v13 += 4;
        *(_DWORD *)v12 = v14;
        *((_DWORD *)v12 + 1) = v15;
        *((_DWORD *)v12 + 2) = v16;
        *((_DWORD *)v12 + 3) = v17;
        v12 += 16;
        v18 = v13[1];
        v19 = v13[2];
        v20 = v13[3];
        *(_DWORD *)v12 = *v13;
        *((_DWORD *)v12 + 1) = v18;
        *((_DWORD *)v12 + 2) = v19;
        *((_DWORD *)v12 + 3) = v20;
        v21 = v40;
        v4 = (void **)v41;
        if ( v5 + 1 != v39 )
        {
          v22 = v39 - 1 - v5;
          v23 = v11 + 32;
          do
          {
            v24 = (char *)*v4 + v23;
            v25 = v21;
            v26 = *v21;
            v27 = v21[1];
            v28 = v25[2];
            v29 = v25[3];
            v25 += 4;
            *v24 = v26;
            v24[1] = v27;
            v24[2] = v28;
            v24[3] = v29;
            v24 += 4;
            v30 = v25[1];
            v31 = v25[2];
            v32 = v25[3];
            *v24 = *v25;
            v24[1] = v30;
            v24[2] = v31;
            v24[3] = v32;
            v21 = v40;
            v4 = (void **)v41;
            --v22;
            v23 += 32;
          }
          while ( v22 );
        }
      }
      goto LABEL_20;
    }
    v38 = v5;
    v42 = *a3;
    v43 = a3[1];
    v44 = a3[2];
    v45 = a3[3];
    v46 = a3[4];
    v47 = a3[5];
    v48 = a3[6];
    v49 = a3[7];
    if ( v8 >= a2 )
    {
      v10 = v5;
      v9 = (char *)*v4;
      if ( v38 >= a2 )
      {
LABEL_20:
        v4[1] = (void *)v39;
        return _stack_chk_guard - v50;
      }
    }
    else
    {
      v9 = (char *)qvector_reserve((int)v4, v7, a2, 0x20u);
      *v4 = v9;
      v10 = (unsigned int)v4[1];
      if ( v10 >= a2 )
        goto LABEL_20;
    }
    v33 = &v9[32 * v10];
    *(_DWORD *)v33 = v42;
    *((_DWORD *)v33 + 1) = v43;
    *((_DWORD *)v33 + 2) = v44;
    *((_DWORD *)v33 + 3) = v45;
    v33 += 16;
    *(_DWORD *)v33 = v46;
    *((_DWORD *)v33 + 1) = v47;
    *((_DWORD *)v33 + 2) = v48;
    *((_DWORD *)v33 + 3) = v49;
    if ( v10 + 1 != a2 )
    {
      v34 = a2 - 1 - v10;
      v35 = 32 * v10 + 32;
      do
      {
        v36 = (char *)*v4 + v35;
        *v36 = v42;
        v36[1] = v43;
        v36[2] = v44;
        v36[3] = v45;
        v36 += 4;
        *v36 = v46;
        v36[1] = v47;
        v36[2] = v48;
        v36[3] = v49;
        v4 = (void **)v41;
        --v34;
        v35 += 32;
      }
      while ( v34 );
    }
    goto LABEL_20;
  }
  v4[1] = (void *)a2;
  return _stack_chk_guard - v50;
}
// 61782: variable 'v50' is possibly undefined
