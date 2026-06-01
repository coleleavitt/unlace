/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfputc
// Address: 0x000B0730

//----- (000B0730) --------------------------------------------------------
int __cdecl qfputc(int c, FILE *stream)
{
  int v3; // ecx

  if ( stream )
    return fputc(c, stream);
  set_qerrno(1);
  *(_DWORD *)__errno(v3) = 9;
  set_qerrno(1);
  return -1;
}
// B076A: variable 'v3' is possibly undefined
// 17A90: using guessed type int __fastcall __errno(_DWORD);
