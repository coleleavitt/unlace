/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_485320
// Address: 0x0000000000485320

//----- (0000000000485320) ----------------------------------------------------
int __fastcall sub_485320(FILE *s, char *a2, __gnuc_va_list arg)
{
  size_t v4; // rax
  void *v5; // rsp
  const char *v6; // rax
  _BYTE v8[8]; // [rsp+0h] [rbp-30h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-28h]

  v9 = __readfsqword(0x28u);
  v4 = strlen(a2);
  v5 = alloca(v4 + 108);
  v6 = sub_484CC0(a2, v8, v4 + 100);
  return vfscanf(s, v6, arg);
}
