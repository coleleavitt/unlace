__int64 __fastcall sub_1FBE810(__int64 a1, const __m128i *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbp
  __int64 v5; // rcx
  int v6; // eax
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __m128 v10; // xmm1
  __int64 v11; // rcx
  __int64 v12; // [rsp+8h] [rbp-30h] BYREF
  __m128i v13; // [rsp+10h] [rbp-28h]

  sub_1FBC930(a1, (__int64)a2);
  v3 = *(_QWORD *)(a1 + 24);
  v13 = _mm_loadu_si128(a2 + 4);
  sub_9B9C90(v3, v13.m128i_u32[0]);
  sub_9B9C90(*(_QWORD *)(a1 + 24), v13.m128i_u16[2]);
  sub_9B9C90(*(_QWORD *)(a1 + 24), v13.m128i_u16[3]);
  v4 = *(_QWORD *)(a1 + 24);
  v5 = *(unsigned int *)(v4 + 8);
  v6 = *(_DWORD *)(v4 + 8);
  if ( v5 + 8 > (unsigned __int64)*(unsigned int *)(v4 + 12) )
  {
    sub_2237220(*(_QWORD *)(a1 + 24), v4 + 16, v5 + 8, 8);
    v5 = *(unsigned int *)(v4 + 8);
    v6 = *(_DWORD *)(v4 + 8);
  }
  result = (unsigned int)(v6 + 8);
  v8 = *(_QWORD *)v4 + 8 * v5;
  v12 = v13.m128i_u8[15];
  v9 = v13.m128i_u8[13];
  *(__m128 *)(v8 + 48) = _mm_loadh_ps((const double *)&v12);
  v12 = v9;
  v10 = _mm_loadh_ps((const double *)&v12);
  v12 = v13.m128i_u8[11];
  *(__m128 *)(v8 + 32) = v10;
  v11 = v13.m128i_u8[9];
  *(__m128 *)(v8 + 16) = _mm_loadh_ps((const double *)&v12);
  v12 = v11;
  *(__m128 *)v8 = _mm_loadh_ps((const double *)&v12);
  *(_DWORD *)(v4 + 8) = result;
  *(_DWORD *)(a1 + 224) = 70;
  return result;
}
