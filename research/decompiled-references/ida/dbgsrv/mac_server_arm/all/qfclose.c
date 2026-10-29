/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfclose
// Address: 0x000000010006EEA0

//----- (000000010006EEA0) ----------------------------------------------------
__int64 __fastcall qfclose(FILE *a1)
{
  __int64 v1; // x19

  if ( a1 )
  {
    v1 = fclose(a1);
    if ( !(_DWORD)v1 )
      return v1;
  }
  else
  {
    set_qerrno();
    *__error() = 9;
    v1 = 0xFFFFFFFFLL;
  }
  set_qerrno();
  return v1;
}
