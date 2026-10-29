unsigned __int64 __fastcall sub_69F7C0(__int64 a1, __int64 a2, int a3, double a4, double a5, __m128 a6, __m128 a7)
{
  __int64 v7; // rax
  _QWORD *v8; // r13
  unsigned __int64 v10; // rdx
  __m128i v11; // xmm1
  __m128i v12; // xmm0
  __int64 v13; // rbp
  unsigned __int64 v14; // rbx
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  __m128i v18; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v19; // [rsp+18h] [rbp-30h]

  v7 = *(unsigned int *)(a2 + 4);
  v8 = *(_QWORD **)(a1 + 1840);
  v19 = __readfsqword(0x28u);
  v10 = *(_QWORD *)(a2 + 8);
  v11 = (__m128i)(v10 + v7);
  v12 = _mm_unpacklo_epi64((__m128i)v10, v11);
  v18 = v12;
  v13 = unpack_dq(&v18);
  v14 = unpack_dq(&v18);
  v15 = unpack_dq(&v18);
  if ( a3 )
  {
    v16 = v14;
    v14 = v13;
    v13 = v16;
  }
  sub_69F700(v8, v14, v13, v15, 0, *(double *)v12.m128i_i64, *(double *)v11.m128i_i64, a6, a7);
  return v19 - __readfsqword(0x28u);
}
