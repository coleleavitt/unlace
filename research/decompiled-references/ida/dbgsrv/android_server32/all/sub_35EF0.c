/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_35EF0
// Address: 0x00035EF0

//----- (00035EF0) --------------------------------------------------------
int __fastcall sub_35EF0(_DWORD *a1, unsigned int a2, _DWORD *a3)
{
  _DWORD *v3; // r4
  unsigned int v4; // r6
  char *v5; // r0
  unsigned int v6; // r5
  unsigned int v7; // r5
  char *v8; // r0
  int v9; // r3
  int v10; // r4
  int v11; // r3
  int v12; // r4
  int v13; // r5
  int v14; // r3
  int v15; // r4
  int v16; // r3
  int v17; // r4
  int v18; // r5
  unsigned int v19; // r0
  int v20; // r7
  _DWORD *v21; // r1
  int v22; // r4
  int v23; // r5
  int v24; // r4
  int v25; // r5
  int v26; // r6
  int v27; // r4
  int v28; // r5
  int v29; // r4
  int v30; // r5
  int v31; // r6
  char *v32; // r0
  unsigned int v33; // r0
  int v34; // r7
  _DWORD *v35; // r1
  unsigned int v37; // [sp+10h] [bp-50h]
  unsigned int v38; // [sp+18h] [bp-48h]
  int v40; // [sp+20h] [bp-40h]
  int v41; // [sp+24h] [bp-3Ch]
  int v42; // [sp+28h] [bp-38h]
  int v43; // [sp+2Ch] [bp-34h]
  int v44; // [sp+30h] [bp-30h]
  int v45; // [sp+34h] [bp-2Ch]
  int v46; // [sp+38h] [bp-28h]
  int v47; // [sp+3Ch] [bp-24h]
  int v48; // [sp+40h] [bp-20h]
  int v49; // [sp+44h] [bp-1Ch]
  int v50; // [sp+48h] [bp-18h]
  int v51; // [sp+4Ch] [bp-14h]
  int v52; // [sp+50h] [bp-10h]
  int v53; // [sp+54h] [bp-Ch]
  int v54; // [sp+58h] [bp-8h]
  int v55; // [sp+5Ch] [bp-4h]

  v3 = a1;
  v4 = a1[1];
  if ( v4 <= a2 )
  {
    if ( v4 >= a2 )
      return _stack_chk_guard - v55;
    v37 = a1[2];
    v5 = (char *)*a1;
    v40 = (int)v3;
    v38 = a2;
    if ( *v3 > (unsigned int)a3 || *v3 + 56 * v37 <= (unsigned int)a3 )
    {
      if ( v37 < a2 )
      {
        v7 = a2;
        v5 = (char *)qvector_reserve((int)v3, v5, a2, 0x38u);
        a2 = v7;
        *v3 = v5;
        v4 = v3[1];
      }
      if ( v4 < a2 )
      {
        v8 = &v5[56 * v4];
        v9 = a3[1];
        v10 = a3[2];
        *(_DWORD *)v8 = *a3;
        *((_DWORD *)v8 + 1) = v9;
        *((_DWORD *)v8 + 2) = v10;
        v8 += 12;
        v11 = a3[4];
        v12 = a3[5];
        v13 = a3[6];
        *(_DWORD *)v8 = a3[3];
        *((_DWORD *)v8 + 1) = v11;
        *((_DWORD *)v8 + 2) = v12;
        *((_DWORD *)v8 + 3) = v13;
        v8 += 16;
        v14 = a3[8];
        v15 = a3[9];
        *(_DWORD *)v8 = a3[7];
        *((_DWORD *)v8 + 1) = v14;
        *((_DWORD *)v8 + 2) = v15;
        v8 += 12;
        v16 = a3[11];
        v17 = a3[12];
        v18 = a3[13];
        *(_DWORD *)v8 = a3[10];
        *((_DWORD *)v8 + 1) = v16;
        *((_DWORD *)v8 + 2) = v17;
        *((_DWORD *)v8 + 3) = v18;
        v3 = (_DWORD *)v40;
        if ( v4 + 1 != v38 )
        {
          v19 = v38 - 1 - v4;
          v20 = 56 * v4 + 56;
          do
          {
            v21 = (_DWORD *)(*v3 + v20);
            v22 = a3[1];
            v23 = a3[2];
            *v21 = *a3;
            v21[1] = v22;
            v21[2] = v23;
            v21 += 3;
            v24 = a3[4];
            v25 = a3[5];
            v26 = a3[6];
            *v21 = a3[3];
            v21[1] = v24;
            v21[2] = v25;
            v21[3] = v26;
            v21 += 4;
            v27 = a3[8];
            v28 = a3[9];
            *v21 = a3[7];
            v21[1] = v27;
            v21[2] = v28;
            v21 += 3;
            v29 = a3[11];
            v30 = a3[12];
            v31 = a3[13];
            *v21 = a3[10];
            v21[1] = v29;
            v21[2] = v30;
            v21[3] = v31;
            v3 = (_DWORD *)v40;
            --v19;
            v20 += 56;
          }
          while ( v19 );
        }
      }
      goto LABEL_20;
    }
    v41 = *a3;
    v42 = a3[1];
    v43 = a3[2];
    v44 = a3[3];
    v45 = a3[4];
    v46 = a3[5];
    v47 = a3[6];
    v48 = a3[7];
    v49 = a3[8];
    v50 = a3[9];
    v51 = a3[10];
    v52 = a3[11];
    v53 = a3[12];
    v54 = a3[13];
    if ( v37 >= a2 )
    {
      v6 = v4;
      if ( v4 >= a2 )
      {
LABEL_20:
        v3[1] = v38;
        return _stack_chk_guard - v55;
      }
    }
    else
    {
      v5 = (char *)qvector_reserve((int)v3, v5, a2, 0x38u);
      *v3 = v5;
      v6 = v3[1];
      if ( v6 >= v38 )
        goto LABEL_20;
    }
    v32 = &v5[56 * v6];
    *(_DWORD *)v32 = v41;
    *((_DWORD *)v32 + 1) = v42;
    *((_DWORD *)v32 + 2) = v43;
    v32 += 12;
    *(_DWORD *)v32 = v44;
    *((_DWORD *)v32 + 1) = v45;
    *((_DWORD *)v32 + 2) = v46;
    *((_DWORD *)v32 + 3) = v47;
    v32 += 16;
    *(_DWORD *)v32 = v48;
    *((_DWORD *)v32 + 1) = v49;
    *((_DWORD *)v32 + 2) = v50;
    v32 += 12;
    *(_DWORD *)v32 = v51;
    *((_DWORD *)v32 + 1) = v52;
    *((_DWORD *)v32 + 2) = v53;
    *((_DWORD *)v32 + 3) = v54;
    if ( v6 + 1 != v38 )
    {
      v33 = v38 - 1 - v6;
      v34 = 56 * v6 + 56;
      do
      {
        v35 = (_DWORD *)(*v3 + v34);
        *v35 = v41;
        v35[1] = v42;
        v35[2] = v43;
        v35 += 3;
        *v35 = v44;
        v35[1] = v45;
        v35[2] = v46;
        v35[3] = v47;
        v35 += 4;
        *v35 = v48;
        v35[1] = v49;
        v35[2] = v50;
        v35 += 3;
        *v35 = v51;
        v35[1] = v52;
        v35[2] = v53;
        v35[3] = v54;
        v3 = (_DWORD *)v40;
        --v33;
        v34 += 56;
      }
      while ( v33 );
    }
    goto LABEL_20;
  }
  a1[1] = a2;
  return _stack_chk_guard - v55;
}
// 36030: variable 'v55' is possibly undefined
