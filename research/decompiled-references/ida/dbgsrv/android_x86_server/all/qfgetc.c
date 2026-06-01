/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfgetc
// Address: 0x000B0790

//----- (000B0790) --------------------------------------------------------
int __cdecl qfgetc(FILE *stream)
{
  int v2; // ecx

  if ( stream )
    return fgetc(stream);
  set_qerrno(1);
  *(_DWORD *)__errno(v2) = 9;
  set_qerrno(1);
  return -1;
}
// B07C3: variable 'v2' is possibly undefined
// 17A90: using guessed type int __fastcall __errno(_DWORD);
