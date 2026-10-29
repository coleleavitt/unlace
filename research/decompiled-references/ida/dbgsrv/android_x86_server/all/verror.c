/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: verror
// Address: 0x000B1570

//----- (000B1570) --------------------------------------------------------
void __cdecl __noreturn verror(char *s, __gnuc_va_list __varargs)
{
  int v2; // [esp+8h] [ebp-10h] BYREF

  if ( s )
  {
    if ( callui )
    {
      callui((int)&v2);
    }
    else
    {
      qveprintf(s, __varargs);
      qfputc(10, (FILE *)((char *)&_sF + 168));
    }
  }
  ++errorexit;
  qexit(1);
}
// B1570: using guessed type void __cdecl __noreturn verror(char *s, __gnuc_va_list __varargs);
// 13BC20: using guessed type int (__stdcall *callui)(int);
// 13E33C: using guessed type int errorexit;
// 13E950: using guessed type FILE _sF;
