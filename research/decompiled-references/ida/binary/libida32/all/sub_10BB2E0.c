__int64 __fastcall sub_10BB2E0(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rbx
  _QWORD *v9; // r14
  __m128 v10; // xmm0
  __int64 v11; // rbp
  __m128i v12; // xmm0
  __m128i v14; // xmm0
  _QWORD *v15; // [rsp+8h] [rbp-60h] BYREF
  __m128 v16; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v17; // [rsp+20h] [rbp-48h]
  unsigned int v18; // [rsp+24h] [rbp-44h]

  v16.m128_u64[0] = __PAIR64__(a4, a3);
  v6 = sub_2193060(a2, &v16, 2);
  v7 = *(_QWORD *)(a2 + 8);
  v17 = a3;
  v18 = a4;
  v8 = (_QWORD *)(v7 + 8LL * (unsigned int)v6);
  v9 = (_QWORD *)(v7 + 8 * HIDWORD(v6));
  v15 = v9;
  v10 = _mm_loadh_ps((const double *)&v15);
  v16 = v10;
  if ( v8 != v9 )
  {
    while ( 1 )
    {
      v11 = *v8;
      if ( *v8 )
      {
        if ( a3 && ((unsigned __int8)sub_2195AD0(*v8, a3) || a4 && (unsigned __int8)sub_2195AD0(v11, a4)) )
          break;
      }
      v16.m128_u64[0] = (unsigned __int64)++v8;
      if ( v9 == v8 )
      {
        v15 = v9;
        v12 = _mm_loadl_epi64((const __m128i *)&v15);
        v10 = (__m128)_mm_unpacklo_epi64(v12, v12);
        goto LABEL_9;
      }
    }
    v15 = v9;
    v10 = _mm_loadh_ps((const double *)&v15);
  }
LABEL_9:
  *(__m128 *)a1 = v10;
  v15 = v9;
  v14 = _mm_loadl_epi64((const __m128i *)&v15);
  *(_DWORD *)(a1 + 16) = a3;
  *(_DWORD *)(a1 + 20) = a4;
  *(_DWORD *)(a1 + 40) = a3;
  *(_DWORD *)(a1 + 44) = a4;
  *(__m128i *)(a1 + 24) = _mm_unpacklo_epi64(v14, v14);
  return a1;
}

