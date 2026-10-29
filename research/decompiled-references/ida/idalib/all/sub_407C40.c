unsigned __int64 __fastcall sub_407C40(__m128i *a1, __m128i *a2, __int64 a3)
{
  __int64 m128i_i64; // r12
  void (__fastcall *v6)(__int128 *, __int64, __int64); // rax
  __m128i v7; // xmm0
  void (__fastcall *v8)(__int128 *, __int128 *, __int64); // rax
  __int64 v9; // r15
  __int64 v10; // rax
  __m128i v11; // xmm7
  __m128i v12; // xmm6
  __int64 v13; // rax
  __m128i v14; // xmm6
  __int64 v15; // rax
  __m128i v16; // xmm7
  __int64 v17; // rax
  unsigned __int64 v18; // rbx
  __int64 v19; // rax
  void *v20; // rdi
  __int64 v21; // r14
  __m128i v22; // xmm0
  __int64 v23; // rax
  void *v24; // rdi
  __int64 v25; // r14
  __m128i v26; // xmm0
  void *v27; // rdi
  __int64 v28; // r14
  __m128i v29; // xmm0
  __int64 v30; // rax
  void *v31; // rdi
  __m128i v32; // xmm6
  void *v33; // rdi
  __m128i v34; // xmm7
  void *v35; // rdi
  __m128i v36; // xmm5
  __int64 v37; // rax
  __m128i v39; // [rsp+0h] [rbp-108h] BYREF
  __m128i *v40; // [rsp+18h] [rbp-F0h]
  __m128i v41; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v42; // [rsp+30h] [rbp-D8h]
  __int64 v43; // [rsp+38h] [rbp-D0h]
  __int64 v44; // [rsp+40h] [rbp-C8h]
  __int64 v45; // [rsp+48h] [rbp-C0h]
  __m128i v46; // [rsp+50h] [rbp-B8h] BYREF
  __m128i v47; // [rsp+60h] [rbp-A8h] BYREF
  __m128i v48; // [rsp+70h] [rbp-98h] BYREF
  __int128 v49; // [rsp+80h] [rbp-88h] BYREF
  __m128i v50; // [rsp+90h] [rbp-78h] BYREF
  __int128 v51; // [rsp+A0h] [rbp-68h] BYREF
  __m128i v52; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v53; // [rsp+C8h] [rbp-40h]

  v40 = a2;
  v53 = __readfsqword(0x28u);
  if ( a1 != a2 )
  {
    m128i_i64 = (__int64)a1[6].m128i_i64;
    if ( a2 != &a1[6] )
    {
      do
      {
        while ( 1 )
        {
          v9 = m128i_i64;
          if ( !*(_QWORD *)(a3 + 16) )
            std::__throw_bad_function_call();
          if ( (*(int (__fastcall **)(__int64, __int64, __m128i *))(a3 + 24))(a3, m128i_i64, a1) >= 0 )
            break;
          v10 = *(_QWORD *)(m128i_i64 + 16);
          v11 = _mm_loadu_si128((const __m128i *)(m128i_i64 + 24));
          v12 = _mm_loadu_si128((const __m128i *)m128i_i64);
          *(_OWORD *)(m128i_i64 + 24) = 0;
          m128i_i64 += 96;
          v43 = v10;
          v13 = *(_QWORD *)(m128i_i64 - 56);
          v41 = v12;
          v14 = _mm_loadu_si128((const __m128i *)(m128i_i64 - 48));
          v44 = v13;
          v15 = *(_QWORD *)(m128i_i64 - 32);
          v47 = v11;
          v16 = _mm_loadu_si128((const __m128i *)(m128i_i64 - 24));
          v45 = v15;
          v17 = *(_QWORD *)(m128i_i64 - 8);
          *(_QWORD *)(m128i_i64 - 80) = 0;
          v42 = v17;
          *(_OWORD *)(m128i_i64 - 48) = 0;
          *(_OWORD *)(m128i_i64 - 24) = 0;
          v48 = v14;
          *(_QWORD *)(m128i_i64 - 56) = 0;
          v18 = 0xAAAAAAAAAAAAAAABLL * ((v9 - (__int64)a1) >> 5);
          *(_QWORD *)(m128i_i64 - 32) = 0;
          v46 = v16;
          if ( v9 - (__int64)a1 > 0 )
          {
            do
            {
              v19 = *(_QWORD *)(v9 - 96);
              v20 = *(void **)(v9 + 16);
              v9 -= 96;
              v21 = *(_QWORD *)(v9 + 16);
              v22 = _mm_loadu_si128((const __m128i *)(v9 + 24));
              *(_QWORD *)(v9 + 16) = 0;
              *(_QWORD *)(v9 + 96) = v19;
              v23 = *(_QWORD *)(v9 + 8);
              *(_OWORD *)(v9 + 24) = 0;
              *(_QWORD *)(v9 + 104) = v23;
              if ( v20 )
              {
                *(_QWORD *)(v9 + 120) = 0;
                v39 = v22;
                qfree(v20);
                v22 = _mm_load_si128(&v39);
              }
              v24 = *(void **)(v9 + 136);
              *(_QWORD *)(v9 + 112) = v21;
              *(__m128i *)(v9 + 120) = v22;
              v25 = *(_QWORD *)(v9 + 40);
              v26 = _mm_loadu_si128((const __m128i *)(v9 + 48));
              *(_QWORD *)(v9 + 40) = 0;
              *(_OWORD *)(v9 + 48) = 0;
              if ( v24 )
              {
                *(_QWORD *)(v9 + 144) = 0;
                v39 = v26;
                qfree(v24);
                v26 = _mm_load_si128(&v39);
              }
              v27 = *(void **)(v9 + 160);
              *(_QWORD *)(v9 + 136) = v25;
              *(__m128i *)(v9 + 144) = v26;
              v28 = *(_QWORD *)(v9 + 64);
              v29 = _mm_loadu_si128((const __m128i *)(v9 + 72));
              *(_QWORD *)(v9 + 64) = 0;
              *(_OWORD *)(v9 + 72) = 0;
              if ( v27 )
              {
                *(_QWORD *)(v9 + 168) = 0;
                v39 = v29;
                qfree(v27);
                v29 = _mm_load_si128(&v39);
              }
              v30 = *(_QWORD *)(v9 + 88);
              *(_QWORD *)(v9 + 160) = v28;
              *(__m128i *)(v9 + 168) = v29;
              *(_QWORD *)(v9 + 184) = v30;
              --v18;
            }
            while ( v18 );
          }
          v31 = (void *)a1[1].m128i_i64[0];
          *a1 = _mm_load_si128(&v41);
          if ( v31 )
          {
            a1[1].m128i_i64[1] = 0;
            qfree(v31);
          }
          v32 = _mm_load_si128(&v47);
          v33 = (void *)a1[2].m128i_i64[1];
          a1[1].m128i_i64[0] = v43;
          *(__m128i *)((char *)a1 + 24) = v32;
          if ( v33 )
          {
            a1[3].m128i_i64[0] = 0;
            qfree(v33);
          }
          v34 = _mm_load_si128(&v48);
          v35 = (void *)a1[4].m128i_i64[0];
          a1[2].m128i_i64[1] = v44;
          a1[3] = v34;
          if ( v35 )
          {
            a1[4].m128i_i64[1] = 0;
            qfree(v35);
          }
          v36 = _mm_load_si128(&v46);
          a1[4].m128i_i64[0] = v45;
          v37 = v42;
          *(__m128i *)((char *)a1 + 72) = v36;
          a1[5].m128i_i64[1] = v37;
          if ( v40 == (__m128i *)m128i_i64 )
            return v53 - __readfsqword(0x28u);
        }
        v6 = *(void (__fastcall **)(__int128 *, __int64, __int64))(a3 + 16);
        v50 = 0u;
        v49 = 0;
        if ( v6 )
        {
          v6(&v49, a3, 2);
          v7 = _mm_loadu_si128((const __m128i *)(a3 + 16));
          v8 = *(void (__fastcall **)(__int128 *, __int128 *, __int64))(a3 + 16);
          v52 = 0u;
          v51 = 0;
          v50 = v7;
          if ( v8 )
          {
            v8(&v51, &v49, 2);
            v52 = _mm_load_si128(&v50);
          }
        }
        else
        {
          v51 = 0;
          v52 = 0u;
        }
        sub_4078D0(m128i_i64, (__int64)&v51);
        if ( v52.m128i_i64[0] )
          ((void (__fastcall *)(__int128 *, __int128 *, __int64))v52.m128i_i64[0])(&v51, &v51, 3);
        if ( v50.m128i_i64[0] )
          ((void (__fastcall *)(__int128 *, __int128 *, __int64))v50.m128i_i64[0])(&v49, &v49, 3);
        m128i_i64 += 96;
      }
      while ( v40 != (__m128i *)m128i_i64 );
    }
  }
  return v53 - __readfsqword(0x28u);
}
