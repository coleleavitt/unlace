__int64 __fastcall sub_7CA250(const __m128i **a1, __int64 a2)
{
  _DWORD *v3; // rbx
  _DWORD *v4; // r13
  __m128i v6; // xmm0
  unsigned __int64 v7; // rsi
  __m128i v8; // xmm1
  __int64 v9; // rsi
  __int64 v10; // rdi
  bool v11; // zf
  const __m128i *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v17; // [rsp+8h] [rbp-50h] BYREF
  __m128i v18; // [rsp+10h] [rbp-48h] BYREF

  v3 = (_DWORD *)a1[1]->m128i_i64[0];
  if ( v3 )
  {
    v4 = &v3[*(v3 - 1)];
    if ( v4 != v3 )
    {
      while ( 1 )
      {
        v12 = *a1;
        v13 = (*a1)[145].m128i_i64[1];
        v14 = *v3 >> 1;
        if ( v13 && (unsigned int)v14 < *(_DWORD *)(v13 - 4) )
        {
          v6 = _mm_loadl_epi64(v12 + 9);
          v7 = *(_QWORD *)(v13 + 8 * v14);
          v8 = _mm_unpacklo_epi64((__m128i)v7, v6);
          if ( v7 )
          {
            if ( (*v3 & 1) != 0 )
            {
              v17 = v6.m128i_i64[0];
              v15 = sub_15EC2C0(v6.m128i_i64[0], v7);
              v18 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v15, _mm_loadl_epi64((const __m128i *)&v17));
              if ( v15 )
                ++*(_DWORD *)(v15 + 8);
            }
            else
            {
              v18 = v8;
              ++*(_DWORD *)(v7 + 8);
            }
            goto LABEL_7;
          }
        }
        else
        {
          v6.m128i_i64[0] = v12[9].m128i_i64[0];
        }
        v18.m128i_i64[0] = 0;
        v18.m128i_i64[1] = v6.m128i_i64[0];
LABEL_7:
        sub_160EBE0(a2, &v18);
        std::__ostream_insert<char,std::char_traits<char>>();
        v9 = v18.m128i_i64[0];
        if ( v18.m128i_i64[0]
          && (v10 = v18.m128i_i64[1],
              v11 = *(_DWORD *)(v18.m128i_i64[0] + 8) == 1,
              --*(_DWORD *)(v18.m128i_i64[0] + 8),
              v11) )
        {
          sub_15D7BC0(v10, v9);
          if ( v4 == ++v3 )
            return a2;
        }
        else if ( v4 == ++v3 )
        {
          return a2;
        }
      }
    }
  }
  return a2;
}

