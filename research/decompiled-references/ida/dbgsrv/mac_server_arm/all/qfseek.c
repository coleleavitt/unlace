/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfseek
// Address: 0x000000010006EE50

//----- (000000010006EE50) ----------------------------------------------------
__int64 __fastcall qfseek(FILE *a1, off_t a2, int a3)
{
  __int64 v3; // x19

  if ( a1 )
  {
    v3 = fseeko(a1, a2, a3);
    if ( !(_DWORD)v3 )
      return v3;
  }
  else
  {
    set_qerrno();
    *__error() = 9;
    v3 = 0xFFFFFFFFLL;
  }
  set_qerrno();
  return v3;
}
