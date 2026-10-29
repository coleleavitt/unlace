/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_19D60
// Address: 0x00019D60

//----- (00019D60) --------------------------------------------------------
int __usercall sub_19D60@<eax>(int a1@<ebx>, int (*a2)(void))
{
  _DWORD v3[5]; // [esp+0h] [ebp-14h] BYREF

  v3[4] = a1;
  v3[0] = _PREINIT_ARRAY__;
  v3[1] = _INIT_ARRAY__;
  v3[2] = _FINI_ARRAY__;
  __libc_init(a2, 0, sub_8EEA0, v3);
  return sub_19DB0(a2);
}
// 17B10: using guessed type int __cdecl __libc_init(_DWORD, _DWORD, _DWORD, _DWORD);
// 134330: using guessed type int _PREINIT_ARRAY__[2];
// 134338: using guessed type int _INIT_ARRAY__[2];
// 13436C: using guessed type int _FINI_ARRAY__[2];
