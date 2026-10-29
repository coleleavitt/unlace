/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CF0E0
// Address: 0x080CF0E0

//----- (080CF0E0) --------------------------------------------------------
int __cdecl sub_80CF0E0(char *name)
{
  int v1; // esi

  v1 = unlink(name);
  if ( !v1 )
    return 0;
  sub_80C7880(1);
  return v1;
}
