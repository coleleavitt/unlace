/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4D6F0
// Address: 0x0004D6F0

//----- (0004D6F0) --------------------------------------------------------
int __fastcall sub_4D6F0(int a1, int **a2, int a3, char **a4)
{
  int v4; // r4
  int **v5; // r6
  int **v6; // r5
  const char *v7; // r7
  const char *v8; // r4
  int *v9; // r0
  int *v10; // r7
  int result; // r0
  char *v12; // r3
  int *v13; // r0
  int *v14; // r1
  char *v16; // [sp+8h] [bp-10h]
  char *s2; // [sp+14h] [bp-4h]

  v4 = a1;
  v5 = (int **)a2[1];
  v6 = a2 + 1;
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
  v4 = a1;
LABEL_16:
  v10 = *v6;
  result = 0;
  if ( !*v6 )
  {
    v10 = (int *)operator new(0x1Cu);
    s2 = *a4;
    *a4 = nullptr;
    v16 = a4[1];
    a4[1] = nullptr;
    v12 = a4[2];
    v10[4] = (int)s2;
    v10[5] = (int)v16;
    v10[6] = (int)v12;
    a4[2] = nullptr;
    *v10 = 0;
    v10[1] = 0;
    v10[2] = (int)v5;
    *v6 = v10;
    v13 = (int *)**a2;
    if ( v13 )
    {
      *a2 = v13;
      v14 = *v6;
    }
    else
    {
      v14 = v10;
    }
    sub_261FA(a2[1], v14);
    a2[2] = (int *)((char *)a2[2] + 1);
    result = 1;
  }
  *(_BYTE *)(v4 + 4) = result;
  *(_DWORD *)v4 = v10;
  return result;
}
// B3CBE: using guessed type char byte_B3CBE;
