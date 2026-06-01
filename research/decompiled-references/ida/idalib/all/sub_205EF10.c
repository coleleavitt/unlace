__int64 __fastcall sub_205EF10(__int64 n, __int64 a2)
{
  unsigned int v2; // ebp
  char v4; // al
  __m128i *v5; // rsi
  char **v6; // rdi
  __m128i v7; // xmm0
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __m128i v10; // xmm0
  __int64 result; // rax
  void *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // r12
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 *v22; // rax
  __int64 v23; // r14
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r13
  char *v29; // rax
  __int64 v30; // r14
  int v31; // edx
  _BYTE *v32; // rax
  _DWORD *v33; // rcx
  __int64 *v34; // rax
  _QWORD *v35; // rdx
  __m128i v36; // xmm0
  __m128i *v37; // rax
  __m128i v38; // xmm0
  __m128i *v39; // rcx
  _DWORD *v40; // rax
  __int64 v41; // rax
  __int64 v42; // rcx
  __m128i v43; // [rsp+0h] [rbp-148h] BYREF
  void *ptr; // [rsp+10h] [rbp-138h] BYREF
  __int64 v45; // [rsp+18h] [rbp-130h]
  _BYTE v46[296]; // [rsp+20h] [rbp-128h] BYREF

  v2 = n;
  v43.m128i_i64[1] = n;
  if ( BYTE4(n) )
  {
    if ( !sub_20510E0((char *)a2, a2) )
    {
      if ( byte_2CFCC18 && *(_BYTE *)a2 == 5 )
        goto LABEL_42;
      if ( byte_2CFCB58 && *(_BYTE *)a2 == 6 )
        goto LABEL_30;
    }
    v17 = (_QWORD *)sub_20C5270(*(_QWORD *)(a2 + 8), v43.m128i_i64[1], v13, v14, v15, v16);
    if ( sub_20510E0((char *)a2, v43.m128i_i64[1]) )
      return sub_2056DA0(v17, v43.m128i_i64[1], v18, v19, v20, v21);
    if ( *(_BYTE *)a2 == 1 )
      return sub_2058290(v17, v43.m128i_i64[1], v18, v19, v20, v21);
    if ( *(_BYTE *)a2 <= 1u )
      return sub_2057E60(v17, v43.m128i_i64[1], v18, v19, v20, v21);
    v23 = sub_20C3200(*v17);
    v28 = sub_2058290(v17, v43.m128i_i64[1], v24, v25, v26, v27);
    v29 = (char *)sub_205FB40(v23, 0, 0);
    v30 = sub_205EC40(v28, a2, v29, 0);
    ptr = v46;
    v45 = 0x800000000LL;
    if ( (unsigned int)n > 8uLL )
    {
      sub_2237220(&ptr, v46, (unsigned int)n, 4);
      v40 = memset(ptr, 0, 4LL * (unsigned int)n);
      LODWORD(v45) = n;
      v33 = v40;
    }
    else
    {
      if ( (_DWORD)n )
      {
        v31 = 4 * n;
        v32 = v46;
        if ( (unsigned int)(4 * n) >= 8 )
        {
          LODWORD(v41) = 0;
          do
          {
            v42 = (unsigned int)v41;
            v41 = (unsigned int)(v41 + 8);
            *(_QWORD *)&v46[v42] = 0;
          }
          while ( (unsigned int)v41 < (v31 & 0xFFFFFFF8) );
          v32 = &v46[v41];
        }
        if ( (v31 & 4) != 0 )
          *(_DWORD *)v32 = 0;
      }
      LODWORD(v45) = n;
      v33 = v46;
    }
    result = sub_205EDD0(v30, v28, v33, (unsigned int)n, nullptr);
    v12 = ptr;
    if ( ptr != v46 )
      goto LABEL_16;
    return result;
  }
  if ( !sub_20510E0((char *)a2, a2) )
  {
    if ( !byte_2CFCD98 || *(_BYTE *)a2 != 5 )
    {
      if ( !byte_2CFCCD8 )
        goto LABEL_3;
      v4 = *(_BYTE *)a2;
      if ( *(_BYTE *)a2 != 6 )
        goto LABEL_4;
LABEL_30:
      v22 = (__int64 *)sub_20CB0D0(a2);
      return sub_2056560(v22, v43.m128i_i64[1], (_QWORD *)(a2 + 24));
    }
LABEL_42:
    v34 = (__int64 *)sub_20CB0D0(a2);
    return sub_20555B0(v34, v43.m128i_i64[1], a2 + 24);
  }
LABEL_3:
  v4 = *(_BYTE *)a2;
LABEL_4:
  if ( (unsigned __int8)(v4 - 5) <= 1u && sub_2051E40(*(_QWORD *)(a2 + 8)) )
    return sub_205F2E0((unsigned int)n);
  v5 = (__m128i *)v46;
  v45 = 0x2000000000LL;
  ptr = v46;
  if ( (unsigned int)n > 0x20uLL )
  {
    sub_2237220(&ptr, v46, (unsigned int)n, 8);
    v35 = ptr;
    if ( (_DWORD)n == 1 )
      goto LABEL_48;
    v43.m128i_i64[0] = a2;
    v36 = _mm_loadl_epi64(&v43);
    v37 = (__m128i *)ptr;
    v38 = _mm_unpacklo_epi64(v36, v36);
    v39 = (__m128i *)((char *)ptr + 16 * ((unsigned __int64)(unsigned int)n >> 1));
    do
      *v37++ = v38;
    while ( v39 != v37 );
    v35 += (unsigned int)n & 0xFFFFFFFE;
    if ( (unsigned int)n != (unsigned __int64)((unsigned int)n & 0xFFFFFFFE) )
LABEL_48:
      *v35 = a2;
    LODWORD(v45) = n;
    v6 = (char **)ptr;
  }
  else
  {
    v6 = (char **)v46;
    if ( v2 )
    {
      if ( v2 == 1 )
        goto LABEL_12;
      v43.m128i_i64[0] = a2;
      v7 = _mm_loadl_epi64(&v43);
      v8 = 0;
      v9 = (((unsigned __int64)v2 - 2) >> 1) + 1;
      v10 = _mm_unpacklo_epi64(v7, v7);
      do
      {
        ++v8;
        *v5++ = v10;
      }
      while ( v8 < v9 );
      v5 = (__m128i *)&v46[16 * v9];
      if ( v2 != 2 * v9 )
LABEL_12:
        v5->m128i_i64[0] = a2;
      v6 = (char **)ptr;
    }
    LODWORD(v45) = v2;
  }
  result = sub_205D2F0(v6, v2);
  v12 = ptr;
  if ( ptr != v46 )
  {
LABEL_16:
    v43.m128i_i64[0] = result;
    free(v12);
    return v43.m128i_i64[0];
  }
  return result;
}
