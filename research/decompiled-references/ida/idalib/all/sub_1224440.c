__int64 __fastcall sub_1224440(__int64 a1, __int64 a2)
{
  unsigned int v4; // eax
  unsigned int v5; // r12d
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // r14
  const void *v9; // rsi
  const void *v10; // rdi
  size_t v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // r13

  v4 = sub_1213FB0(
         a1,
         *(_DWORD *)(a2 + 32),
         *(_DWORD *)(a2 + 36),
         *(_DWORD *)(a2 + 40),
         *(const void **)(a2 + 112),
         *(_QWORD *)(a2 + 120));
  if ( (_BYTE)v4 )
    return 1;
  v5 = v4;
  if ( (unsigned __int8)sub_1213FB0(
                          a2,
                          *(_DWORD *)(a1 + 32),
                          *(_DWORD *)(a1 + 36),
                          *(_DWORD *)(a1 + 40),
                          *(const void **)(a1 + 112),
                          *(_QWORD *)(a1 + 120)) )
    return v5;
  v7 = *(_QWORD *)(a1 + 152);
  v8 = *(_QWORD *)(a2 + 152);
  v9 = *(const void **)(a2 + 144);
  v10 = *(const void **)(a1 + 144);
  v11 = *(_QWORD *)(a2 + 152);
  if ( v7 <= v8 )
    v11 = *(_QWORD *)(a1 + 152);
  v12 = sub_9B48C0(v10, v9, v11);
  if ( !v12 )
  {
    v13 = v7 - v8;
    if ( v13 > 0x7FFFFFFF )
      return v5;
    if ( v13 < (__int64)0xFFFFFFFF80000000LL )
      return 1;
    v12 = v13;
  }
  return v12 >> 31;
}
