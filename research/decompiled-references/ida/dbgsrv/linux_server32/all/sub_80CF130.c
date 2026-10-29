/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CF130
// Address: 0x080CF130

//----- (080CF130) --------------------------------------------------------
int __cdecl sub_80CF130(char *old, char *a2)
{
  int v2; // esi

  v2 = rename(old, a2);
  if ( !v2 )
    return 0;
  sub_80C7880(1);
  return v2;
}
