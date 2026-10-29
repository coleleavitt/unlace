/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_58168
// Address: 0x00058168

//----- (00058168) --------------------------------------------------------
int __fastcall sub_58168(int a1, int a2)
{
  int v2; // r4
  _DWORD *v3; // r5
  _DWORD *v4; // r2
  int v5; // r1
  _DWORD *v6; // r2
  int v7; // r4
  unsigned int v8; // r5
  unsigned int v9; // r2
  int v10; // r1
  int v11; // r5
  int v12; // r6
  int v13; // r7
  int v14; // r4
  int v15; // r0
  int v16; // r4
  unsigned int v17; // r5
  _DWORD *v18; // r0
  _DWORD *v19; // r2
  _DWORD *v21; // [sp+8h] [bp-4Ch]
  int v22; // [sp+Ch] [bp-48h]
  _DWORD *v23; // [sp+10h] [bp-44h]
  _DWORD *v24; // [sp+14h] [bp-40h]
  _DWORD *v26; // [sp+1Ch] [bp-38h]
  int *v27; // [sp+20h] [bp-34h]
  _DWORD *v28; // [sp+24h] [bp-30h]
  int v29; // [sp+28h] [bp-2Ch]
  int v30; // [sp+2Ch] [bp-28h]
  int v31; // [sp+30h] [bp-24h]
  unsigned int v32; // [sp+34h] [bp-20h]
  unsigned int v33; // [sp+38h] [bp-1Ch]
  _DWORD *v34; // [sp+3Ch] [bp-18h]
  int v35; // [sp+40h] [bp-14h]
  unsigned int v36; // [sp+44h] [bp-10h]
  int v37; // [sp+48h] [bp-Ch]
  int v38; // [sp+4Ch] [bp-8h]
  int v39; // [sp+50h] [bp-4h]

  v27 = (int *)(a1 + 4156);
  v26 = (_DWORD *)(a1 + 4152);
  v33 = *(_DWORD *)(a1 + 4168) - a2;
  v2 = *(_DWORD *)(a1 + 4156);
  if ( !(4 * v2) )
    return 0;
  v3 = *(_DWORD **)(a1 + 4152);
  v23 = (_DWORD *)(a1 + 4132);
  v22 = a1 + 4124;
  v24 = (_DWORD *)(a1 + 4120);
  v21 = (_DWORD *)(a1 + 4128);
  v38 = a1 + a2 + 24;
  v4 = v3;
  v31 = a1;
  while ( 1 )
  {
    v29 = v2;
    v34 = v4;
    v30 = *v4;
    v5 = **(_DWORD **)(a1 + 12);
    v6 = (_DWORD *)(v5 + 40 * *v4);
    v7 = v6[4];
    if ( v7 )
      v7 = v6[3];
    v28 = v3;
    v8 = v6[1];
    v9 = v33;
    if ( v33 >= v8 )
      v9 = v8;
    v32 = v8;
    if ( !v9 )
      break;
    v36 = v9;
    v37 = *(_DWORD *)(v31 + 16) & 0x20;
    v39 = *(_DWORD *)(v31 + 16) & 1;
    v10 = *(_DWORD *)(v5 + 40 * v30);
    v11 = 0;
    v35 = v7;
    while ( 1 )
    {
      v12 = *(unsigned __int8 *)(v10 + v11);
      v13 = *(unsigned __int8 *)(v38 + v11);
      if ( !v39 )
      {
        v14 = v10;
        v13 = toupper(v13);
        v15 = toupper(v12);
        v10 = v14;
        v7 = v35;
        v9 = v36;
        v12 = v15;
      }
      if ( !v7 )
      {
        v12 = (unsigned __int8)v12;
LABEL_21:
        if ( (unsigned __int8)v13 != v12 )
          goto LABEL_27;
        goto LABEL_24;
      }
      if ( !v37 )
        break;
      if ( (*(unsigned __int8 *)(v7 + v11) & (v13 ^ v12)) << 24 )
        goto LABEL_27;
LABEL_24:
      if ( ++v11 >= v9 )
        goto LABEL_25;
    }
    v12 = (unsigned __int8)v12;
    if ( v7 == 255 )
    {
      if ( (unsigned __int8)v12 == 255 )
        goto LABEL_24;
      goto LABEL_21;
    }
    if ( (unsigned __int8)v13 == (unsigned __int8)v12 || !*(_BYTE *)(v7 + v11) )
      goto LABEL_24;
LABEL_27:
    a1 = v31;
    v19 = v34;
    v2 = v29;
    v3 = v28;
LABEL_28:
    v4 = v19 + 1;
    if ( v4 == &v3[v2] )
      return 0;
  }
LABEL_25:
  v16 = *v24 + a2;
  if ( v33 < v32 )
  {
    v17 = v9;
    v18 = qalloc_or_throw(20);
    v18[2] = v16;
    v18[3] = v30;
    v18[4] = v17;
    *v18 = v22;
    v18[1] = *v21;
    *(_DWORD *)*v21 = v18;
    *v21 = v18;
    ++*v23;
    v2 = *v27;
    v3 = (_DWORD *)*v26;
    a1 = v31;
    v19 = v34;
    goto LABEL_28;
  }
  **(_DWORD **)(v31 + 4) = v16;
  return 1;
}
