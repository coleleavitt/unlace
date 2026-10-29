__int64 __fastcall sub_7F0190(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  char v7; // al
  __int64 *v8; // rax
  unsigned __int32 v10; // r12d
  const __m128i *v11; // rax
  __int64 v12; // rdx
  __m128i v13; // [rsp+0h] [rbp-28h]

  v6 = *(_QWORD *)(a2 + 56);
  if ( (v6 & 4) != 0 )
  {
    v10 = 0;
    while ( 1 )
    {
      v11 = (const __m128i *)(v6 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v10 >= v11[1].m128i_i32[0] )
        break;
      v12 = v10++;
      sub_7ECC20(a1, *(_QWORD *)(v11[1].m128i_i64[1] + 8 * v12));
      v6 = *(_QWORD *)(a2 + 56);
      if ( (v6 & 4) == 0 )
        goto LABEL_2;
    }
    v13 = _mm_loadu_si128(v11);
    v7 = sub_7EF1F0((__int64)a1, v13.m128i_i64[0], v13.m128i_i64[1], a4, a5, a6);
  }
  else
  {
LABEL_2:
    v7 = sub_7EF1F0((__int64)a1, 0, 0, a4, a5, a6);
  }
  if ( !v7 )
    return 0;
  v8 = (__int64 *)(*(_QWORD *)(a2 + 56) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a2 + 56) & 4) != 0 )
    v8 = (__int64 *)v8[4];
  if ( v8 )
    return sub_7EEDC0((__int64)a1, *v8, (__int64)(v8 + 1));
  else
    return sub_7EDF40(a1, *(_QWORD *)(a2 + 48));
}

