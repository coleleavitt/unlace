void __fastcall sub_1C58CA0(unsigned int *a1, __int64 a2)
{
  __m128i *v3; // rbp
  const __m128i *v4; // rbx
  __int64 v5; // r12
  __int32 v6; // ecx
  const __m128i *v7; // rdx
  const __m128i *v8; // rax
  const __m128i *v9; // rax
  const __m128i *v10; // rbx
  __m128i *v11; // rdi
  __int32 v12; // eax
  unsigned __int32 v13; // r14d
  __int64 v14; // rax
  __int8 *v15; // rdx
  const __m128i *v16; // rax
  const __m128i *v17; // rsi
  size_t v18; // rdx
  _QWORD *v19; // r12
  _QWORD *v20; // rbx
  _QWORD *v21; // rdi
  _QWORD *v22; // rdi
  __int64 v23; // rbp
  __int64 v24; // r13
  _QWORD *v25; // rdi

  v3 = (__m128i *)(a2 + 24);
  v4 = (const __m128i *)(*(_QWORD *)a1 + 152LL);
  v5 = *(_QWORD *)a1 + 168LL * a1[2];
  if ( *(_QWORD *)a1 != v5 )
  {
    while ( 1 )
    {
      v11 = v3 + 1;
      v3[-2].m128i_i32[2] = v4[-10].m128i_i32[2];
      v3[-2].m128i_i32[3] = v4[-10].m128i_i32[3];
      v3[-1].m128i_i64[0] = v4[-9].m128i_i64[0];
      v12 = v4[-9].m128i_i32[2];
      v3->m128i_i32[2] = 0;
      v3[-1].m128i_i32[2] = v12;
      v3->m128i_i32[3] = 4;
      v13 = v4[-8].m128i_u32[2];
      v3->m128i_i64[0] = (__int64)v3[1].m128i_i64;
      if ( v3 != &v4[-8] && v13 )
      {
        v16 = (const __m128i *)v4[-8].m128i_i64[0];
        v17 = v4 - 7;
        if ( v16 == &v4[-7] )
        {
          v18 = 4LL * v13;
          if ( v13 <= 4uLL
            || (sub_2237220(v3, &v3[1], v13, 4),
                v11 = (__m128i *)v3->m128i_i64[0],
                v17 = (const __m128i *)v4[-8].m128i_i64[0],
                (v18 = 4LL * v4[-8].m128i_u32[2]) != 0) )
          {
            memcpy(v11, v17, v18);
          }
          v3->m128i_i32[2] = v13;
          v4[-8].m128i_i32[2] = 0;
        }
        else
        {
          v3->m128i_i64[0] = (__int64)v16;
          v3->m128i_i32[2] = v13;
          v3->m128i_i32[3] = v4[-8].m128i_i32[3];
          v4[-8].m128i_i64[0] = (__int64)v17;
          v4[-8].m128i_i32[3] = 0;
          v4[-8].m128i_i32[2] = 0;
        }
      }
      v14 = v4[-5].m128i_i64[0];
      v15 = &v3[2].m128i_i8[8];
      if ( v14 )
      {
        v6 = v4[-6].m128i_i32[2];
        v3[3].m128i_i64[0] = v14;
        v3[2].m128i_i32[2] = v6;
        v3[3].m128i_i64[1] = v4[-5].m128i_i64[1];
        v3[4].m128i_i64[0] = v4[-4].m128i_i64[0];
        *(_QWORD *)(v14 + 8) = v15;
        v3[4].m128i_i64[1] = v4[-4].m128i_i64[1];
        v4[-5].m128i_i64[0] = 0;
        v4[-5].m128i_i64[1] = (__int64)&v4[-6].m128i_i64[1];
        v4[-4].m128i_i64[0] = (__int64)&v4[-6].m128i_i64[1];
        v4[-4].m128i_i64[1] = 0;
      }
      else
      {
        v3[2].m128i_i32[2] = 0;
        v3[3].m128i_i64[0] = 0;
        v3[3].m128i_i64[1] = (__int64)v15;
        v3[4].m128i_i64[0] = (__int64)v15;
        v3[4].m128i_i64[1] = 0;
      }
      v3[5].m128i_i64[0] = (__int64)v3[6].m128i_i64;
      v7 = (const __m128i *)v4[-3].m128i_i64[0];
      if ( v7 == &v4[-2] )
      {
        v3[6] = _mm_loadu_si128(v4 - 2);
      }
      else
      {
        v3[5].m128i_i64[0] = (__int64)v7;
        v3[6].m128i_i64[0] = v4[-2].m128i_i64[0];
      }
      v3[5].m128i_i64[1] = v4[-3].m128i_i64[1];
      v4[-3].m128i_i64[0] = (__int64)v4[-2].m128i_i64;
      v4[-3].m128i_i64[1] = 0;
      v4[-2].m128i_i8[0] = 0;
      v3[7].m128i_i64[0] = (__int64)v3[8].m128i_i64;
      v8 = (const __m128i *)v4[-1].m128i_i64[0];
      if ( v8 == v4 )
      {
        v3[8] = _mm_loadu_si128(v4);
      }
      else
      {
        v3[7].m128i_i64[0] = (__int64)v8;
        v3[8].m128i_i64[0] = v4->m128i_i64[0];
      }
      v3 = (__m128i *)((char *)v3 + 168);
      v3[-3].m128i_i64[0] = v4[-1].m128i_i64[1];
      v9 = (const __m128i *)((char *)v4 + 168);
      v4[-1].m128i_i64[0] = (__int64)v4;
      v10 = v4 + 1;
      v10[-2].m128i_i64[1] = 0;
      v10[-1].m128i_i8[0] = 0;
      if ( (const __m128i *)v5 == v10 )
        break;
      v4 = v9;
    }
    v19 = *(_QWORD **)a1;
    v20 = (_QWORD *)(*(_QWORD *)a1 + 168LL * a1[2]);
    while ( v19 != v20 )
    {
      v20 -= 21;
      v21 = (_QWORD *)v20[17];
      if ( v21 != v20 + 19 )
        operator delete(v21);
      v22 = (_QWORD *)v20[13];
      if ( v22 != v20 + 15 )
        operator delete(v22);
      v23 = v20[9];
      if ( v23 )
      {
        do
        {
          sub_1069230((__int64)(v20 + 7), *(_QWORD **)(v23 + 24));
          v24 = *(_QWORD *)(v23 + 16);
          operator delete((void *)v23);
          v23 = v24;
        }
        while ( v24 );
      }
      v25 = (_QWORD *)v20[3];
      if ( v25 != v20 + 5 )
        free(v25);
    }
  }
}
