/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: start
// Address: 0x000000000040BE70

//----- (000000000040BE70) ----------------------------------------------------
// positive sp value has been detected, the output may be wrong!
void __fastcall __noreturn start(__int64 a1, __int64 a2, void (*a3)())
{
  __int64 v3; // rax
  int v4; // esi
  __int64 v5; // [rsp-8h] [rbp-8h] BYREF
  char *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v4 = v5;
  v5 = v3;
  _libc_start_main((int (*)(int, char **, char **))main, v4, &retaddr, init, fini, a3, &v5);
  __halt();
}
// 40BE7A: positive sp value 8 has been found
// 40BE81: variable 'v3' is possibly undefined
