/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100050570
// Address: 0x0000000100050570

//----- (0000000100050570) ----------------------------------------------------
__int64 __fastcall sub_100050570(__int64 a1, int a2, int a3, __int64 a4, int a5, int a6)
{
  return ((__int64 (__fastcall *)(int, int, int, unsigned int, int, int))callui)(
           27,
           a2,
           a3,
           (unsigned int)&callui,
           a5,
           a6)
       & 1;
}
// 1000ACFA8: using guessed type __int64 (__fastcall *callui)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, char);
