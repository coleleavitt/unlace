/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4DDA0
// Address: 0x0004DDA0

//----- (0004DDA0) --------------------------------------------------------
int __fastcall sub_4DDA0(int a1, int a2, int a3, int a4, int *a5)
{
  int v5; // r6
  int **v6; // r5
  int **v7; // r4
  const char *v8; // r7
  const char *v9; // r6
  int *v10; // r0
  int *v11; // r0
  char v12; // r1
  int *v13; // r1
  int v14; // r0
  _DWORD v19[4]; // [sp+20h] [bp-10h] BYREF

  v5 = a1;
  v6 = (int **)(a2 + 4);
  v7 = *(int ***)(a2 + 4);
  if ( !v7 )
  {
    v7 = (int **)(a2 + 4);
    goto LABEL_16;
  }
  v8 = &byte_B3CBE;
  if ( *(_DWORD *)(a3 + 4) )
    v8 = *(const char **)a3;
  v6 = (int **)(a2 + 4);
  while ( 1 )
  {
    v9 = &byte_B3CBE;
    if ( v7[5] )
      v9 = (const char *)v7[4];
    if ( strcmp(v8, v9) < 0 )
      break;
    if ( strcmp(v9, v8) >= 0 )
      goto LABEL_15;
    v10 = v7[1];
    v6 = v7 + 1;
    if ( !v10 )
      goto LABEL_15;
    ++v7;
LABEL_5:
    v6 = v7;
    v7 = (int **)v10;
  }
  v10 = *v7;
  if ( *v7 )
    goto LABEL_5;
  v6 = v7;
LABEL_15:
  v5 = a1;
LABEL_16:
  v11 = *v6;
  v12 = 0;
  if ( !*v6 )
  {
    sub_4DE7C((int)v19, a2, a4, a5);
    v13 = (int *)v19[0];
    *(_DWORD *)v19[0] = 0;
    v13[1] = 0;
    v13[2] = (int)v7;
    *v6 = v13;
    v14 = **(_DWORD **)a2;
    if ( v14 )
    {
      *(_DWORD *)a2 = v14;
      v13 = *v6;
    }
    sub_261FA(*(int **)(a2 + 4), v13);
    ++*(_DWORD *)(a2 + 8);
    v11 = (int *)v19[0];
    v12 = 1;
  }
  *(_BYTE *)(v5 + 4) = v12;
  *(_DWORD *)v5 = v11;
  return _stack_chk_guard - v19[3];
}
// B3CBE: using guessed type char byte_B3CBE;
