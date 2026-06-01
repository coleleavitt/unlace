/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_37A88
// Address: 0x00037A88

//----- (00037A88) --------------------------------------------------------
int __fastcall sub_37A88(_DWORD *a1)
{
  int v2; // r7
  char *v3; // r6
  int *v4; // r8
  char *v5; // r0
  char *v6; // r5
  int v7; // r2
  int *v8; // r0
  int v9; // r3
  int v11; // [sp+0h] [bp-10h]
  int v12; // [sp+4h] [bp-Ch]
  int v13; // [sp+8h] [bp-8h]
  int v14; // [sp+Ch] [bp-4h]

  v2 = a1[55];
  v3 = (char *)a1[54];
  v4 = (int *)(a1[51] + 16 * (a1[52] + 0xFFFFFFF));
  v11 = *v4;
  v12 = v4[1];
  v13 = v4[2];
  v14 = v4[3];
  if ( (unsigned int)(v2 + 1) > a1[56] )
  {
    v5 = (char *)sub_77EB0((int)(a1 + 54), v3, v2 + 1, 0x10u);
    v2 = a1[55];
    v3 = v5;
    a1[54] = v5;
  }
  v6 = &v3[16 * v2];
  *(_DWORD *)v6 = v11;
  *((_DWORD *)v6 + 1) = v12;
  *((_DWORD *)v6 + 2) = v13;
  *((_DWORD *)v6 + 3) = v14;
  v7 = a1[29];
  v8 = (int *)a1[28];
  ++a1[55];
  sub_3E5A4(v8, v4[1] - 4, v7 - v4[1]);
  v9 = a1[52];
  if ( v9 )
    a1[52] = v9 - 1;
  return 0;
}
