unsigned __int64 __fastcall sub_30DC60(QT::QAbstractScrollArea *this, __int64 a2, __m128i a3, double a4)
{
  unsigned int v5; // r13d
  void **v7; // rsi
  __m128d v8; // xmm2
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbp
  __int64 *v11; // r13
  bool (__fastcall *v12)(__int64, __int64, unsigned int, unsigned __int8 (__fastcall *)(_QWORD)); // r15
  const char *v13; // rax
  const char *v14; // rsi
  bool v15; // al
  void *v16; // rdi
  const char *v17; // rdi
  signed int v18; // r14d
  const char *v19; // rdi
  int v20; // eax
  __int64 v21; // r14
  void *v22; // r8
  void *v23; // rdi
  size_t n; // [rsp+0h] [rbp-E8h]
  void *na; // [rsp+0h] [rbp-E8h]
  unsigned int v26; // [rsp+8h] [rbp-E0h]
  signed int v27; // [rsp+Ch] [rbp-DCh]
  unsigned __int8 (__fastcall *v28)(_QWORD); // [rsp+10h] [rbp-D8h]
  __int64 v29; // [rsp+18h] [rbp-D0h]
  const char *src; // [rsp+28h] [rbp-C0h]
  __int64 v31; // [rsp+38h] [rbp-B0h] BYREF
  void *v32; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v33; // [rsp+48h] [rbp-A0h]
  void *dest; // [rsp+60h] [rbp-88h] BYREF
  __int128 v35; // [rsp+68h] [rbp-80h]
  unsigned int v36; // [rsp+78h] [rbp-70h]
  void *v37; // [rsp+80h] [rbp-68h] BYREF
  __int128 i; // [rsp+88h] [rbp-60h]
  signed int v39; // [rsp+98h] [rbp-50h]
  unsigned __int64 v40; // [rsp+A8h] [rbp-40h]

  v40 = __readfsqword(0x28u);
  v5 = sub_47B6A0(QT::QCoreApplication::self, a2);
  QT::QEventPoint::position(*(QT::QEventPoint **)(a2 + 48));
  QT::QEventPoint::position(*(QT::QEventPoint **)(a2 + 48));
  if ( (unsigned int)sub_30DB80(3u, v5, *(double *)a3.m128i_i64, a4) )
    return v40 - __readfsqword(0x28u);
  QT::QEventPoint::position(*(QT::QEventPoint **)(a2 + 48));
  v7 = &v37;
  v8 = (__m128d)_mm_unpacklo_epi64(a3, (__m128i)*(unsigned __int64 *)&a4);
  v37 = (void *)_mm_cvttpd_epi32(
                  _mm_add_pd(
                    _mm_or_pd(
                      _mm_unpacklo_pd((__m128d)0x3FE0000000000000uLL, (__m128d)0x3FE0000000000000uLL),
                      _mm_and_pd(_mm_unpacklo_pd((__m128d)0x8000000000000000LL, (__m128d)0x8000000000000000LL), v8)),
                    v8)).m128i_u64[0];
  v9 = sub_5128F0(this);
  v10 = HIDWORD(v9);
  if ( HIDWORD(v9) >= *((_QWORD *)this + 8) )
    return v40 - __readfsqword(0x28u);
  v29 = *((_QWORD *)this + 7) + 48LL * HIDWORD(v9);
  if ( !v29 )
    return v40 - __readfsqword(0x28u);
  v27 = v9;
  v31 = -1;
  dest = nullptr;
  v36 = 0;
  v35 = 0;
  if ( !(unsigned __int8)netnode_inited(0.0) )
    goto LABEL_18;
  v11 = (__int64 *)&off_865760;
  do
  {
    if ( v31 != -1 )
      break;
    v37 = nullptr;
    v12 = sub_30D790;
    v39 = 0;
    v26 = 0;
    for ( i = 0; ; i = 0 )
    {
      v28 = (unsigned __int8 (__fastcall *)(_QWORD))*v11;
      v13 = (const char *)sub_511DC0(v29, 0);
      v32 = nullptr;
      v33 = 0;
      if ( v13 )
      {
        src = v13;
        n = strlen(v13);
        v32 = (void *)qvector_reserve(&v32, 0, n + 1, 1);
        *(_QWORD *)&v33 = n + 1;
        memmove(v32, src, n);
        *((_BYTE *)v32 + n) = 0;
      }
      v14 = (const char *)&v32;
      v15 = v12((__int64)&v37, (__int64)&v32, v27, v28);
      v16 = v32;
      if ( v15 )
      {
        v18 = v39;
        v16 = v32;
        if ( v27 >= v39 )
        {
          v19 = &s1;
          if ( (_QWORD)i )
            v19 = (const char *)v37;
          v20 = qustrlen(v19);
          v16 = v32;
          if ( v27 < v20 + v18 )
          {
            if ( v32 )
            {
              *(_QWORD *)&v33 = 0;
              qfree(v32, (const char *)&v32);
            }
            v21 = i;
            if ( (_QWORD)i )
            {
              if ( (_QWORD)i == 1 )
              {
                *(_QWORD *)&v35 = 0;
                v36 = v39;
                goto LABEL_36;
              }
              v22 = v37;
              v23 = dest;
              if ( *((_QWORD *)&v35 + 1) < (unsigned __int64)i )
              {
                na = v37;
                dest = (void *)qvector_reserve(&dest, dest, i, 1);
                v22 = na;
                v23 = dest;
              }
              *(_QWORD *)&v35 = v21;
              memmove(v23, v22, v21 - 1);
              *((char *)dest + v21 - 1) = 0;
              v36 = v39;
              if ( (_QWORD)i )
LABEL_36:
                v14 = (const char *)v37;
              else
LABEL_39:
                v14 = &s1;
              sub_192290(&v31, (__int64)v14, 1);
              goto LABEL_14;
            }
            *(_QWORD *)&v35 = 0;
            v36 = v39;
            goto LABEL_39;
          }
        }
      }
      if ( v16 )
      {
        *(_QWORD *)&v33 = 0;
        qfree(v16, (const char *)&v32);
      }
LABEL_14:
      if ( v37 )
      {
        *(_QWORD *)&i = 0;
        qfree(v37, v14);
      }
      v7 = (void **)v26;
      if ( v26 || v31 != -1 )
        break;
      v26 = 1;
      v12 = (bool (__fastcall *)(__int64, __int64, unsigned int, unsigned __int8 (__fastcall *)(_QWORD)))sub_30D7F0;
      v37 = nullptr;
      v39 = 0;
    }
    ++v11;
  }
  while ( v11 != &`vtable for'qo_chooser_t );
LABEL_18:
  if ( (unsigned __int64)v35 > 1 )
  {
    v37 = (void *)_mm_unpacklo_epi32(_mm_cvtsi32_si128(v36), _mm_cvtsi32_si128(v10)).m128i_u64[0];
    sub_514C10(this);
    v17 = &s1;
    if ( (_QWORD)v35 )
      v17 = (const char *)dest;
    v37 = (void *)_mm_unpacklo_epi32(_mm_cvtsi32_si128(v36 + (unsigned int)qustrlen(v17)), _mm_cvtsi32_si128(v10)).m128i_u64[0];
    sub_514C10(this);
    v7 = (void **)v31;
    if ( v31 != -1 )
      sub_192AA0(0, v31, -1, 1u);
  }
  if ( dest )
  {
    *(_QWORD *)&v35 = 0;
    qfree(dest, (const char *)v7);
  }
  return v40 - __readfsqword(0x28u);
}
