/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_78B84
// Address: 0x00078B84

//----- (00078B84) --------------------------------------------------------
void __fastcall __noreturn sub_78B84(char *a1, int a2, int a3, int a4)
{
  if ( a1 )
  {
    if ( callui )
    {
      ((void (__fastcall *)(unsigned int, char *, int, int, int))callui)(0x18u, (char *)3, (int)a1, a2, a4);
    }
    else
    {
      sub_7EA2C(a1, a2);
      sub_77B2C(10, stderr);
    }
  }
  ++errorexit;
  sub_78B44(1);
}
// D3924: using guessed type int (__fastcall *callui)(_DWORD, _DWORD, _DWORD);
// D5BFC: using guessed type int errorexit;
