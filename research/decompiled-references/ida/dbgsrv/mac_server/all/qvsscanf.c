/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qvsscanf
// Address: 0x00000001000817E0

//----- (00000001000817E0) ----------------------------------------------------
int __fastcall qvsscanf(char *__str, char *__s, va_list a3)
{
  signed __int64 v4; // rax
  void *v5; // rsp
  void *v6; // rsp
  char *v7; // rax
  char v9[8]; // [rsp+0h] [rbp-30h] BYREF

  v4 = strlen(__s) + 100;
  v5 = alloca(v4);
  v6 = alloca(v4);
  v7 = sub_100081410(__s, v9, v4);
  return vsscanf(__str, v7, a3);
}
