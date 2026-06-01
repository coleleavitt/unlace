__m128i *__fastcall sub_48EFE0(__m128i *a1, QT::QAbstractItemView *a2, int a3, unsigned int a4)
{
  int v4; // r15d
  __int64 v8; // rdx
  __int64 v9; // rsi
  __m128i v10; // xmm0
  __int64 v12; // rax
  __m128i v13; // [rsp+0h] [rbp-78h] BYREF
  __int64 v14; // [rsp+10h] [rbp-68h]
  __m128i v15; // [rsp+20h] [rbp-58h] BYREF
  __int64 v16; // [rsp+30h] [rbp-48h]
  unsigned __int64 v17; // [rsp+38h] [rbp-40h]

  v4 = 0;
  v17 = __readfsqword(0x28u);
  sub_48EF40(&v15, a2);
  v8 = v15.m128i_u32[0];
  if ( v15.m128i_i32[0] >= 0 )
  {
    do
    {
      v9 = v16;
      if ( v15.m128i_i32[1] < 0 || a3 <= v4 )
        break;
      if ( !v16 )
        goto LABEL_11;
      ++v4;
      QT::QTreeView::indexBelow(&v13, a2, &v15);
      v10 = _mm_loadu_si128(&v13);
      v9 = v14;
      v8 = (unsigned int)_mm_cvtsi128_si32(v10);
      v16 = v14;
      v15 = v10;
    }
    while ( (int)v8 >= 0 );
    if ( v9 )
      goto LABEL_7;
LABEL_11:
    a1->m128i_i64[0] = -1;
    a1->m128i_i64[1] = 0;
    a1[1].m128i_i64[0] = 0;
    return a1;
  }
  v9 = v16;
  if ( !v16 )
    goto LABEL_11;
LABEL_7:
  if ( a4 == v15.m128i_i32[1] )
  {
    v12 = v16;
    *a1 = _mm_load_si128(&v15);
    a1[1].m128i_i64[0] = v12;
  }
  else
  {
    (*(void (__fastcall **)(__m128i *, __int64, __int64, _QWORD, __m128i *))(*(_QWORD *)v9 + 112LL))(
      a1,
      v9,
      v8,
      a4,
      &v15);
  }
  return a1;
}
