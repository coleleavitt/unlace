void __fastcall std::string::swap(__m128i *a1, __m128i *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __m128i *v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  __m128i v10; // xmm0
  __m128i v11; // xmm1
  _BYTE *v12; // rax
  _BYTE *v13; // rax

  if ( a1 != a2 )
  {
    v2 = a1->m128i_i64[0];
    v3 = a2->m128i_i64[0];
    v4 = a2 + 1;
    if ( &a1[1] != (__m128i *)a1->m128i_i64[0] )
    {
      v5 = a1[1].m128i_i64[0];
      if ( (__m128i *)v3 == v4 )
      {
        a1[1] = _mm_loadu_si128(a2 + 1);
        a2->m128i_i64[0] = v2;
        a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
      }
      else
      {
        a1->m128i_i64[0] = v3;
        a2->m128i_i64[0] = v2;
        a1[1].m128i_i64[0] = a2[1].m128i_i64[0];
      }
      a2[1].m128i_i64[0] = v5;
      v6 = a2->m128i_i64[1];
      v7 = a1->m128i_i64[1];
      goto LABEL_6;
    }
    if ( (__m128i *)v3 != v4 )
    {
      v8 = a2[1].m128i_i64[0];
      a2[1] = _mm_loadu_si128(a1 + 1);
      a1->m128i_i64[0] = v3;
      a2->m128i_i64[0] = (__int64)v4;
      a1[1].m128i_i64[0] = v8;
      v9 = a1->m128i_i64[1];
      a1->m128i_i64[1] = a2->m128i_i64[1];
      a2->m128i_i64[1] = v9;
      return;
    }
    v6 = a2->m128i_i64[1];
    if ( a1->m128i_i64[1] )
    {
      v10 = _mm_loadu_si128(a1 + 1);
      if ( v6 )
      {
        v11 = _mm_loadu_si128(a2 + 1);
        a2[1] = v10;
        v7 = a1->m128i_i64[1];
        a1[1] = v11;
        v6 = a2->m128i_i64[1];
LABEL_6:
        a1->m128i_i64[1] = v6;
        a2->m128i_i64[1] = v7;
        return;
      }
      a2[1] = v10;
      a2->m128i_i64[1] = a1->m128i_i64[1];
      v13 = (_BYTE *)a1->m128i_i64[0];
      a1->m128i_i64[1] = 0;
      *v13 = 0;
    }
    else
    {
      v7 = 0;
      if ( !v6 )
        goto LABEL_6;
      a1[1] = _mm_loadu_si128(a2 + 1);
      a1->m128i_i64[1] = a2->m128i_i64[1];
      v12 = (_BYTE *)a2->m128i_i64[0];
      a2->m128i_i64[1] = 0;
      *v12 = 0;
    }
  }
}

