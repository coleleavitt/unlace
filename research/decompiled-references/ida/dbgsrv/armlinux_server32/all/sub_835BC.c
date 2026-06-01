/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_835BC
// Address: 0x000835BC

//----- (000835BC) --------------------------------------------------------
int **__fastcall sub_835BC(int **a1, int *a2, unsigned int a3, unsigned int a4)
{
  if ( a3 > *(_DWORD *)(*a2 - 12) )
    sub_83E54(
      "%s: __pos (which is %zu) > this->size() (which is %zu)",
      "basic_string::substr",
      a3,
      *(_DWORD *)(*a2 - 12));
  sub_83574(a1, a2, a3, a4);
  return a1;
}
