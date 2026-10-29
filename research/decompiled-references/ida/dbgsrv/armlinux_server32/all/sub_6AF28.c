/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6AF28
// Address: 0x0006AF28

//----- (0006AF28) --------------------------------------------------------
void __fastcall __noreturn sub_6AF28(int a1, int a2, int a3, int a4)
{
  char *v4; // r0

  if ( a1 )
    ((void (__fastcall *)(unsigned int, char *, int, int, int))callui)(0x18u, (char *)2, a1, a2, a4);
  v4 = sub_807D4(4);
  *(_DWORD *)v4 = &off_D168C;
  sub_8109C((int)v4, (int)&`typeinfo for'loader_failure_t, (int)sub_6AC7C);
}
// D168C: using guessed type _UNKNOWN *off_D168C;
// D2BA0: using guessed type int *`typeinfo for'loader_failure_t;
// D4944: using guessed type int (__fastcall *callui)(_DWORD, _DWORD, _DWORD);
