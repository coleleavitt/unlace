__int64 __fastcall sub_1FEE680(_QWORD *a1, const __m128i **a2, int a3)
{
  const __m128i *v4; // rbp
  __m128i *v5; // rbx
  __m128i *v6; // rax
  __int8 *v7; // r13
  signed __int64 v8; // rbp
  _QWORD *v9; // rbx
  _QWORD *v10; // rdi

  switch ( a3 )
  {
    case 2:
      v4 = *a2;
      v5 = (__m128i *)operator new(0x50u);
      v6 = v5 + 4;
      *v5 = _mm_loadu_si128(v4);
      v5[1] = _mm_loadu_si128(v4 + 1);
      v5[2] = _mm_loadu_si128(v4 + 2);
      v5[3].m128i_i64[0] = (__int64)v5[4].m128i_i64;
      v7 = (__int8 *)v4[3].m128i_i64[0];
      v8 = v4[3].m128i_i64[1];
      if ( &v7[v8] && !v7 )
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      if ( (unsigned __int64)v8 > 0xF )
      {
        if ( v8 < 0 )
          std::__throw_length_error("basic_string::_M_create");
        v6 = (__m128i *)operator new(v8 + 1);
        v5[4].m128i_i64[0] = v8;
        v5[3].m128i_i64[0] = (__int64)v6;
      }
      else
      {
        if ( v8 == 1 )
        {
          v5[4].m128i_i8[0] = *v7;
LABEL_10:
          v5[3].m128i_i64[1] = v8;
          v6->m128i_i8[v8] = 0;
          *a1 = v5;
          return 0;
        }
        if ( !v8 )
          goto LABEL_10;
      }
      memcpy(v6, v7, v8);
      v6 = (__m128i *)v5[3].m128i_i64[0];
      goto LABEL_10;
    case 3:
      v9 = (_QWORD *)*a1;
      if ( !*a1 )
        return 0;
      v10 = (_QWORD *)v9[6];
      if ( v10 != v9 + 8 )
        operator delete(v10);
      operator delete(v9, 0x50u);
      return 0;
    case 1:
      *a1 = *a2;
      return 0;
    default:
      return 0;
  }
}
