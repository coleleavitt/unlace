void __fastcall sub_C9FC80(__int64 a1, const __m128i *a2, _QWORD *a3, _QWORD *a4)
{
  const __m128i *v5; // rbp
  __m128i *v6; // r13
  __int8 *v7; // r8
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r15
  __int64 v11; // rax
  unsigned __int64 v12; // rsi
  __int64 v13; // r12
  unsigned __int64 v14; // r15
  char *v15; // rax
  const __m128i *v16; // rdx
  __int64 v17; // rcx
  __m128i v18; // xmm1
  const __m128i *v19; // rdx
  unsigned __int64 v20; // rcx
  __m128i v21; // xmm2
  unsigned __int64 v22; // [rsp+8h] [rbp-50h] BYREF
  _QWORD *v23; // [rsp+10h] [rbp-48h]
  _QWORD *v24; // [rsp+18h] [rbp-40h]

  v5 = *(const __m128i **)(a1 + 8);
  v6 = *(__m128i **)a1;
  v7 = &a2->m128i_i8[-*(_QWORD *)a1];
  v8 = ((__int64)v5->m128i_i64 - *(_QWORD *)a1) >> 4;
  if ( !v8 )
  {
    v9 = 1;
    goto LABEL_19;
  }
  v9 = 2 * v8;
  v10 = -16;
  if ( v8 > 2 * v8 || v9 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_3;
  if ( v9 )
  {
LABEL_19:
    v10 = 16 * v9;
LABEL_3:
    v24 = a4;
    v23 = a3;
    v22 = (unsigned __int64)v7;
    v11 = operator new(v10);
    v7 = (__int8 *)v22;
    a3 = v23;
    a4 = v24;
    v12 = v11 + v10;
    v13 = v11;
    v14 = v11 + 16;
    goto LABEL_4;
  }
  v14 = 16;
  v12 = 0;
  v13 = 0;
LABEL_4:
  v15 = &v7[v13];
  *(_DWORD *)v15 = *a3;
  *((_QWORD *)v15 + 1) = *a4;
  if ( a2 != v6 )
  {
    v16 = v6;
    v17 = v13;
    do
    {
      v18 = _mm_loadu_si128(v16++);
      v17 += 16;
      *(__m128i *)(v17 - 16) = v18;
    }
    while ( a2 != v16 );
    v14 = v13 + (((char *)&a2[-1] - (char *)v6) & 0xFFFFFFFFFFFFFFF0LL) + 32;
  }
  if ( a2 != v5 )
  {
    v19 = a2;
    v20 = v14;
    do
    {
      v21 = _mm_loadu_si128(v19++);
      v20 += 16LL;
      *(__m128i *)(v20 - 16) = v21;
    }
    while ( v5 != v19 );
    v14 += (((char *)v5 - (char *)a2 - 16) & 0xFFFFFFFFFFFFFFF0LL) + 16;
  }
  if ( v6 )
  {
    v22 = v12;
    operator delete(v6);
  }
  v22 = v14;
  *(_QWORD *)(a1 + 16) = v12;
  *(__m128 *)a1 = _mm_loadh_ps((const double *)&v22);
}
