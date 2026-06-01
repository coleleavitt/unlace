__int64 __fastcall sub_1C78F0(__m128i *a1, unsigned int *a2)
{
  __m128i *v3; // rax
  __m128i *v4; // rbx
  __m128i **v5; // rdx
  __m128i **v6; // rax
  __m128i ***v7; // rdx
  unsigned int v8; // eax
  __m128i **v9; // rdx

  v3 = (__m128i *)qalloc_or_throw(24);
  v3[1].m128i_i64[0] = 0;
  v4 = v3;
  *v3 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v3, (__m128i)(unsigned __int64)v3);
  do
  {
    while ( 1 )
    {
      v6 = (__m128i **)qalloc_or_throw(24);
      v6[2] = a1;
      *v6 = v4;
      v7 = (__m128i ***)v4->m128i_i64[1];
      v6[1] = (__m128i *)v7;
      *v7 = v6;
      v4->m128i_i64[1] = (__int64)v6;
      ++v4[1].m128i_i64[0];
      v8 = *a2;
      if ( *a2 > 0x2F )
        break;
      v5 = (__m128i **)(*((_QWORD *)a2 + 2) + v8);
      *a2 = v8 + 8;
      a1 = *v5;
      if ( !*v5 )
        return sub_479810(QT::QCoreApplication::self + 2, v4);
    }
    v9 = *((__m128i ***)a2 + 1);
    *((_QWORD *)a2 + 1) = v9 + 1;
    a1 = *v9;
  }
  while ( *v9 );
  return sub_479810(QT::QCoreApplication::self + 2, v4);
}
