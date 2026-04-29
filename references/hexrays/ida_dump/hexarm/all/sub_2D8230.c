__int64 __fastcall sub_2D8230(__int64 a1, __int64 a2, __m128i *a3, unsigned __int64 a4)
{
  __m128i v4; // xmm1
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v9; // rax
  unsigned __int64 v10; // [rsp+0h] [rbp-50h] BYREF
  __m128i v11; // [rsp+8h] [rbp-48h] BYREF
  unsigned __int64 v12; // [rsp+20h] [rbp-30h]

  v4 = (__m128i)a4;
  v12 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 24);
  if ( !v6 )
  {
    v10 = a4;
    v9 = operator new(0x38u);
    v4 = _mm_loadl_epi64((const __m128i *)&v10);
    *(_QWORD *)v9 = 0;
    v6 = v9;
    *(_QWORD *)(v9 + 24) = 0;
    *(_DWORD *)(v9 + 48) = 1;
    *(_OWORD *)(v9 + 8) = 0;
    *(_OWORD *)(v9 + 32) = 0;
  }
  v7 = *(_QWORD *)(a1 + 8);
  v11 = _mm_unpacklo_epi64(_mm_loadl_epi64(a3), v4);
  sub_2D7730(a2, v6, &v11, v7, nullptr, v11);
  a3->m128i_i64[0] = v11.m128i_i64[0];
  return v6;
}
