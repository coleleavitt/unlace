/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005B3E0
// Address: 0x000000014005B3E0

//----- (000000014005B3E0) ----------------------------------------------------
int __fastcall sub_14005B3E0(char *Buffer, char *Str, va_list ArgList)
{
  size_t v6; // rax
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rax
  void *v9; // rsp
  unsigned __int8 *v10; // rbx
  __int64 *v11; // rax
  unsigned __int8 v13[16]; // [rsp+30h] [rbp+0h] BYREF

  v6 = strlen(Str);
  v7 = v6 + 100;
  v8 = v6 + 115;
  if ( v8 <= v7 )
    v8 = 0xFFFFFFFFFFFFFF0LL;
  v9 = alloca(v8 & 0xFFFFFFFFFFFFFFF0uLL);
  v10 = sub_14005ACB0((unsigned __int8 *)Str, v13, v7);
  v11 = sub_14005B090();
  return _stdio_common_vsscanf(*v11, Buffer, 0xFFFFFFFFFFFFFFFFuLL, (const char *)v10, nullptr, ArgList);
}
