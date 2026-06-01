__int64 __fastcall sub_1399DE0(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6,
        unsigned __int64 a7,
        __int64 a8)
{
  unsigned int *v9; // rax
  __m128i v10; // xmm2
  __m128i v11; // xmm1
  __int64 v12; // rax
  __int64 v13; // rbx
  unsigned int *v14; // rax
  __int64 v16; // [rsp+0h] [rbp-98h] BYREF
  int v17; // [rsp+8h] [rbp-90h] BYREF
  int v18[4]; // [rsp+Ch] [rbp-8Ch] BYREF
  int v19; // [rsp+1Ch] [rbp-7Ch] BYREF
  _QWORD v20[2]; // [rsp+20h] [rbp-78h] BYREF
  __m128i v21; // [rsp+30h] [rbp-68h]
  __m128i v22; // [rsp+40h] [rbp-58h]
  _OWORD v23[4]; // [rsp+50h] [rbp-48h] BYREF

  v18[0] = a4;
  v17 = a5;
  v21 = 0;
  v22 = 0;
  memset(v23, 0, 24);
  v20[0] = 2;
  v20[1] = a2;
  v9 = sub_A25EE0(a1 + 16, (int *)a3);
  v10 = _mm_cvtsi32_si128(*(_DWORD *)(a3 + 4));
  v11 = _mm_cvtsi32_si128(*v9);
  v22 = _mm_unpacklo_epi64(_mm_cvtsi32_si128(*(_DWORD *)(a3 + 8)), _mm_cvtsi32_si128(*(_DWORD *)(a3 + 12)));
  v21 = _mm_unpacklo_epi64(v11, v10);
  *(_QWORD *)&v23[0] = (unsigned int)*sub_A25EE0(a1 + 40, v18);
  if ( v17 )
    sub_A25EE0(a1 + 64, &v17);
  v12 = *(_QWORD *)(a1 + 8);
  v16 = a8;
  v19 = 2;
  v13 = *(_QWORD *)(v12 + 32);
  *(__m128 *)((char *)v23 + 8) = _mm_loadh_ps((const double *)&v16);
  v14 = sub_A25EE0(v13 + 1496, &v19);
  sub_A26740(v13 + 1312, *v14, (__int64)v20, 9, a7, a8, 0);
  std::_V2::system_category((std::_V2 *)(v13 + 1312));
  return 0;
}
