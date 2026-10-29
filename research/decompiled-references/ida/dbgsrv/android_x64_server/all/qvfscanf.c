/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qvfscanf
// Address: 0x00000000000CBD80

//----- (00000000000CBD80) ----------------------------------------------------
int __fastcall qvfscanf(FILE *s, char *a2, __gnuc_va_list arg)
{
  size_t v4; // rax
  char *v5; // rax
  __int64 v7; // [rsp+0h] [rbp-20h] BYREF

  v4 = strlen(a2);
  v5 = sub_CB930(a2, (char *)&v7 - ((v4 + 115) & 0xFFFFFFFFFFFFFFF0LL), v4 + 100);
  return vfscanf(s, v5, arg);
}
