_BOOL8 __fastcall sub_2E03A0(
        __int64 *a1,
        double a2,
        double a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        int a14)
{
  const char *v14; // rsi
  _BOOL4 v15; // ebx
  __int64 std_dirtree; // rbp
  __int64 *v18; // r14
  __int64 *v19; // r15
  __int64 v20; // rdx
  __int64 v21; // rax
  unsigned __int64 v22; // rbx
  __m128i v23; // xmm1
  QT::QObject *v24; // rdi
  int v25; // eax
  __m128i v26; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v27; // [rsp+17h] [rbp-A1h] BYREF
  char v28; // [rsp+1Fh] [rbp-99h]
  __int128 v29; // [rsp+20h] [rbp-98h] BYREF
  __int64 v30; // [rsp+30h] [rbp-88h] BYREF
  __int128 v31; // [rsp+38h] [rbp-80h]
  __int64 *v32; // [rsp+50h] [rbp-68h] BYREF
  __int128 v33; // [rsp+58h] [rbp-60h]
  char v34; // [rsp+68h] [rbp-50h]
  __int64 v35; // [rsp+6Ch] [rbp-4Ch]
  unsigned __int64 v36; // [rsp+78h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  v14 = (const char *)a1;
  v34 = 0;
  v32 = nullptr;
  v35 = 0;
  v33 = 0;
  sub_17E750((__int64)&v32, a1, 1, 1, 0.0, a3, a4, a5, a6, a7, a8, a9, a13, a14);
  if ( (_QWORD)v33 && (std_dirtree = get_std_dirtree(1)) != 0 )
  {
    v15 = 0;
    v30 = 0;
    v31 = 0;
    if ( (_QWORD)v33 )
    {
      v14 = nullptr;
      v26.m128i_i64[1] = (__int64)&v30;
      v30 = qvector_reserve(&v30, 0, v33, 16);
      v18 = &v32[v33];
      if ( v18 != v32 )
      {
        v19 = v32;
        do
        {
          v21 = *v19;
          v14 = (const char *)std_dirtree;
          v28 = 0;
          v27 = v21;
          v29 = -1;
          dirtree_find_entry(&v29, std_dirtree, &v27);
          v22 = v29;
          v23 = _mm_loadl_epi64((const __m128i *)((char *)&v29 + 8));
          if ( (_QWORD)v29 != -1 || !v23.m128i_i64[0] )
          {
            v20 = v31;
            v14 = (const char *)v30;
            if ( *((_QWORD *)&v31 + 1) < (unsigned __int64)(v31 + 1) )
            {
              v26.m128i_i64[0] = v23.m128i_i64[0];
              v30 = qvector_reserve(v26.m128i_i64[1], v30, v31 + 1, 16);
              v20 = v31;
              v14 = (const char *)v30;
              v23 = _mm_loadl_epi64(&v26);
            }
            *(__m128i *)&v14[16 * v20] = _mm_unpacklo_epi64((__m128i)v22, v23);
            *(_QWORD *)&v31 = v31 + 1;
          }
          ++v19;
        }
        while ( v18 != v19 );
      }
      if ( (_QWORD)v31 )
      {
        v24 = (QT::QObject *)sub_28BE30();
        v14 = (const char *)v26.m128i_i64[1];
        if ( v24 )
          v25 = sub_4C3AE0(v24);
        else
          v25 = sub_4C2AD0(std_dirtree, v26.m128i_i64[1], 0);
        v15 = (unsigned int)(v25 - 1) <= 1;
      }
      else
      {
        v15 = 0;
      }
      if ( v30 )
      {
        *(_QWORD *)&v31 = 0;
        qfree(v30, v14);
      }
    }
  }
  else
  {
    v15 = 0;
  }
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree(v32, v14);
  }
  return v15;
}
