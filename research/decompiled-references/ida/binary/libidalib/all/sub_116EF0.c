__int64 __fastcall sub_116EF0(unsigned __int64 a1)
{
  _QWORD *v1; // rax
  __m128i *v3; // rax
  __m128i v4; // xmm0

  v1 = (_QWORD *)qword_252E58;
  if ( qword_252E58 )
  {
    while ( a1 != v1[1] )
    {
      v1 = (_QWORD *)*v1;
      if ( !v1 )
        goto LABEL_6;
    }
    return 0;
  }
  else
  {
LABEL_6:
    v3 = (__m128i *)operator new(0x18u);
    v4 = _mm_loadl_epi64((const __m128i *)&qword_252E58);
    v3[1].m128i_i8[0] = 0;
    qword_252E58 = (__int64)v3;
    *v3 = _mm_unpacklo_epi64(v4, (__m128i)a1);
    return 1;
  }
}

