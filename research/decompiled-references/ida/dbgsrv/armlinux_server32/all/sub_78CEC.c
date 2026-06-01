/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_78CEC
// Address: 0x00078CEC

//----- (00078CEC) --------------------------------------------------------
void __fastcall __noreturn sub_78CEC(char *a1, int a2, int a3, int a4)
{
  if ( a1 )
  {
    if ( callui )
    {
      ((void (__fastcall *)(unsigned int, char *, int, int, int))callui)(0x18u, (char *)3, (int)a1, a2, a4);
    }
    else
    {
      sub_7EB94(a1, a2);
      sub_77C94(10, stderr);
    }
  }
  ++errorexit;
  sub_78CAC(1);
}
// D4944: using guessed type int (__fastcall *callui)(_DWORD, _DWORD, _DWORD);
// D6C1C: using guessed type int errorexit;
