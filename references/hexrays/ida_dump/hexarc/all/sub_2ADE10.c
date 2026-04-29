unsigned __int64 __fastcall sub_2ADE10(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v4; // rax
  __m128i v5; // xmm0
  __int64 v6; // rax
  __int64 v7; // r13
  __m128i v8; // xmm0
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // r14
  __m128i v12; // xmm0
  int v13; // eax
  __m128i v15; // [rsp+0h] [rbp-68h] BYREF
  __int64 v16; // [rsp+10h] [rbp-58h]
  __m128i v17; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v18[2]; // [rsp+28h] [rbp-40h] BYREF
  unsigned __int64 v19; // [rsp+38h] [rbp-30h]

  v2 = a1 + 40;
  v4 = *(_QWORD *)(a1 + 8);
  v19 = __readfsqword(0x28u);
  v18[0] = 0;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = v4;
  v5 = _mm_loadu_si128((const __m128i *)(a1 + 24));
  v6 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = 0;
  v17 = v5;
  *(_OWORD *)(a1 + 24) = 0;
  v16 = v6;
  copy_tinfo_t(v18, a1 + 40);
  v7 = *(_QWORD *)(a2 + 16);
  v8 = _mm_loadu_si128((const __m128i *)(a2 + 24));
  *(_QWORD *)(a2 + 16) = 0;
  *(_OWORD *)(a2 + 24) = 0;
  v9 = *(_QWORD *)(a1 + 16);
  if ( v9 )
  {
    *(_QWORD *)(a1 + 24) = 0;
    v15 = v8;
    qfree(v9);
    v8 = _mm_load_si128(&v15);
  }
  *(_QWORD *)(a1 + 16) = v7;
  *(__m128i *)(a1 + 24) = v8;
  copy_tinfo_t(v2, a2 + 40);
  v10 = *(_QWORD *)(a2 + 16);
  v11 = v16;
  v16 = 0;
  v12 = _mm_loadu_si128(&v17);
  v17 = 0;
  if ( v10 )
  {
    *(_QWORD *)(a2 + 24) = 0;
    v15 = v12;
    qfree(v10);
    v12 = _mm_load_si128(&v15);
  }
  *(_QWORD *)(a2 + 16) = v11;
  *(__m128i *)(a2 + 24) = v12;
  copy_tinfo_t(a2 + 40, v18);
  clear_tinfo_t(v18);
  if ( v16 )
  {
    v17.m128i_i64[0] = 0;
    qfree(v16);
  }
  v13 = *(_DWORD *)(a1 + 56);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 56);
  *(_DWORD *)(a2 + 56) = v13;
  return v19 - __readfsqword(0x28u);
}
