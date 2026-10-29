/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100032970
// Address: 0x0000000100032970

//----- (0000000100032970) ----------------------------------------------------
__int64 __fastcall sub_100032970(unsigned __int8 *a1, const char *a2, unsigned __int8 *a3, int a4, void **a5, int a6)
{
  __int64 (__fastcall **v10)(); // [rsp+0h] [rbp-40h] BYREF
  char v11; // [rsp+8h] [rbp-38h] BYREF

  callui(11, (unsigned int)&v11, (_DWORD)a3, (unsigned int)&callui, (_DWORD)a5, a6, (char)v10);
  v10 = &off_1000A8CF0;
  return call_idc_func(a1, a2, a3, a4, a5, (__int64)&v10);
}
// 1000A8CF0: using guessed type __int64 (__fastcall *off_1000A8CF0)();
// 1000ACFA8: using guessed type __int64 (__fastcall *callui)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, char);
