/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5F826
// Address: 0x0005F826

//----- (0005F826) --------------------------------------------------------
char *__fastcall sub_5F826(void **a1, int a2, int *a3)
{
  char *v5; // r4
  void *v6; // r0
  char *v7; // r7
  int v8; // r6
  char *v9; // r4
  int v11; // [sp+4h] [bp-Ch]
  int v12; // [sp+8h] [bp-8h]
  int v13; // [sp+Ch] [bp-4h]

  v13 = *a3;
  *a3 = 0;
  v12 = a3[1];
  a3[1] = 0;
  v11 = a3[2];
  a3[2] = 0;
  v5 = (char *)*a1;
  v6 = a1[1];
  v7 = v5;
  if ( a1[2] < (char *)v6 + 1 )
  {
    v7 = (char *)qvector_reserve((int)a1, v5, (unsigned int)v6 + 1, 0xCu);
    *a1 = v7;
    v6 = a1[1];
  }
  v8 = a2 - (_DWORD)v5;
  v9 = &v7[v8];
  memmove(&v7[v8 + 12], &v7[v8], 12 * (_DWORD)v6 - v8);
  *(_DWORD *)&v7[v8] = v13;
  *((_DWORD *)v9 + 1) = v12;
  *((_DWORD *)v9 + 2) = v11;
  a1[1] = (char *)a1[1] + 1;
  return &v7[v8];
}
