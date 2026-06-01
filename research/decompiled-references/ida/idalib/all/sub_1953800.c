__int64 __fastcall sub_1953800(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int16 **v4; // rbp
  __int64 v5; // r14
  unsigned __int64 v6; // rax
  __int64 v7; // rbp
  unsigned __int64 v9; // rax
  void *ptr; // [rsp+0h] [rbp-68h] BYREF
  __int64 v11; // [rsp+8h] [rbp-60h]
  _BYTE v12[88]; // [rsp+10h] [rbp-58h] BYREF

  v4 = (unsigned __int16 **)(a2 + 56);
  sub_1AA24E0(*(_QWORD *)(*a1 + 744), *(unsigned __int8 *)(a2 + 8), *(unsigned int *)(a2 + 12));
  ptr = v12;
  v11 = 0x600000000LL;
  v5 = a2 + 56 + 8LL * *(unsigned int *)(a2 + 52);
  if ( a2 + 56 != v5 )
  {
    do
    {
      v6 = sub_1944E10(a1, *v4, a3, a4);
      if ( v6 <= 1 )
        break;
      v9 = sub_1AA8160(*(_QWORD *)(*a1 + 744), *(unsigned __int8 *)(a2 + 8), 51, v6 & 0xFFFFFFFFFFFFFFFELL);
      if ( v9 <= 1 )
        break;
      ++v4;
      sub_14B7B40((__int64)&ptr, v9 & 0xFFFFFFFFFFFFFFFELL);
    }
    while ( (unsigned __int16 **)v5 != v4 );
  }
  v7 = 1;
  if ( !(unsigned __int8)sub_1AA8E70(
                           *(_QWORD *)(*a1 + 744),
                           *(unsigned __int8 *)(a2 + 8),
                           *(unsigned int *)(a2 + 12),
                           0,
                           0) )
    v7 = sub_1AA2840(
           *(_QWORD *)(*a1 + 744),
           8,
           *(unsigned int *)(a2 + 12),
           *(unsigned int *)(a2 + 20),
           *(unsigned int *)(a2 + 40),
           *(unsigned int *)(a2 + 48),
           ptr,
           (unsigned int)v11,
           4,
           *(unsigned int *)(a2 + 44),
           *(unsigned int *)(a2 + 16),
           0,
           0,
           0);
  if ( ptr != v12 )
    free(ptr);
  return v7;
}
