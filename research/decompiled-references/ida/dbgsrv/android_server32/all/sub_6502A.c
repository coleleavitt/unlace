/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6502A
// Address: 0x0006502A

//----- (0006502A) --------------------------------------------------------
int __fastcall sub_6502A(_DWORD *a1, int a2, char *a3)
{
  _DWORD *v6; // r0
  int v7; // r1
  _DWORD *v8; // r0
  char *v9; // r1
  unsigned int v10; // r6
  int v11; // r0
  int v12; // r3
  unsigned int v13; // r2
  void *v14; // r2
  int result; // r0
  void *v16; // [sp+4h] [bp-8h]
  void *v17; // [sp+8h] [bp-4h] BYREF

  v6 = a1 + 8;
  v7 = a1[9];
  if ( a1[10] >= (unsigned int)(v7 + 1) )
  {
    v8 = (_DWORD *)*v6;
  }
  else
  {
    v8 = qvector_reserve((int)v6, (void *)a1[8], v7 + 1, 4u);
    a1[8] = v8;
    v7 = a1[9];
  }
  v8[v7] = a2;
  ++a1[9];
  v16 = qstrdup(a3);
  v17 = v16;
  v9 = (char *)a1[11];
  v10 = a1[13];
  v11 = (int)(a1 + 11);
  v12 = a1[12];
  v13 = v12 + 1;
  if ( v9 <= (char *)&v17 && &v9[4 * v10] > (char *)&v17 )
  {
    if ( v10 < v13 )
    {
      v9 = (char *)qvector_reserve(v11, v9, v13, 4u);
      a1[11] = v9;
      v12 = a1[12];
    }
    goto LABEL_10;
  }
  if ( v10 >= v13 )
  {
LABEL_10:
    v14 = v16;
    goto LABEL_11;
  }
  v9 = (char *)qvector_reserve(v11, v9, v13, 4u);
  a1[11] = v9;
  v12 = a1[12];
  v14 = v17;
LABEL_11:
  *(_DWORD *)&v9[4 * v12] = v14;
  result = a1[12] + 1;
  a1[12] = result;
  return result;
}
