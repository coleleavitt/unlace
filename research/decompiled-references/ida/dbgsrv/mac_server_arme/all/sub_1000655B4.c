/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000655B4
// Address: 0x00000001000655B4

//----- (00000001000655B4) ----------------------------------------------------
__int64 __fastcall sub_1000655B4(int a1, char *a2, va_list a3)
{
  __int64 v4; // x0

  if ( !a1 )
    return (int)callui(23);
  if ( a1 < 1 )
  {
    verror(a2, a3);
    return sub_10006562C(v4);
  }
  else
  {
    callui(24);
    return 0;
  }
}
// 100065629: variable 'v4' is possibly undefined
// 1000A5680: using guessed type __int64 (__fastcall *callui)(_QWORD);
