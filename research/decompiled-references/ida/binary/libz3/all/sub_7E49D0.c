__int64 *__fastcall sub_7E49D0(__int64 a1, unsigned __int32 a2, __int64 a3, _DWORD **a4, _DWORD **a5, __int64 a6)
{
  __int64 v11; // rdi
  __int64 (*v12)(void); // rax
  __int64 v13; // rdi
  __m128i *v14; // rax
  __int64 *v15; // r10
  __int64 v16; // rdx
  __int64 *v17; // rax
  _DWORD **v18; // rcx
  _DWORD **v19; // rsi
  _DWORD *v20; // rdi
  _DWORD *v21; // r8

  v11 = *(_QWORD *)(a1 + 80);
  v12 = *(__int64 (**)(void))(*(_QWORD *)v11 + 432LL);
  if ( (char *)v12 == (char *)sub_79EFF0 )
    v13 = v11 + 2144;
  else
    v13 = v12();
  v14 = (__m128i *)sub_180C100(v13, 16LL * a2 + 64);
  v14->m128i_i64[0] = a1;
  v15 = &v14->m128i_i64[1];
  v14->m128i_i32[2] = -2;
  v14[1].m128i_i64[0] = (__int64)a4;
  v14[1].m128i_i64[1] = (__int64)a5;
  if ( a4 && **a5 < **a4 )
  {
    v14[1].m128i_i64[0] = (__int64)a5;
    v14[1].m128i_i64[1] = (__int64)a4;
  }
  v14[2].m128i_i64[0] = a6;
  v14[2].m128i_i32[2] = 0;
  v14[2].m128i_i32[3] = a2;
  v14[3] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v14[4], (__m128i)(unsigned __int64)&v14[4]);
  if ( a2 )
  {
    v16 = a3;
    v17 = &v14[4].m128i_i64[1];
    do
    {
      v18 = *(_DWORD ***)v16;
      *(v17 - 1) = *(_QWORD *)v16;
      v19 = *(_DWORD ***)(v16 + 8);
      v20 = *v18;
      v21 = *v19;
      *v17 = (__int64)v19;
      if ( *v21 < *v20 )
      {
        *(v17 - 1) = (__int64)v19;
        *v17 = (__int64)v18;
      }
      v16 += 16;
      v17 += 2;
    }
    while ( a3 + 16LL * a2 != v16 );
  }
  return v15;
}

