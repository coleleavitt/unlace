/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_481B20
// Address: 0x0000000000481B20

//----- (0000000000481B20) ----------------------------------------------------
void __fastcall __noreturn sub_481B20(const char *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  if ( a1 )
  {
    if ( off_4C7FB0 )
    {
      off_4C7FB0(24, 3, (_DWORD)a1, a2, (_DWORD)off_4C7FB0, a6);
    }
    else
    {
      sub_485470(a1, a2);
      sub_480FF0(10, stderr);
    }
  }
  ++*(_DWORD *)byte_4C94E8;
  sub_481AE0(1);
}
// 4C7FB0: using guessed type double (*off_4C7FB0)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, ...);
