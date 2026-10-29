__int64 __fastcall sub_C6450(_QWORD *a1)
{
  __int64 v1; // r14
  __int64 v2; // rbx
  __int64 i; // rbp
  int v4; // eax
  __int64 v5; // rdx
  __m128i *v6; // r8
  int v7; // esi
  size_t v8; // rdx
  void *v9; // r9
  __m128i v10; // xmm0
  void *v12; // rdx
  void *v13; // rax
  void *v14; // rax
  void *v15; // rax
  void *v16; // rsi
  size_t na; // [rsp+10h] [rbp-88h]
  size_t nb; // [rsp+10h] [rbp-88h]
  size_t n; // [rsp+10h] [rbp-88h]
  size_t nc; // [rsp+10h] [rbp-88h]
  void *v21; // [rsp+18h] [rbp-80h]
  __m128i *v22; // [rsp+18h] [rbp-80h]
  __m128i *v23; // [rsp+18h] [rbp-80h]
  __m128i v24; // [rsp+20h] [rbp-78h] BYREF
  int v25; // [rsp+30h] [rbp-68h] BYREF
  void *src; // [rsp+38h] [rbp-60h]
  __int128 v27; // [rsp+40h] [rbp-58h]
  unsigned __int64 v28; // [rsp+58h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_10E220() )
    return v28 - __readfsqword(0x28u);
  v1 = xmmword_251378;
  if ( (_QWORD)xmmword_251378 )
  {
    v2 = 0;
    for ( i = 0; v1 != i; ++i )
    {
      v25 = -2;
      v27 = 0;
      src = (void *)-1LL;
      sub_C6270(v2 + qword_251370, (__int64)&v25, a1);
      v4 = v25;
      if ( qword_251040 )
      {
        if ( (int)i >= 0 && (unsigned int)i < (unsigned __int64)xmmword_251378 )
        {
          v5 = qword_251370 + 56LL * (unsigned int)i;
          if ( v5 )
          {
            v6 = *(__m128i **)(v5 + 48);
            if ( v6 )
            {
              v6[8].m128i_i8[12] = *(_BYTE *)(v5 + 35);
              if ( &v25 != (int *)&v6[6] )
              {
                v7 = v6[6].m128i_i32[0];
                if ( v4 < -1 )
                {
                  if ( v7 < -1 || !v6[6].m128i_i64[1] )
                  {
                    v12 = src;
                    v6[6].m128i_i32[0] = v4;
                    v6[6].m128i_i64[1] = (__int64)v12;
                    goto LABEL_21;
                  }
                  v6[7].m128i_i64[0] = 0;
                  nb = (size_t)v6;
                  qfree();
                  v6 = (__m128i *)nb;
                  v4 = v25;
                  *(_QWORD *)(nb + 104) = src;
                }
                else
                {
                  v8 = v27;
                  if ( v7 < -1 )
                  {
                    v6[6].m128i_i64[1] = 0;
                    v6[7] = 0;
                    if ( !v8 )
                    {
                      v6[6].m128i_i32[0] = v4;
LABEL_19:
                      if ( src )
                      {
                        *(_QWORD *)&v27 = 0;
                        qfree();
                      }
                      goto LABEL_21;
                    }
                    v23 = v6;
                    nc = v8;
                    v15 = (void *)qalloc_or_throw();
                    v16 = src;
                    v23[7].m128i_i64[1] = nc;
                    v23[6].m128i_i64[1] = (__int64)v15;
                    memcpy(v15, v16, nc);
                    v6 = v23;
                    v4 = v25;
                    v23[7].m128i_i64[0] = nc;
                  }
                  else
                  {
                    v9 = nullptr;
                    if ( (_QWORD)v27 )
                    {
                      v22 = v6;
                      n = v27;
                      v13 = (void *)qalloc_or_throw();
                      v14 = memcpy(v13, src, n);
                      v6 = v22;
                      v8 = n;
                      v9 = v14;
                    }
                    v10 = _mm_unpacklo_epi64((__m128i)v8, (__m128i)v8);
                    if ( v6[6].m128i_i64[1] )
                    {
                      v6[7].m128i_i64[0] = 0;
                      v21 = v9;
                      na = (size_t)v6;
                      v24 = v10;
                      qfree();
                      v10 = _mm_load_si128(&v24);
                      v9 = v21;
                      v6 = (__m128i *)na;
                    }
                    v6[6].m128i_i64[1] = (__int64)v9;
                    v4 = v25;
                    v6[7] = v10;
                  }
                }
                v6[6].m128i_i32[0] = v4;
              }
            }
          }
        }
      }
      if ( v4 >= -1 )
        goto LABEL_19;
LABEL_21:
      v2 += 56;
    }
  }
  if ( !qword_251040 )
    return v28 - __readfsqword(0x28u);
  TGroup::freeBuffer(qword_251040);
  return TView::drawView(qword_251040);
}

