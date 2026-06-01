/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_69630
// Address: 0x00069630

//----- (00069630) --------------------------------------------------------
int __fastcall sub_69630(int a1, char *a2, int a3)
{
  int savedregs; // [sp+0h] [bp+0h]

  if ( !a1 )
    return ((int (__fastcall *)(unsigned int, char *, int, int, int))callui)(0x17u, a2, a3, (int)callui, savedregs);
  if ( a1 <= 0 )
    sub_78CEC(a2, a3, a3, a3);
  ((void (__fastcall *)(unsigned int, char *, int, int, int))callui)(0x18u, (char *)2, (int)a2, a3, savedregs);
  return 0;
}
// 69642: variable 'savedregs' is possibly undefined
// D4944: using guessed type int (__fastcall *callui)(_DWORD, _DWORD, _DWORD);
