unsigned __int64 __fastcall sub_11D150(__int64 a1, __int64 a2, const char *a3, __int64 *a4, _DWORD *a5)
{
  size_t v8; // rax
  __int64 v9; // r12
  size_t v10; // r15
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdi
  __m128i v16; // xmm1
  __m128 v17; // xmm0
  __int64 v18; // rax
  void *v20; // [rsp+10h] [rbp-58h] BYREF
  __m128i v21; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v22; // [rsp+28h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  if ( *a5 != 2 )
  {
    if ( !under_debugger )
      sub_383060(51499);
    BUG();
  }
  sub_11CDA0(a1);
  v20 = nullptr;
  v21 = 0;
  if ( a3 )
  {
    v8 = strlen(a3);
    v9 = v8 + 1;
    v10 = v8;
    v20 = (void *)qvector_reserve((__int64)&v20, 0, v8 + 1, 1);
    v21.m128i_i64[0] = v9;
    memmove(v20, a3, v10);
    *((_BYTE *)v20 + v10) = 0;
  }
  *(_BYTE *)a1 = 15;
  v11 = *a4;
  *(_DWORD *)(a1 + 4) = get_tinfo_size();
  v14 = qalloc_or_throw(56, v11, v12, v13);
  *(_DWORD *)v14 = 0;
  v15 = v14;
  *(_QWORD *)(v14 + 8) = 0;
  v16 = _mm_loadu_si128(&v21);
  *(_QWORD *)(v14 + 48) = 0;
  v17 = _mm_loadh_ps((const double *)&v20);
  v21 = 0;
  *(__m128 *)(v14 + 16) = v17;
  *(__m128i *)(v14 + 32) = v16;
  v18 = *a4;
  *a4 = 0;
  *(_QWORD *)(v15 + 48) = v18;
  *(_QWORD *)(a1 + 8) = v15;
  v20 = nullptr;
  copy_argloc();
  if ( v20 )
  {
    v21.m128i_i64[0] = 0;
    qfree((__int64)v20);
  }
  return v22 - __readfsqword(0x28u);
}
