/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_99EE8
// Address: 0x00099EE8

//----- (00099EE8) --------------------------------------------------------
bool __fastcall sub_99EE8(int a1, int a2, _QWORD *a3, int a4)
{
  __int64 v5; // r0
  _DWORD v7[2]; // [sp+0h] [bp-10h] BYREF

  v7[1] = a4;
  v7[0] = 0;
  LODWORD(v5) = _gnu_Unwind_Find_exidx(a2, v7);
  HIDWORD(v5) = v7[0];
  *a3 = v5;
  return (_DWORD)v5 != 0 && HIDWORD(v5) != 0;
}
// 19C04: using guessed type int __fastcall _gnu_Unwind_Find_exidx(_DWORD, _DWORD);
