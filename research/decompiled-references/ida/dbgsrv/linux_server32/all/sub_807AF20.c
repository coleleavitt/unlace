/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_807AF20
// Address: 0x0807AF20

//----- (0807AF20) --------------------------------------------------------
_BOOL4 __cdecl sub_807AF20(int *a1)
{
  int v1; // edx
  _BOOL4 result; // eax

  v1 = sub_8079CC0(a1, 1);
  result = 1;
  if ( !v1 )
  {
    sub_8075AD0((int)a1);
    return sub_807AE10((int)a1, 0, 0) != 0;
  }
  return result;
}
