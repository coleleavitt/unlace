/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: start
// Address: 0x08053130

//----- (08053130) --------------------------------------------------------
// positive sp value has been detected, the output may be wrong!
void __usercall __noreturn start(int a1@<eax>, void (*a2)()@<edx>)
{
  int v2; // esi
  int v3; // [esp-4h] [ebp-4h] BYREF
  char *retaddr; // [esp+0h] [ebp+0h] BYREF

  v2 = v3;
  v3 = a1;
  __libc_start_main((int (*)(int, char **, char **))main, v2, &retaddr, (void (*)())sub_80D7A10, sub_80D7A70, a2, &v3);
  __halt();
}
// 8053137: positive sp value 4 has been found
