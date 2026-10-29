/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_83424
// Address: 0x00083424

//----- (00083424) --------------------------------------------------------
int **__fastcall sub_83424(int **a1, int *a2, unsigned int a3, unsigned int a4)
{
  if ( a3 > *(_DWORD *)(*a2 - 12) )
    sub_83B6C(
      "%s: __pos (which is %zu) > this->size() (which is %zu)",
      "basic_string::substr",
      a3,
      *(_DWORD *)(*a2 - 12));
  sub_833DC(a1, a2, a3, a4);
  return a1;
}
