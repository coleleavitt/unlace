const __m128i **__fastcall sub_188D00(_QWORD *a1, const __m128i **a2, unsigned __int8 *a3, _QWORD *a4, __int64 *a5)
{
  const __m128i **v6; // r12
  _QWORD *v8; // rax
  _BYTE *v9; // rax
  _BYTE *v10; // rbx
  __int64 v11; // rax
  int v12; // r15d
  __int64 v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rax
  _QWORD *v16; // r8
  __int64 v17; // rbx
  __m128i *v18; // rax
  unsigned int v19; // ebp
  __m128i *v20; // rcx
  __int64 v21; // r13
  __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  __m128i v24; // xmm2
  __m128i v25; // xmm1
  __int32 v26; // r11d
  __int64 v27; // rax
  __int64 v28; // rdx
  const __m128i *v29; // rcx
  const __m128i *v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // xmm2_8
  __m128i v33; // xmm1
  __int32 v34; // r11d
  __m128i v35; // xmm0
  const __m128i *v37; // rdx
  const __m128i *v38; // rcx
  _QWORD *v42; // [rsp+28h] [rbp-80h]
  __m128i v43; // [rsp+30h] [rbp-78h] BYREF
  const __m128i *v44; // [rsp+40h] [rbp-68h]
  const __m128i *v45; // [rsp+48h] [rbp-60h]
  __int64 v46; // [rsp+50h] [rbp-58h] BYREF
  __int128 v47; // [rsp+58h] [rbp-50h]
  unsigned __int64 v48; // [rsp+68h] [rbp-40h]

  v6 = a2;
  v48 = __readfsqword(0x28u);
  while ( 1 )
  {
    if ( sub_60EF0(a5, *(_DWORD *)(*a1 + 72LL))
      || (unsigned __int8)sub_60D40(a1 + 11, a4)
      || (unsigned __int8)sub_3142F0(a1 + 13, a4 + 2) )
    {
      return nullptr;
    }
    v8 = (_QWORD *)a1[1];
    if ( v8 )
    {
      v9 = (_BYTE *)(*v8 & 0xFFFFFFFFFFFFFFFCLL);
      v10 = v9;
      if ( !v9 )
        break;
      if ( (*v9 & 2) == 0 )
      {
        while ( sub_11A000(a3, *((unsigned __int8 **)v10 + 3)) < 0 )
        {
          v10 = *((_BYTE **)v10 + 1);
LABEL_12:
          if ( (*v10 & 2) != 0 )
            goto LABEL_13;
        }
        if ( sub_11A000(*((unsigned __int8 **)v10 + 3), a3) < 0 )
        {
          v10 = *((_BYTE **)v10 + 2);
          goto LABEL_12;
        }
        if ( (_BYTE *)a1[1] != v10 )
          break;
      }
    }
LABEL_13:
    sub_60750(a5, *(_DWORD *)(*a1 + 72LL));
    v11 = a1[4];
    if ( v11 != 1 )
    {
      if ( !v11 )
        goto LABEL_33;
      v12 = 0;
      v13 = 0;
      while ( 1 )
      {
        v14 = a1[3];
        v46 = 0;
        v47 = 0;
        v15 = (_QWORD *)sub_188D00(*(_QWORD *)(v14 + 8 * v13), &v46, a3, a4, a5);
        v16 = v15;
        if ( v15 )
        {
          v17 = *v15;
          if ( 32LL * v15[1] )
            break;
        }
LABEL_30:
        if ( v46 )
        {
          *(_QWORD *)&v47 = 0;
          qfree(v46);
        }
        v13 = ++v12;
        if ( (unsigned __int64)v12 >= a1[4] )
          goto LABEL_33;
      }
      while ( 2 )
      {
        v18 = (__m128i *)*v6;
        v19 = *(_DWORD *)(v17 + 20);
        v20 = (__m128i *)&(*v6)[2 * (_QWORD)v6[1]];
        if ( *v6 == v20 )
        {
LABEL_35:
          v21 = *(_QWORD *)v17;
          goto LABEL_36;
        }
        while ( v19 != v18[1].m128i_i32[1]
             || *(_DWORD *)(v17 + 24) != v18[1].m128i_i32[2]
             || *(_DWORD *)(v17 + 16) != v18[1].m128i_i32[0] )
        {
          v18 += 2;
          if ( v20 == v18 )
            goto LABEL_35;
        }
        v21 = *(_QWORD *)v17;
        if ( v20 == v18 )
        {
LABEL_36:
          v23 = (unsigned __int64)v6[1]->m128i_u64 + 1;
          v24 = _mm_loadl_epi64((const __m128i *)(v17 + 8));
          v25 = _mm_cvtsi32_si128(*(_DWORD *)(v17 + 16));
          v26 = *(_DWORD *)(v17 + 24);
          if ( (unsigned __int64)v6[2] < v23 )
          {
            v44 = v6[2];
            v42 = v16;
            v43.m128i_i64[1] = __PAIR64__(v26, _mm_cvtsi128_si32(v25));
            v43.m128i_i64[0] = v24.m128i_i64[0];
            v27 = qvector_reserve(v6, 0, v23, 32);
            v28 = v27;
            v29 = v6[2];
            v30 = *v6;
            v31 = (__int64)&v6[1][-1].m128i_i64[1] + 7;
            v6[2] = v44;
            v32 = v43.m128i_i64[0];
            v33 = _mm_cvtsi32_si128(v43.m128i_u32[2]);
            v34 = v43.m128i_i32[3];
            if ( v31 >= 0 )
            {
              do
              {
                v35 = _mm_loadu_si128(v30);
                v27 += 32;
                v30 += 2;
                *(__m128i *)(v27 - 32) = v35;
                *(__m128i *)(v27 - 16) = _mm_loadu_si128(v30 - 1);
              }
              while ( v31-- != 0 );
              v30 = *v6;
            }
            v45 = v29;
            v44 = (const __m128i *)v28;
            v43.m128i_i64[1] = __PAIR64__(v34, _mm_cvtsi128_si32(v33));
            v43.m128i_i64[0] = v32;
            qfree(v30);
            v37 = v44;
            v26 = v43.m128i_i32[3];
            v25 = _mm_cvtsi32_si128(v43.m128i_u32[2]);
            v24 = _mm_loadl_epi64(&v43);
            v16 = v42;
            v6[2] = v45;
            v38 = v6[1];
            *v6 = v37;
            v20 = (__m128i *)&v37[2 * (_QWORD)v38];
          }
          v20[1].m128i_i32[2] = v26;
          *v20 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v21, v24);
          v20[1].m128i_i64[0] = _mm_unpacklo_epi32(v25, _mm_cvtsi32_si128(v19)).m128i_u64[0];
          v6[1] = (const __m128i *)((char *)v6[1] + 1);
        }
        else
        {
          if ( v18->m128i_i64[0] > v21 )
            v18->m128i_i64[0] = v21;
          v22 = *(_QWORD *)(v17 + 8);
          if ( v22 > v18->m128i_i64[1] )
            v18->m128i_i64[1] = v22;
        }
        v17 += 32;
        if ( v17 == *v16 + 32LL * v16[1] )
          goto LABEL_30;
        continue;
      }
    }
    a1 = *(_QWORD **)a1[3];
  }
  sub_188440(a2, (__int64)(v10 + 32));
LABEL_33:
  if ( !v6[1] )
    return nullptr;
  return v6;
}
