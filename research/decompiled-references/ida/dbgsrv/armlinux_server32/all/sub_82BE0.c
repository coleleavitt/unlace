/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_82BE0
// Address: 0x00082BE0

//----- (00082BE0) --------------------------------------------------------
unsigned int *__fastcall sub_82BE0(unsigned int *a1, size_t a2, int *a3, unsigned int a4, unsigned int a5)
{
  int v5; // r2
  unsigned int v6; // r4
  _BYTE *v7; // r2
  unsigned int v8; // r3

  v5 = *a3;
  v6 = *(_DWORD *)(v5 - 12);
  if ( a4 > v6 )
    sub_83E54("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::insert", a4, v6);
  v7 = (_BYTE *)(v5 + a4);
  v8 = v6 - a4;
  if ( v8 >= a5 )
    v8 = a5;
  return sub_82AA8(a1, a2, v7, v8);
}
