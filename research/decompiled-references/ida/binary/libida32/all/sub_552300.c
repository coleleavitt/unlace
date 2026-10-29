__int64 __fastcall sub_552300(__int64 a1, char **a2, __int64 *a3, _QWORD *a4)
{
  char v4; // al
  char *v5; // rbx
  __int64 v6; // r15
  __int64 v7; // r14
  const char *v8; // rsi
  __int64 v9; // r13
  __m128i v11; // xmm1
  __int64 v12; // rdx
  __int64 v13; // rax
  __m128i v14; // xmm0
  __m128i v15; // xmm0
  char *v16; // r14
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  void *v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rdx
  __m128i v25; // [rsp+8h] [rbp-88h] BYREF
  _QWORD *v26; // [rsp+18h] [rbp-78h]
  __int64 *v27; // [rsp+20h] [rbp-70h]
  __int64 v28; // [rsp+28h] [rbp-68h]
  __int64 v29; // [rsp+38h] [rbp-58h] BYREF
  char *s1; // [rsp+40h] [rbp-50h] BYREF
  __int128 v31; // [rsp+48h] [rbp-48h] BYREF
  unsigned __int64 v32; // [rsp+58h] [rbp-38h]

  v27 = a3;
  v26 = a4;
  v32 = __readfsqword(0x28u);
  s1 = nullptr;
  v31 = 0;
  v4 = sub_54DE00((__int64)&s1, a2);
  v5 = s1;
  if ( !v4 || (v25.m128i_i64[1] = v31, (unsigned __int64)v31 <= 1) || *(_DWORD *)(a1 + 32) )
  {
    v9 = -1;
  }
  else
  {
    v6 = *(_QWORD *)a1;
    v25.m128i_i64[0] = *(_QWORD *)(a1 + 8);
    v28 = v6 + 24 * v25.m128i_i64[0];
    if ( v6 == v28 )
      goto LABEL_14;
    v7 = v6;
    while ( 1 )
    {
      v8 = haystack;
      if ( *(_QWORD *)(v7 + 8) )
        v8 = *(const char **)v7;
      if ( !strcmp(v5, v8) )
        break;
      v7 += 24;
      if ( v28 == v7 )
        goto LABEL_14;
    }
    v9 = -1;
    if ( v28 == v7 )
    {
LABEL_14:
      v11 = _mm_loadl_epi64((const __m128i *)((char *)&v31 + 8));
      v12 = v25.m128i_i64[0] + 1;
      if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v25.m128i_i64[0] + 1) )
      {
        v25.m128i_i64[0] = v11.m128i_i64[0];
        v23 = qvector_reserve(a1, v6, v12, 24);
        v24 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)a1 = v23;
        v11 = _mm_loadl_epi64(&v25);
        v28 = v23 + 24 * v24;
      }
      v13 = v28;
      *(_OWORD *)(v28 + 8) = 0;
      v14 = _mm_loadl_epi64((const __m128i *)&v25.m128i_u64[1]);
      *(_QWORD *)v13 = 0;
      v15 = _mm_unpacklo_epi64(v14, v11);
      ++*(_QWORD *)(a1 + 8);
      v16 = *(char **)v13;
      *(__m128i *)(v13 + 8) = v15;
      *(_QWORD *)v13 = v5;
      if ( (unsigned int)get_named_type(*(_QWORD *)(a1 + 24), (int)v5, 1, (int)&v29, 0, 0, 0, 0, 0) )
        v9 = sub_551530(a1, &v29, v27, v26, v17, *(double *)v15.m128i_i64, *(double *)v11.m128i_i64);
      else
        v9 = -1;
      v18 = *(_QWORD *)(a1 + 8);
      if ( v18 )
      {
        v19 = v18 - 1;
        v20 = *(_QWORD *)a1;
        *(_QWORD *)(a1 + 8) = v19;
        v21 = v20 + 24 * v19;
        v22 = *(void **)v21;
        if ( *(_QWORD *)v21 )
        {
          *(_QWORD *)(v21 + 8) = 0;
          qfree(v22);
        }
      }
      v5 = v16;
    }
  }
  if ( v5 )
    qfree(v5);
  return v9;
}

