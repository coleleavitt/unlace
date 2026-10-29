_BYTE *__fastcall sub_F70C50(const __m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 (*v8)(); // rcx
  __int64 v9; // rax
  unsigned __int64 *v11; // rsi
  void *v12; // rdi
  unsigned int *v13; // rsi
  _BYTE *result; // rax
  size_t v15; // r12
  const void *v16; // rsi

  v8 = *(__int64 (**)())(a2 + 40);
  if ( (a1->m128i_i8[1] & 8) == 0 )
  {
    v9 = *(_QWORD *)(a2 + 16);
    v11 = (unsigned __int64 *)(v9 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v9 & 4) != 0 )
      sub_F707E0(a1, *v11, a3, v8, a5, a6);
    else
      sub_F707E0(a1, (unsigned __int64)v11, a3, v8, a5, a6);
    v8 = *(__int64 (**)())(a2 + 40);
  }
  if ( ((unsigned __int8)v8 & 7) != 0 )
    BUG();
  v12 = *(void **)(a3 + 32);
  v13 = *(unsigned int **)(((unsigned __int64)v8 & 0xFFFFFFFFFFFFFFF8LL) + 16);
  result = (_BYTE *)(*(_QWORD *)(a3 + 24) - (_QWORD)v12);
  v15 = *v13;
  v16 = v13 + 4;
  if ( v15 > (unsigned __int64)result )
  {
    result = (_BYTE *)sub_227BF10(a3, v16, v15);
    if ( a1[1].m128i_i8[4] )
      return result;
  }
  else if ( v15 )
  {
    result = memcpy(v12, v16, v15);
    *(_QWORD *)(a3 + 32) += v15;
    if ( a1[1].m128i_i8[4] )
      return result;
  }
  else if ( a1[1].m128i_i8[4] )
  {
    return result;
  }
  result = *(_BYTE **)(a3 + 32);
  if ( (unsigned __int64)result >= *(_QWORD *)(a3 + 24) )
    return (_BYTE *)sub_227BA10(a3, 32);
  *(_QWORD *)(a3 + 32) = result + 1;
  *result = 32;
  return result;
}
