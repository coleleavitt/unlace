/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: verror
// Address: 0x0007EE9C

//----- (0007EE9C) --------------------------------------------------------
void __fastcall __noreturn verror(char *a1, void *a2)
{
  if ( a1 )
  {
    if ( callui )
    {
      callui(24, 3, a1);
    }
    else
    {
      qveprintf(a1, a2);
      qfputc(10, (FILE *)((char *)&_sF + 168));
    }
  }
  ++errorexit;
  qexit(1);
}
// DE268: using guessed type int (__fastcall *callui)(_DWORD, _DWORD, _DWORD);
// E0540: using guessed type int errorexit;
// E0A90: using guessed type FILE _sF;
