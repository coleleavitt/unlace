__int64 __fastcall sub_3E3C40(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // eax
  bool v7; // zf
  unsigned __int64 v8; // rbp
  __int64 v9; // rax
  __m128i v10; // xmm1
  __m128 v11; // xmm0
  const void *v13; // r14
  void *v14; // rdi
  __int64 v15; // rax
  unsigned int v16; // [rsp+Ch] [rbp-7Ch] BYREF
  __int64 v17; // [rsp+10h] [rbp-78h] BYREF
  __m128i v18; // [rsp+18h] [rbp-70h] BYREF
  _QWORD v19[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v20; // [rsp+40h] [rbp-48h]
  int v21; // [rsp+48h] [rbp-40h]
  unsigned __int64 v22; // [rsp+58h] [rbp-30h]

  v5 = 10;
  v7 = *(_DWORD *)(a1 + 368) == 3;
  v22 = __readfsqword(0x28u);
  v21 = 2;
  v19[0] = 266;
  v19[1] = 0;
  v20 = 0;
  if ( !v7 )
    v5 = 16;
  HIDWORD(v19[0]) = v5;
  v18 = 0;
  HIDWORD(v20) = 0;
  v16 = -1;
  v17 = 0;
  sub_3DD7A0(&v17, (const char *)&v16, a2, (char *)v19, a5, 0.0);
  v8 = *(_QWORD *)(a1 + 128);
  if ( v8 > 1 )
  {
    v13 = *(const void **)(a1 + 120);
    v14 = *(void **)(a1 + 144);
    if ( *(_QWORD *)(a1 + 160) < v8 )
    {
      v15 = qvector_reserve(a1 + 144, *(_QWORD *)(a1 + 144), *(_QWORD *)(a1 + 128), 1);
      *(_QWORD *)(a1 + 144) = v15;
      v14 = (void *)v15;
    }
    *(_QWORD *)(a1 + 152) = v8;
    memmove(v14, v13, v8 - 1);
    *(_BYTE *)(*(_QWORD *)(a1 + 144) + v8 - 1) = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 152) = 0;
  }
  v9 = *(_QWORD *)(a1 + 120);
  v10 = _mm_loadu_si128(&v18);
  v11 = _mm_loadh_ps((const double *)(a1 + 136));
  *(_QWORD *)(a1 + 120) = v17;
  *(__m128i *)(a1 + 128) = v10;
  v17 = v9;
  v18 = (__m128i)v11;
  sub_3E3410(a1 + 120, 1, *(double *)v11.m128_u64);
  v11.m128_u64[0] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v16), _mm_cvtsi32_si128(*(_DWORD *)(a1 + 312))).m128i_u64[0];
  *(_QWORD *)(a1 + 312) = v11.m128_u64[0];
  sub_3E3920(a1 + 312, 1, *(double *)v11.m128_u64);
  if ( v17 )
  {
    v18.m128i_i64[0] = 0;
    qfree(v17, (_BYTE *)&dword_0 + 1);
  }
  return 1;
}
