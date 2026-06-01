/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_543C8
// Address: 0x000543C8

//----- (000543C8) --------------------------------------------------------
unsigned int __fastcall sub_543C8(_DWORD *a1, int a2, char *a3)
{
  int v5; // r1
  void *v7; // r0
  _BYTE *v8; // r0
  char *v9; // r1
  _BYTE *v10; // r6
  unsigned int result; // r0
  int v12; // lr
  int v13; // r2
  unsigned int v14; // r12
  _BYTE *v15; // [sp+0h] [bp-8h] BYREF

  v5 = a1[9];
  v7 = (void *)a1[8];
  if ( (unsigned int)(v5 + 1) > a1[10] )
  {
    v7 = sub_77EB0((int)(a1 + 8), v7, v5 + 1, 4u);
    v5 = a1[9];
    a1[8] = v7;
  }
  *((_DWORD *)v7 + v5) = a2;
  ++a1[9];
  v8 = sub_77E44(a3);
  v9 = (char *)a1[11];
  v15 = v8;
  v10 = v8;
  if ( v9 > (char *)&v15 )
  {
    result = a1[13];
    v13 = a1[12];
    v14 = v13 + 1;
    if ( result >= v13 + 1 )
      goto LABEL_6;
    goto LABEL_9;
  }
  result = a1[13];
  v12 = a1[12];
  v13 = v12;
  v14 = v12 + 1;
  if ( &v15 >= (_BYTE **)&v9[4 * result] )
  {
    if ( result >= v14 )
    {
LABEL_6:
      *(_DWORD *)(a1[11] + 4 * v13) = v10;
      goto LABEL_7;
    }
LABEL_9:
    result = (unsigned int)sub_77EB0((int)(a1 + 11), v9, v14, 4u);
    v13 = a1[12];
    a1[11] = result;
    goto LABEL_6;
  }
  if ( result < v14 )
  {
    result = (unsigned int)sub_77EB0((int)(a1 + 11), v9, v12 + 1, 4u);
    v12 = a1[12];
    v9 = (char *)result;
    a1[11] = result;
  }
  *(_DWORD *)&v9[4 * v12] = v10;
LABEL_7:
  ++a1[12];
  return result;
}
