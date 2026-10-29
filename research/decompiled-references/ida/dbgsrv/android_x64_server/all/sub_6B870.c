/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6B870
// Address: 0x000000000006B870

//----- (000000000006B870) ----------------------------------------------------
__int64 __fastcall sub_6B870(char *haystack, __int64 a2, int a3, double a4, __m128 a5, __int64 a6, int a7, int a8)
{
  __int64 v8; // rax
  unsigned int v9; // ebp
  _QWORD v12[6]; // [rsp+8h] [rbp-30h] BYREF

  v12[2] = __readfsqword(0x28u);
  ((void (__fastcall *)(int, unsigned int, int, unsigned int, int, int))callui)(
    11,
    (unsigned int)v12,
    a3,
    (unsigned int)&callui,
    a7,
    a8);
  v8 = v12[0];
  v12[0] = &off_14DE60;
  v12[1] = v8;
  if ( !strstr(haystack, "static ") )
    return (unsigned int)eval_idc_snippet(nullptr, haystack, a2, (__int64)v12, a4, a5);
  v9 = 0;
  sub_68510("main", 0, &dword_102CAC, 7u, a4, a5);
  if ( (unsigned __int8)compile_idc_text((__int64)haystack, a2, (__int64)v12, 0, a4, a5) )
    return (unsigned int)call_idc_func(nullptr, "main", nullptr, 0, a2, (__int64)v12, a4, a5);
  return v9;
}
// 102CAC: using guessed type int dword_102CAC;
// 14DE60: using guessed type __int64 (__fastcall *off_14DE60)();
// 155620: using guessed type __int64 (__fastcall *callui)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, char);
