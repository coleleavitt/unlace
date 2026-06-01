/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qvfprintf
// Address: 0x00000001000741D0

//----- (00000001000741D0) ----------------------------------------------------
__int64 __fastcall qvfprintf(FILE *a1, char *__s, va_list a3)
{
  size_t v6; // x0
  char *v7; // x0
  __int64 v9; // [xsp+0h] [xbp-30h] BYREF

  if ( a1 )
  {
    v6 = strlen(__s);
    v7 = sub_100073D00(__s, (unsigned __int8 *)&v9 - ((v6 + 115) & 0xFFFFFFFFFFFFFFF0LL), v6 + 100);
    return vfprintf(a1, v7, a3);
  }
  else
  {
    set_qerrno();
    *__error() = 9;
    set_qerrno();
    return 0xFFFFFFFFLL;
  }
}
