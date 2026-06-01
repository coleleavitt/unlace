__int64 __fastcall sub_3E80B0(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v3; // rsi
  __m128i v4; // xmm0
  __int64 v5; // rax
  __int64 v6; // rax
  __m128i v7; // [rsp+0h] [rbp-48h] BYREF
  __m128i v8; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v9; // [rsp+28h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  QT::QTreeView::currentChanged();
  v1 = xmmword_8D0DC8;
  if ( !(_QWORD)xmmword_8D0DC8 )
  {
    v3 = qword_8D0DC0;
    v8.m128i_i8[8] = 1;
    v8.m128i_i64[0] = (__int64)"watch:Edit";
    if ( (unsigned __int64)&v8 < qword_8D0DC0
      || (unsigned __int64)&v8 >= qword_8D0DC0 + 16LL * *((_QWORD *)&xmmword_8D0DC8 + 1) )
    {
      if ( !*((_QWORD *)&xmmword_8D0DC8 + 1) )
      {
        v5 = qvector_reserve(&qword_8D0DC0, qword_8D0DC0, 1, 16);
        v1 = xmmword_8D0DC8;
        qword_8D0DC0 = v5;
        v3 = v5;
      }
      *(__m128i *)(v3 + 16 * v1) = _mm_load_si128(&v8);
    }
    else
    {
      v4 = _mm_load_si128(&v8);
      if ( !*((_QWORD *)&xmmword_8D0DC8 + 1) )
      {
        v7 = v4;
        v6 = qvector_reserve(&qword_8D0DC0, qword_8D0DC0, 1, 16);
        v1 = xmmword_8D0DC8;
        v4 = _mm_load_si128(&v7);
        qword_8D0DC0 = v6;
        v3 = v6;
      }
      *(__m128i *)(v3 + 16 * v1) = v4;
    }
    *(_QWORD *)&xmmword_8D0DC8 = xmmword_8D0DC8 + 1;
  }
  return sub_531B30(10, a1, &qword_8D0DC0);
}
