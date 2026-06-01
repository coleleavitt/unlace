/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: verror
// Address: 0x00000000000C38B0

//----- (00000000000C38B0) ----------------------------------------------------
void __fastcall __noreturn verror(char *a1, __gnuc_va_list arg, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  char v6; // al

  if ( a1 )
  {
    if ( callui )
    {
      callui(24, 3, (_DWORD)a1, (_DWORD)arg, (_DWORD)callui, a6, v6);
    }
    else
    {
      qveprintf(a1, arg);
      qfputc(10, (FILE *)((char *)&_sF + 304));
    }
  }
  ++*(_DWORD *)errorexit;
  qexit(1);
}
// C38FA: variable 'v6' is possibly undefined
// 155620: using guessed type __int64 (__fastcall *callui)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, char);
// 1597E0: using guessed type FILE _sF;
