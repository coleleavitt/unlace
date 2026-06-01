/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: verror
// Address: 0x000000010007D300

//----- (000000010007D300) ----------------------------------------------------
void __fastcall verror(char *__s, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  int v6; // ecx

  if ( __s )
  {
    v6 = a2;
    if ( callui )
    {
      a2 = 3;
      ((void (__fastcall *)(int, int, _DWORD, int, _DWORD, int))callui)(24, 3, (_DWORD)__s, v6, (_DWORD)callui, a6);
    }
    else
    {
      qveprintf(__s, (__va_list_tag *)a2);
      a2 = (__int64)__stderrp;
      qfputc(10, __stderrp);
    }
  }
  ++errorexit;
  qexit(1, (__va_list_tag *)a2);
  sub_10007D360((std::exception *)1);
}
// 1000ACFA8: using guessed type __int64 (__fastcall *callui)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, char);
// 1000AE234: using guessed type int errorexit;
