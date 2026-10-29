/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_31030
// Address: 0x00031030

//----- (00031030) --------------------------------------------------------
int __fastcall sub_31030(char **a1, int a2)
{
  size_t v4; // r4
  int v5; // r4
  char *v6; // r3
  char *v7; // r1
  char *v8; // r0
  int v10; // r3
  char *v11; // r1
  _DWORD *v12; // r0
  int v13; // r7
  int v14; // r3
  char *v15; // r4
  int v16; // r5
  size_t v17; // r9
  void *v18; // r0
  int v19; // [sp+4h] [bp-48h]
  int v20; // [sp+8h] [bp-44h]
  void *v21; // [sp+14h] [bp-38h]
  size_t v22; // [sp+18h] [bp-34h]
  size_t v23; // [sp+1Ch] [bp-30h]
  __int64 v24; // [sp+20h] [bp-2Ch]
  int v25; // [sp+28h] [bp-24h]
  int v26; // [sp+2Ch] [bp-20h]
  int v27; // [sp+30h] [bp-1Ch]
  int v28; // [sp+34h] [bp-18h]
  _DWORD *v29; // [sp+38h] [bp-14h]
  int v30; // [sp+3Ch] [bp-10h]
  int v31; // [sp+40h] [bp-Ch]
  int v32; // [sp+44h] [bp-8h]

  v4 = *(_DWORD *)(a2 + 4);
  v21 = nullptr;
  v22 = 0;
  v23 = 0;
  if ( v4 )
  {
    v21 = sub_77E84(v4);
    v23 = v4;
    memcpy(v21, *(const void **)a2, v4);
    v22 = v4;
  }
  v5 = *(_DWORD *)(a2 + 40);
  v24 = *(_QWORD *)(a2 + 12);
  v25 = *(_DWORD *)(a2 + 20);
  v26 = *(_DWORD *)(a2 + 24);
  v19 = v5;
  v27 = *(_DWORD *)(a2 + 28);
  v28 = *(_DWORD *)(a2 + 32);
  v29 = nullptr;
  v30 = 0;
  v31 = 0;
  if ( v5 )
  {
    v12 = sub_77E84(28 * v5);
    v13 = 0;
    v29 = v12;
    v31 = v5;
    while ( 1 )
    {
      v14 = *(_DWORD *)(a2 + 36);
      v12[7 * v13] = 0;
      v20 = v14;
      v15 = (char *)&v12[7 * v13];
      v16 = 28 * v13 + v14;
      *((_DWORD *)v15 + 1) = 0;
      *((_DWORD *)v15 + 2) = 0;
      v17 = *(_DWORD *)(v16 + 4);
      if ( v17 )
      {
        v18 = sub_77E84(*(_DWORD *)(v16 + 4));
        *(_DWORD *)v15 = v18;
        *((_DWORD *)v15 + 2) = v17;
        memcpy(v18, *(const void **)(v20 + 28 * v13), v17);
        *((_DWORD *)v15 + 1) = v17;
      }
      ++v13;
      *((_DWORD *)v15 + 3) = *(_DWORD *)(v16 + 12);
      *((_DWORD *)v15 + 4) = *(_DWORD *)(v16 + 16);
      *((_DWORD *)v15 + 5) = *(_DWORD *)(v16 + 20);
      v15[24] = *(_BYTE *)(v16 + 24);
      if ( v19 == v13 )
        break;
      v12 = v29;
    }
    v30 = v19;
  }
  v6 = a1[1];
  v7 = *a1;
  if ( v6 + 1 > a1[2] )
  {
    v8 = (char *)sub_77EB0((int)a1, v7, (unsigned int)(v6 + 1), 0x30u);
    v6 = a1[1];
    v7 = v8;
    *a1 = v8;
  }
  v10 = 48 * (_DWORD)v6;
  *(_DWORD *)&v7[v10] = v21;
  v11 = &v7[v10];
  *((_DWORD *)v11 + 1) = v22;
  *((_DWORD *)v11 + 2) = v23;
  *(_QWORD *)(v11 + 12) = v24;
  *((_DWORD *)v11 + 5) = v25;
  *((_DWORD *)v11 + 6) = v26;
  *((_DWORD *)v11 + 7) = v27;
  *((_DWORD *)v11 + 8) = v28;
  *((_DWORD *)v11 + 9) = v29;
  *((_DWORD *)v11 + 10) = v30;
  *((_DWORD *)v11 + 11) = v31;
  ++a1[1];
  return v32;
}
// 310B6: variable 'v32' is possibly undefined
