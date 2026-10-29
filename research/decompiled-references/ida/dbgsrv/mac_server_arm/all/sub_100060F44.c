/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100060F44
// Address: 0x0000000100060F44

//----- (0000000100060F44) ----------------------------------------------------
__int64 __fastcall sub_100060F44(int a1, char *a2, va_list a3)
{
  __int64 v4; // x0

  if ( !a1 )
    return (int)callui(23);
  if ( a1 < 1 )
  {
    verror(a2, a3);
    return sub_100060FB8(v4);
  }
  else
  {
    callui(24);
    return 0;
  }
}
// 100060FB5: variable 'v4' is possibly undefined
// 10009D680: using guessed type __int64 (__fastcall *callui)(_QWORD);
