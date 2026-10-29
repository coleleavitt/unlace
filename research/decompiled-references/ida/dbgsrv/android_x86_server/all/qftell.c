/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qftell
// Address: 0x000AFDD0

//----- (000AFDD0) --------------------------------------------------------
int __cdecl qftell(FILE *stream)
{
  int result; // eax
  int v2; // ecx

  if ( !stream )
  {
    set_qerrno(1);
    *(_DWORD *)__errno(v2) = 9;
    goto LABEL_5;
  }
  result = ftell(stream);
  if ( result == -1 )
  {
LABEL_5:
    set_qerrno(1);
    return -1;
  }
  return result;
}
// AFE0D: variable 'v2' is possibly undefined
// 17A90: using guessed type int __fastcall __errno(_DWORD);
