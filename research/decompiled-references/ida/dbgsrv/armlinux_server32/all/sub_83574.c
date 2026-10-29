/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_83574
// Address: 0x00083574

//----- (00083574) --------------------------------------------------------
int **__fastcall sub_83574(int **a1, int *a2, unsigned int a3, unsigned int a4)
{
  int v4; // r1
  unsigned int v6; // r0
  unsigned int v8; // r2
  _BYTE *v9; // r0
  unsigned int v10; // r4

  v4 = *a2;
  v6 = *(_DWORD *)(v4 - 12);
  if ( v6 < a3 )
    sub_83E54(
      "%s: __pos (which is %zu) > this->size() (which is %zu)",
      "basic_string::basic_string",
      a3,
      *(_DWORD *)(v4 - 12));
  v8 = v6 - a3;
  v9 = (_BYTE *)(v4 + a3);
  if ( v8 > a4 )
    v10 = a3 + a4;
  else
    v10 = a3 + v8;
  *a1 = sub_834C8(v9, (_BYTE *)(v4 + v10));
  return a1;
}
