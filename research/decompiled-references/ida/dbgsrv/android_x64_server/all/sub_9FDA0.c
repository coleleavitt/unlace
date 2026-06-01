/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9FDA0
// Address: 0x000000000009FDA0

//----- (000000000009FDA0) ----------------------------------------------------
unsigned __int64 sub_9FDA0(__int64 a1, char *a2, ...)
{
  __int64 v3; // rsi
  __int64 v5; // [rsp+18h] [rbp-C0h]
  __int64 v6; // [rsp+20h] [rbp-B8h]
  int v7; // [rsp+28h] [rbp-B0h]
  gcc_va_list va; // [rsp+B0h] [rbp-28h] BYREF
  unsigned __int64 v9; // [rsp+D0h] [rbp-8h]

  va_start(va, a2);
  va_arg(va, _QWORD);
  v5 = va_arg(va, _QWORD);
  v6 = va_arg(va, _QWORD);
  v7 = va_arg(va, _QWORD);
  va_end(va);
  v9 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 664) )
  {
    va_start(va, a2);
    v3 = *(_QWORD *)(a1 + 400);
    if ( v3 && !*(_BYTE *)(v3 + 68) )
      sub_AA1A0(0, v3);
    else
      sub_AD580(0, a2, va, v5, v6, v7);
  }
  return __readfsqword(0x28u);
}
