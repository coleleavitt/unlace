/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140008760
// Address: 0x0000000140008760

//----- (0000000140008760) ----------------------------------------------------
__int64 __fastcall sub_140008760(__int64 a1, __int64 a2, __int64 (__fastcall ***a3)(_QWORD, __int64))
{
  int v5; // ebx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0;
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 48) + 176LL))(
         *(_QWORD *)(a1 + 48),
         a2,
         &v8);
  if ( v5 >= 0 )
  {
    v7 = 0;
    v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 48LL))(v8, &v7);
    if ( !v5 )
      v5 = sub_1400045E0(a1, v7, a3);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return (unsigned int)v5;
}
