__int64 __fastcall sub_87A620(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r14
  int v10; // ecx
  __m128i *v11; // r13
  unsigned int v12; // edi
  int v13; // r8d
  size_t v14; // r14
  __m128i *v15; // r12
  __int64 v16; // rdi
  __m128i *v17; // rsi
  __m128i *i; // rax
  __int64 v19; // rdx
  unsigned int v20; // r15d
  __m128i *v21; // rax
  __m128i *v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  __m128i *v26; // rax
  __m128i *v27; // r9
  __m128i *v28; // rdi
  unsigned int v29; // r8d
  const __m128i *v30; // rcx
  const __m128i *v31; // r10
  __int64 v32; // rax
  __m128i *v33; // rdx
  __m128i *v34; // rax

  v4 = sub_15D1F10(a2);
  if ( !(unsigned __int8)sub_1673B10(a1 + 128, v4) )
    return 1;
  if ( !*(_BYTE *)(sub_7E4EB0(a1) + 438) )
    return 1;
  if ( !*(_BYTE *)(sub_7E4EB0(a1) + 429) )
    return 1;
  v6 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( !v6 )
    return 1;
  v7 = *(unsigned int *)(v6 + 4);
  if ( (unsigned int)v7 > 0x36 )
    return 1;
  v8 = 0x700000003E0050LL;
  if ( !_bittest64(&v8, v7) || sub_87A140(a1, a2) )
    return 1;
  v9 = *(unsigned int *)(a1 + 744);
  v10 = *(_DWORD *)(a2 + 12);
  v11 = *(__m128i **)(a1 + 736);
  v12 = v9 - 1;
  v13 = *(_DWORD *)(a1 + 744);
  v14 = 16 * v9;
  v15 = &v11[v14 / 0x10];
  v16 = 16LL * (v10 & v12);
  v17 = &v11[(unsigned __int64)v16 / 0x10];
  if ( v16 != v14 )
  {
    for ( i = &v11[(unsigned __int64)v16 / 0x10]; v15 != i; ++i )
    {
      v19 = i->m128i_i64[0];
      if ( i->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v19 + 12) == v10 && a2 == v19 )
          return i->m128i_u32[2];
      }
      else if ( !v19 )
      {
        goto LABEL_16;
      }
    }
  }
  if ( v11 != v17 )
  {
    for ( i = *(__m128i **)(a1 + 736); v17 != i; ++i )
    {
      v25 = i->m128i_i64[0];
      if ( i->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v25 + 12) == v10 && a2 == v25 )
          return i->m128i_u32[2];
      }
      else if ( !v25 )
      {
        break;
      }
    }
  }
LABEL_16:
  v20 = 2 * v13;
  if ( 3 * v13 < (unsigned int)(4 * (*(_DWORD *)(a1 + 748) + *(_DWORD *)(a1 + 752))) )
  {
    v14 = 16LL * v20;
    v26 = (__m128i *)sub_186B270(v14);
    v11 = v26;
    v27 = &v26[v14 / 0x10];
    if ( v20 )
    {
      do
      {
        v26->m128i_i64[0] = 0;
        ++v26;
        v26[-1].m128i_i32[2] = 0;
      }
      while ( v26 != v27 );
    }
    v28 = *(__m128i **)(a1 + 736);
    v29 = v20 - 1;
    v15 = v27;
    v30 = v28;
    v31 = &v28[*(unsigned int *)(a1 + 744)];
    if ( v28 != v31 )
    {
      do
      {
        if ( v30->m128i_i64[0] > 1uLL )
        {
          v32 = 16LL * (*(_DWORD *)(v30->m128i_i64[0] + 12) & v29);
          v33 = &v11[(unsigned __int64)v32 / 0x10];
          if ( v14 == v32 )
          {
LABEL_53:
            if ( v11 == v33 )
            {
LABEL_65:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v34 = v11;
            while ( v34->m128i_i64[0] )
            {
              if ( v33 == ++v34 )
                goto LABEL_65;
            }
          }
          else
          {
            v34 = &v11[(unsigned __int64)v32 / 0x10];
            while ( v34->m128i_i64[0] )
            {
              if ( v27 == ++v34 )
                goto LABEL_53;
            }
          }
          *v34 = _mm_loadu_si128(v30);
        }
        ++v30;
      }
      while ( v31 != v30 );
      v28 = *(__m128i **)(a1 + 736);
    }
    if ( v28 )
    {
      sub_186B220(v28);
      v29 = v20 - 1;
    }
    v10 = *(_DWORD *)(a2 + 12);
    *(_QWORD *)(a1 + 736) = v11;
    *(_DWORD *)(a1 + 744) = v20;
    *(_DWORD *)(a1 + 752) = 0;
    v16 = 16LL * (v10 & v29);
    v17 = &v11[(unsigned __int64)v16 / 0x10];
  }
  if ( v16 != v14 )
  {
    v21 = v17;
    v22 = nullptr;
    while ( 1 )
    {
      v23 = v21->m128i_i64[0];
      if ( v21->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v23 + 12) == v10 && a2 == v23 )
        {
          v21->m128i_i64[0] = a2;
          v21->m128i_i32[2] = 0;
          return 0;
        }
      }
      else
      {
        if ( !v23 )
        {
          if ( v22 )
            goto LABEL_63;
          v22 = v21;
          goto LABEL_64;
        }
        v22 = v21;
      }
      if ( ++v21 == v15 )
        goto LABEL_28;
    }
  }
  v22 = nullptr;
  while ( 1 )
  {
LABEL_28:
    if ( v11 == v17 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v24 = v11->m128i_i64[0];
    if ( v11->m128i_i64[0] <= 1uLL )
      break;
    if ( *(_DWORD *)(v24 + 12) == v10 && a2 == v24 )
    {
      v11->m128i_i64[0] = a2;
      v11->m128i_i32[2] = 0;
      return 0;
    }
LABEL_27:
    ++v11;
  }
  if ( v24 )
  {
    v22 = v11;
    goto LABEL_27;
  }
  if ( v22 )
LABEL_63:
    --*(_DWORD *)(a1 + 752);
  else
    v22 = v11;
LABEL_64:
  v22->m128i_i64[0] = a2;
  v22->m128i_i32[2] = 0;
  ++*(_DWORD *)(a1 + 748);
  return 0;
}

