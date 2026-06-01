/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AABC0
// Address: 0x00000000000AABC0

//----- (00000000000AABC0) ----------------------------------------------------
unsigned __int64 sub_AABC0(const char *a1, ...)
{
  const char *v1; // rsi
  const char *v2; // rsi
  void *ptr[2]; // [rsp+B0h] [rbp-48h] BYREF
  __int64 v5; // [rsp+C0h] [rbp-38h]
  gcc_va_list va; // [rsp+D0h] [rbp-28h] BYREF
  unsigned __int64 v7; // [rsp+E8h] [rbp-10h]

  va_start(va, a1);
  v7 = __readfsqword(0x28u);
  *(_OWORD *)ptr = 0;
  v5 = 0;
  sub_4BA10((__int64)ptr, a1, (__int64)va);
  if ( ptr[1] )
    v1 = (const char *)ptr[0];
  else
    v1 = s1;
  sub_AD470("%s\n", v1);
  if ( ptr[1] )
    v2 = (const char *)ptr[0];
  else
    v2 = s1;
  sub_4FCD0((int)"%s", v2);
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
    ptr[0] = nullptr;
    v5 = 0;
  }
  return __readfsqword(0x28u);
}
