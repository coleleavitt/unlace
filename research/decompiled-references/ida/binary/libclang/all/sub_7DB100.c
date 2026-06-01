__m128i *__fastcall sub_7DB100(__m128i *a1, __int64 a2, const __m128i *a3)
{
  int v5; // esi
  _WORD *v6; // r13
  __int32 v7; // eax
  __int64 v9; // rax
  __m128i v10; // xmm0
  int v11[11]; // [rsp+Ch] [rbp-2Ch] BYREF

  v5 = a3->m128i_i32[0];
  v11[0] = 180;
  if ( sub_7204C0(v11, v5) && (v6 = (_WORD *)a3->m128i_i64[1]) != nullptr )
  {
    if ( *(_DWORD *)(a2 + 8) )
      v6 = (_WORD *)sub_811DB0(a3->m128i_i64[1]);
    v7 = sub_720B10(v6);
    a1->m128i_i64[1] = (__int64)v6;
    a1->m128i_i32[0] = v7;
    return a1;
  }
  else
  {
    v9 = a3[2].m128i_i64[0];
    *a1 = _mm_loadu_si128(a3);
    v10 = _mm_loadu_si128(a3 + 1);
    a1[2].m128i_i64[0] = v9;
    a1[1] = v10;
    return a1;
  }
}

