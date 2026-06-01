/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_694B8
// Address: 0x000694B8

//----- (000694B8) --------------------------------------------------------
int __fastcall sub_694B8(int a1, char *a2, int a3)
{
  int savedregs; // [sp+0h] [bp+0h]

  if ( !a1 )
    return ((int (__fastcall *)(unsigned int, char *, int, int, int))callui)(0x17u, a2, a3, (int)callui, savedregs);
  if ( a1 <= 0 )
    sub_78B84(a2, a3, a3, a3);
  ((void (__fastcall *)(unsigned int, char *, int, int, int))callui)(0x18u, (char *)2, (int)a2, a3, savedregs);
  return 0;
}
// 694CA: variable 'savedregs' is possibly undefined
// D3924: using guessed type int (__fastcall *callui)(_DWORD, _DWORD, _DWORD);
