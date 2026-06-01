/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BF890
// Address: 0x080BF890

//----- (080BF890) --------------------------------------------------------
int __cdecl sub_80BF890(char *s, int a2)
{
  FILE *stream; // esi
  int v3; // edi

  stream = (FILE *)dword_811E7C8;
  if ( !dword_811E7C8 )
    stream = stdout;
  v3 = sub_80D3A50((int)stream, s, (int)&a2);
  fflush(stream);
  return v3;
}
// 811E7C8: using guessed type int dword_811E7C8;
