/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100060FA0
// Address: 0x0000000100060FA0

//----- (0000000100060FA0) ----------------------------------------------------
__int64 sub_100060FA0(__int64 a1, char *a2, ...)
{
  __int64 v3; // rsi
  __int64 v5; // [rsp+18h] [rbp-B8h]
  __int64 v6; // [rsp+20h] [rbp-B0h]
  int v7; // [rsp+28h] [rbp-A8h]
  va_list va; // [rsp+B0h] [rbp-20h] BYREF

  va_start(va, a2);
  va_arg(va, _QWORD);
  v5 = va_arg(va, _QWORD);
  v6 = va_arg(va, _QWORD);
  v7 = va_arg(va, _QWORD);
  va_end(va);
  if ( *(_BYTE *)(a1 + 664) == 1 )
  {
    va_start(va, a2);
    v3 = *(_QWORD *)(a1 + 400);
    if ( v3 && *(_BYTE *)(v3 + 68) != 1 )
      sub_10006AE70(0, v3);
    else
      sub_10006D900(0, a2, (__int64)va, v5, v6, v7);
  }
  return __stack_chk_guard;
}
