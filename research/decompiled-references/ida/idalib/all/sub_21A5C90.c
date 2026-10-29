void __fastcall sub_21A5C90(__int64 a1, const void *a2, const __m128i *a3)
{
  size_t v4; // r8
  void *v5; // rbp
  size_t v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r14
  char *v9; // rax
  char *v10; // rbx
  char *v11; // r14
  __int64 v12; // rax
  __m128i v13; // xmm1
  char *v14; // r10
  size_t v15; // r15
  char *v16; // [rsp+8h] [rbp-50h] BYREF
  size_t n; // [rsp+10h] [rbp-48h]
  void *dest; // [rsp+18h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(void **)a1;
  v6 = (size_t)a2 - *(_QWORD *)a1;
  if ( !(0xAAAAAAAAAAAAAAABLL * ((__int64)(v4 - *(_QWORD *)a1) >> 3)) )
  {
    v7 = 1;
    goto LABEL_16;
  }
  v7 = 0x5555555555555556LL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3);
  v8 = -16;
  if ( 0xAAAAAAAAAAAAAAABLL * ((__int64)(v4 - *(_QWORD *)a1) >> 3) > 0x5555555555555556LL
                                                                   * ((__int64)(v4 - *(_QWORD *)a1) >> 3)
    || v7 > 0xAAAAAAAAAAAAAAALL )
  {
    goto LABEL_3;
  }
  v11 = nullptr;
  v10 = nullptr;
  if ( v7 )
  {
LABEL_16:
    v8 = 24 * v7;
LABEL_3:
    n = (size_t)a2 - *(_QWORD *)a1;
    v16 = (char *)v4;
    v9 = (char *)operator new(v8);
    v6 = n;
    v4 = (size_t)v16;
    v10 = v9;
    v11 = &v9[v8];
  }
  v12 = a3[1].m128i_i64[0];
  v13 = _mm_loadu_si128(a3);
  v14 = &v10[v6 + 24];
  v15 = v4 - (_QWORD)a2;
  *(_QWORD *)&v10[v6 + 16] = v12;
  *(__m128i *)&v10[v6] = v13;
  v16 = &v14[v4 - (_QWORD)a2];
  if ( a2 != v5 )
  {
    dest = &v10[v6 + 24];
    n = v4;
    memmove(v10, v5, v6);
    v14 = (char *)dest;
    if ( a2 == (const void *)n )
    {
LABEL_9:
      operator delete(v5);
      goto LABEL_8;
    }
    goto LABEL_6;
  }
  if ( a2 != (const void *)v4 )
LABEL_6:
    memcpy(v14, a2, v15);
  if ( v5 )
    goto LABEL_9;
LABEL_8:
  n = (size_t)v10;
  *(_QWORD *)(a1 + 16) = v11;
  *(__m128 *)a1 = _mm_loadh_ps((const double *)&v16);
}
