/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfclose
// Address: 0x000AFEC0

//----- (000AFEC0) --------------------------------------------------------
int __cdecl qfclose(FILE *stream)
{
  int v1; // eax
  int v2; // esi
  int v3; // ecx

  if ( stream )
  {
    v1 = fclose(stream);
    if ( v1 )
    {
      v2 = v1;
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
    *(_DWORD *)__errno(v3) = 9;
    set_qerrno(1);
    return -1;
  }
  return v2;
}
// AFF06: variable 'v3' is possibly undefined
// 17A90: using guessed type int __fastcall __errno(_DWORD);
