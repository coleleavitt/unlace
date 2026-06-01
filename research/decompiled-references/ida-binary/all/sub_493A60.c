unsigned __int64 __fastcall sub_493A60(const __m128i *a1, __int64 a2, QT::QAbstractItemView *a3)
{
  __int64 v4; // rbp
  __int64 *v5; // rbx
  __int64 *v7; // rbp
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 *v12; // rdi
  __int64 v13; // rax
  __m128i v14; // xmm0
  __int64 *v15; // rax
  __int64 v16; // rbp
  __int64 v17; // rbx
  __int64 *v18; // rdx
  __int64 v19; // rdi
  __int64 *v21; // [rsp+0h] [rbp-48h] BYREF
  __int128 v22; // [rsp+8h] [rbp-40h]
  unsigned __int64 v23; // [rsp+18h] [rbp-30h]

  v4 = *(_QWORD *)(a2 + 8);
  v5 = *(__int64 **)a2;
  v23 = __readfsqword(0x28u);
  v7 = &v5[4 * v4];
  while ( v7 != v5 )
  {
    v8 = v5[1];
    v9 = *v5;
    v5 += 4;
    sub_4885F0((__int64)a1, a3, v9, v8);
  }
  v10 = *(_QWORD *)(a2 + 32);
  v11 = *(_QWORD *)(a2 + 24);
  v21 = nullptr;
  v22 = 0;
  sub_4885F0((__int64)&v21, a3, v11, v10);
  v12 = v21;
  if ( !(_QWORD)v22 )
  {
    if ( !v21 )
      return v23 - __readfsqword(0x28u);
    goto LABEL_10;
  }
  v13 = a1[1].m128i_i64[1];
  v14 = _mm_loadu_si128(a1 + 2);
  a1[1].m128i_i64[1] = *v21;
  a1[2].m128i_i64[0] = v12[1];
  a1[2].m128i_i64[1] = v12[2];
  *v12 = v13;
  v15 = v21;
  *(__m128i *)(v12 + 1) = v14;
  v12 = v15;
  if ( v15 )
  {
    v16 = v22;
    if ( (_QWORD)v22 )
    {
      v17 = 0;
      do
      {
        v18 = &v15[3 * v17];
        v19 = *v18;
        if ( *v18 )
        {
          v18[1] = 0;
          qfree(v19, (const char *)a3);
          v15 = v21;
        }
        ++v17;
        v12 = v15;
      }
      while ( v16 != v17 );
    }
LABEL_10:
    *(_QWORD *)&v22 = 0;
    qfree(v12, (const char *)a3);
  }
  return v23 - __readfsqword(0x28u);
}
