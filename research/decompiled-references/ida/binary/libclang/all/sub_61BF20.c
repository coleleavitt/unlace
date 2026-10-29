_BOOL8 __fastcall sub_61BF20(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 *v7; // rax
  __int64 v8; // rdx
  const __m128i *v9; // rdx
  __m128i v10; // xmm0
  __int64 v12; // r13
  __int64 v13; // r13
  __int64 v14; // r12

  v6 = *(_QWORD *)(a2 + 56);
  if ( (v6 & 4) != 0 )
  {
    v9 = (const __m128i *)(v6 & 0xFFFFFFFFFFFFFFF8LL);
    v12 = *(unsigned int *)((v6 & 0xFFFFFFFFFFFFFFF8LL) + 16);
    if ( (_DWORD)v12 )
    {
      v13 = 8 * v12;
      v14 = 0;
      while ( !(unsigned __int8)sub_61AC60(
                                  a1,
                                  *(_QWORD *)(*(_QWORD *)((v6 & 0xFFFFFFFFFFFFFFF8LL) + 24) + v14),
                                  (__int64)v9,
                                  a4,
                                  a5,
                                  a6) )
      {
        v14 += 8;
        v6 = *(_QWORD *)(a2 + 56);
        if ( v14 == v13 )
        {
          v9 = (const __m128i *)(v6 & 0xFFFFFFFFFFFFFFF8LL);
          if ( (v6 & 4) == 0 )
            goto LABEL_2;
          goto LABEL_16;
        }
      }
      return 1;
    }
LABEL_16:
    v7 = (__int64 *)v9[2].m128i_i64[0];
    if ( !v7 )
      goto LABEL_7;
  }
  else
  {
LABEL_2:
    if ( v6 <= 7 )
      return 0;
    v7 = (__int64 *)(v6 & 0xFFFFFFFFFFFFFFF8LL);
  }
  if ( (unsigned __int8)sub_61B330(a1, *v7, (__int64)(v7 + 1)) )
    return 1;
  v8 = *(_QWORD *)(a2 + 56);
  if ( (v8 & 4) == 0 )
    return 0;
  v9 = (const __m128i *)(v8 & 0xFFFFFFFFFFFFFFF8LL);
LABEL_7:
  v10 = _mm_loadu_si128(v9);
  return v10.m128i_i64[0] && (unsigned __int8)sub_61B740(a1, v10.m128i_u64[0], v10.m128i_u64[1]);
}

