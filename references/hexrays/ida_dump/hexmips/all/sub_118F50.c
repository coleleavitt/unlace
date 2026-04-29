unsigned __int64 __fastcall sub_118F50(__int64 a1, __int64 a2, const char *a3, _QWORD *a4, _DWORD *a5)
{
  size_t v9; // rax
  __int64 v10; // r12
  size_t v11; // r15
  __int64 v12; // rax
  __int64 v13; // rdi
  __m128i v14; // xmm1
  __m128 v15; // xmm0
  __int64 v16; // rax
  void *v18; // [rsp+10h] [rbp-58h] BYREF
  __m128i v19; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v20; // [rsp+28h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  if ( *a5 != 2 )
  {
    if ( !under_debugger )
      sub_37E160(51499);
    BUG();
  }
  sub_118BA0(a1);
  v18 = nullptr;
  v19 = 0;
  if ( a3 )
  {
    v9 = strlen(a3);
    v10 = v9 + 1;
    v11 = v9;
    v18 = (void *)qvector_reserve(&v18, 0, v9 + 1, 1);
    v19.m128i_i64[0] = v10;
    memmove(v18, a3, v11);
    *((_BYTE *)v18 + v11) = 0;
  }
  *(_BYTE *)a1 = 15;
  *(_DWORD *)(a1 + 4) = get_tinfo_size(0, *a4, 0);
  v12 = qalloc_or_throw(56);
  *(_DWORD *)v12 = 0;
  v13 = v12;
  *(_QWORD *)(v12 + 8) = 0;
  v14 = _mm_loadu_si128(&v19);
  *(_QWORD *)(v12 + 48) = 0;
  v15 = _mm_loadh_ps((const double *)&v18);
  v19 = 0;
  *(__m128 *)(v12 + 16) = v15;
  *(__m128i *)(v12 + 32) = v14;
  v16 = *a4;
  *a4 = 0;
  *(_QWORD *)(v13 + 48) = v16;
  *(_QWORD *)(a1 + 8) = v13;
  v18 = nullptr;
  copy_argloc(v13, a5);
  if ( v18 )
  {
    v19.m128i_i64[0] = 0;
    qfree(v18);
  }
  return v20 - __readfsqword(0x28u);
}
