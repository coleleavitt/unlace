/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9AE60
// Address: 0x0009AE60

//----- (0009AE60) --------------------------------------------------------
void __noreturn sub_9AE60(int status, char *a2, ...)
{
  va_list va; // [esp+28h] [ebp+10h] BYREF

  va_start(va, a2);
  sub_98F10(a2, va);
  qexit(status);
}
