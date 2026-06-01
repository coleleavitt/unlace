/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_35DA8
// Address: 0x00035DA8

//----- (00035DA8) --------------------------------------------------------
int __fastcall sub_35DA8(void **a1, unsigned int a2, int *a3)
{
  void **v4; // r4
  unsigned int v5; // r0
  char *v7; // r1
  unsigned int v8; // r2
  char *v9; // r0
  unsigned int v10; // r5
  unsigned int v11; // r2
  char *v12; // r6
  int *v13; // r3
  int v14; // r1
  int v15; // r4
  int v16; // r5
  int v17; // r7
  int v18; // r1
  int v19; // r4
  int v20; // r5
  int v21; // r7
  int v22; // r1
  int v23; // r4
  int v24; // r5
  int v25; // r7
  int v26; // r4
  int v27; // r5
  int v28; // r7
  int *v29; // r5
  unsigned int v30; // r0
  unsigned int v31; // r2
  int *v32; // r1
  int *v33; // r3
  int v34; // r4
  int v35; // r5
  int v36; // r6
  int v37; // r7
  int v38; // r4
  int v39; // r5
  int v40; // r6
  int v41; // r7
  int v42; // r4
  int v43; // r5
  int v44; // r6
  int v45; // r7
  int v46; // r5
  int v47; // r6
  int v48; // r7
  char *v49; // r0
  unsigned int v50; // r0
  int v51; // r2
  _DWORD *v52; // r1
  unsigned int v54; // [sp+4h] [bp-5Ch]
  unsigned int v55; // [sp+10h] [bp-50h]
  int *v56; // [sp+14h] [bp-4Ch]
  int v57; // [sp+18h] [bp-48h]
  int v58; // [sp+1Ch] [bp-44h]
  int v59; // [sp+20h] [bp-40h]
  int v60; // [sp+24h] [bp-3Ch]
  int v61; // [sp+28h] [bp-38h]
  int v62; // [sp+2Ch] [bp-34h]
  int v63; // [sp+30h] [bp-30h]
  int v64; // [sp+34h] [bp-2Ch]
  int v65; // [sp+38h] [bp-28h]
  int v66; // [sp+3Ch] [bp-24h]
  int v67; // [sp+40h] [bp-20h]
  int v68; // [sp+44h] [bp-1Ch]
  int v69; // [sp+48h] [bp-18h]
  int v70; // [sp+4Ch] [bp-14h]
  int v71; // [sp+50h] [bp-10h]
  int v72; // [sp+54h] [bp-Ch]
  int v73; // [sp+58h] [bp-8h]
  int v74; // [sp+5Ch] [bp-4h]

  v4 = a1;
  v5 = (unsigned int)a1[1];
  if ( v5 <= a2 )
  {
    if ( v5 >= a2 )
      return _stack_chk_guard - v74;
    v7 = (char *)*v4;
    v8 = (unsigned int)v4[2];
    v57 = (int)v4;
    v55 = a2;
    if ( *v4 > a3 || (char *)*v4 + 64 * v8 <= (char *)a3 )
    {
      if ( v8 < a2 )
      {
        v7 = (char *)qvector_reserve((int)v4, v7, a2, 0x40u);
        *v4 = v7;
        v5 = (unsigned int)v4[1];
      }
      if ( v5 < a2 )
      {
        v11 = v5 << 6;
        v12 = &v7[64 * v5];
        v13 = a3;
        v56 = a3;
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
        v18 = *v13;
        v19 = v13[1];
        v20 = v13[2];
        v21 = v13[3];
        v13 += 4;
        *(_DWORD *)v12 = v18;
        *((_DWORD *)v12 + 1) = v19;
        *((_DWORD *)v12 + 2) = v20;
        *((_DWORD *)v12 + 3) = v21;
        v12 += 16;
        v22 = *v13;
        v23 = v13[1];
        v24 = v13[2];
        v25 = v13[3];
        v13 += 4;
        *(_DWORD *)v12 = v22;
        *((_DWORD *)v12 + 1) = v23;
        *((_DWORD *)v12 + 2) = v24;
        *((_DWORD *)v12 + 3) = v25;
        v12 += 16;
        v26 = v13[1];
        v27 = v13[2];
        v28 = v13[3];
        *(_DWORD *)v12 = *v13;
        *((_DWORD *)v12 + 1) = v26;
        *((_DWORD *)v12 + 2) = v27;
        *((_DWORD *)v12 + 3) = v28;
        v29 = v56;
        v4 = (void **)v57;
        if ( v5 + 1 != v55 )
        {
          v30 = v55 - 1 - v5;
          v31 = v11 + 64;
          do
          {
            v32 = (int *)((char *)*v4 + v31);
            v33 = v29;
            v34 = *v29;
            v35 = v29[1];
            v36 = v33[2];
            v37 = v33[3];
            v33 += 4;
            *v32 = v34;
            v32[1] = v35;
            v32[2] = v36;
            v32[3] = v37;
            v32 += 4;
            v38 = *v33;
            v39 = v33[1];
            v40 = v33[2];
            v41 = v33[3];
            v33 += 4;
            *v32 = v38;
            v32[1] = v39;
            v32[2] = v40;
            v32[3] = v41;
            v32 += 4;
            v42 = *v33;
            v43 = v33[1];
            v44 = v33[2];
            v45 = v33[3];
            v33 += 4;
            *v32 = v42;
            v32[1] = v43;
            v32[2] = v44;
            v32[3] = v45;
            v32 += 4;
            v46 = v33[1];
            v47 = v33[2];
            v48 = v33[3];
            *v32 = *v33;
            v32[1] = v46;
            v32[2] = v47;
            v32[3] = v48;
            v29 = v56;
            v4 = (void **)v57;
            --v30;
            v31 += 64;
          }
          while ( v30 );
        }
      }
      goto LABEL_20;
    }
    v54 = v5;
    v58 = *a3;
    v59 = a3[1];
    v60 = a3[2];
    v61 = a3[3];
    v62 = a3[4];
    v63 = a3[5];
    v64 = a3[6];
    v65 = a3[7];
    v66 = a3[8];
    v67 = a3[9];
    v68 = a3[10];
    v69 = a3[11];
    v70 = a3[12];
    v71 = a3[13];
    v72 = a3[14];
    v73 = a3[15];
    if ( v8 >= a2 )
    {
      v10 = v5;
      v9 = (char *)*v4;
      if ( v54 >= a2 )
      {
LABEL_20:
        v4[1] = (void *)v55;
        return _stack_chk_guard - v74;
      }
    }
    else
    {
      v9 = (char *)qvector_reserve((int)v4, v7, a2, 0x40u);
      *v4 = v9;
      v10 = (unsigned int)v4[1];
      if ( v10 >= a2 )
        goto LABEL_20;
    }
    v49 = &v9[64 * v10];
    *(_DWORD *)v49 = v58;
    *((_DWORD *)v49 + 1) = v59;
    *((_DWORD *)v49 + 2) = v60;
    *((_DWORD *)v49 + 3) = v61;
    v49 += 16;
    *(_DWORD *)v49 = v62;
    *((_DWORD *)v49 + 1) = v63;
    *((_DWORD *)v49 + 2) = v64;
    *((_DWORD *)v49 + 3) = v65;
    v49 += 16;
    *(_DWORD *)v49 = v66;
    *((_DWORD *)v49 + 1) = v67;
    *((_DWORD *)v49 + 2) = v68;
    *((_DWORD *)v49 + 3) = v69;
    v49 += 16;
    *(_DWORD *)v49 = v70;
    *((_DWORD *)v49 + 1) = v71;
    *((_DWORD *)v49 + 2) = v72;
    *((_DWORD *)v49 + 3) = v73;
    if ( v10 + 1 != a2 )
    {
      v50 = a2 - 1 - v10;
      v51 = (v10 << 6) + 64;
      do
      {
        v52 = (char *)*v4 + v51;
        *v52 = v58;
        v52[1] = v59;
        v52[2] = v60;
        v52[3] = v61;
        v52 += 4;
        *v52 = v62;
        v52[1] = v63;
        v52[2] = v64;
        v52[3] = v65;
        v52 += 4;
        *v52 = v66;
        v52[1] = v67;
        v52[2] = v68;
        v52[3] = v69;
        v52 += 4;
        *v52 = v70;
        v52[1] = v71;
        v52[2] = v72;
        v52[3] = v73;
        v4 = (void **)v57;
        --v50;
        v51 += 64;
      }
      while ( v50 );
    }
    goto LABEL_20;
  }
  v4[1] = (void *)a2;
  return _stack_chk_guard - v74;
}
// 35EE0: variable 'v74' is possibly undefined
