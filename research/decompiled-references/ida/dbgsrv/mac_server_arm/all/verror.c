/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: verror
// Address: 0x000000010006FB0C

//----- (000000010006FB0C) ----------------------------------------------------
void __fastcall verror(char *a1, va_list a2)
{
  std::exception *v2; // x0

  if ( a1 )
  {
    if ( callui )
    {
      callui(24);
    }
    else
    {
      qveprintf(a1, a2);
      qfputc(10, __stderrp);
    }
  }
  ++errorexit;
  qexit(1);
  std::exception::~exception(v2);
}
// 10006FB71: variable 'v2' is possibly undefined
// 10009D680: using guessed type __int64 (__fastcall *callui)(_QWORD);
// 10009D904: using guessed type int errorexit;
