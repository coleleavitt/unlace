__int64 __fastcall sub_4F68C0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  char v9; // al
  char v11; // al
  unsigned __int64 v12; // rax
  void *v13; // r15
  __m128i si128; // xmm0
  __m128i *v15; // rdi
  char v17; // dl
  __int64 v18; // r15
  unsigned __int64 v19; // rsi
  __int64 v20; // rax
  __m128i v21; // xmm0
  int v22; // eax
  unsigned __int64 v23; // rax
  __int64 v24; // rbp
  __m128i *v25; // rsi
  __int64 v26; // rax
  __int8 *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rax
  size_t n[2]; // [rsp+0h] [rbp-78h] BYREF
  __m128i v37; // [rsp+10h] [rbp-68h] BYREF
  __m128i v38; // [rsp+20h] [rbp-58h] BYREF
  __int64 v39; // [rsp+30h] [rbp-48h]
  void *ptr; // [rsp+38h] [rbp-40h]

  v9 = *(_BYTE *)(a2 + 24);
  ptr = (void *)__readfsqword(0x28u);
  if ( !v9 )
  {
    v11 = *(_BYTE *)(a3 + 24);
    if ( (unsigned __int8)(v11 - 10) <= 1u || (unsigned __int8)(v11 - 12) <= 1u )
    {
      if ( a1[10] == -1 )
        goto LABEL_30;
      if ( a1[1] == -1 )
      {
        v12 = *(_QWORD *)(a3 + 8);
        v13 = nullptr;
        si128 = _mm_unpacklo_epi64((__m128i)v12, (__m128i)v12);
        if ( v12 )
        {
          v37 = si128;
          n[0] = 24 * v12;
          v13 = (void *)qalloc_or_throw(24 * v12);
          memcpy(v13, *(const void **)a3, n[0]);
          si128 = _mm_load_si128(&v37);
        }
        v15 = *(__m128i **)a2;
        if ( *(_QWORD *)a2 )
        {
          *(_QWORD *)(a2 + 8) = 0;
          *(__m128i *)n = si128;
          qfree(v15);
          si128 = _mm_load_si128((const __m128i *)n);
        }
        *(_QWORD *)a2 = v13;
        *(__m128i *)(a2 + 8) = si128;
        *(_BYTE *)(a2 + 24) = *(_BYTE *)(a3 + 24);
        a1[1] = a4;
        a1[2] = a5;
        return 1;
      }
      if ( !under_debugger )
        interr(2903);
LABEL_52:
      BUG();
    }
LABEL_8:
    if ( !under_debugger )
      interr(2902);
    goto LABEL_52;
  }
  if ( (unsigned __int8)(v9 - 10) <= 1u )
  {
    v17 = *(_BYTE *)(a3 + 24);
    if ( (unsigned __int8)(v17 - 10) <= 1u )
    {
      if ( a1[10] == -1 )
      {
LABEL_30:
        if ( !under_debugger )
          interr(2904);
        goto LABEL_52;
      }
      goto LABEL_33;
    }
  }
  else
  {
    if ( (unsigned __int8)(v9 - 12) > 1u )
    {
      if ( !under_debugger )
        interr(2901);
      goto LABEL_52;
    }
    v17 = *(_BYTE *)(a3 + 24);
    if ( (unsigned __int8)(v17 - 10) <= 1u )
    {
      v18 = a1[10];
      if ( v18 == -1 )
        goto LABEL_30;
      goto LABEL_22;
    }
  }
  if ( (unsigned __int8)(v17 - 12) > 1u )
    goto LABEL_8;
  v18 = a1[10];
  if ( v18 == -1 )
    goto LABEL_30;
  if ( (unsigned __int8)(v9 - 10) <= 1u )
  {
LABEL_22:
    v19 = *(_QWORD *)a2;
    *(_BYTE *)(a2 + 24) = 7;
    *(_QWORD *)(a2 + 8) = 0;
    v20 = *(_QWORD *)(a2 + 16);
    v38.m128i_i64[0] = -1;
    v38.m128i_i64[1] = v18;
    LODWORD(v39) = 0;
    if ( (unsigned __int64)&v38 >= v19 && (unsigned __int64)&v38 < v19 + 24 * v20 )
    {
      if ( !v20 )
      {
        v30 = qvector_reserve(a2, v19, 1, 24);
        v31 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)a2 = v30;
        v19 = v30 + 24 * v31;
      }
      *(_QWORD *)v19 = -1;
      *(_QWORD *)(v19 + 8) = v18;
      *(_DWORD *)(v19 + 16) = 0;
    }
    else
    {
      if ( !v20 )
      {
        v28 = qvector_reserve(a2, v19, 1, 24);
        v29 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)a2 = v28;
        v19 = v28 + 24 * v29;
      }
      v21 = _mm_load_si128(&v38);
      *(_QWORD *)(v19 + 16) = v39;
      *(__m128i *)v19 = v21;
    }
    ++*(_QWORD *)(a2 + 8);
    a1[1] = -1;
    a1[2] = 0;
    return 0;
  }
LABEL_33:
  v22 = reg_value_info_vals_union_0((const __m128i **)a2, a3);
  if ( v22 == 2 )
  {
    a1[1] = a4;
    a1[2] = a5;
    return 1;
  }
  if ( v22 != 3 )
    return 1;
  a1[1] = -1;
  a1[2] = 0;
  v23 = *(int *)(*(_QWORD *)(qword_2CCB598 + 1672) + 648LL);
  if ( !(_DWORD)v23 || v23 >= *(_QWORD *)(a2 + 8) )
    return 1;
  v24 = a1[10];
  v25 = *(__m128i **)a2;
  *(_BYTE *)(a2 + 24) = 9;
  *(_QWORD *)(a2 + 8) = 0;
  v26 = *(_QWORD *)(a2 + 16);
  v38.m128i_i64[0] = -1;
  v38.m128i_i64[1] = v24;
  LODWORD(v39) = 0;
  if ( &v38 < v25 || &v38 >= (__m128i *)((char *)v25 + 24 * v26) )
  {
    if ( !v26 )
    {
      v33 = qvector_reserve(a2, v25, 1, 24);
      v34 = *(_QWORD *)(a2 + 8);
      *(_QWORD *)a2 = v33;
      v25 = (__m128i *)(v33 + 24 * v34);
    }
    v32 = v39;
    *v25 = _mm_load_si128(&v38);
    v25[1].m128i_i64[0] = v32;
  }
  else
  {
    if ( !v26 )
    {
      v35 = qvector_reserve(a2, v25, 1, 24);
      *(_QWORD *)a2 = v35;
      v25 = (__m128i *)v35;
    }
    v27 = &v25->m128i_i8[24 * *(_QWORD *)(a2 + 8)];
    *(_QWORD *)v27 = -1;
    *((_QWORD *)v27 + 1) = v24;
    *((_DWORD *)v27 + 4) = 0;
  }
  ++*(_QWORD *)(a2 + 8);
  return 0;
}
