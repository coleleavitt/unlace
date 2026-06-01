/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfputs
// Address: 0x000B08F0

//----- (000B08F0) --------------------------------------------------------
int __cdecl qfputs(char *s, FILE *stream)
{
  int v3; // ecx

  if ( stream )
    return fputs(s, stream);
  set_qerrno(1);
  *(_DWORD *)__errno(v3) = 9;
  set_qerrno(1);
  return -1;
}
// B092A: variable 'v3' is possibly undefined
// 17A90: using guessed type int __fastcall __errno(_DWORD);
