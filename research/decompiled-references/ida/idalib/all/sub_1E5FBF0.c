unsigned __int64 __fastcall sub_1E5FBF0(
        __int64 a1,
        unsigned __int16 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // r12
  void *v8; // rax
  __int64 v10; // rsi
  unsigned int v11; // eax
  _BYTE v12[168]; // [rsp+0h] [rbp-A8h] BYREF

  v7 = *(_QWORD *)(a1 + 248);
  if ( (_BYTE)a3 && !*(_DWORD *)(a1 + 11320) && (*(_DWORD *)a2 & 0x8000) == 0 )
  {
    v10 = *(_QWORD *)(a1 + 248);
    if ( (unsigned __int8)sub_C01160((unsigned __int64)a2, v10, 0, a4, a5) )
    {
      v11 = sub_C00A40((unsigned __int64)a2, v10, a3, a4, a5);
      sub_168B9F0((__int64)v12, (__int64 *)(a1 + 8), v11, 0x1CC7u, 0);
      sub_15F7200(v12);
    }
    v7 = *(_QWORD *)(a1 + 248);
  }
  v8 = sub_1E5F980(a1, a2, a3, a4, a5, a6);
  return sub_A78C30(v7, a2, (__int64)v8);
}
