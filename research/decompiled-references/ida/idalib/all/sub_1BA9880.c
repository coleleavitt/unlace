unsigned __int64 __fastcall sub_1BA9880(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int64 *v4; // rbp
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r14
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbp
  unsigned __int64 v12; // rax
  void *ptr; // [rsp+0h] [rbp-68h] BYREF
  __int64 v14; // [rsp+8h] [rbp-60h]
  _BYTE v15[88]; // [rsp+10h] [rbp-58h] BYREF

  v4 = (unsigned __int64 *)(a2 + 56);
  sub_1AA24E0(*(__int64 **)(*a1 + 744));
  ptr = v15;
  v14 = 0x600000000LL;
  v8 = a2 + 56 + 8LL * *(unsigned int *)(a2 + 52);
  if ( a2 + 56 != v8 )
  {
    do
    {
      v9 = sub_1B73BE0(a1, *v4, v5, a3, a4, v6, v7);
      if ( v9 <= 1 )
        break;
      v12 = sub_1AA8160(*(__int64 **)(*a1 + 744), *(unsigned __int8 *)(a2 + 8), 51, v9 & 0xFFFFFFFFFFFFFFFELL);
      if ( v12 <= 1 )
        break;
      ++v4;
      sub_14B7B40((__int64)&ptr, v12 & 0xFFFFFFFFFFFFFFFELL);
    }
    while ( (unsigned __int64 *)v8 != v4 );
  }
  v10 = 1;
  if ( !(unsigned __int8)sub_1AA8E70(*(_QWORD *)(*a1 + 744), *(_BYTE *)(a2 + 8), *(_DWORD *)(a2 + 12), nullptr, 0, a3) )
    v10 = sub_1AA2840(
            *(_QWORD **)(*a1 + 744),
            8,
            *(_DWORD *)(a2 + 12),
            *(_DWORD *)(a2 + 20),
            *(_DWORD *)(a2 + 40),
            *(_DWORD *)(a2 + 48),
            (__int64 *)ptr,
            (unsigned int)v14,
            4,
            *(_DWORD *)(a2 + 44),
            *(_DWORD *)(a2 + 16),
            nullptr,
            0,
            0);
  if ( ptr != v15 )
    free(ptr);
  return v10;
}
