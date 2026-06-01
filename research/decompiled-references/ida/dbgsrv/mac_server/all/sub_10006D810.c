/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006D810
// Address: 0x000000010006D810

//----- (000000010006D810) ----------------------------------------------------
__int64 sub_10006D810(char *__s, ...)
{
  FILE *v1; // rbx
  unsigned int v2; // r14d
  va_list va; // [rsp+B0h] [rbp-30h] BYREF

  va_start(va, __s);
  v1 = qword_1000AE3E8;
  if ( !qword_1000AE3E8 )
    v1 = __stdoutp;
  v2 = qvfprintf(v1, __s, va);
  fflush(v1);
  return v2;
}
