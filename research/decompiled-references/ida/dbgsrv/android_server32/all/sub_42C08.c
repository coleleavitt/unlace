/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42C08
// Address: 0x00042C08

//----- (00042C08) --------------------------------------------------------
int __fastcall sub_42C08(int result, _DWORD **a2, int a3, char **a4)
{
  _DWORD **v4; // r4
  int **v5; // r6
  int **v6; // r5
  const char *v7; // r7
  const char *v8; // r4
  int *v9; // r0
  int *v10; // r7
  char v11; // r1
  char *v12; // r3
  _DWORD **v13; // r2
  char *v14; // r4
  _DWORD **v15; // r4
  _DWORD *v16; // r0
  int *v17; // r1
  char *v19; // [sp+8h] [bp-10h]
  int v21; // [sp+10h] [bp-8h]
  char *s2; // [sp+14h] [bp-4h]

  v4 = a2;
  v5 = (int **)a2[1];
  v6 = a2 + 1;
  v21 = result;
  if ( !v5 )
  {
    v5 = a2 + 1;
    goto LABEL_16;
  }
  v7 = &byte_B3CBE;
  if ( *(_DWORD *)(a3 + 4) )
    v7 = *(const char **)a3;
  v6 = a2 + 1;
  while ( 1 )
  {
    v8 = &byte_B3CBE;
    if ( v5[5] )
      v8 = (const char *)v5[4];
    if ( strcmp(v7, v8) < 0 )
      break;
    if ( strcmp(v8, v7) >= 0 )
      goto LABEL_15;
    v9 = v5[1];
    v6 = v5 + 1;
    if ( !v9 )
      goto LABEL_15;
    ++v5;
LABEL_5:
    v6 = v5;
    v5 = (int **)v9;
  }
  v9 = *v5;
  if ( *v5 )
    goto LABEL_5;
  v6 = v5;
LABEL_15:
  result = v21;
  v4 = a2;
LABEL_16:
  v10 = *v6;
  v11 = 0;
  if ( !*v6 )
  {
    v10 = (int *)operator new(0x20u);
    s2 = *a4;
    *a4 = nullptr;
    v19 = a4[1];
    a4[1] = nullptr;
    v12 = a4[2];
    a4[2] = nullptr;
    v13 = v4;
    v14 = a4[3];
    v10[4] = (int)s2;
    v10[5] = (int)v19;
    v10[6] = (int)v12;
    v10[7] = (int)v14;
    v15 = v13;
    *v10 = 0;
    v10[1] = 0;
    v10[2] = (int)v5;
    *v6 = v10;
    v16 = (_DWORD *)**v13;
    if ( v16 )
    {
      *v13 = v16;
      v17 = *v6;
    }
    else
    {
      v17 = v10;
    }
    sub_261FA(v13[1], v17);
    v15[2] = (_DWORD *)((char *)v15[2] + 1);
    v11 = 1;
    result = v21;
  }
  *(_BYTE *)(result + 4) = v11;
  *(_DWORD *)result = v10;
  return result;
}
// B3CBE: using guessed type char byte_B3CBE;
