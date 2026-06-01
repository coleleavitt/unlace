unsigned __int64 __fastcall sub_113D7E0(__int64 a1, _QWORD *a2, _QWORD *a3, int a4)
{
  unsigned __int64 v5; // rax
  __int64 v6; // rcx
  _QWORD *v7; // r13
  _QWORD *v8; // rbx
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned __int64 result; // rax
  _QWORD *v13; // r13
  _QWORD *v14; // rbx
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rbx
  size_t v18; // rax
  __int64 v19; // r15
  __int64 v20; // rax
  __int64 v21; // rbx
  bool v22; // zf
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  _QWORD *v25; // rbx
  _QWORD *v26; // r13
  __m128 v27; // xmm0
  __int64 v28; // rbp
  __m128i v29; // xmm0
  const char **v30; // rbp
  const char **i; // r15
  const char *v32; // r14
  _QWORD *v33; // rbx
  __int64 v34; // rbp
  _QWORD *v35; // [rsp+8h] [rbp-60h] BYREF
  __m128 v36; // [rsp+10h] [rbp-58h] BYREF
  __int64 v37; // [rsp+20h] [rbp-48h]

  LODWORD(v35) = a4;
  v36.m128_i32[0] = 2323;
  v5 = sub_21B6DA0(a1, &v36, 1);
  v6 = *(_QWORD *)(a1 + 8);
  v7 = (_QWORD *)(v6 + 8LL * (unsigned int)v5);
  v8 = (_QWORD *)(v6 + 8 * HIDWORD(v5));
  if ( v7 != v8 )
  {
    while ( !*v7 || !(unsigned __int8)sub_21B9810(*v7, 2323) )
    {
      if ( v8 == ++v7 )
        goto LABEL_5;
    }
    if ( v7 != v8 )
    {
      do
      {
        v15 = *v7;
        v16 = *(_QWORD *)(*v7 + 16LL);
        if ( !v16 )
          v16 = *v7;
        ++v7;
        *(_BYTE *)(v16 + 44) |= 1u;
        if ( v7 == v8 )
          break;
        while ( !*v7 || !(unsigned __int8)sub_21B9810(*v7, 2323) )
        {
          if ( v8 == ++v7 )
            goto LABEL_18;
        }
      }
      while ( v7 != v8 );
LABEL_18:
      v17 = **(_QWORD **)(v15 + 48);
      v18 = 0;
      if ( v17 )
        v18 = strlen(**(const char ***)(v15 + 48));
      *a3 = v17;
      a3[1] = v18;
    }
  }
LABEL_5:
  v36.m128_i32[0] = 2260;
  v9 = sub_21B6DA0(a1, &v36, 1);
  v10 = *(_QWORD *)(a1 + 8);
  v11 = (unsigned int)v9;
  result = HIDWORD(v9);
  v13 = (_QWORD *)(v10 + 8 * v11);
  v14 = (_QWORD *)(v10 + 8 * result);
  if ( v13 == v14 )
    goto LABEL_9;
  while ( 1 )
  {
    if ( *v13 )
    {
      result = sub_21B9810(*v13, 2260);
      if ( (_BYTE)result )
        break;
    }
    if ( v14 == ++v13 )
      goto LABEL_9;
  }
  if ( v14 == v13 )
  {
LABEL_9:
    if ( !(_BYTE)v35 )
      return result;
    goto LABEL_33;
  }
  do
  {
    v19 = *v13;
    v20 = *(_QWORD *)(*v13 + 16LL);
    if ( !v20 )
      v20 = *v13;
    ++v13;
    *(_BYTE *)(v20 + 44) |= 1u;
    if ( v13 == v14 )
      break;
    while ( !*v13 || !(unsigned __int8)sub_21B9810(*v13, 2260) )
    {
      if ( v14 == ++v13 )
        goto LABEL_30;
    }
  }
  while ( v14 != v13 );
LABEL_30:
  v21 = **(_QWORD **)(v19 + 48);
  result = 0;
  if ( v21 )
    result = strlen(**(const char ***)(v19 + 48));
  v22 = (_BYTE)v35 == 0;
  *a2 = v21;
  a2[1] = result;
  if ( !v22 )
  {
LABEL_33:
    v36.m128_u64[0] = 0xD9F00000D4BLL;
    v23 = sub_21B6DA0(a1, &v36, 2);
    v24 = *(_QWORD *)(a1 + 8);
    v37 = 0xD9F00000D4BLL;
    v25 = (_QWORD *)(v24 + 8LL * (unsigned int)v23);
    v26 = (_QWORD *)(v24 + 8 * HIDWORD(v23));
    v35 = v26;
    v27 = _mm_loadh_ps((const double *)&v35);
    v36 = v27;
    if ( v25 != v26 )
    {
      while ( 1 )
      {
        v28 = *v25;
        if ( *v25 )
        {
          if ( (unsigned __int8)sub_21B9810(*v25, 3403) || (unsigned __int8)sub_21B9810(v28, 3487) )
            break;
        }
        v36.m128_u64[0] = (unsigned __int64)++v25;
        if ( v26 == v25 )
        {
          v35 = v26;
          v29 = _mm_loadl_epi64((const __m128i *)&v35);
          v27 = (__m128)_mm_unpacklo_epi64(v29, v29);
          goto LABEL_39;
        }
      }
      v35 = v26;
      v27 = _mm_loadh_ps((const double *)&v35);
    }
LABEL_39:
    result = 0xD9F00000D4BLL;
    v36 = v27;
    v37 = 0xD9F00000D4BLL;
    while ( v25 != v26 )
    {
      v30 = *(const char ***)(*v25 + 48LL);
      result = *(unsigned int *)(*v25 + 56LL);
      for ( i = &v30[result]; i != v30; ++v30 )
      {
        v32 = *v30;
        if ( *v30 )
        {
          result = strlen(*v30);
          if ( result > 5 && *(_DWORD *)v32 == 1885564205 && *((_WORD *)v32 + 2) == 15733 )
          {
            *a3 = v32 + 6;
            a3[1] = result - 6;
          }
          if ( result > 6 && *(_DWORD *)v32 == 1918987565 && *((_WORD *)v32 + 2) == 26723 && v32[6] == 61 )
          {
            result -= 7LL;
            *a2 = v32 + 7;
            a2[1] = result;
          }
        }
      }
      v33 = v25 + 1;
      v36.m128_u64[0] = (unsigned __int64)v33;
      if ( v33 == v26 )
        break;
      while ( 1 )
      {
        v34 = *v33;
        if ( *v33 )
        {
          result = sub_21B9810(*v33, 3403);
          if ( (_BYTE)result )
            break;
          result = sub_21B9810(v34, 3487);
          if ( (_BYTE)result )
            break;
        }
        v36.m128_u64[0] = (unsigned __int64)++v33;
        if ( v26 == v33 )
          return result;
      }
      v25 = (_QWORD *)v36.m128_u64[0];
    }
  }
  return result;
}
