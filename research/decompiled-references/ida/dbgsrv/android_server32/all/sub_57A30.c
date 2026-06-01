/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_57A30
// Address: 0x00057A30

//----- (00057A30) --------------------------------------------------------
int __fastcall sub_57A30(int a1, int a2)
{
  int v2; // r4
  _DWORD *v3; // r3
  _DWORD *v4; // r2
  int v5; // r1
  _DWORD *v6; // r3
  unsigned int v7; // r2
  unsigned int v8; // r0
  unsigned int v9; // r2
  unsigned int v10; // r4
  unsigned int v11; // r3
  unsigned int v12; // r1
  int v13; // r2
  int v14; // r5
  int v15; // r6
  int v16; // r7
  int v17; // r4
  int v18; // r0
  int v19; // r0
  int v20; // r4
  unsigned int v21; // r5
  _DWORD *v22; // r0
  _DWORD *v23; // r2
  int v25; // [sp+4h] [bp-50h]
  _DWORD *v26; // [sp+8h] [bp-4Ch]
  int v27; // [sp+Ch] [bp-48h]
  _DWORD *v28; // [sp+10h] [bp-44h]
  _DWORD *v29; // [sp+14h] [bp-40h]
  _DWORD *v31; // [sp+1Ch] [bp-38h]
  int *v32; // [sp+20h] [bp-34h]
  _DWORD *v33; // [sp+24h] [bp-30h]
  int v34; // [sp+28h] [bp-2Ch]
  int v35; // [sp+2Ch] [bp-28h]
  int v36; // [sp+30h] [bp-24h]
  unsigned int v37; // [sp+34h] [bp-20h]
  unsigned int v38; // [sp+38h] [bp-1Ch]
  _DWORD *v39; // [sp+3Ch] [bp-18h]
  unsigned int v40; // [sp+40h] [bp-14h]
  unsigned int v41; // [sp+44h] [bp-10h]
  unsigned int v42; // [sp+48h] [bp-Ch]
  int v43; // [sp+4Ch] [bp-8h]
  int v44; // [sp+50h] [bp-4h]

  v32 = (int *)(a1 + 4156);
  v31 = (_DWORD *)(a1 + 4152);
  v38 = a2 - *(_DWORD *)(a1 + 4168);
  v2 = *(_DWORD *)(a1 + 4156);
  if ( !(4 * v2) )
    return 0;
  v3 = *(_DWORD **)(a1 + 4152);
  v28 = (_DWORD *)(a1 + 4132);
  v27 = a1 + 4124;
  v29 = (_DWORD *)(a1 + 4120);
  v26 = (_DWORD *)(a1 + 4128);
  v25 = a1 + a2 + 25;
  v4 = v3;
  v36 = a1;
  while ( 1 )
  {
    v33 = v3;
    v34 = v2;
    v39 = v4;
    v35 = *v4;
    v5 = **(_DWORD **)(a1 + 12);
    v6 = (_DWORD *)(v5 + 40 * *v4);
    v7 = v6[1];
    v8 = v38;
    if ( v38 >= v7 )
      v8 = v6[1];
    v37 = v6[1];
    v9 = v7 - v8;
    v10 = v6[3] + v9;
    if ( !v6[4] )
      v10 = 0;
    v11 = v8;
    if ( !v8 )
      break;
    v42 = v8;
    v43 = *(_DWORD *)(v36 + 16) & 0x20;
    v44 = *(_DWORD *)(v36 + 16) & 1;
    v11 = v8;
    v12 = *(_DWORD *)(v5 + 40 * v35) + v9;
    v13 = v25 - v8 - 1;
    v14 = 0;
    v41 = v10;
    v40 = v12;
    while ( 1 )
    {
      v15 = *(unsigned __int8 *)(v12 + v14);
      v16 = *(unsigned __int8 *)(v13 + v14);
      if ( !v44 )
      {
        v17 = v13;
        v16 = toupper(v16);
        v18 = toupper(v15);
        v13 = v17;
        v12 = v40;
        v10 = v41;
        v11 = v42;
        v15 = v18;
      }
      if ( !v10 )
      {
        v15 = (unsigned __int8)v15;
LABEL_21:
        if ( (unsigned __int8)v16 != v15 )
          goto LABEL_27;
        goto LABEL_24;
      }
      if ( !v43 )
        break;
      if ( (*(unsigned __int8 *)(v10 + v14) & (v16 ^ v15)) << 24 )
        goto LABEL_27;
LABEL_24:
      if ( ++v14 >= v11 )
        goto LABEL_25;
    }
    v15 = (unsigned __int8)v15;
    if ( v10 == 255 )
    {
      if ( (unsigned __int8)v15 == 255 )
        goto LABEL_24;
      goto LABEL_21;
    }
    if ( (unsigned __int8)v16 == (unsigned __int8)v15 || !*(_BYTE *)(v10 + v14) )
      goto LABEL_24;
LABEL_27:
    a1 = v36;
    v23 = v39;
    v2 = v34;
    v3 = v33;
LABEL_28:
    v4 = v23 + 1;
    if ( v4 == &v3[v2] )
      return 0;
  }
LABEL_25:
  v19 = *v29 + a2;
  if ( v38 < v37 )
  {
    v20 = v19 - v37;
    v21 = v11;
    v22 = qalloc_or_throw(20);
    v22[2] = v20;
    v22[3] = v35;
    v22[4] = v21;
    *v22 = v27;
    v22[1] = *v26;
    *(_DWORD *)*v26 = v22;
    *v26 = v22;
    ++*v28;
    v2 = *v32;
    v3 = (_DWORD *)*v31;
    a1 = v36;
    v23 = v39;
    goto LABEL_28;
  }
  **(_DWORD **)(v36 + 4) = v19 - v11;
  return 1;
}
