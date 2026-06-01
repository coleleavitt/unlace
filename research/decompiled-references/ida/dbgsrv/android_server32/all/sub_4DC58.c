/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4DC58
// Address: 0x0004DC58

//----- (0004DC58) --------------------------------------------------------
int __fastcall sub_4DC58(int result, int **a2, int a3, int a4, _DWORD **a5)
{
  void **v5; // r4
  void **v6; // r5
  const char *v7; // r6
  const char *v8; // r7
  void **v9; // r0
  _DWORD *v10; // r6
  char v11; // r2
  _DWORD *v12; // r0
  int *v13; // r0
  int *v14; // r1
  int v16; // [sp+4h] [bp-8h]

  v5 = (void **)a2[1];
  v6 = (void **)(a2 + 1);
  v16 = result;
  if ( !v5 )
  {
    v5 = (void **)(a2 + 1);
    goto LABEL_16;
  }
  v7 = &byte_B3CBE;
  if ( *(_DWORD *)(a3 + 4) )
    v7 = *(const char **)a3;
  v6 = (void **)(a2 + 1);
  while ( 1 )
  {
    v8 = &byte_B3CBE;
    if ( v5[5] )
      v8 = (const char *)v5[4];
    if ( strcmp(v7, v8) < 0 )
      break;
    if ( strcmp(v8, v7) >= 0 )
      goto LABEL_15;
    v9 = (void **)v5[1];
    v6 = v5 + 1;
    if ( !v9 )
      goto LABEL_15;
    ++v5;
LABEL_5:
    v6 = v5;
    v5 = v9;
  }
  v9 = (void **)*v5;
  if ( *v5 )
    goto LABEL_5;
  v6 = v5;
LABEL_15:
  result = v16;
LABEL_16:
  v10 = *v6;
  v11 = 0;
  if ( !*v6 )
  {
    v10 = operator new(0x38u);
    v12 = *a5;
    v10[4] = **a5;
    *v12 = 0;
    v10[5] = v12[1];
    v12[1] = 0;
    v10[6] = v12[2];
    v12[2] = 0;
    *((_BYTE *)v10 + 32) = 2;
    v10[10] = 0;
    v10[11] = 0;
    v10[12] = 0;
    v10[13] = 0;
    *v10 = 0;
    v10[1] = 0;
    v10[2] = v5;
    *v6 = v10;
    v13 = (int *)**a2;
    if ( v13 )
    {
      *a2 = v13;
      v14 = (int *)*v6;
    }
    else
    {
      v14 = v10;
    }
    sub_261FA(a2[1], v14);
    a2[2] = (int *)((char *)a2[2] + 1);
    v11 = 1;
    result = v16;
  }
  *(_BYTE *)(result + 4) = v11;
  *(_DWORD *)result = v10;
  return result;
}
// B3CBE: using guessed type char byte_B3CBE;
