unsigned __int64 __fastcall sub_48B2A0(unsigned __int64 a1, const __m128i *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r12
  unsigned __int64 v6; // rdx
  void *v7; // r13
  size_t v8; // r15
  void *v9; // rax
  void *v10; // rcx
  __m128i v11; // xmm0
  _QWORD *v12; // rbx
  void *v13; // rdi
  unsigned __int64 v15; // rdx
  void *v16[2]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v17; // [rsp+18h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 8);
  v6 = a2->m128i_u64[1];
  v17 = __readfsqword(0x28u);
  v7 = *(void **)a1;
  if ( v6 == v5 )
  {
    v7 = nullptr;
    memset(*(void **)a1, 0, 8 * v5);
  }
  else
  {
    if ( v6 == 1 )
    {
      *(_QWORD *)(a1 + 48) = 0;
      v10 = (void *)(a1 + 48);
    }
    else
    {
      if ( v6 >> 60 )
      {
        v15 = v6 >> 61;
        if ( v15 )
          sub_2E883E(a1, a2, v15, a4, a5);
        std::__throw_bad_alloc();
      }
      v8 = 8 * v6;
      v9 = (void *)operator new(8 * v6);
      v10 = memset(v9, 0, v8);
    }
    *(_QWORD *)a1 = v10;
    *(_QWORD *)(a1 + 8) = a2->m128i_i64[1];
  }
  *(_QWORD *)(a1 + 24) = a2[1].m128i_i64[1];
  *(__m128i *)(a1 + 32) = _mm_loadu_si128(a2 + 2);
  v11 = _mm_loadl_epi64((const __m128i *)(a1 + 16));
  *(_QWORD *)(a1 + 16) = 0;
  *(__m128i *)v16 = _mm_unpacklo_epi64(v11, (__m128i)a1);
  sub_48B0D0((_QWORD *)a1, (__int64)a2, (__int64 *)v16, (__int64)v10, a5);
  if ( v7 && v7 != (void *)(a1 + 48) )
    operator delete(v7, 8 * v5);
  v12 = v16[0];
  if ( v16[0] )
  {
    do
    {
      v13 = v12;
      v12 = (_QWORD *)*v12;
      operator delete(v13, 0x20u);
    }
    while ( v12 );
  }
  return v17 - __readfsqword(0x28u);
}

