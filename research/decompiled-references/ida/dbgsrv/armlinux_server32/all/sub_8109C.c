/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8109C
// Address: 0x0008109C

//----- (0008109C) --------------------------------------------------------
void __fastcall __noreturn sub_8109C(int a1, int a2, int a3)
{
  int v6; // r0
  _DWORD *v7; // r0
  int v8; // r4

  v6 = sub_840B0();
  ++*(_DWORD *)(v6 + 4);
  v7 = (_DWORD *)sub_81040(a1, a2, a3);
  *v7 = 1;
  v8 = (int)(v7 + 10);
  Unwind_RaiseException(v7 + 10);
  sub_81294(v8);
  sub_80A40();
}
// 14230: using guessed type int __fastcall Unwind_RaiseException(_DWORD);
