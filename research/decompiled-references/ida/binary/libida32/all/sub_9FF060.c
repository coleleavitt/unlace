unsigned __int64 __fastcall sub_9FF060(__int64 a1, char *a2, _QWORD *a3)
{
  char *v5; // r15
  char *v6; // rbx
  char *v7; // rcx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // rbp
  unsigned __int64 v13; // r13
  char *v14; // rax
  __int64 v15; // rcx
  char *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  unsigned __int64 v22; // rcx
  __m128i v23; // xmm1
  char *i; // r14
  volatile signed __int32 *v25; // rdi
  unsigned __int64 result; // rax
  unsigned __int64 v27; // [rsp+8h] [rbp-50h] BYREF
  unsigned __int64 v28; // [rsp+10h] [rbp-48h]
  _QWORD *v29; // [rsp+18h] [rbp-40h]

  v5 = *(char **)(a1 + 8);
  v6 = *(char **)a1;
  v7 = &a2[-*(_QWORD *)a1];
  v8 = (__int64)&v5[-*(_QWORD *)a1] >> 4;
  if ( !v8 )
  {
    v9 = 1;
    goto LABEL_24;
  }
  v9 = 2 * v8;
  v10 = -16;
  if ( v8 > 2 * v8 || v9 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_3;
  if ( v9 )
  {
LABEL_24:
    v10 = 16 * v9;
LABEL_3:
    v29 = a3;
    v27 = (unsigned __int64)v7;
    v11 = operator new(v10);
    v7 = (char *)v27;
    a3 = v29;
    v12 = v11;
    v28 = v11 + v10;
    v13 = v11 + 16;
    goto LABEL_4;
  }
  v13 = 16;
  v12 = 0;
  v28 = 0;
LABEL_4:
  v14 = &v7[v12];
  *(_QWORD *)v14 = *a3;
  v15 = a3[1];
  *(_OWORD *)a3 = 0;
  *((_QWORD *)v14 + 1) = v15;
  if ( a2 != v6 )
  {
    v16 = v6;
    v17 = v12;
    do
    {
      v18 = *(_QWORD *)v16;
      *(_QWORD *)(v17 + 8) = 0;
      v16 += 16;
      v17 += 16;
      *(_QWORD *)(v17 - 16) = v18;
      v19 = *((_QWORD *)v16 - 1);
      *((_QWORD *)v16 - 1) = 0;
      *(_QWORD *)(v17 - 8) = v19;
      *((_QWORD *)v16 - 2) = 0;
    }
    while ( a2 != v16 );
    v13 = v12 + ((a2 - 16 - v6) & 0xFFFFFFFFFFFFFFF0LL) + 32;
  }
  if ( a2 != v5 )
  {
    v20 = 0;
    v21 = 0;
    v22 = ((unsigned __int64)(v5 - a2 - 16) >> 4) + 1;
    do
    {
      v23 = _mm_loadu_si128((const __m128i *)&a2[v21]);
      ++v20;
      *(_OWORD *)&a2[v21] = 0;
      *(__m128i *)(v13 + v21) = v23;
      v21 += 16;
    }
    while ( v20 < v22 );
    v13 += 16 * v22;
  }
  for ( i = v6; i != v5; i += 16 )
  {
    while ( 1 )
    {
      v25 = *((volatile signed __int32 **)i + 1);
      if ( !v25 )
        break;
      sub_4204D0(v25);
      i += 16;
      if ( v5 == i )
        goto LABEL_15;
    }
  }
LABEL_15:
  if ( v6 )
    operator delete(v6);
  v27 = v13;
  result = v28;
  *(_QWORD *)(a1 + 16) = v28;
  *(__m128 *)a1 = _mm_loadh_ps((const double *)&v27);
  return result;
}

