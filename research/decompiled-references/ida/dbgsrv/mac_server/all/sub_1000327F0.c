/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000327F0
// Address: 0x00000001000327F0

//----- (00000001000327F0) ----------------------------------------------------
__int64 __fastcall sub_1000327F0(char *__s1, void **a2, int a3, __int64 a4, int a5, int a6)
{
  unsigned int v6; // r15d
  __int64 (__fastcall **v9)(); // [rsp+0h] [rbp-30h] BYREF
  char v10; // [rsp+8h] [rbp-28h] BYREF

  callui(11, (unsigned int)&v10, a3, (unsigned int)&callui, a5, a6, (char)v9);
  v9 = &off_1000A8CF0;
  if ( !strstr(__s1, "static ") )
    return (unsigned int)eval_idc_snippet(nullptr, __s1, a2, (__int64)&v9);
  v6 = 0;
  sub_10002DB50("main", 0, byte_100090868, 7u);
  if ( (unsigned __int8)compile_idc_text((__int64)__s1, (__int64)a2, (__int64)&v9, 0) )
    return (unsigned int)call_idc_func(nullptr, "main", nullptr, 0, a2, (__int64)&v9);
  return v6;
}
// 1000A8CF0: using guessed type __int64 (__fastcall *off_1000A8CF0)();
// 1000ACFA8: using guessed type __int64 (__fastcall *callui)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, char);
