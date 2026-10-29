__m128i *__fastcall sub_10544B0(__m128i *a1, __int64 a2, char a3)
{
  __int64 v4; // rax
  __m128i v5; // xmm0
  __int64 v6; // rax
  _BYTE *v7; // rdx
  __int64 v8; // rax
  __m128i v9; // xmm1
  __m128i v10; // [rsp+10h] [rbp-18h] BYREF

  if ( a3 == 33 )
  {
    v6 = *(_QWORD *)(a2 + 584);
    v7 = *(_BYTE **)(a2 + 576);
    if ( v6 == 1 )
    {
      if ( *v7 == 54 )
      {
LABEL_13:
        v10.m128i_i16[0] = 101;
        v8 = 1;
        goto LABEL_10;
      }
    }
    else if ( v6 == 3 && *(_WORD *)v7 == 12337 && v7[2] == 54 )
    {
      goto LABEL_13;
    }
    v10.m128i_i8[0] = 0;
    v8 = 0;
LABEL_10:
    v9 = _mm_load_si128(&v10);
    a1->m128i_i64[1] = v8;
    a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
    a1[1] = v9;
    a1[2].m128i_i8[0] = 1;
    return a1;
  }
  if ( a3 == 126 )
  {
    if ( sub_10543C0(*(_BYTE **)(a2 + 576), *(_QWORD *)(a2 + 584)) )
    {
      v10.m128i_i8[0] = 0;
      v4 = 0;
    }
    else
    {
      v4 = 1;
      v10.m128i_i16[0] = 114;
    }
    v5 = _mm_load_si128(&v10);
    a1->m128i_i64[1] = v4;
    a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
    a1[1] = v5;
    a1[2].m128i_i8[0] = 1;
    return a1;
  }
  else
  {
    a1[2].m128i_i8[0] = 0;
    return a1;
  }
}

