/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_32078
// Address: 0x00032078

//----- (00032078) --------------------------------------------------------
int __fastcall sub_32078(_DWORD *a1, int *a2)
{
  int *v3; // r1
  int v4; // r2
  int v5; // r3
  int v6; // r6
  int v7; // r7
  int v8; // r2
  int v9; // r3
  int v10; // r6
  int v11; // r7
  int v12; // r2
  int v13; // r3
  int v14; // r6
  int v15; // r7
  char **v16; // r0
  int v17; // r1
  char *v18; // r0
  char *v19; // r0
  int result; // r0
  int v21; // [sp+4h] [bp-44h]
  int v22; // [sp+8h] [bp-40h]
  int v23; // [sp+Ch] [bp-3Ch]
  int v24; // [sp+10h] [bp-38h]
  int v25; // [sp+14h] [bp-34h]
  int v26; // [sp+18h] [bp-30h]
  int v27; // [sp+1Ch] [bp-2Ch]
  int v28; // [sp+20h] [bp-28h]
  int v29; // [sp+24h] [bp-24h]
  int v30; // [sp+28h] [bp-20h]
  int v31; // [sp+34h] [bp-14h]
  int v32; // [sp+38h] [bp-10h]
  int v33; // [sp+3Ch] [bp-Ch]
  int v34; // [sp+40h] [bp-8h]

  v4 = *a2;
  v5 = a2[1];
  v6 = a2[2];
  v7 = a2[3];
  v3 = a2 + 4;
  v21 = v4;
  v22 = v5;
  v23 = v6;
  v24 = v7;
  v8 = *v3;
  v9 = v3[1];
  v10 = v3[2];
  v11 = v3[3];
  v3 += 4;
  v25 = v8;
  v26 = v9;
  v27 = v10;
  v28 = v11;
  v12 = *v3;
  v13 = v3[1];
  v14 = v3[2];
  v15 = v3[3];
  v3 += 4;
  v29 = v12;
  v30 = v13;
  v31 = *v3;
  v32 = v3[1];
  v33 = v3[2];
  v34 = v3[3];
  v16 = (char **)(a1 + 4);
  v17 = a1[5];
  if ( a1[6] >= (unsigned int)(v17 + 1) )
  {
    v18 = *v16;
  }
  else
  {
    v18 = (char *)qvector_reserve((int)v16, (void *)a1[4], v17 + 1, 0x40u);
    a1[4] = v18;
    v17 = a1[5];
  }
  v19 = &v18[64 * v17];
  *(_DWORD *)v19 = v21;
  *((_DWORD *)v19 + 1) = v22;
  *((_DWORD *)v19 + 2) = v23;
  *((_DWORD *)v19 + 3) = v24;
  v19 += 16;
  *(_DWORD *)v19 = v25;
  *((_DWORD *)v19 + 1) = v26;
  *((_DWORD *)v19 + 2) = v27;
  *((_DWORD *)v19 + 3) = v28;
  v19 += 16;
  *(_DWORD *)v19 = v29;
  *((_DWORD *)v19 + 1) = v30;
  *((_DWORD *)v19 + 2) = v14;
  *((_DWORD *)v19 + 3) = v15;
  v19 += 16;
  *(_DWORD *)v19 = v31;
  *((_DWORD *)v19 + 1) = v32;
  *((_DWORD *)v19 + 2) = v33;
  *((_DWORD *)v19 + 3) = v34;
  result = a1[5];
  a1[5] = result + 1;
  return result;
}
