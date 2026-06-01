/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_61C34
// Address: 0x00061C34

//----- (00061C34) --------------------------------------------------------
int __fastcall sub_61C34(int a1, unsigned __int8 *a2)
{
  _DWORD *v3; // r7
  char **v4; // r0
  int v5; // r3
  char *v6; // r0
  char *v7; // r6
  int v8; // r2
  int v9; // r0
  int v10; // r1
  int v11; // r3
  int v12; // r7
  const char *v13; // r0
  int v15; // [sp+0h] [bp-Ch]
  char *v16; // [sp+4h] [bp-8h]

  v3 = *(_DWORD **)(a1 + 4);
  v4 = (char **)(v3 + 13);
  v5 = v3[14];
  if ( v3[15] >= (unsigned int)(v5 + 1) )
  {
    v6 = *v4;
  }
  else
  {
    v6 = (char *)qvector_reserve((int)v4, (void *)v3[13], v5 + 1, 0x68u);
    v3[13] = v6;
    v5 = v3[14];
  }
  v16 = v6;
  v15 = 104 * v5;
  v7 = &v6[104 * v5];
  *((_DWORD *)v7 + 3) = 0;
  *((_DWORD *)v7 + 4) = 0;
  *((_DWORD *)v7 + 5) = 0;
  memset(v7, 0, 0x68u);
  ++v3[14];
  v8 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)&v16[v15] = (((a2[15] << 8) + a2[14]) << 16) + (a2[13] << 8) + a2[12];
  *((_DWORD *)v7 + 1) = 0;
  v9 = a2[10];
  v10 = a2[11];
  v11 = a2[8];
  v12 = a2[9];
  *((_DWORD *)v7 + 6) = 0;
  *((_DWORD *)v7 + 7) = 0;
  *((_DWORD *)v7 + 2) = (((v10 << 8) + v9) << 16) + (v12 << 8) + v11;
  *((_QWORD *)v7 + 4) = (((a2[23] << 8) + a2[22]) << 16) + (a2[21] << 8) + a2[20];
  ((void (__fastcall *)(char *, unsigned __int8 *, int))loc_58BE0)(v7 + 12, a2, v8);
  *((_DWORD *)v7 + 10) = 0;
  *((_DWORD *)v7 + 11) = 0;
  *((_DWORD *)v7 + 12) = 0;
  *((_DWORD *)v7 + 13) = 0;
  if ( *((_DWORD *)v7 + 4) )
    v13 = *((const char **)v7 + 3);
  else
    v13 = &byte_B3CBE;
  if ( !strncmp(v13, ".debug_", 7u) )
    *(_BYTE *)(a1 + 12) = 1;
  return 0;
}
// B3CBE: using guessed type char byte_B3CBE;
