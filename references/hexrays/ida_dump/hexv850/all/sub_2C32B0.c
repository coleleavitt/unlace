unsigned __int64 __fastcall sub_2C32B0(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbp
  __int64 v5; // rsi
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbx
  __m128i v9; // xmm0
  __m128i v10; // xmm0
  unsigned __int64 v12; // r13
  __int64 v13; // rbx
  _QWORD *v14; // rax
  __int64 v15; // rdi
  __m128i v16; // xmm1
  __m128i v17; // xmm0
  __int64 v18; // rbx
  unsigned __int64 v19; // rbp
  __m128i v20; // xmm0
  __int64 v21; // rax
  __int64 v22; // rax
  __m128i v23; // xmm0
  __int64 v24; // [rsp+0h] [rbp-118h]
  __m128i *v25; // [rsp+0h] [rbp-118h]
  __int64 v26; // [rsp+8h] [rbp-110h]
  __int64 (__fastcall **v27)(); // [rsp+20h] [rbp-F8h] BYREF
  __m128i v28; // [rsp+28h] [rbp-F0h] BYREF
  __int64 v29; // [rsp+38h] [rbp-E0h]
  __int64 v30; // [rsp+40h] [rbp-D8h] BYREF
  __int128 v31; // [rsp+48h] [rbp-D0h]
  __m128i si128; // [rsp+58h] [rbp-C0h] BYREF
  __int64 v33; // [rsp+68h] [rbp-B0h]
  int v34; // [rsp+70h] [rbp-A8h]
  __int64 (__fastcall **v35)(); // [rsp+80h] [rbp-98h]
  __m128i v36; // [rsp+88h] [rbp-90h] BYREF
  __int64 v37; // [rsp+98h] [rbp-80h]
  __int64 v38; // [rsp+A0h] [rbp-78h] BYREF
  __int128 v39; // [rsp+A8h] [rbp-70h]
  __int64 v40; // [rsp+B8h] [rbp-60h]
  __m128i v41; // [rsp+C0h] [rbp-58h] BYREF
  int v42; // [rsp+D0h] [rbp-48h]
  unsigned __int64 v43; // [rsp+D8h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  v2 = a1[1];
  if ( v2 != a2 )
  {
    v28.m128i_i64[0] = -1;
    v28.m128i_i64[1] = 0xFFFFFFFFLL;
    v29 = 0;
    v30 = 0;
    v33 = 0xFFFFFFFFLL;
    v34 = -2;
    v27 = off_4B4C70;
    v31 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_400180);
    if ( a2 < v2 )
    {
      v12 = a2;
      v13 = 88 * a2;
      do
      {
        v14 = (_QWORD *)(v13 + *a1);
        v15 = v14[4];
        *v14 = off_4B4C48;
        if ( v15 )
        {
          v14[5] = 0;
          qfree(v15);
        }
        ++v12;
        v13 += 88;
      }
      while ( v2 != v12 );
      a1[1] = a2;
    }
    else
    {
      v5 = *a1;
      v6 = a1[2];
      if ( (unsigned __int64)&v27 < *a1 || (unsigned __int64)&v27 >= v5 + 88 * v6 )
      {
        if ( v6 < a2 )
        {
          *a1 = qvector_reserve(a1, v5, a2, 88);
          v2 = a1[1];
        }
        if ( v2 < a2 )
        {
          v7 = 88 * v2;
          do
          {
            v8 = *a1 + v7;
            v9 = _mm_loadu_si128(&v28);
            *(_QWORD *)v8 = off_4B4C48;
            *(_QWORD *)(v8 + 24) = 0;
            *(_QWORD *)(v8 + 32) = 0;
            *(__m128i *)(v8 + 8) = v9;
            *(_OWORD *)(v8 + 40) = 0;
            v24 = v7;
            sub_2A8F60((_QWORD *)(v8 + 32), (__int64)&v30);
            v10 = _mm_load_si128((const __m128i *)&si128.m128i_u64[1]);
            ++v2;
            *(_QWORD *)(v8 + 56) = 0;
            *(_DWORD *)(v8 + 80) = -2;
            *(_QWORD *)v8 = off_4B4C70;
            v7 = v24 + 88;
            *(__m128i *)(v8 + 64) = v10;
          }
          while ( v2 < a2 );
        }
        a1[1] = a2;
      }
      else
      {
        v16 = _mm_loadu_si128(&v28);
        v37 = 0;
        v35 = off_4B4C48;
        v38 = 0;
        v36 = v16;
        v39 = 0;
        sub_2A8F60(&v38, (__int64)&v30);
        v17 = _mm_load_si128((const __m128i *)&si128.m128i_u64[1]);
        v40 = 0;
        v35 = off_4B4C70;
        v18 = v37;
        v26 = v38;
        v42 = -2;
        v41 = v17;
        if ( a1[2] < a2 )
          *a1 = qvector_reserve(a1, *a1, a2, 88);
        v19 = a1[1];
        if ( v19 < a2 )
        {
          do
          {
            v20 = _mm_loadu_si128(&v36);
            v21 = *a1;
            v37 = v18;
            v38 = v26;
            v22 = v21 + 88 * v19;
            *(_QWORD *)v22 = off_4B4C48;
            *(_QWORD *)(v22 + 24) = v18;
            *(_QWORD *)(v22 + 32) = 0;
            *(__m128i *)(v22 + 8) = v20;
            *(_OWORD *)(v22 + 40) = 0;
            v25 = (__m128i *)v22;
            sub_2A8F60((_QWORD *)(v22 + 32), (__int64)&v38);
            ++v19;
            v23 = _mm_load_si128(&v41);
            v25[3].m128i_i64[1] = 0;
            v25[5].m128i_i32[0] = -2;
            v25->m128i_i64[0] = (__int64)off_4B4C70;
            v25[4] = v23;
          }
          while ( a2 != v19 );
        }
        a1[1] = a2;
        if ( v26 )
          qfree(v26);
      }
    }
  }
  return v43 - __readfsqword(0x28u);
}
