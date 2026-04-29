__int64 __fastcall sub_226620(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        __int64 *a6,
        double a7)
{
  __int64 v9; // rdi
  unsigned __int64 v13; // rdx
  unsigned int v14; // ebp
  __int64 v16; // rdi
  unsigned __int64 v17; // r14
  const __m128i *v18; // r15
  __m128i v19; // xmm1
  __int64 tinfo_property4; // rax
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rbx
  __int64 v23; // r12
  __int64 v24; // rbp
  __int64 v25; // rsi
  __m128i si128; // xmm0
  __int64 v27; // r12
  __int64 v28; // r13
  _QWORD *v29; // rbx
  __int64 v30; // rdi
  __int64 v31; // rdi
  void *v32; // rdi
  const void *v33; // rbp
  __int64 v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // [rsp+10h] [rbp-78h] BYREF
  __int128 v38; // [rsp+18h] [rbp-70h]
  __int128 v39; // [rsp+28h] [rbp-60h]
  __int64 v40; // [rsp+38h] [rbp-50h]
  int v41; // [rsp+40h] [rbp-48h]
  unsigned __int64 v42; // [rsp+48h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  v9 = *a3;
  if ( !(unsigned __int8)*a3 || !*(_QWORD *)(a1 + 8) )
    return 0;
  if ( (*(_BYTE *)(a1 + 2) & 4) != 0 )
  {
    if ( a6 )
    {
      v13 = a4 + *(_QWORD *)(a2 + 32);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1496) + 24LL) + 24LL) != 8 )
        v13 = (int)v13;
      sub_652F0(a6, (__int64)"^%a.%lld", a7, v13);
    }
    return 0;
  }
  v37 = 0;
  v40 = 0;
  v41 = 1;
  v38 = 0;
  v39 = 0;
  get_tinfo_details(v9, 13, &v37);
  v16 = v37;
  if ( !(_QWORD)v38 )
  {
    v14 = 1;
    if ( !v37 )
      return v14;
    goto LABEL_36;
  }
  v17 = 0;
  do
  {
    v18 = (const __m128i *)(v16 + 144 * v17);
    v19 = _mm_loadu_si128(v18);
    if ( a4 < _mm_add_epi64(_mm_srli_si128(v19, 8), v19).m128i_u64[0] >> 3 )
    {
      if ( (unsigned __int64)v19.m128i_i64[0] >> 3 >= a5 )
        break;
      tinfo_property4 = get_tinfo_property4(*a3, 297, v17, 0, 0, 0);
      if ( v18[3].m128i_i64[0] > 1uLL || (get_aflags(tinfo_property4) & 0x2000000) != 0 )
      {
        if ( a6 )
        {
          if ( a6 != (__int64 *)&v18[1] )
          {
            v21 = v18[1].m128i_u64[1];
            if ( v21 <= 1 )
            {
              a6[1] = 0;
              goto LABEL_19;
            }
            v32 = (void *)*a6;
            v33 = (const void *)v18[1].m128i_i64[0];
            if ( a6[2] < v21 )
            {
              v36 = qvector_reserve(a6, *a6, v18[1].m128i_i64[1], 1);
              *a6 = v36;
              v32 = (void *)v36;
            }
            a6[1] = v21;
            memmove(v32, v33, v21 - 1);
            *(_BYTE *)(*a6 + v21 - 1) = 0;
          }
          v34 = a6[1];
          if ( v34 )
          {
            v24 = v34 - 1;
            v23 = v34 + 15;
            v22 = v34 + 16;
          }
          else
          {
LABEL_19:
            v22 = 17;
            v23 = 16;
            v24 = 0;
          }
          v25 = *a6;
          if ( a6[2] < v22 )
          {
            v35 = qvector_reserve(a6, v25, v22, 1);
            *a6 = v35;
            v25 = v35;
          }
          si128 = _mm_load_si128((const __m128i *)&xmmword_3FA230);
          a6[1] = v22;
          *(_BYTE *)(v25 + v23) = 0;
          *(__m128i *)(*a6 + v24) = si128;
        }
        v16 = v37;
        v14 = 0;
        goto LABEL_28;
      }
      v16 = v37;
    }
    ++v17;
  }
  while ( v17 < (unsigned __int64)v38 );
  v14 = 1;
LABEL_28:
  if ( v16 )
  {
    v27 = v38;
    if ( (_QWORD)v38 )
    {
      v28 = 0;
      do
      {
        v29 = (_QWORD *)(v16 + 144 * v28);
        clear_tinfo_t(v29 + 8);
        v30 = v29[5];
        if ( v30 )
        {
          v29[6] = 0;
          qfree(v30);
        }
        v31 = v29[2];
        if ( v31 )
        {
          v29[3] = 0;
          qfree(v31);
        }
        ++v28;
        v16 = v37;
      }
      while ( v27 != v28 );
    }
LABEL_36:
    *(_QWORD *)&v38 = 0;
    qfree(v16);
  }
  return v14;
}
