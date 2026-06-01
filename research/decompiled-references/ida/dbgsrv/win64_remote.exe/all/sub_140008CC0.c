/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140008CC0
// Address: 0x0000000140008CC0

//----- (0000000140008CC0) ----------------------------------------------------
__int64 __fastcall sub_140008CC0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v6; // ebx
  _QWORD *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = nullptr;
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD **))(**(_QWORD **)(a1 + 48) + 208LL))(
         *(_QWORD *)(a1 + 48),
         a3,
         a4,
         &v8);
  if ( !v6 )
    v6 = sub_140004340(a1, a2, v8);
  if ( v8 )
    (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
  return v6;
}
