/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9FC70
// Address: 0x000000000009FC70

//----- (000000000009FC70) ----------------------------------------------------
__int64 sub_9FC70(__int64 a1, char *a2, ...)
{
  __int64 v3; // rcx
  int v4; // ebp
  __int64 v5; // r8
  int v6; // r9d
  __int64 v7; // rsi
  char *v8; // rax
  gcc_va_list va; // [rsp+B0h] [rbp-38h] BYREF
  unsigned __int64 v11; // [rsp+C8h] [rbp-20h]

  va_start(va, a2);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  va_end(va);
  v11 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 664) )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 408LL))(a1);
    va_start(va, a2);
    v7 = *(_QWORD *)(a1 + 400);
    if ( v7 && !*(_BYTE *)(v7 + 68) )
      sub_AA1A0(0, v7);
    else
      sub_AD580(0, a2, va, v3, v5, v6);
    v8 = winerr(v4);
    sub_391F0(a1, ": %s\n", v8);
  }
  return 0;
}
// 9FD42: variable 'v3' is possibly undefined
// 9FD42: variable 'v5' is possibly undefined
// 9FD42: variable 'v6' is possibly undefined
