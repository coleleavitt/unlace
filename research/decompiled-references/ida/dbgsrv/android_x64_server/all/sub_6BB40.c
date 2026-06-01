/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6BB40
// Address: 0x000000000006BB40

//----- (000000000006BB40) ----------------------------------------------------
__int64 __fastcall sub_6BB40(char *a1, const char *a2, char *a3, int a4, __int64 a5, int a6, double a7, __m128 a8)
{
  __int64 v11; // rax
  _QWORD v13[8]; // [rsp+8h] [rbp-40h] BYREF

  v13[2] = __readfsqword(0x28u);
  ((void (__fastcall *)(int, unsigned int, _DWORD, unsigned int, _DWORD, int))callui)(
    11,
    (unsigned int)v13,
    (_DWORD)a3,
    (unsigned int)&callui,
    a5,
    a6);
  v11 = v13[0];
  v13[0] = &off_14DE60;
  v13[1] = v11;
  return call_idc_func(a1, a2, a3, a4, a5, (__int64)v13, a7, a8);
}
// 14DE60: using guessed type __int64 (__fastcall *off_14DE60)();
// 155620: using guessed type __int64 (__fastcall *callui)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, char);
