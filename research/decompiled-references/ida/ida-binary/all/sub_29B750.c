unsigned __int64 __fastcall sub_29B750(__int64 a1, int **a2, __int64 a3)
{
  __int64 v3; // rax
  int *v4; // rbp
  __int64 (__fastcall *v6)(__int64); // rax
  int v7; // eax
  __int64 v8; // rdx
  __m128i v9; // xmm0
  int v10; // r15d
  __int64 (__fastcall *v11)(__int64, unsigned int); // rcx
  int *v13; // [rsp+10h] [rbp-58h] BYREF
  __int128 v14; // [rsp+18h] [rbp-50h]
  unsigned __int64 v15; // [rsp+28h] [rbp-40h]

  v3 = 4LL * (_QWORD)a2[1];
  v15 = __readfsqword(0x28u);
  v4 = *a2;
  if ( v3 )
  {
    do
    {
      v10 = *v4;
      v13 = nullptr;
      v14 = 0;
      sub_29A260(a3, (__int64 *)&v13, v10);
      v11 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)a3 + 152LL);
      if ( v11 == interactive_graph_t__::vfunc_19 )
      {
        v6 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 56LL);
        if ( v6 == interactive_graph_t__::vfunc_7 )
          v7 = *(_DWORD *)(a3 + 184);
        else
          v7 = v6(a3);
        if ( v10 >= v7 )
          sub_16B930((__int64)"nrect(%d) failed", v10);
        v8 = *(_QWORD *)(a3 + 224) + 16LL * v10;
      }
      else
      {
        v8 = v11(a3, v10);
      }
      v9 = _mm_add_epi32(_mm_loadl_epi64((const __m128i *)v8), _mm_loadl_epi64((const __m128i *)(v8 + 8)));
      sub_29B610(a1, &v13, _mm_srai_epi32(_mm_sub_epi32(v9, _mm_cmpgt_epi32((__m128i)0LL, v9)), 1u).m128i_i64[0]);
      if ( v13 )
      {
        *(_QWORD *)&v14 = 0;
        qfree(v13, (const char *)&v13);
      }
      ++v4;
    }
    while ( v4 != &(*a2)[(_QWORD)a2[1]] );
  }
  return v15 - __readfsqword(0x28u);
}
