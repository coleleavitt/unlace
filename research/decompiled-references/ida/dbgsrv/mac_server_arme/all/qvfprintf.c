/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qvfprintf
// Address: 0x0000000100079398

//----- (0000000100079398) ----------------------------------------------------
__int64 __fastcall qvfprintf(FILE *a1, char *__s, va_list a3)
{
  __int64 v6; // x0
  char *v7; // x0
  __int64 v9; // [xsp+0h] [xbp-30h] BYREF

  if ( a1 )
  {
    strlen(__s);
    v6 = __chkstk_darwin();
    v7 = sub_100078EBC(__s, (unsigned __int8 *)&v9 - ((v6 + 115) & 0xFFFFFFFFFFFFFFF0LL), v6 + 100);
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
// 1000A6A30: using guessed type __int64 __chkstk_darwin(void);
