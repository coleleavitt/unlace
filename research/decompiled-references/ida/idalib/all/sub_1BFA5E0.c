__m128i *__fastcall sub_1BFA5E0(__m128i *a1, __int64 a2, unsigned __int64 a3, __m128 a4, __m128 a5)
{
  __int64 v5; // rcx
  __int64 v7; // rdi
  __int64 v8; // rax
  char v10; // si
  unsigned __int64 v11; // rax
  __int64 v12; // rdx

  v5 = *(_QWORD *)(a3 + 8);
  v7 = *(_QWORD *)(a2 + 248);
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v8 + 16) == 13 && ((*(_WORD *)(v8 + 18) >> 3) & 0x1FF) == 0x1E8 )
  {
    v10 = *(_BYTE *)(a3 + 1);
    v11 = a1[1].m128i_i64[0] & 0xFFFFF80400000000LL | 0x2000000000LL;
    v12 = *(_QWORD *)(v7 + 18640);
    a1[1].m128i_i64[1] = v5;
    a1->m128i_i64[1] = 0;
    a1[3].m128i_i64[1] = 0;
    a1->m128i_i32[0] = 0;
    a1[1].m128i_i64[0] = v11;
    if ( (v10 & 6) != 0 )
      a1[1].m128i_i8[0] = 1;
    a1[2].m128i_i64[0] = v5;
    a1[1].m128i_i8[1] = 15;
    a1[2].m128i_i64[1] = v12;
    a1[3].m128i_i64[0] = v12;
    return a1;
  }
  else
  {
    sub_1BEC140(a1, a2, a3, *(_QWORD *)(v7 + 18640), 0, 1, a4, a5, 0, 0, 0, 0);
    return a1;
  }
}
