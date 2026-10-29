/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006D900
// Address: 0x000000010006D900

//----- (000000010006D900) ----------------------------------------------------
void __fastcall sub_10006D900(int a1, char *a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  char v6; // al

  if ( a1 )
  {
    if ( a1 <= 0 )
    {
      verror(a2, a3, (__int64)a2, a3, a5, a6);
      sub_10006D960((__int64)a2);
    }
    else
    {
      callui(24, 2, (_DWORD)a2, a3, (unsigned int)&callui, a6, v6);
    }
  }
  else
  {
    callui(23, (_DWORD)a2, a3, a3, (unsigned int)&callui, a6, v6);
  }
}
// 10006D927: variable 'v6' is possibly undefined
// 1000ACFA8: using guessed type __int64 (__fastcall *callui)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, char);
