/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2F5CC
// Address: 0x0002F5CC

//----- (0002F5CC) --------------------------------------------------------
int __fastcall sub_2F5CC(_DWORD *s, int *a2, int a3, int a4, int a5, int a6, char a7)
{
  int v8; // r7
  unsigned int v11; // r2
  _DWORD *v12; // r12
  int v13; // r1
  int v14; // r2
  int v15; // r3
  int v16; // r1
  int v17; // r2
  int v18; // r3
  int v19; // r1
  int v20; // r2
  int v21; // r3
  int v22; // r1
  int v23; // r2
  int v24; // r3
  int v25; // r3

  *a2 = 0;
  if ( !a7 )
  {
    v11 = *(_DWORD *)(a3 + 4 * a4 + 68);
    if ( !v11 )
      return 0;
    v8 = *(unsigned __int8 *)(a3 + 176);
    if ( !*(_BYTE *)(a3 + 176) )
      sub_147B8();
    if ( v11 >= *(_DWORD *)(a3 + 60) )
      return 0;
    v12 = (_DWORD *)(*(_DWORD *)(a3 + 56) + (v11 << 6));
    if ( !v12 )
      return 0;
    v13 = v12[1];
    v14 = v12[2];
    v15 = v12[3];
    *s = *v12;
    s[1] = v13;
    s[2] = v14;
    s[3] = v15;
    v16 = v12[5];
    v17 = v12[6];
    v18 = v12[7];
    s[4] = v12[4];
    s[5] = v16;
    s[6] = v17;
    s[7] = v18;
    v19 = v12[9];
    v20 = v12[10];
    v21 = v12[11];
    s[8] = v12[8];
    s[9] = v19;
    s[10] = v20;
    s[11] = v21;
    v22 = v12[13];
    v23 = v12[14];
    v24 = v12[15];
    s[12] = v12[12];
    s[13] = v22;
    s[14] = v23;
    s[15] = v24;
    v25 = v12[10];
    if ( v25 != *(_DWORD *)(a3 + 124) || !*(_DWORD *)(a3 + 228) )
    {
      if ( v25 != *(_DWORD *)(a3 + 92) || *(_DWORD *)(a3 + 220) == *(_DWORD *)(a3 + 228) )
        goto LABEL_3;
      goto LABEL_13;
    }
    *a2 = 1;
    return v8;
  }
  if ( !sub_2F4D4(a5, s, a6) )
  {
LABEL_3:
    v8 = *a2;
    if ( *a2 )
      return 1;
    return v8;
  }
LABEL_13:
  *a2 = 2;
  return 1;
}
