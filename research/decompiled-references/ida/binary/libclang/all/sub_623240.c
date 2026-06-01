void __fastcall sub_623240(__int64 a1, const __m128i *a2)
{
  void *v2; // r14
  signed __int64 v3; // r13
  __int64 v4; // rax
  __int64 v5; // rdx
  bool v6; // cf
  unsigned __int64 v7; // rax
  __int64 v8; // rbx
  unsigned __int64 v9; // rbx
  char *v10; // rax
  char *v11; // rbp
  __int64 v12; // r15
  unsigned __int64 v13; // rsi

  v2 = *(void **)a1;
  v3 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
  v4 = v3 >> 4;
  if ( v3 >> 4 == 0x7FFFFFFFFFFFFFFLL )
    std::__throw_length_error("vector::_M_realloc_append");
  v5 = 1;
  if ( v4 )
    v5 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 4;
  v6 = __CFADD__(v5, v4);
  v7 = v5 + v4;
  if ( v6 )
  {
    v9 = 0x7FFFFFFFFFFFFFF0LL;
  }
  else
  {
    v8 = 0x7FFFFFFFFFFFFFFLL;
    if ( v7 <= 0x7FFFFFFFFFFFFFFLL )
      v8 = v7;
    v9 = 16 * v8;
  }
  v10 = (char *)operator new(v9);
  v11 = v10;
  v12 = (__int64)&v10[v3 + 16];
  *(__m128i *)&v10[v3] = _mm_loadu_si128(a2);
  if ( v3 > 0 )
  {
    memcpy(v10, v2, v3);
    v13 = *(_QWORD *)(a1 + 16) - (_QWORD)v2;
LABEL_12:
    operator delete(v2, v13);
    goto LABEL_10;
  }
  if ( v2 )
  {
    v13 = *(_QWORD *)(a1 + 16) - (_QWORD)v2;
    goto LABEL_12;
  }
LABEL_10:
  *(_QWORD *)a1 = v11;
  *(_QWORD *)(a1 + 8) = v12;
  *(_QWORD *)(a1 + 16) = &v11[v9];
}

