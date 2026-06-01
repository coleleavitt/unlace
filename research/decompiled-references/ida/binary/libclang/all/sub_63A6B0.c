__int64 __fastcall sub_63A6B0(
        __int64 a1,
        _BOOL8 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8)
{
  __int16 v10; // ax
  _QWORD *v11; // rax
  __int64 v12; // r13
  unsigned __int64 v13; // r12
  unsigned int v14; // eax
  __int64 v15; // rdi
  __int64 v16; // r14
  __int64 v17; // r12
  __int64 v18; // rdx
  __int64 v19; // rbp
  unsigned int v20; // eax
  unsigned int v21; // ebp
  const __m128i *v22; // rax
  __m128i v23; // xmm0
  __int64 v24; // rdi
  __int64 v25; // rax
  const __m128i *v26; // rcx
  int v27; // edx
  unsigned __int64 v28; // rax
  __m128i v29; // xmm1
  __m128i v30; // [rsp+0h] [rbp-48h] BYREF
  __m128i v31[3]; // [rsp+10h] [rbp-38h] BYREF

  if ( (_DWORD)a7 != 103 || !DWORD1(a7) )
    goto LABEL_2;
  if ( !(_QWORD)a8 || (v10 = *(_WORD *)a8 & 0x1FF, ((v10 + 509) & 0x1FFu) > 0x7F) )
    BUG();
  if ( v10 == 96 )
  {
    v11 = (_QWORD *)(*(_QWORD *)(a8 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  }
  else
  {
    if ( v10 != 115 )
      goto LABEL_2;
    v11 = *(_QWORD **)(a8 + 40);
  }
  if ( v11 )
  {
    v12 = *((_QWORD *)&a8 + 1);
    v13 = *v11 & 0xFFFFFFFFFFFFFFF0LL;
    v30 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v11, (__m128i)(unsigned __int64)(v11 + 1));
    v14 = sub_B1E2D0(&v30);
    v15 = *(_QWORD *)v13;
    if ( *(_BYTE *)(*(_QWORD *)v13 + 16LL) == 24 )
      goto LABEL_11;
    v21 = v14;
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 24 )
      goto LABEL_15;
    v15 = sub_B0D320(v15);
    if ( v15 )
    {
LABEL_11:
      v16 = v30.m128i_i64[0];
      v17 = *(_QWORD *)(v15 + 40);
      v18 = 16;
      if ( (unsigned __int8)(*(_WORD *)(v30.m128i_i64[0] + 18) >> 3) == 6 )
        v18 = 16LL * (*(_QWORD *)(v30.m128i_i64[0] + 32) != 0);
      v19 = v18 + v30.m128i_i64[1];
      v20 = sub_B1AFD0(*(_QWORD *)(v30.m128i_i64[0] + 40));
      a2 = v19 != 0;
      v13 = v17 & 0xFFFFFFFFFFFFFFF0LL;
      v31[0] = _mm_unpacklo_epi64(
                 _mm_loadl_epi64((const __m128i *)(v16 + 40)),
                 (__m128i)(v20 * (a2 + (v19 - a2) / (unsigned __int64)v20)));
      v21 = sub_B1E2D0(v31);
    }
    v15 = *(_QWORD *)v13;
LABEL_15:
    v22 = (const __m128i *)sub_B10DA0(v15, a2);
    if ( v22 )
    {
      v23 = _mm_loadl_epi64(v22 + 2);
      *(_QWORD *)a1 = 43;
      *(_QWORD *)(a1 + 24) = v12;
      *(__m128i *)(a1 + 8) = _mm_unpacklo_epi64(v23, _mm_cvtsi32_si128(v21));
      return a1;
    }
    v24 = *(_QWORD *)v13;
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v13 + 16LL) - 46 <= 1 )
    {
LABEL_23:
      v25 = sub_B14A40(v24);
      *(_QWORD *)a1 = 43;
      *(_QWORD *)(a1 + 8) = v25;
      *(_QWORD *)(a1 + 16) = v21;
      *(_QWORD *)(a1 + 24) = v12;
      return a1;
    }
    v26 = *(const __m128i **)(*(_QWORD *)(v24 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    v27 = v26[1].m128i_u8[0];
    if ( (unsigned int)(v27 - 46) <= 1 )
    {
      v24 = sub_B0D320(v24);
      if ( v24 )
        goto LABEL_23;
      v28 = *(_QWORD *)(*(_QWORD *)v13 + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
      v26 = *(const __m128i **)v28;
      LOBYTE(v27) = *(_BYTE *)(*(_QWORD *)v28 + 16LL);
    }
    if ( (_BYTE)v27 == 49 )
    {
      v29 = _mm_loadl_epi64(v26 + 2);
      *(_QWORD *)a1 = 43;
      *(_QWORD *)(a1 + 24) = v12;
      *(__m128i *)(a1 + 8) = _mm_unpacklo_epi64(v29, _mm_cvtsi32_si128(v21));
      return a1;
    }
  }
LABEL_2:
  *(__m128i *)a1 = _mm_loadu_si128((const __m128i *)&a7);
  *(__m128i *)(a1 + 16) = _mm_loadu_si128((const __m128i *)&a8);
  return a1;
}

