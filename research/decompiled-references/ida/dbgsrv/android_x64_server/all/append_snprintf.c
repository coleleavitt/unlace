/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: append_snprintf
// Address: 0x00000000000CBFA0

//----- (00000000000CBFA0) ----------------------------------------------------
__int64 append_snprintf(char *s, __int64 a2, const char *a3, ...)
{
  char *v4; // rax
  gcc_va_list va; // [rsp+B0h] [rbp-38h] BYREF
  unsigned __int64 v7; // [rsp+C8h] [rbp-20h]

  va_start(va, a3);
  v7 = __readfsqword(0x28u);
  v4 = &s[strlen(s)];
  if ( a2 - (__int64)v4 <= 0 )
    return 0;
  else
    return qvsnprintf(v4, a2 - (_QWORD)v4, a3, (__int64)va);
}
