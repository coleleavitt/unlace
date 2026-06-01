/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qvfprintf
// Address: 0x00000000000CBE00

//----- (00000000000CBE00) ----------------------------------------------------
int __fastcall qvfprintf(FILE *s, char *a2, __gnuc_va_list arg)
{
  size_t v4; // rax
  char *v5; // rax
  unsigned __int64 v7; // [rsp+0h] [rbp-20h] BYREF

  v7 = __readfsqword(0x28u);
  if ( s )
  {
    v4 = strlen(a2);
    v5 = sub_CB930(a2, (char *)&v7 - ((v4 + 115) & 0xFFFFFFFFFFFFFFF0LL), v4 + 100);
    return vfprintf(s, v5, arg);
  }
  else
  {
    set_qerrno(1u);
    *(_DWORD *)__errno(1) = 9;
    set_qerrno(1u);
    return -1;
  }
}
// 33A30: using guessed type __int64 __fastcall __errno(_QWORD);
