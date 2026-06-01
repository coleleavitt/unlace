/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qvsscanf
// Address: 0x0000000100074128

//----- (0000000100074128) ----------------------------------------------------
__int64 __fastcall qvsscanf(const char *a1, char *__s, va_list a3)
{
  size_t v6; // x0
  char *v7; // x0
  __int64 v9; // [xsp+0h] [xbp-30h] BYREF

  v6 = strlen(__s);
  v7 = sub_100073D00(__s, (unsigned __int8 *)&v9 - ((v6 + 115) & 0xFFFFFFFFFFFFFFF0LL), v6 + 100);
  return vsscanf(a1, v7, a3);
}
