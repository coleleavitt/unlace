unsigned __int64 __fastcall sub_20BFD70(__int64 a1, void **a2, _QWORD *a3)
{
  void **v3; // rcx
  void **v6; // r13
  void **v7; // r15
  char *v8; // rsi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rbp
  __int64 v14; // r14
  __int64 v15; // rax
  void **v16; // rax
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // r9
  __int64 v19; // rdx
  __m128i v20; // xmm0
  unsigned __int64 v21; // rsi
  void **v22; // rax
  _QWORD *v23; // rsi
  void *v24; // rdx
  unsigned __int64 v25; // rsi
  __int64 v26; // rdx
  __m128i v27; // xmm2
  unsigned __int64 v28; // rcx
  _QWORD *v29; // rdx
  void *v30; // rax
  void **i; // rbx
  void *v32; // rdi
  unsigned __int64 result; // rax
  unsigned __int64 v34; // rdx
  void *v35; // rsi
  void **v36; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v37; // [rsp+8h] [rbp-50h]
  char *v38; // [rsp+10h] [rbp-48h]
  _QWORD *v39; // [rsp+18h] [rbp-40h]

  v3 = a2;
  v6 = *(void ***)(a1 + 8);
  v7 = *(void ***)a1;
  v8 = (char *)a2 - *(_QWORD *)a1;
  v9 = ((__int64)v6 - *(_QWORD *)a1) >> 3;
  if ( !v9 )
  {
    v10 = 1;
    goto LABEL_31;
  }
  v10 = 2 * v9;
  v11 = -8;
  if ( v9 > 2 * v9 || v10 > 0x1FFFFFFFFFFFFFFFLL )
    goto LABEL_3;
  if ( v10 )
  {
LABEL_31:
    v11 = 8 * v10;
LABEL_3:
    v39 = a3;
    v38 = v8;
    v36 = v3;
    v12 = operator new(v11);
    v3 = v36;
    v13 = v12;
    a3 = v39;
    v37 = v12 + v11;
    v14 = v12 + 8;
    goto LABEL_4;
  }
  v14 = 8;
  v13 = 0;
  v37 = 0;
LABEL_4:
  v15 = *a3;
  *a3 = 0;
  *(_QWORD *)&v8[v13] = v15;
  if ( a2 != v7 )
  {
    v16 = v7;
    v17 = (unsigned __int64)((char *)(a2 - 1) - (char *)v7) >> 3;
    if ( (v13 >= (unsigned __int64)(v7 + 2) || (unsigned __int64)v7 >= v13 + 16)
      && (unsigned __int64)((char *)(a2 - 1) - (char *)v7) > 0x10 )
    {
      v18 = v17 + 1;
      v19 = 0;
      do
      {
        v20 = _mm_loadu_si128((const __m128i *)&v7[v19]);
        *(_OWORD *)&v7[v19] = 0;
        *(__m128i *)(v13 + v19 * 8) = v20;
        v19 += 2;
      }
      while ( v19 != 2 * ((v17 + 1) >> 1) );
      v21 = v18 & 0xFFFFFFFFFFFFFFFELL;
      v22 = &v7[v21];
      v23 = (_QWORD *)(v13 + v21 * 8);
      if ( v18 != (v18 & 0xFFFFFFFFFFFFFFFELL) )
      {
        v24 = *v22;
        *v22 = nullptr;
        *v23 = v24;
      }
    }
    else
    {
      v34 = v13;
      do
      {
        v35 = *v16;
        *v16++ = nullptr;
        v34 += 8LL;
        *(_QWORD *)(v34 - 8) = v35;
      }
      while ( a2 != v16 );
    }
    v14 = v13 + 8 * v17 + 16;
  }
  if ( a2 != v6 )
  {
    v25 = ((unsigned __int64)((char *)v6 - (char *)a2 - 8) >> 3) + 1;
    if ( (char *)v6 - (char *)a2 == 8 )
    {
      v29 = (_QWORD *)v14;
    }
    else
    {
      v26 = 0;
      do
      {
        v27 = _mm_loadu_si128((const __m128i *)&a2[v26]);
        *(_OWORD *)&a2[v26] = 0;
        *(__m128i *)(v14 + v26 * 8) = v27;
        v26 += 2;
      }
      while ( v26 != 2 * (v25 >> 1) );
      v28 = v25 & 0xFFFFFFFFFFFFFFFELL;
      v29 = (_QWORD *)(v14 + v28 * 8);
      v3 = &a2[v28];
      if ( v25 == (v25 & 0xFFFFFFFFFFFFFFFELL) )
        goto LABEL_18;
    }
    v30 = *v3;
    *v3 = nullptr;
    *v29 = v30;
LABEL_18:
    v14 += 8 * v25;
  }
  for ( i = v7; i != v6; ++i )
  {
    while ( 1 )
    {
      v32 = *i;
      if ( !*i )
        break;
      ++i;
      operator delete(v32, 0x38u);
      if ( i == v6 )
        goto LABEL_22;
    }
  }
LABEL_22:
  if ( v7 )
    operator delete(v7);
  v36 = (void **)v14;
  result = v37;
  *(_QWORD *)(a1 + 16) = v37;
  *(__m128 *)a1 = _mm_loadh_ps((const double *)&v36);
  return result;
}
