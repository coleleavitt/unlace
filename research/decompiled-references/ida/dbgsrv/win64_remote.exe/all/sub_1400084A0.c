/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400084A0
// Address: 0x00000001400084A0

//----- (00000001400084A0) ----------------------------------------------------
__int64 __fastcall sub_1400084A0(__int64 a1, _QWORD *a2, unsigned int a3, __int64 (__fastcall ***a4)(_QWORD, __int64))
{
  unsigned int v8; // ebx
  __int64 v10; // [rsp+68h] [rbp+10h] BYREF

  if ( (*(unsigned int (__fastcall **)(_QWORD *))(*a2 + 272LL))(a2) )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(30536);
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, __int64 *))(**(_QWORD **)(a1 + 48) + 64LL))(
         *(_QWORD *)(a1 + 48),
         a2[2],
         a3,
         0,
         0,
         &v10);
  if ( !v8 )
  {
    v8 = sub_1400045E0(a1, v10, a4);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return v8;
}
// 1400CB61C: using guessed type char byte_1400CB61C;
