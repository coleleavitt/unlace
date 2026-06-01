/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140008D40
// Address: 0x0000000140008D40

//----- (0000000140008D40) ----------------------------------------------------
__int64 __fastcall sub_140008D40(__int64 a1, __int64 a2, _QWORD **a3)
{
  unsigned int v6; // ebx
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF
  BSTR bstrString; // [rsp+58h] [rbp+20h] BYREF

  if ( ((unsigned int (__fastcall *)(_QWORD **))(*a3)[34])(a3) )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(30537);
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD *, BSTR *))(*a3[2] + 264LL))(a3[2], &bstrString);
  if ( !v6 )
  {
    v8 = 0;
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, BSTR, __int64, __int64 *))(**(_QWORD **)(a1 + 48) + 168LL))(
           *(_QWORD *)(a1 + 48),
           0,
           bstrString,
           4,
           &v8);
    SysFreeString(bstrString);
    if ( !v6 )
      sub_140004260(a1, a2, v8);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return v6;
}
// 1400CB61C: using guessed type char byte_1400CB61C;
