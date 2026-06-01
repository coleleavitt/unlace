/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_67AA8
// Address: 0x00067AA8

//----- (00067AA8) --------------------------------------------------------
int *__fastcall sub_67AA8(int *a1, char a2)
{
  char *v4; // r0
  int v5; // r2
  int v6; // r3

  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  v4 = (char *)sub_77EB0((int)a1, nullptr, 5u, 1u);
  v5 = a1[1];
  *a1 = (int)v4;
  memset(&v4[v5], 0, 5 - v5);
  v6 = *a1;
  a1[1] = 5;
  *(_BYTE *)(v6 + 4) = a2;
  *(_DWORD *)v6 = 0;
  return a1;
}
