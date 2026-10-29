_DWORD *__fastcall sub_201A500(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, __int64 a6)
{
  void *v6; // rax
  _BYTE *v10; // r13
  signed __int64 v11; // rbp
  signed __int64 v12; // rbp
  char *v13; // rcx
  __m128i v14; // xmm0
  __int64 v15; // rbp
  _DWORD *v16; // rcx
  _DWORD *result; // rax
  int v18; // edx
  __int64 v19; // [rsp+0h] [rbp-48h] BYREF
  __m128i v20[4]; // [rsp+8h] [rbp-40h] BYREF

  v6 = (void *)(a1 + 16);
  *(_QWORD *)a1 = a1 + 16;
  v10 = *(_BYTE **)a2;
  v11 = *(_QWORD *)(a2 + 8);
  v19 = a5;
  if ( &v10[v11] && !v10 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)v11 > 0xF )
  {
    if ( v11 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v6 = (void *)operator new(v11 + 1);
    *(_QWORD *)(a1 + 16) = v11;
    *(_QWORD *)a1 = v6;
LABEL_20:
    memcpy(v6, v10, v11);
    v6 = *(void **)a1;
    goto LABEL_6;
  }
  if ( v11 == 1 )
  {
    *(_BYTE *)(a1 + 16) = *v10;
    goto LABEL_6;
  }
  if ( v11 )
    goto LABEL_20;
LABEL_6:
  *(_QWORD *)(a1 + 8) = v11;
  *((_BYTE *)v6 + v11) = 0;
  v12 = *(_QWORD *)(a6 + 8) - *(_QWORD *)a6;
  *(_DWORD *)(a1 + 32) = a3;
  *(_DWORD *)(a1 + 36) = a4;
  *(_OWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  if ( v12 >> 3 )
  {
    if ( (unsigned __int64)(v12 >> 3) > 0x1FFFFFFFFFFFFFFFLL )
      std::__throw_bad_alloc();
    v13 = (char *)operator new(v12);
  }
  else
  {
    v13 = nullptr;
  }
  v20[0].m128i_i64[0] = (__int64)v13;
  v14 = _mm_loadl_epi64(v20);
  *(_QWORD *)(a1 + 56) = &v13[v12];
  *(__m128i *)(a1 + 40) = _mm_unpacklo_epi64(v14, v14);
  v15 = *(_QWORD *)(a6 + 8) - *(_QWORD *)a6;
  if ( *(_QWORD *)(a6 + 8) != *(_QWORD *)a6 )
    v13 = (char *)memmove(v13, *(const void **)a6, *(_QWORD *)(a6 + 8) - *(_QWORD *)a6);
  *(_QWORD *)(a1 + 48) = &v13[v15];
  v16 = *(_DWORD **)(a6 + 8);
  result = *(_DWORD **)a6;
  if ( *(_DWORD **)a6 == v16 )
  {
    v20[0].m128i_i64[0] = 1;
  }
  else
  {
    v18 = 1;
    do
    {
      v18 *= *result;
      result += 2;
    }
    while ( v16 != result );
    result = (_DWORD *)v18;
    v20[0].m128i_i64[0] = v18;
  }
  *(__m128 *)(a1 + 64) = _mm_loadh_ps((const double *)&v19);
  return result;
}
