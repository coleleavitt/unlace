/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: start
// Address: 0x00014F8C

//----- (00014F8C) --------------------------------------------------------
// positive sp value has been detected, the output may be wrong!
void __noreturn start(void (*a1)(), int a2, int a3, int a4, ...)
{
  int v4; // [sp-4h] [bp-4h]
  va_list va; // [sp+0h] [bp+0h] BYREF

  va_start(va, a4);
  _libc_start_main(
    (int (*)(int, char **, char **))main,
    v4,
    (char **)va,
    (void (*)())init,
    (void (*)())nullsub_10,
    a1,
    va);
  abort();
}
// 14F96: positive sp value 4 has been found
// 14FA8: variable 'v4' is possibly undefined
// 8DB68: using guessed type int nullsub_10();
