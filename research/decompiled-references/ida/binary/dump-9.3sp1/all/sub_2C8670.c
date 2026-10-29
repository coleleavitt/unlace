unsigned __int64 __fastcall sub_2C8670(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbp
  __int64 v5; // rsi
  __int64 (__fastcall ***v6)(); // rdx
  unsigned __int64 v7; // rax
  __int64 *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rbx
  __m128i v11; // xmm0
  __m128i v12; // xmm0
  unsigned __int64 v14; // r13
  __int64 v15; // rbx
  _QWORD *v16; // rax
  __int64 v17; // rdi
  unsigned __int64 v18; // rcx
  __m128i v19; // xmm1
  __int64 v20; // rcx
  __m128i v21; // xmm0
  __int64 v22; // rbx
  unsigned __int64 v23; // rbp
  __m128i v24; // xmm0
  __int64 v25; // rax
  __int64 v26; // rax
  __m128i v27; // xmm0
  __int64 v28; // [rsp+0h] [rbp-118h]
  __m128i *v29; // [rsp+0h] [rbp-118h]
  __int64 v30; // [rsp+8h] [rbp-110h]
  __int64 (__fastcall **v31)(); // [rsp+20h] [rbp-F8h] BYREF
  __m128i v32; // [rsp+28h] [rbp-F0h] BYREF
  __int64 v33; // [rsp+38h] [rbp-E0h]
  __int64 v34; // [rsp+40h] [rbp-D8h] BYREF
  __int128 v35; // [rsp+48h] [rbp-D0h]
  __m128i si128; // [rsp+58h] [rbp-C0h] BYREF
  __int64 v37; // [rsp+68h] [rbp-B0h]
  int v38; // [rsp+70h] [rbp-A8h]
  __int64 (__fastcall **v39)(); // [rsp+80h] [rbp-98h]
  __m128i v40; // [rsp+88h] [rbp-90h] BYREF
  __int64 v41; // [rsp+98h] [rbp-80h]
  __int64 v42; // [rsp+A0h] [rbp-78h] BYREF
  __int128 v43; // [rsp+A8h] [rbp-70h]
  __int64 v44; // [rsp+B8h] [rbp-60h]
  __m128i v45; // [rsp+C0h] [rbp-58h] BYREF
  int v46; // [rsp+D0h] [rbp-48h]
  unsigned __int64 v47; // [rsp+D8h] [rbp-40h]

  v47 = __readfsqword(0x28u);
  v2 = a1[1];
  if ( v2 != a2 )
  {
    v32.m128i_i64[0] = -1;
    v32.m128i_i64[1] = 0xFFFFFFFFLL;
    v33 = 0;
    v34 = 0;
    v37 = 0xFFFFFFFFLL;
    v38 = -2;
    v31 = off_4E12D0;
    v35 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_424800);
    if ( a2 < v2 )
    {
      v14 = a2;
      v15 = 88 * a2;
      do
      {
        v16 = (_QWORD *)(v15 + *a1);
        v17 = v16[4];
        *v16 = off_4E12A8;
        if ( v17 )
        {
          v16[5] = 0;
          qfree(v17);
        }
        ++v14;
        v15 += 88;
      }
      while ( v2 != v14 );
      a1[1] = a2;
    }
    else
    {
      v5 = *a1;
      v6 = &v31;
      v7 = a1[2];
      if ( (unsigned __int64)&v31 < *a1 || (v18 = v5 + 88 * v7, (unsigned __int64)&v31 >= v18) )
      {
        if ( v7 < a2 )
        {
          *a1 = qvector_reserve((__int64)a1, v5, a2, 88);
          v2 = a1[1];
        }
        if ( v2 < a2 )
        {
          v8 = &v34;
          v9 = 88 * v2;
          do
          {
            v10 = *a1 + v9;
            v11 = _mm_loadu_si128(&v32);
            *(_QWORD *)v10 = off_4E12A8;
            *(_QWORD *)(v10 + 24) = 0;
            *(_QWORD *)(v10 + 32) = 0;
            *(__m128i *)(v10 + 8) = v11;
            *(_OWORD *)(v10 + 40) = 0;
            v28 = v9;
            sub_2AE320((_QWORD *)(v10 + 32), (__int64)&v34, (__int64)v6, (__int64)v8);
            v12 = _mm_load_si128((const __m128i *)&si128.m128i_u64[1]);
            ++v2;
            *(_QWORD *)(v10 + 56) = 0;
            *(_DWORD *)(v10 + 80) = -2;
            *(_QWORD *)v10 = off_4E12D0;
            v9 = v28 + 88;
            *(__m128i *)(v10 + 64) = v12;
          }
          while ( v2 < a2 );
        }
        a1[1] = a2;
      }
      else
      {
        v19 = _mm_loadu_si128(&v32);
        v41 = 0;
        v39 = off_4E12A8;
        v42 = 0;
        v40 = v19;
        v43 = 0;
        sub_2AE320(&v42, (__int64)&v34, (__int64)&v31, v18);
        v21 = _mm_load_si128((const __m128i *)&si128.m128i_u64[1]);
        v44 = 0;
        v39 = off_4E12D0;
        v22 = v41;
        v30 = v42;
        v46 = -2;
        v45 = v21;
        if ( a1[2] < a2 )
          *a1 = qvector_reserve((__int64)a1, *a1, a2, 88);
        v23 = a1[1];
        if ( v23 < a2 )
        {
          do
          {
            v24 = _mm_loadu_si128(&v40);
            v25 = *a1;
            v41 = v22;
            v42 = v30;
            v26 = v25 + 88 * v23;
            *(_QWORD *)v26 = off_4E12A8;
            *(_QWORD *)(v26 + 24) = v22;
            *(_QWORD *)(v26 + 32) = 0;
            *(__m128i *)(v26 + 8) = v24;
            *(_OWORD *)(v26 + 40) = 0;
            v29 = (__m128i *)v26;
            sub_2AE320((_QWORD *)(v26 + 32), (__int64)&v42, v30, v20);
            ++v23;
            v27 = _mm_load_si128(&v45);
            v29[3].m128i_i64[1] = 0;
            v29[5].m128i_i32[0] = -2;
            v29->m128i_i64[0] = (__int64)off_4E12D0;
            v29[4] = v27;
          }
          while ( a2 != v23 );
        }
        a1[1] = a2;
        if ( v30 )
          qfree(v30);
      }
    }
  }
  return v47 - __readfsqword(0x28u);
}
