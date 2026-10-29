/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7148C
// Address: 0x0007148C

//----- (0007148C) --------------------------------------------------------
int __fastcall sub_7148C(int a1, int **a2, int a3, int a4, int *a5)
{
  int **v5; // r4
  int **v6; // r5
  const char *v7; // r6
  const char *v8; // r7
  int *v9; // r0
  int v10; // r7
  int *v11; // r6
  int result; // r0
  int v13; // r1
  size_t v14; // r7
  void *v15; // r0
  int *v16; // r0
  int *v17; // r1
  char *s2; // [sp+8h] [bp-4h]

  v5 = (int **)a2[1];
  v6 = a2 + 1;
  if ( !v5 )
  {
    v10 = a1;
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
  v10 = a1;
LABEL_16:
  v11 = *v6;
  result = 0;
  if ( !*v6 )
  {
    v11 = (int *)operator new(0x20u);
    v13 = *a5;
    v11[4] = 0;
    v11[5] = 0;
    v11[6] = 0;
    v14 = *(_DWORD *)(v13 + 4);
    if ( v14 )
    {
      s2 = (char *)v13;
      v15 = qalloc_or_throw(v14);
      v11[6] = v14;
      v11[4] = (int)v15;
      qmemcpy(v15, *(const void **)s2, v14);
      v11[5] = v14;
    }
    v11[7] = 0;
    *v11 = 0;
    v11[1] = 0;
    v11[2] = (int)v5;
    *v6 = v11;
    v16 = (int *)**a2;
    if ( v16 )
    {
      *a2 = v16;
      v17 = *v6;
    }
    else
    {
      v17 = v11;
    }
    v10 = a1;
    sub_261FA(a2[1], v17);
    a2[2] = (int *)((char *)a2[2] + 1);
    result = 1;
  }
  *(_BYTE *)(v10 + 4) = result;
  *(_DWORD *)v10 = v11;
  return result;
}
// B3CBE: using guessed type char byte_B3CBE;
