__int64 __fastcall sub_4DFAD0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  char v9; // al
  char v11; // al
  unsigned __int64 v12; // rdx
  void *v13; // r13
  __m128i si128; // xmm0
  void *v15; // rdi
  char v17; // dl
  unsigned int v18; // r13d
  unsigned __int64 v19; // rsi
  __int64 v20; // rdx
  int v21; // eax
  unsigned __int64 v22; // rax
  unsigned __int32 v23; // ebp
  __m128i *v24; // rsi
  __int64 v25; // rax
  __m128i *v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rax
  size_t n[2]; // [rsp+0h] [rbp-98h] BYREF
  __m128i v34; // [rsp+10h] [rbp-88h] BYREF
  __int64 v35; // [rsp+20h] [rbp-78h]
  __int64 v36; // [rsp+28h] [rbp-70h]
  __int64 v37; // [rsp+30h] [rbp-68h]
  __int64 v38; // [rsp+38h] [rbp-60h]
  __m128i v39; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v40; // [rsp+58h] [rbp-40h]

  v9 = *(_BYTE *)(a2 + 24);
  v40 = __readfsqword(0x28u);
  if ( !v9 )
  {
    v11 = *(_BYTE *)(a3 + 24);
    if ( (unsigned __int8)(v11 - 10) <= 1u || (unsigned __int8)(v11 - 12) <= 1u )
    {
      if ( *(_DWORD *)(a1 + 80) == -1 )
        goto LABEL_30;
      if ( *(_QWORD *)(a1 + 8) == -1 )
      {
        v12 = *(_QWORD *)(a3 + 8);
        v13 = nullptr;
        si128 = _mm_unpacklo_epi64((__m128i)v12, (__m128i)v12);
        if ( v12 )
        {
          v34 = si128;
          n[0] = 16 * v12;
          v13 = (void *)qalloc_or_throw(16 * v12, (const char *)a2);
          memcpy(v13, *(const void **)a3, n[0]);
          si128 = _mm_load_si128(&v34);
        }
        v15 = *(void **)a2;
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
        v38 = a5;
        v37 = a4;
        *(_QWORD *)(a1 + 8) = a4;
        *(_DWORD *)(a1 + 16) = v38;
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
      if ( *(_DWORD *)(a1 + 80) == -1 )
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
      v18 = *(_DWORD *)(a1 + 80);
      if ( v18 == -1 )
        goto LABEL_30;
      goto LABEL_22;
    }
  }
  if ( (unsigned __int8)(v17 - 12) > 1u )
    goto LABEL_8;
  v18 = *(_DWORD *)(a1 + 80);
  if ( v18 == -1 )
    goto LABEL_30;
  if ( (unsigned __int8)(v9 - 10) <= 1u )
  {
LABEL_22:
    v19 = *(_QWORD *)a2;
    *(_BYTE *)(a2 + 24) = 7;
    v39.m128i_i64[0] = 0xFFFFFFFFLL;
    v20 = *(_QWORD *)(a2 + 16);
    *(_QWORD *)(a2 + 8) = 0;
    v39.m128i_i64[1] = v18;
    if ( (unsigned __int64)&v39 >= v19 && (unsigned __int64)&v39 < v19 + 16 * v20 )
    {
      if ( !v20 )
      {
        v29 = qvector_reserve(a2, v19, 1, 16);
        v30 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)a2 = v29;
        v19 = v29 + 16 * v30;
      }
      *(_DWORD *)(v19 + 8) = v18;
      *(_QWORD *)v19 = 0xFFFFFFFFLL;
      *(_DWORD *)(v19 + 12) = 0;
    }
    else
    {
      if ( !v20 )
      {
        v27 = qvector_reserve(a2, v19, 1, 16);
        v28 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)a2 = v27;
        v19 = v27 + 16 * v28;
      }
      *(__m128i *)v19 = _mm_load_si128(&v39);
    }
    ++*(_QWORD *)(a2 + 8);
    *(_QWORD *)(a1 + 8) = -1;
    *(_DWORD *)(a1 + 16) = 0;
    return 0;
  }
LABEL_33:
  v21 = reg_value_info_vals_union_0((void **)a2, (char ***)a3);
  if ( v21 == 2 )
  {
    v36 = a5;
    v35 = a4;
    *(_QWORD *)(a1 + 8) = a4;
    *(_DWORD *)(a1 + 16) = v36;
    return 1;
  }
  if ( v21 != 3 )
    return 1;
  *(_QWORD *)(a1 + 8) = -1;
  *(_DWORD *)(a1 + 16) = 0;
  v22 = *(int *)(*(_QWORD *)(qword_2CA1698 + 1480) + 640LL);
  if ( !(_DWORD)v22 || v22 >= *(_QWORD *)(a2 + 8) )
    return 1;
  v23 = *(_DWORD *)(a1 + 80);
  v24 = *(__m128i **)a2;
  v39.m128i_i64[0] = 0xFFFFFFFFLL;
  v25 = *(_QWORD *)(a2 + 16);
  *(_BYTE *)(a2 + 24) = 9;
  *(_QWORD *)(a2 + 8) = 0;
  v39.m128i_i64[1] = v23;
  if ( &v39 < v24 || &v39 >= &v24[v25] )
  {
    if ( !v25 )
    {
      v31 = qvector_reserve(a2, v24, 1, 16);
      *(_QWORD *)a2 = v31;
      v24 = (__m128i *)(16LL * *(_QWORD *)(a2 + 8) + v31);
    }
    *v24 = _mm_load_si128(&v39);
  }
  else
  {
    if ( !v25 )
    {
      v32 = qvector_reserve(a2, v24, 1, 16);
      *(_QWORD *)a2 = v32;
      v24 = (__m128i *)v32;
    }
    v26 = &v24[*(_QWORD *)(a2 + 8)];
    v26->m128i_i64[0] = 0xFFFFFFFFLL;
    v26->m128i_i32[2] = v23;
    v26->m128i_i32[3] = 0;
  }
  ++*(_QWORD *)(a2 + 8);
  return 0;
}

