/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D98
// Address: 0x00080D98

//----- (00080D98) --------------------------------------------------------
void __fastcall __noreturn sub_80D98(int a1, int a2, int a3)
{
  int v6; // r0
  _DWORD *v7; // r0
  int v8; // r4

  v6 = sub_80630();
  ++*(_DWORD *)(v6 + 4);
  v7 = (_DWORD *)sub_80D3C(a1, a2, a3);
  *v7 = 1;
  v8 = (int)(v7 + 10);
  Unwind_RaiseException(v7 + 10);
  sub_8065C(v8);
  sub_7FF18();
}
// 140DC: using guessed type int __fastcall Unwind_RaiseException(_DWORD);
