/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8381C
// Address: 0x0008381C

//----- (0008381C) --------------------------------------------------------
unsigned int *__fastcall sub_8381C(
        unsigned int *a1,
        size_t a2,
        unsigned int a3,
        int *a4,
        unsigned int a5,
        unsigned int a6)
{
  int v6; // r3
  unsigned int v7; // r4
  unsigned int v8; // r4
  _BYTE *v9; // r3

  v6 = *a4;
  v7 = *(_DWORD *)(v6 - 12);
  if ( a5 > v7 )
    sub_83E54(
      "%s: __pos (which is %zu) > this->size() (which is %zu)",
      "basic_string::replace",
      a5,
      *(_DWORD *)(v6 - 12));
  v8 = v7 - a5;
  v9 = (_BYTE *)(v6 + a5);
  if ( v8 >= a6 )
    v8 = a6;
  return sub_836D4(a1, a2, a3, v9, v8);
}
