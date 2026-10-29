/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4E030
// Address: 0x000000000004E030

//----- (000000000004E030) ----------------------------------------------------
__int64 sub_4E030(__int64 a1, const char *a2, ...)
{
  gcc_va_list va; // [rsp+B0h] [rbp-28h] BYREF
  unsigned __int64 v4; // [rsp+C8h] [rbp-10h]

  va_start(va, a2);
  v4 = __readfsqword(0x28u);
  sub_5E4E0(a1, a2, (__int64)va);
  return a1;
}
