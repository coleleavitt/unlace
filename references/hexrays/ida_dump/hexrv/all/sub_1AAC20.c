unsigned __int64 __fastcall sub_1AAC20(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int8 (__fastcall *a3)(__int64, __int64, _BYTE *, __int64),
        __int64 a4)
{
  _BYTE *v8; // rbx
  char v9; // al
  _BYTE *v10; // rsi
  __int64 *v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rsi
  const __m128i *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __m128i v22; // xmm0
  __int64 v24; // [rsp+0h] [rbp-78h]
  __int64 v25; // [rsp+0h] [rbp-78h]
  __m128i v26; // [rsp+18h] [rbp-60h] BYREF
  __int128 v27; // [rsp+28h] [rbp-50h]
  unsigned __int64 v28; // [rsp+38h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  if ( a1 + 22 >= a2 )
    return v28 - __readfsqword(0x28u);
  v26.m128i_i64[1] = 0;
  v27 = 0;
  if ( a1 >= a2 )
    return v28 - __readfsqword(0x28u);
  v8 = (_BYTE *)a1;
  while ( 1 )
  {
    while ( *v8 == 1 )
    {
      v9 = v8[1];
      v10 = v8 + 18;
      if ( v9 != 40 )
      {
        v10 = v8 + 2;
        if ( (unsigned __int64)(v8 + 3) < a2 && (unsigned __int8)(v9 - 41) <= 2u && v8[2] == 1 && v8[3] == 40 )
        {
          v26.m128i_i64[0] = 0;
          addr_from_tag(&v26, v10);
          v15 = v27;
          v8 += 20;
          if ( *((_QWORD *)&v27 + 1) < (unsigned __int64)(v27 + 1) )
          {
            v24 = *((_QWORD *)&v27 + 1);
            v17 = qvector_reserve(&v26.m128i_u64[1], 0, v27 + 1, 16);
            v18 = *((_QWORD *)&v27 + 1);
            v19 = (const __m128i *)v26.m128i_i64[1];
            *((_QWORD *)&v27 + 1) = v24;
            v20 = v27 - 1;
            if ( (__int64)v27 - 1 >= 0 )
            {
              v21 = v17;
              do
              {
                v22 = _mm_loadu_si128(v19);
                v21 += 16;
                ++v19;
                *(__m128i *)(v21 - 16) = v22;
              }
              while ( v20-- != 0 );
              v19 = (const __m128i *)v26.m128i_i64[1];
            }
            v25 = v17;
            qfree(v19);
            v16 = v25;
            v15 = v27;
            v26.m128i_i64[1] = v25;
            *((_QWORD *)&v27 + 1) = v18;
          }
          else
          {
            v16 = v26.m128i_i64[1];
          }
          *(__m128i *)(v16 + 16 * v15) = _mm_unpacklo_epi64(_mm_loadl_epi64(&v26), (__m128i)(unsigned __int64)&v8[-a1]);
          *(_QWORD *)&v27 = v27 + 1;
          goto LABEL_6;
        }
      }
      v8 = v10;
      if ( (unsigned __int64)v10 >= a2 )
      {
LABEL_14:
        if ( (_QWORD)v27 )
        {
          if ( !under_debugger )
            sub_37DDE0(52914);
          BUG();
        }
        if ( v26.m128i_i64[1] )
          qfree(v26.m128i_i64[1]);
        return v28 - __readfsqword(0x28u);
      }
    }
    if ( *v8 == 2 )
      break;
    ++v8;
LABEL_6:
    if ( (unsigned __int64)v8 >= a2 )
      goto LABEL_14;
  }
  if ( (unsigned __int64)(v8 + 1) >= a2
    || (unsigned __int8)(v8[1] - 41) > 2u
    || !(_QWORD)v27
    || (v12 = (__int64 *)(v26.m128i_i64[1] + 16 * v27 - 16),
        v13 = *v12,
        v14 = v12[1],
        *(_QWORD *)&v27 = v27 - 1,
        a3(v13, v14, &v8[-a1], a4)) )
  {
    v8 += 2;
    goto LABEL_6;
  }
  if ( v26.m128i_i64[1] )
  {
    *(_QWORD *)&v27 = 0;
    qfree(v26.m128i_i64[1]);
  }
  return v28 - __readfsqword(0x28u);
}
