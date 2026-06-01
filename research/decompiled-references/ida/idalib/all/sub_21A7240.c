void __fastcall sub_21A7240(__int64 a1, const void *a2, const __m128i *a3)
{
  size_t v4; // r8
  void *v5; // rbp
  size_t v6; // rcx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r14
  char *v10; // rax
  char *v11; // rbx
  char *v12; // r14
  __m128i v13; // xmm1
  __m128i v14; // xmm2
  char *v15; // r10
  size_t v16; // r15
  char *v17; // [rsp+8h] [rbp-50h] BYREF
  size_t n; // [rsp+10h] [rbp-48h]
  void *dest; // [rsp+18h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(void **)a1;
  v6 = (size_t)a2 - *(_QWORD *)a1;
  v7 = (__int64)(v4 - *(_QWORD *)a1) >> 5;
  if ( !v7 )
  {
    v8 = 1;
    goto LABEL_16;
  }
  v8 = 2 * v7;
  v9 = -32;
  if ( v7 > 2 * v7 || v8 > 0x7FFFFFFFFFFFFFFLL )
    goto LABEL_3;
  v12 = nullptr;
  v11 = nullptr;
  if ( v8 )
  {
LABEL_16:
    v9 = 32 * v8;
LABEL_3:
    n = (size_t)a2 - *(_QWORD *)a1;
    v17 = (char *)v4;
    v10 = (char *)operator new(v9);
    v6 = n;
    v4 = (size_t)v17;
    v11 = v10;
    v12 = &v10[v9];
  }
  v13 = _mm_loadu_si128(a3);
  v14 = _mm_loadu_si128(a3 + 1);
  v15 = &v11[v6 + 32];
  v16 = v4 - (_QWORD)a2;
  *(__m128i *)&v11[v6] = v13;
  *(__m128i *)&v11[v6 + 16] = v14;
  v17 = &v15[v4 - (_QWORD)a2];
  if ( a2 != v5 )
  {
    dest = &v11[v6 + 32];
    n = v4;
    memmove(v11, v5, v6);
    v15 = (char *)dest;
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
    memcpy(v15, a2, v16);
  if ( v5 )
    goto LABEL_9;
LABEL_8:
  n = (size_t)v11;
  *(_QWORD *)(a1 + 16) = v12;
  *(__m128 *)a1 = _mm_loadh_ps((const double *)&v17);
}
