__int64 __fastcall liblicui::license_dialog_t__::vfunc_8(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6)
{
  unsigned int v7; // eax
  unsigned int v8; // ebp
  __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // rax
  const char *v13; // rsi
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdi
  __m128i v16; // xmm0
  __m128i v17; // xmm1
  char *v18; // rax
  __int64 v19; // rdi
  __m128i v20; // xmm0
  char *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __m128i v24; // [rsp+0h] [rbp-58h] BYREF
  __int64 v25; // [rsp+10h] [rbp-48h] BYREF
  __m128i v26; // [rsp+18h] [rbp-40h] BYREF
  unsigned __int64 v27; // [rsp+28h] [rbp-30h]

  v27 = __readfsqword(0x28u);
  callui(203, 9, a1, 9, (unsigned int)&callui, a6);
  v8 = v7;
  if ( !(_BYTE)v7 )
  {
    v26 = 0;
    v25 = 0;
    v10 = qvector_reserve(&v25, 0, 24, 1);
    v25 = v10;
    v26.m128i_i64[0] = 24;
    *(__m128i *)v10 = _mm_load_si128((const __m128i *)&xmmword_5DDE50);
    v11 = v25;
    *(_QWORD *)(v10 + 15) = 0x65736E6563696C20LL;
    *(_BYTE *)(v11 + 23) = 0;
    v12 = *(_QWORD *)(a2 + 8);
    v13 = *(const char **)a2;
    v14 = *(_QWORD *)(a2 + 16);
    v15 = v12 + 1;
    if ( (unsigned __int64)&v25 < *(_QWORD *)a2 || &v25 >= (__int64 *)&v13[24 * v14] )
    {
      if ( v14 < v15 )
      {
        v22 = qvector_reserve(a2, v13, v12 + 1, 24);
        *(_QWORD *)a2 = v22;
        v13 = (const char *)v22;
        v11 = v25;
        v12 = *(_QWORD *)(a2 + 8);
      }
      v20 = _mm_loadu_si128(&v26);
      v21 = (char *)&v13[24 * v12];
      *(_QWORD *)v21 = v11;
      *(__m128i *)(v21 + 8) = v20;
      ++*(_QWORD *)(a2 + 8);
    }
    else
    {
      v16 = _mm_loadl_epi64(&v26);
      v17 = _mm_loadl_epi64((const __m128i *)&v26.m128i_u64[1]);
      v25 = 0;
      v26 = 0;
      if ( v14 < v15 )
      {
        v24.m128i_i64[1] = v17.m128i_i64[0];
        v24.m128i_i64[0] = v16.m128i_i64[0];
        v23 = qvector_reserve(a2, v13, v12 + 1, 24);
        *(_QWORD *)a2 = v23;
        v13 = (const char *)v23;
        v12 = *(_QWORD *)(a2 + 8);
        v17 = _mm_loadl_epi64((const __m128i *)&v24.m128i_u64[1]);
        v16 = _mm_loadl_epi64(&v24);
      }
      v18 = (char *)&v13[24 * v12];
      *(_QWORD *)v18 = v11;
      v19 = v25;
      *(__m128i *)(v18 + 8) = _mm_unpacklo_epi64(v16, v17);
      ++*(_QWORD *)(a2 + 8);
      if ( v19 )
      {
        v26.m128i_i64[0] = 0;
        qfree(v19, v13);
      }
    }
  }
  return v8;
}
