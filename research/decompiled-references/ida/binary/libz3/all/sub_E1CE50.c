__int64 __fastcall sub_E1CE50(__m128i **a1, __m128i **a2, int a3)
{
  __m128i *v3; // r12
  _QWORD *v4; // rbp
  _QWORD *v5; // rbx
  void (__fastcall *v6)(_QWORD *, _QWORD *, __int64); // rax
  _QWORD *v7; // rsi
  _QWORD *v8; // rdi
  const __m128i **v10; // r12
  __int64 v11; // rax
  unsigned __int64 v12; // rbx
  __m128i *v13; // r14
  __int64 v14; // r15
  const __m128i *v15; // r13
  const __m128i *v16; // rbx
  __int64 i; // r12
  void (__fastcall *v18)(__int64, const __m128i *, __int64); // rax

  if ( a3 )
  {
    switch ( a3 )
    {
      case 1:
        *a1 = *a2;
        break;
      case 2:
        v10 = (const __m128i **)*a2;
        v11 = operator new(0x18u);
        v12 = (char *)v10[1] - (char *)*v10;
        v13 = (__m128i *)v11;
        *(_OWORD *)v11 = 0;
        *(_QWORD *)(v11 + 16) = 0;
        if ( v12 )
        {
          if ( v12 > 0x7FFFFFFFFFFFFFE0LL )
            std::__throw_bad_array_new_length();
          v14 = operator new(v12);
        }
        else
        {
          v14 = 0;
        }
        v13[1].m128i_i64[0] = v14 + v12;
        *v13 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v14, (__m128i)(unsigned __int64)v14);
        v15 = v10[1];
        v16 = *v10;
        for ( i = v14; v15 != v16; i += 32 )
        {
          v18 = (void (__fastcall *)(__int64, const __m128i *, __int64))v16[1].m128i_i64[0];
          *(_QWORD *)(i + 16) = 0;
          *(_QWORD *)(i + 24) = 0;
          *(_OWORD *)i = 0;
          if ( v18 )
          {
            v18(i, v16, 2);
            *(__m128i *)(i + 16) = _mm_loadu_si128(v16 + 1);
          }
          v16 += 2;
        }
        v13->m128i_i64[1] = i;
        *a1 = v13;
        break;
      case 3:
        v3 = *a1;
        if ( *a1 )
        {
          v4 = (_QWORD *)v3->m128i_i64[1];
          v5 = (_QWORD *)v3->m128i_i64[0];
          if ( v4 != (_QWORD *)v3->m128i_i64[0] )
          {
            do
            {
              while ( 1 )
              {
                v6 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))v5[2];
                if ( !v6 )
                  break;
                v7 = v5;
                v8 = v5;
                v5 += 4;
                v6(v8, v7, 3);
                if ( v4 == v5 )
                  goto LABEL_9;
              }
              v5 += 4;
            }
            while ( v4 != v5 );
LABEL_9:
            v5 = (_QWORD *)v3->m128i_i64[0];
          }
          if ( v5 )
            operator delete(v5, v3[1].m128i_i64[0] - (_QWORD)v5);
          operator delete(v3, 0x18u);
        }
        break;
    }
  }
  else
  {
    *a1 = (__m128i *)&off_1C75E68;
  }
  return 0;
}

