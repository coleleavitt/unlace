/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qflush
// Address: 0x000B0690

//----- (000B0690) --------------------------------------------------------
int __cdecl qflush(FILE *stream)
{
  int v2; // ecx
  int v3; // eax
  int v4; // eax

  if ( stream )
  {
    if ( fflush(stream) || (v3 = fileno(stream), v4 = dup(v3), v4 == -1) || close(v4) )
    {
      set_qerrno(1);
      return -1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    set_qerrno(1);
    *(_DWORD *)__errno(v2) = 9;
    set_qerrno(1);
    return 1;
  }
}
// B06D9: variable 'v2' is possibly undefined
// 17A90: using guessed type int __fastcall __errno(_DWORD);
