/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_833A0
// Address: 0x000833A0

//----- (000833A0) --------------------------------------------------------
int **__fastcall sub_833A0(int **a1, int *a2, unsigned int a3)
{
  int v3; // r4
  unsigned int v4; // r1

  v3 = *a2;
  v4 = *(_DWORD *)(*a2 - 12);
  if ( a3 > v4 )
    sub_83B6C("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::basic_string", a3, v4);
  *a1 = sub_83330((_BYTE *)(v3 + a3), (_BYTE *)(v4 + v3));
  return a1;
}
