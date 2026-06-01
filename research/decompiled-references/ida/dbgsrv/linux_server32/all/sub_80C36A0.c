/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C36A0
// Address: 0x080C36A0

//----- (080C36A0) --------------------------------------------------------
void __cdecl __noreturn sub_80C36A0(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  _BYTE v7[16]; // [esp+0h] [ebp-20h] BYREF
  unsigned int v8; // [esp+10h] [ebp-10h]

  v8 = __readgsdword(0x14u);
  if ( a1 )
  {
    off_811E568(v7);
    sub_8051E47((int)&qword_811CFF4, a1, a2, a3, a4, a5, a6, a7);
  }
  sub_8051E47((int)&qword_811CFF4, 0, a2, a3, a4, a5, a6, a7);
}
// 811CFF4: using guessed type __int64 qword_811CFF4;
// 811E568: using guessed type _DWORD (__stdcall *off_811E568)(_DWORD);
