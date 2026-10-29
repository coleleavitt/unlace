/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_70634
// Address: 0x00070634

//----- (00070634) --------------------------------------------------------
int __fastcall sub_70634(int a1, unsigned __int16 *a2, unsigned int a3)
{
  _BOOL4 v3; // r3
  unsigned int v6; // r3
  unsigned __int16 *v7; // r8
  unsigned int v8; // r4
  int v9; // r7
  unsigned __int16 *v10; // r3
  int v11; // r6
  int v12; // r11
  unsigned int v13; // r9
  void *v14; // r1
  int v15; // r10
  int v16; // r6
  int v17; // r11
  unsigned int v18; // r9
  void *v19; // r1
  char v20; // r4
  char v21; // r9
  int v22; // r4
  int v23; // r10
  unsigned int v24; // r6
  void *v25; // r1
  unsigned int v27; // r2
  int v30; // r2
  unsigned __int16 *v31; // r6
  unsigned int v32; // r3
  int v33; // r10
  int v34; // r8
  unsigned int v35; // r9
  unsigned int v36; // r4
  void *v37; // r1
  int v38; // r10
  int v39; // r11
  unsigned int v40; // r8
  void *v41; // r1
  int v42; // r9
  int v43; // r11
  unsigned int v44; // r10
  void *v45; // r1
  char v46; // r4
  int v47; // r8
  int v48; // r10
  unsigned int v49; // r9
  void *v50; // r1
  int v51; // r6
  char v52; // r9
  int v53; // r10
  unsigned int v54; // r4
  void *v55; // r1
  int v56; // r9
  int v57; // r11
  unsigned int v58; // r10
  void *v59; // r1
  unsigned int v60; // r3
  signed int v61; // [sp+0h] [bp-14h]
  _BOOL4 v62; // [sp+4h] [bp-10h]
  unsigned int v63; // [sp+8h] [bp-Ch]

  v3 = a1 == 0;
  if ( !a2 )
    v3 = 1;
  v61 = a3;
  if ( v3 )
    return 0;
  *(_DWORD *)(a1 + 4) = 0;
  v6 = *(_DWORD *)(a1 + 8);
  if ( (int)a3 <= 0 )
  {
    if ( v6 > 0xF )
      goto LABEL_71;
    a3 = 16;
  }
  else if ( a3 <= v6 )
  {
    v7 = a2 + 1;
    v8 = *a2;
    v63 = a3 >> 31;
    v62 = 1;
LABEL_7:
    v9 = 0;
    v10 = a2;
    while ( 1 )
    {
      if ( v8 <= 0x7F )
      {
        v51 = *(_DWORD *)(a1 + 4);
        v52 = v8;
        v53 = v51 - 1;
        v54 = v51 + 1;
        if ( !v51 )
        {
          v51 = 1;
          v54 = 2;
          v53 = 0;
        }
        v55 = *(void **)a1;
        if ( *(_DWORD *)(a1 + 8) < v54 )
        {
          v55 = sub_78018(a1, v55, v54, 1u);
          *(_DWORD *)a1 = v55;
        }
        *(_DWORD *)(a1 + 4) = v54;
        v10 = v7;
        *((_BYTE *)v55 + v53) = v52;
        *(_BYTE *)(*(_DWORD *)a1 + v51) = 0;
        goto LABEL_26;
      }
      if ( v8 < 0x800 )
        break;
      if ( v8 - 55296 >= 0x400 )
      {
        if ( v8 - 56320 < 0x400 )
          return 0;
        v11 = *(_DWORD *)(a1 + 4);
        v12 = v11 - 1;
        v13 = v11 + 1;
        if ( !v11 )
        {
          v11 = 1;
          v13 = 2;
          v12 = 0;
        }
        v14 = *(void **)a1;
        if ( *(_DWORD *)(a1 + 8) < v13 )
        {
          v14 = sub_78018(a1, v14, v13, 1u);
          *(_DWORD *)a1 = v14;
        }
        *(_DWORD *)(a1 + 4) = v13;
        *((_BYTE *)v14 + v12) = (v8 >> 12) | 0xE0;
        v15 = (v8 >> 6) & 0x3F | 0x80;
        *(_BYTE *)(*(_DWORD *)a1 + v11) = 0;
        v16 = *(_DWORD *)(a1 + 4);
        v17 = v16 - 1;
        v18 = v16 + 1;
        if ( !v16 )
        {
          v16 = 1;
          v18 = 2;
          v17 = 0;
        }
        v19 = *(void **)a1;
        if ( *(_DWORD *)(a1 + 8) < v18 )
        {
          v19 = sub_78018(a1, v19, v18, 1u);
          *(_DWORD *)a1 = v19;
        }
        v20 = v8 & 0x3F;
        *(_DWORD *)(a1 + 4) = v18;
        *((_BYTE *)v19 + v17) = v15;
        goto LABEL_21;
      }
      if ( v61 <= ++v9 && v62 )
        return 0;
      v30 = v10[1];
      v31 = v10 + 2;
      v32 = v63;
      if ( v30 )
        v32 = 0;
      if ( v32 || (unsigned int)(v30 - 56320) >= 0x400 )
        return 0;
      v33 = *(_DWORD *)(a1 + 4);
      v34 = v33 - 1;
      v35 = v33 + 1;
      v36 = (((v8 << 10) & 0xFFC00) + 0x10000) | v30 & 0x3FF;
      if ( !v33 )
      {
        v34 = 0;
        v33 = 1;
        v35 = 2;
      }
      v37 = *(void **)a1;
      if ( *(_DWORD *)(a1 + 8) < v35 )
      {
        v37 = sub_78018(a1, v37, v35, 1u);
        *(_DWORD *)a1 = v37;
      }
      *(_DWORD *)(a1 + 4) = v35;
      *((_BYTE *)v37 + v34) = (v36 >> 18) | 0xF0;
      *(_BYTE *)(*(_DWORD *)a1 + v33) = 0;
      v38 = *(_DWORD *)(a1 + 4);
      v39 = v38 - 1;
      v40 = v38 + 1;
      if ( !v38 )
      {
        v38 = 1;
        v40 = 2;
        v39 = 0;
      }
      v41 = *(void **)a1;
      if ( *(_DWORD *)(a1 + 8) < v40 )
      {
        v41 = sub_78018(a1, v41, v40, 1u);
        *(_DWORD *)a1 = v41;
      }
      *(_DWORD *)(a1 + 4) = v40;
      *((_BYTE *)v41 + v39) = (v36 >> 12) & 0x3F | 0x80;
      *(_BYTE *)(*(_DWORD *)a1 + v38) = 0;
      v42 = *(_DWORD *)(a1 + 4);
      v43 = v42 - 1;
      v44 = v42 + 1;
      if ( !v42 )
      {
        v42 = 1;
        v44 = 2;
        v43 = 0;
      }
      v45 = *(void **)a1;
      if ( *(_DWORD *)(a1 + 8) < v44 )
      {
        v45 = sub_78018(a1, v45, v44, 1u);
        *(_DWORD *)a1 = v45;
      }
      *(_DWORD *)(a1 + 4) = v44;
      *((_BYTE *)v45 + v43) = (v36 >> 6) & 0x3F | 0x80;
      v46 = v36 & 0x3F | 0x80;
      *(_BYTE *)(*(_DWORD *)a1 + v42) = 0;
      v47 = *(_DWORD *)(a1 + 4);
      v48 = v47 - 1;
      v49 = v47 + 1;
      if ( !v47 )
      {
        v47 = 1;
        v49 = 2;
        v48 = 0;
      }
      v50 = *(void **)a1;
      if ( *(_DWORD *)(a1 + 8) < v49 )
      {
        v50 = sub_78018(a1, v50, v49, 1u);
        *(_DWORD *)a1 = v50;
      }
      *(_DWORD *)(a1 + 4) = v49;
      v10 = v31;
      *((_BYTE *)v50 + v48) = v46;
      *(_BYTE *)(*(_DWORD *)a1 + v47) = 0;
LABEL_26:
      if ( v61 > ++v9 || !v62 )
      {
        v8 = *v10;
        v7 = v10 + 1;
        v27 = v63;
        if ( *v10 )
          v27 = 0;
        if ( !v27 )
          continue;
      }
      return 1;
    }
    v16 = *(_DWORD *)(a1 + 4);
    v56 = (v8 >> 6) & 0x3F | 0xC0;
    v57 = v16 - 1;
    v58 = v16 + 1;
    if ( !v16 )
    {
      v16 = 1;
      v58 = 2;
      v57 = 0;
    }
    v59 = *(void **)a1;
    if ( *(_DWORD *)(a1 + 8) < v58 )
    {
      v59 = sub_78018(a1, v59, v58, 1u);
      *(_DWORD *)a1 = v59;
    }
    *(_DWORD *)(a1 + 4) = v58;
    v20 = v8 & 0x3F;
    *((_BYTE *)v59 + v57) = v56;
LABEL_21:
    v21 = v20 | 0x80;
    *(_BYTE *)(*(_DWORD *)a1 + v16) = 0;
    v22 = *(_DWORD *)(a1 + 4);
    v23 = v22 - 1;
    v24 = v22 + 1;
    if ( !v22 )
    {
      v22 = 1;
      v24 = 2;
      v23 = 0;
    }
    v25 = *(void **)a1;
    if ( *(_DWORD *)(a1 + 8) < v24 )
    {
      v25 = sub_78018(a1, v25, v24, 1u);
      *(_DWORD *)a1 = v25;
    }
    *(_DWORD *)(a1 + 4) = v24;
    v10 = v7;
    *((_BYTE *)v25 + v23) = v21;
    *(_BYTE *)(*(_DWORD *)a1 + v22) = 0;
    goto LABEL_26;
  }
  *(_DWORD *)a1 = sub_78018(a1, *(void **)a1, a3, 1u);
LABEL_71:
  v62 = v61 >= 0;
  if ( v61 )
  {
    v7 = a2 + 1;
    v8 = *a2;
    v60 = (unsigned int)v61 >> 31;
    v63 = (unsigned int)v61 >> 31;
    if ( *a2 )
      v60 = 0;
    if ( !v60 )
      goto LABEL_7;
  }
  return 1;
}
// 7077C: masking with 0x1 was optimized away because %var_10.4 <= 0x1
// 707B2: masking with 0x1 was optimized away because %var_10.4 <= 0x1
