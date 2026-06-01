/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qvfprintf
// Address: 0x0000000100081870

//----- (0000000100081870) ----------------------------------------------------
int __fastcall qvfprintf(FILE *a1, char *__s, va_list a3)
{
  signed __int64 v4; // rax
  void *v5; // rsp
  void *v6; // rsp
  char *v7; // rax
  char v9[8]; // [rsp+0h] [rbp-30h] BYREF

  if ( a1 )
  {
    v4 = strlen(__s) + 100;
    v5 = alloca(v4);
    v6 = alloca(v4);
    v7 = sub_100081410(__s, v9, v4);
    return vfprintf(a1, v7, a3);
  }
  else
  {
    set_qerrno();
    *__error() = 9;
    set_qerrno();
    return -1;
  }
}
