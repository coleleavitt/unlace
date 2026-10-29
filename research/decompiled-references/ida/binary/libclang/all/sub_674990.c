__int64 __fastcall sub_674990(__int64 *a1, __int64 a2, double a3, __m128i a4, double a5, __m128 a6)
{
  __int64 v6; // rax
  char v7; // al
  __int64 *v8; // rax
  unsigned __int32 v10; // r12d
  const __m128i *v11; // rax
  __int64 v12; // rdx

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
      sub_673240(a1, *(_QWORD *)(v11[1].m128i_i64[1] + 8 * v12), a3, a4, a5, a6);
      v6 = *(_QWORD *)(a2 + 56);
      if ( (v6 & 4) == 0 )
        goto LABEL_2;
    }
    a4 = _mm_loadu_si128(v11);
    v7 = sub_674510(a1, a4.m128i_i64[0], a4.m128i_i64[1], a3, a4, a5, a6);
  }
  else
  {
LABEL_2:
    a3 = 0.0;
    v7 = sub_674510(a1, 0, 0, 0.0, a4, a5, a6);
  }
  if ( !v7 )
    return 0;
  v8 = (__int64 *)(*(_QWORD *)(a2 + 56) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a2 + 56) & 4) != 0 )
    v8 = (__int64 *)v8[4];
  if ( v8 )
    return sub_673BB0(a1, *v8, (unsigned __int64)(v8 + 1), a3, a4, a5, a6);
  else
    return sub_673340(a1, *(_QWORD *)(a2 + 48), a3, a4, a5, a6);
}

