/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfseek
// Address: 0x000AFE40

//----- (000AFE40) --------------------------------------------------------
int __cdecl qfseek(FILE *stream, int off, int a3, int whence)
{
  int v4; // eax
  int v5; // esi
  int v6; // ecx

  if ( stream )
  {
    v4 = fseek(stream, off, whence);
    if ( v4 )
    {
      v5 = v4;
      set_qerrno(1);
    }
    else
    {
      return 0;
    }
  }
  else
  {
    set_qerrno(1);
    *(_DWORD *)__errno(v6) = 9;
    set_qerrno(1);
    return -1;
  }
  return v5;
}
// AFE94: variable 'v6' is possibly undefined
// 17A90: using guessed type int __fastcall __errno(_DWORD);
