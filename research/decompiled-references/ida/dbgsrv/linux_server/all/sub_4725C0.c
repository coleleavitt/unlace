/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4725C0
// Address: 0x00000000004725C0

//----- (00000000004725C0) ----------------------------------------------------
__int64 __fastcall sub_4725C0(int a1, const char *a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 result; // rax

  if ( a1 )
  {
    if ( a1 <= 0 )
      sub_481B20(a2, a3, a3, a4, a5, a6);
    off_4C7FB0(24, 2, (_DWORD)a2, a3, (unsigned int)&off_4C7FB0, a6);
    return 0;
  }
  else
  {
    off_4C7FB0(23, (_DWORD)a2, a3, (unsigned int)&off_4C7FB0, a5, a6);
    return (int)result;
  }
}
// 4725DF: variable 'result' is possibly undefined
// 4C7FB0: using guessed type double (*off_4C7FB0)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, ...);
