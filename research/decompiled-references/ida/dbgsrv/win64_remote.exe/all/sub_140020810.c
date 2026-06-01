/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140020810
// Address: 0x0000000140020810

//----- (0000000140020810) ----------------------------------------------------
__int64 sub_140020810(__int64 a1, ...)
{
  FILE *v1; // rbx
  __int64 *v2; // rax
  va_list va; // [rsp+58h] [rbp+10h] BYREF

  va_start(va, a1);
  v1 = _acrt_iob_func(1u);
  v2 = sub_1400207F0();
  return sub_140073788(*v2, (__int64)v1, a1, 0, (__int64)va);
}
