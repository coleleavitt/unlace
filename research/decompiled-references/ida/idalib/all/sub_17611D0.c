__int64 __fastcall sub_17611D0(__int64 *a1, __int64 a2)
{
  unsigned __int16 **v2; // rbp
  __int64 v3; // r14
  unsigned __int64 v4; // rax
  __int64 v5; // rbp
  unsigned __int64 v7; // rax
  void *ptr; // [rsp+0h] [rbp-68h] BYREF
  __int64 v9; // [rsp+8h] [rbp-60h]
  _BYTE v10[88]; // [rsp+10h] [rbp-58h] BYREF

  v2 = (unsigned __int16 **)(a2 + 56);
  sub_1AA24E0(*(_QWORD *)(*a1 + 744), *(unsigned __int8 *)(a2 + 8), *(unsigned int *)(a2 + 12));
  ptr = v10;
  v9 = 0x600000000LL;
  v3 = a2 + 56 + 8LL * *(unsigned int *)(a2 + 52);
  if ( a2 + 56 != v3 )
  {
    do
    {
      v4 = sub_175B800(a1, *v2);
      if ( v4 <= 1 )
        break;
      v7 = sub_1AA8160(*(_QWORD *)(*a1 + 744), *(unsigned __int8 *)(a2 + 8), 51, v4 & 0xFFFFFFFFFFFFFFFELL);
      if ( v7 <= 1 )
        break;
      ++v2;
      sub_14B7B40((__int64)&ptr, v7 & 0xFFFFFFFFFFFFFFFELL);
    }
    while ( (unsigned __int16 **)v3 != v2 );
  }
  v5 = 1;
  if ( !(unsigned __int8)sub_1AA8E70(
                           *(_QWORD *)(*a1 + 744),
                           *(unsigned __int8 *)(a2 + 8),
                           *(unsigned int *)(a2 + 12),
                           0,
                           0) )
    v5 = sub_1AA2840(
           *(_QWORD *)(*a1 + 744),
           8,
           *(unsigned int *)(a2 + 12),
           *(unsigned int *)(a2 + 20),
           *(unsigned int *)(a2 + 40),
           *(unsigned int *)(a2 + 48),
           ptr,
           (unsigned int)v9,
           4,
           *(unsigned int *)(a2 + 44),
           *(unsigned int *)(a2 + 16),
           0,
           0,
           0);
  if ( ptr != v10 )
    free(ptr);
  return v5;
}
