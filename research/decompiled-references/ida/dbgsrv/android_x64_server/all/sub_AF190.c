/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AF190
// Address: 0x00000000000AF190

//----- (00000000000AF190) ----------------------------------------------------
void __noreturn sub_AF190(int status, char *a2, ...)
{
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF

  va_start(va, a2);
  sub_AD420(a2, va);
  qexit(status);
}
// AD420: using guessed type __int64 __fastcall sub_AD420(char *a1, __gnuc_va_list arg);
