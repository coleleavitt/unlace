/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100035028
// Address: 0x0000000100035028

//----- (0000000100035028) ----------------------------------------------------
void __noreturn sub_100035028(_Unwind_Exception *a1, __int64 a2, ...)
{
  __int64 v2; // x26
  va_list va; // [xsp+8h] [xbp+8h] BYREF

  va_start(va, a2);
  sub_10000A550((_QWORD *)(v2 + 8));
  sub_10003C558((unsigned __int8 *)va);
  _Unwind_Resume(a1);
}
// 100035030: variable 'v2' is possibly undefined
