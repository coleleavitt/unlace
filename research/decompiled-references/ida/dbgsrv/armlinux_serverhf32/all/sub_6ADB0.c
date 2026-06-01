/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6ADB0
// Address: 0x0006ADB0

//----- (0006ADB0) --------------------------------------------------------
void __fastcall __noreturn sub_6ADB0(int a1, int a2, int a3, int a4)
{
  char *v4; // r0

  if ( a1 )
    ((void (__fastcall *)(unsigned int, char *, int, int, int))callui)(0x18u, (char *)2, a1, a2, a4);
  v4 = sub_8117C(4);
  *(_DWORD *)v4 = &off_D068C;
  sub_80D98((int)v4, (int)&`typeinfo for'loader_failure_t, (int)sub_6AB04);
}
// D068C: using guessed type _UNKNOWN *off_D068C;
// D1BA0: using guessed type int *`typeinfo for'loader_failure_t;
// D3924: using guessed type int (__fastcall *callui)(_DWORD, _DWORD, _DWORD);
