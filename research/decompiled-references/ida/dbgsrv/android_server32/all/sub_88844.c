/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_88844
// Address: 0x00088844

//----- (00088844) --------------------------------------------------------
unsigned int __fastcall sub_88844(_DWORD *a1, unsigned int a2)
{
  unsigned int v2; // r3
  unsigned int v3; // r2
  int v4; // r4
  unsigned int v5; // r5
  unsigned int v6; // r7
  unsigned __int8 *v7; // r4
  unsigned int v8; // r3
  unsigned __int8 *v9; // r0
  int v10; // r7
  unsigned __int8 *v11; // r2
  unsigned __int8 *v12; // r6
  int v13; // r6
  int v14; // r0
  unsigned int result; // r0
  int v17; // [sp+8h] [bp-38h]
  int v18; // [sp+Ch] [bp-34h]
  unsigned int v19; // [sp+10h] [bp-30h]
  unsigned __int8 *v20; // [sp+18h] [bp-28h]
  unsigned int v21; // [sp+1Ch] [bp-24h]
  unsigned int v22; // [sp+20h] [bp-20h]
  unsigned __int8 v23; // [sp+28h] [bp-18h]
  int v24; // [sp+2Ch] [bp-14h]
  int v25; // [sp+30h] [bp-10h]
  int v26; // [sp+34h] [bp-Ch]
  unsigned __int8 v27; // [sp+38h] [bp-8h]
  unsigned __int8 *v28; // [sp+3Ch] [bp-4h]

  v2 = a1[11] - 262;
  v3 = a1[27];
  v4 = v3;
  if ( v3 <= v2 )
    v4 = a1[11] - 262;
  v21 = v4 - v2;
  v5 = a1[31];
  v6 = a1[30];
  if ( v6 >= a1[35] )
    v5 >>= 2;
  v19 = a1[29];
  v18 = v19;
  if ( a1[36] <= v19 )
    v18 = a1[36];
  v26 = a1[14];
  v7 = (unsigned __int8 *)(v26 + v3);
  v27 = *(_BYTE *)(v26 + v3 + v6);
  v22 = v26 + v3 + 258;
  v20 = (unsigned __int8 *)(v26 + v3);
  v23 = *(_BYTE *)(v26 + v3 + v6 - 1);
  v25 = a1[13];
  v24 = a1[16];
  v8 = v21;
  while ( 1 )
  {
    v28 = v7;
    v9 = (unsigned __int8 *)(v26 + a2);
    if ( *(unsigned __int8 *)(v26 + a2 + v6) != v27 || v9[v6 - 1] != v23 || *v9 != *v7 || v9[1] != v7[1] )
      goto LABEL_23;
    v17 = v6;
    v10 = 0;
    while ( 1 )
    {
      v11 = &v9[v10];
      v12 = &v7[v10];
      if ( v7[v10 + 3] != v9[v10 + 3] )
      {
        v13 = (int)(v12 + 3);
        goto LABEL_33;
      }
      if ( v12[4] != v11[4] )
      {
        v13 = (int)(v12 + 4);
        goto LABEL_33;
      }
      if ( v12[5] != v11[5] )
      {
        v13 = (int)(v12 + 5);
        goto LABEL_33;
      }
      if ( v12[6] != v11[6] )
      {
        v13 = (int)(v12 + 6);
        goto LABEL_33;
      }
      if ( v12[7] != v11[7] )
      {
        v13 = (int)(v12 + 7);
        goto LABEL_33;
      }
      if ( v12[8] != v11[8] )
      {
        v13 = (int)(v12 + 8);
        goto LABEL_33;
      }
      if ( v12[9] != v11[9] )
        break;
      v10 += 8;
      v7 = v28;
      if ( (unsigned int)(v12 + 10) >= v22 || v12[10] != v11[10] )
      {
        v13 = (int)&v28[v10 + 2];
        goto LABEL_33;
      }
    }
    v13 = (int)(v12 + 9);
LABEL_33:
    v8 = v21;
    v6 = v17;
    v14 = v13 - v22 + 258;
    v7 = v20;
    if ( v14 <= v17 )
      goto LABEL_23;
    a1[28] = a2;
    if ( v14 >= v18 )
      break;
    v7 = v20;
    v27 = v20[v14];
    v23 = v20[v14 - 1];
    v8 = v21;
    v6 = v13 - v22 + 258;
LABEL_23:
    a2 = *(unsigned __int16 *)(v24 + 2 * (a2 & v25));
    if ( v8 < a2 )
    {
      if ( --v5 )
        continue;
    }
    goto LABEL_37;
  }
  v6 = v13 - v22 + 258;
LABEL_37:
  result = v19;
  if ( v6 <= v19 )
    return v6;
  return result;
}
