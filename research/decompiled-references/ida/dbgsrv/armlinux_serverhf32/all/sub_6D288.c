/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6D288
// Address: 0x0006D288

//----- (0006D288) --------------------------------------------------------
char **__fastcall sub_6D288(char **result, int a2, int a3)
{
  int v3; // r5
  char **v5; // r8
  int v6; // r9
  int v7; // r10
  char **v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int *v12; // r4
  int v13; // lr
  char *v14; // r4
  char *v15; // r0
  char *v16; // r4
  char **v17; // [sp+4h] [bp-3Ch]
  int v18; // [sp+8h] [bp-38h]
  int v19; // [sp+Ch] [bp-34h]
  int v20; // [sp+10h] [bp-30h]
  int v21; // [sp+14h] [bp-2Ch]

  if ( a3 )
  {
    v3 = (int)result[1];
    v5 = result;
    v6 = a2 + 20;
    v7 = 0;
    do
    {
      v8 = *(char ***)(v6 - 20);
      v9 = *(_DWORD *)(v6 - 16);
      v10 = *(_DWORD *)(v6 - 12);
      v11 = *(_DWORD *)(v6 - 8);
      v12 = (int *)(v6 - 4);
      ++v7;
      v6 += 20;
      v17 = v8;
      v18 = v9;
      v19 = v10;
      v20 = v11;
      v13 = *v12;
      v14 = *v5;
      v21 = v13;
      if ( v3 + 1 > (unsigned int)v5[2] )
      {
        v15 = (char *)sub_77EB0((int)v5, v14, v3 + 1, 0x14u);
        v3 = (int)v5[1];
        v14 = v15;
        *v5 = v15;
      }
      result = v17;
      v16 = &v14[20 * v3];
      *(_DWORD *)v16 = v17;
      *((_DWORD *)v16 + 1) = v18;
      *((_DWORD *)v16 + 2) = v19;
      *((_DWORD *)v16 + 3) = v20;
      *((_DWORD *)v16 + 4) = v21;
      v3 = (int)(v5[1] + 1);
      v5[1] = (char *)v3;
    }
    while ( a3 != v7 );
  }
  return result;
}
