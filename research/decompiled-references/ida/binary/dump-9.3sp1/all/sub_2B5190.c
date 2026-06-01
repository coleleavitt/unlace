unsigned __int64 __fastcall sub_2B5190(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __m128i v4; // xmm0
  __int64 v5; // rax
  __int64 v6; // r13
  __m128i v7; // xmm0
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // r14
  __m128i v11; // xmm0
  int v12; // eax
  __m128i v14; // [rsp+0h] [rbp-68h] BYREF
  __int64 v15; // [rsp+10h] [rbp-58h]
  __m128i v16; // [rsp+18h] [rbp-50h] BYREF
  __int64 v17; // [rsp+28h] [rbp-40h]
  unsigned __int64 v18; // [rsp+38h] [rbp-30h]

  v3 = *(_QWORD *)(a1 + 8);
  v18 = __readfsqword(0x28u);
  v17 = 0;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = v3;
  v4 = _mm_loadu_si128((const __m128i *)(a1 + 24));
  v5 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = 0;
  v16 = v4;
  *(_OWORD *)(a1 + 24) = 0;
  v15 = v5;
  copy_tinfo_t();
  v6 = *(_QWORD *)(a2 + 16);
  v7 = _mm_loadu_si128((const __m128i *)(a2 + 24));
  *(_QWORD *)(a2 + 16) = 0;
  *(_OWORD *)(a2 + 24) = 0;
  v8 = *(_QWORD *)(a1 + 16);
  if ( v8 )
  {
    *(_QWORD *)(a1 + 24) = 0;
    v14 = v7;
    qfree(v8);
    v7 = _mm_load_si128(&v14);
  }
  *(_QWORD *)(a1 + 16) = v6;
  *(__m128i *)(a1 + 24) = v7;
  copy_tinfo_t();
  v9 = *(_QWORD *)(a2 + 16);
  v10 = v15;
  v15 = 0;
  v11 = _mm_loadu_si128(&v16);
  v16 = 0;
  if ( v9 )
  {
    *(_QWORD *)(a2 + 24) = 0;
    v14 = v11;
    qfree(v9);
    v11 = _mm_load_si128(&v14);
  }
  *(_QWORD *)(a2 + 16) = v10;
  *(__m128i *)(a2 + 24) = v11;
  copy_tinfo_t();
  clear_tinfo_t();
  if ( v15 )
  {
    v16.m128i_i64[0] = 0;
    qfree(v15);
  }
  v12 = *(_DWORD *)(a1 + 56);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 56);
  *(_DWORD *)(a2 + 56) = v12;
  return v18 - __readfsqword(0x28u);
}
