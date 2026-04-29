unsigned __int64 __fastcall sub_107520(__m128i *a1, __int64 a2, int a3)
{
  __int64 v4; // r12
  _QWORD *v5; // rax
  __m128i v6; // xmm0
  __m128i *v7; // r12
  __int64 v8; // rdx
  __m128i v9; // xmm1
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int32 v16; // r15d
  __int64 v17; // rbp
  __int32 v18; // r14d
  int v20; // eax
  __int64 v21; // rbx
  unsigned __int32 v22; // r9d
  __int64 v23; // rax
  void *v24; // rax
  const void *v25; // rsi
  unsigned __int32 v26; // [rsp+Ch] [rbp-CCh]
  __int64 v27[2]; // [rsp+10h] [rbp-C8h] BYREF
  void *v28; // [rsp+20h] [rbp-B8h] BYREF
  __int128 v29; // [rsp+28h] [rbp-B0h]
  _QWORD v30[4]; // [rsp+40h] [rbp-98h] BYREF
  int v31; // [rsp+60h] [rbp-78h]
  __m128i v32; // [rsp+70h] [rbp-68h] BYREF
  _QWORD *v33; // [rsp+80h] [rbp-58h]
  __m128i v34; // [rsp+88h] [rbp-50h]
  unsigned __int64 v35; // [rsp+98h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  sub_5FE00(v27, a2);
  v4 = *(_QWORD *)(a2 + 24);
  v28 = nullptr;
  v29 = 0;
  if ( v4 )
  {
    v24 = (void *)qalloc_or_throw(16 * v4);
    v25 = *(const void **)(a2 + 16);
    v28 = v24;
    *((_QWORD *)&v29 + 1) = v4;
    memcpy(v24, v25, 16 * v4);
    *(_QWORD *)&v29 = v4;
  }
  sub_313340(&v28, a1->m128i_i64[1] + 208);
  v5 = (_QWORD *)a1->m128i_i64[1];
  v6 = _mm_cvtsi32_si128(a1[7].m128i_u32[3]);
  v31 = a3;
  v30[0] = &off_4BDB68;
  v7 = a1 + 6;
  v8 = v5[188];
  v30[2] = a1 + 6;
  v9 = _mm_cvtsi32_si128(*(_DWORD *)(v8 + 80));
  v30[1] = v8;
  v10 = v5[16];
  v11 = v5[180];
  v33 = v30;
  v30[3] = _mm_unpacklo_epi32(v6, v9).m128i_u64[0];
  v32 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_4BDC58), (__m128i)(unsigned __int64)&off_4BD9E0);
  v34 = _mm_unpacklo_epi64((__m128i)v11, (__m128i)(v11 + v10));
  if ( !(unsigned int)sub_60C60(v27, (__int64)&v32, 0) )
    sub_3126D0(&v28, &v32.m128i_u64[1], v12, v13, v14, v15, v27);
  v16 = a1[7].m128i_i32[3];
  if ( !v16 )
  {
    v17 = a1->m128i_i64[1];
    v18 = a1[8].m128i_i32[0];
    if ( *(int *)(v17 + 464) > 0 )
    {
      do
      {
        v21 = sub_139080(v17, (unsigned int)v16);
        if ( (unsigned int)(*(_DWORD *)v21 - 3) <= 1 )
        {
          v32 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
          v22 = *(_DWORD *)(v21 + 88);
          if ( *(_DWORD *)v21 == 4 )
          {
            v23 = *(unsigned __int16 *)(v21 + 10);
            v32.m128i_i8[8] = 1;
            v32.m128i_i64[0] = v23;
            v32.m128i_i32[3] = v22 >> 1;
            v26 = v22 >> 1;
            sub_107440(v7, (_QWORD *)v17, (__int64)&v32, v18);
            v20 = *(_DWORD *)(v21 + 8);
            v22 = v26;
            if ( *(_DWORD *)v21 == 4 )
              v20 = (unsigned __int16)v20;
          }
          else
          {
            v20 = *(_DWORD *)(v21 + 8);
          }
          v32.m128i_i8[8] = 1;
          v32.m128i_i64[0] = v20;
          v32.m128i_i32[3] = v22;
          sub_107440(v7, (_QWORD *)v17, (__int64)&v32, v18);
        }
        ++v16;
      }
      while ( v16 < *(_DWORD *)(v17 + 464) );
    }
  }
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    qfree(v28);
  }
  qfree(v27[0]);
  return v35 - __readfsqword(0x28u);
}
