/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14006C3C8
// Address: 0x000000014006C3C8

//----- (000000014006C3C8) ----------------------------------------------------
__int64 __fastcall sub_14006C3C8(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v8; // rbx
  __int64 v9; // rax
  _BYTE v11[4]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v12; // [rsp+44h] [rbp-24h]
  __int64 v13; // [rsp+4Ch] [rbp-1Ch]
  int v14; // [rsp+54h] [rbp-14h]
  __int64 v15; // [rsp+70h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a4 + 8);
  v11[0] = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = a2;
  *(_QWORD *)(sub_14006CCF8() + 96) = v4;
  v8 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(sub_14006CCF8() + 104) = v8;
  v9 = sub_14006CCF8();
  sub_14006BCC8(
    (_BYTE *)(*(_QWORD *)(v9 + 96) + **(unsigned int **)(a4 + 56)),
    (__int64)v11,
    *(_QWORD *)(a4 + 8),
    **(_DWORD **)(a4 + 16),
    0);
  return __InternalCxxFrameHandlerWrapper<__FrameHandler4>(a1, (int)&v15, a3, a4, (struct FH4::FuncInfo4 *)v11, 0, 0, 0);
}
