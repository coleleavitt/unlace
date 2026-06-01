__int64 __fastcall sub_1CB0BC0(__int64 a1, __int64 a2)
{
  __m128 v2; // xmm0
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v6; // rax
  _QWORD *v7; // rsi
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rbx
  __m128 v12; // [rsp+0h] [rbp-38h] BYREF
  __int64 v13[5]; // [rsp+10h] [rbp-28h] BYREF

  v2 = (__m128)_mm_loadu_si128((const __m128i *)(a2 + 8));
  v3 = *(_QWORD *)(a2 + 8);
  v12 = v2;
  if ( !v3 )
    return 0;
  v4 = *(_QWORD *)(v3 + 8);
  if ( ((v4 >> 1) & 3) != 2 )
    return 0;
  v6 = *(_QWORD *)(v3 + 16);
  if ( !v6 )
    return 0;
  v7 = (_QWORD *)(*(_QWORD *)&byte_8[a1 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
  while ( *v7 != *(_QWORD *)(*(_QWORD *)&byte_8[v6 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) )
  {
    v8 = v4 & 0xFFFFFFFFFFFFFFF8LL;
    v12.m128_u64[0] = v4 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v4 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      v4 = *(_QWORD *)(v8 + 8);
      if ( ((v4 >> 1) & 3) == 2 )
      {
        v6 = *(_QWORD *)(v8 + 16);
        if ( v6 )
          continue;
      }
    }
    return 0;
  }
  v9 = sub_E90670(&v12);
  v13[1] = v10;
  v13[0] = v9;
  v11 = (unsigned int)sub_F6CE20(v13);
  return (v11 << 32) | (unsigned int)sub_F6CCB0(v13, v2);
}
