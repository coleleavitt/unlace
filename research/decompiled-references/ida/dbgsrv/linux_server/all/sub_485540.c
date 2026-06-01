/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_485540
// Address: 0x0000000000485540

//----- (0000000000485540) ----------------------------------------------------
int sub_485540(char *a1, char *a2, ...)
{
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v4; // [rsp+18h] [rbp-C0h]

  va_start(va, a2);
  v4 = __readfsqword(0x28u);
  return sub_4852A0(a1, a2, va);
}
