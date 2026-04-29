unsigned __int64 __fastcall sub_10B720(__m128i *a1, __int64 a2, int a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r12
  _QWORD *v7; // rax
  __m128i v8; // xmm0
  __m128i *v9; // r12
  __int64 v10; // rdx
  __m128i v11; // xmm1
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int32 v18; // r15d
  __int64 v19; // rbp
  __int32 v20; // r14d
  int v22; // eax
  __int64 v23; // rbx
  unsigned __int32 v24; // r9d
  __int64 v25; // rax
  void *v26; // rax
  const void *v27; // rsi
  unsigned __int32 v28; // [rsp+Ch] [rbp-CCh]
  __int64 v29[2]; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v30; // [rsp+20h] [rbp-B8h] BYREF
  __int128 v31; // [rsp+28h] [rbp-B0h]
  _QWORD v32[4]; // [rsp+40h] [rbp-98h] BYREF
  int v33; // [rsp+60h] [rbp-78h]
  __m128i v34; // [rsp+70h] [rbp-68h] BYREF
  _QWORD *v35; // [rsp+80h] [rbp-58h]
  __m128i v36; // [rsp+88h] [rbp-50h]
  unsigned __int64 v37; // [rsp+98h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  sub_64000(v29, a2);
  v6 = *(_QWORD *)(a2 + 24);
  v30 = 0;
  v31 = 0;
  if ( v6 )
  {
    v26 = (void *)qalloc_or_throw(16 * v6, a2, v4, v5);
    v27 = *(const void **)(a2 + 16);
    v30 = (__int64)v26;
    *((_QWORD *)&v31 + 1) = v6;
    memcpy(v26, v27, 16 * v6);
    *(_QWORD *)&v31 = v6;
  }
  sub_3180C0(&v30, a1->m128i_i64[1] + 208);
  v7 = (_QWORD *)a1->m128i_i64[1];
  v8 = _mm_cvtsi32_si128(a1[7].m128i_u32[3]);
  v33 = a3;
  v32[0] = &off_4DD3E8;
  v9 = a1 + 6;
  v10 = v7[188];
  v32[2] = a1 + 6;
  v11 = _mm_cvtsi32_si128(*(_DWORD *)(v10 + 80));
  v32[1] = v10;
  v12 = v7[16];
  v13 = v7[180];
  v35 = v32;
  v32[3] = _mm_unpacklo_epi32(v8, v11).m128i_u64[0];
  v34 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_4DD4D8), (__m128i)(unsigned __int64)&off_4DD260);
  v36 = _mm_unpacklo_epi64((__m128i)v13, (__m128i)(v13 + v12));
  if ( !(unsigned int)sub_64E60(v29, (__int64)&v34, 0) )
    sub_317450(&v30, &v34.m128i_u64[1], v14, v15, v16, v17, v29);
  v18 = a1[7].m128i_i32[3];
  if ( !v18 )
  {
    v19 = a1->m128i_i64[1];
    v20 = a1[8].m128i_i32[0];
    if ( *(int *)(v19 + 464) > 0 )
    {
      do
      {
        v23 = sub_13D280(v19, (unsigned int)v18);
        if ( (unsigned int)(*(_DWORD *)v23 - 3) <= 1 )
        {
          v34 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
          v24 = *(_DWORD *)(v23 + 88);
          if ( *(_DWORD *)v23 == 4 )
          {
            v25 = *(unsigned __int16 *)(v23 + 10);
            v34.m128i_i8[8] = 1;
            v34.m128i_i64[0] = v25;
            v34.m128i_i32[3] = v24 >> 1;
            v28 = v24 >> 1;
            sub_10B640(v9, (_QWORD *)v19, (__int64)&v34, v20);
            v22 = *(_DWORD *)(v23 + 8);
            v24 = v28;
            if ( *(_DWORD *)v23 == 4 )
              v22 = (unsigned __int16)v22;
          }
          else
          {
            v22 = *(_DWORD *)(v23 + 8);
          }
          v34.m128i_i8[8] = 1;
          v34.m128i_i64[0] = v22;
          v34.m128i_i32[3] = v24;
          sub_10B640(v9, (_QWORD *)v19, (__int64)&v34, v20);
        }
        ++v18;
      }
      while ( v18 < *(_DWORD *)(v19 + 464) );
    }
  }
  if ( v30 )
  {
    *(_QWORD *)&v31 = 0;
    qfree(v30);
  }
  qfree(v29[0]);
  return v37 - __readfsqword(0x28u);
}
