__m128i *__fastcall sub_7EA210(__m128i *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r13
  _DWORD *v5; // rax
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  char v9; // dl
  __m128i v10; // xmm0
  int v11; // eax
  int v12; // eax
  __m128i v14; // xmm0
  __m128i v15; // xmm1
  unsigned __int64 v16; // rsi
  char v17; // cl
  int v18; // eax
  unsigned __int64 v19; // rax
  int v20; // eax
  unsigned __int64 v21; // r14
  unsigned __int64 v22; // r15
  unsigned __int64 v23; // rax
  bool v24; // zf
  unsigned __int64 v25; // rax
  __m128i v26; // xmm1
  __m128i v27; // xmm0
  __m128i v28; // xmm1
  __m128i v29; // xmm6
  unsigned __int64 v30; // rt0
  unsigned __int64 v31; // rt1

  v3 = a3;
  v4 = *(_QWORD *)(a2 + 24);
  if ( *(_WORD *)(a3 + 4) || (v5 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL)) == nullptr || *v5 )
  {
    ++*(_DWORD *)(a3 + 8);
    v6 = *(_QWORD *)(v4 + 856);
    v7 = *(_QWORD *)(v4 + 864);
    v8 = v6;
    goto LABEL_5;
  }
  if ( v5[1] == 8 && *(_DWORD *)(a3 + 24) == 1 )
  {
    v16 = *(_QWORD *)(a3 + 32);
    if ( *(_WORD *)(v16 + 4) || (v5 = *(_DWORD **)(*(_QWORD *)(v16 + 16) + 24LL)) == nullptr )
    {
      ++*(_DWORD *)(v16 + 8);
      v8 = *(_QWORD *)(v4 + 856);
      v3 = v16;
      v6 = *(_QWORD *)(v4 + 864);
      goto LABEL_30;
    }
    v17 = 0;
    v9 = 1;
  }
  else
  {
    v16 = a3;
    v17 = 1;
    v9 = 0;
  }
  if ( !*v5 )
  {
    v18 = v5[1];
    if ( v18 == 3 )
    {
      if ( *(_DWORD *)(v16 + 24) == 2 )
      {
        v3 = *(_QWORD *)(v16 + 32);
        if ( v3 )
          ++*(_DWORD *)(v3 + 8);
        v6 = *(_QWORD *)(v16 + 40);
        if ( v6 )
        {
          v21 = *(_QWORD *)(v4 + 856);
          ++*(_DWORD *)(v6 + 8);
          v9 = v17;
          if ( v3 != v21 )
            goto LABEL_43;
          if ( !v17 )
          {
            v29 = (__m128i)v4;
            v28 = (__m128i)v6;
            v10 = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v4);
            goto LABEL_86;
          }
LABEL_79:
          v25 = v6;
          v6 = v3;
          v3 = v25;
          goto LABEL_45;
        }
        v21 = *(_QWORD *)(v4 + 856);
        v9 = v17;
        if ( v3 != v21 )
          goto LABEL_43;
LABEL_67:
        if ( !v9 )
        {
          v6 = v3;
          v10 = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v4);
          *a1 = _mm_unpacklo_epi64((__m128i)0LL, (__m128i)v4);
          goto LABEL_48;
        }
        v6 = v3;
        v3 = 0;
        goto LABEL_45;
      }
    }
    else if ( (*(_BYTE *)(v16 + 30) & 1) == 0 && v18 == 2 && *(_DWORD *)(v16 + 24) == 2 )
    {
      v3 = *(_QWORD *)(v16 + 32);
      v6 = *(_QWORD *)(v16 + 40);
      if ( v3 )
        ++*(_DWORD *)(v3 + 8);
      if ( v6 )
      {
        v21 = *(_QWORD *)(v4 + 856);
        ++*(_DWORD *)(v6 + 8);
        if ( v3 != v21 )
        {
LABEL_43:
          if ( *(_QWORD *)(v4 + 864) == v3 )
          {
            if ( !v9 )
            {
              v31 = v6;
              v6 = v3;
              v3 = v31;
              goto LABEL_47;
            }
            v23 = v6;
            v6 = v3;
            v3 = v23;
            goto LABEL_52;
          }
          if ( !v9 )
            goto LABEL_47;
LABEL_45:
          v22 = *(_QWORD *)(v4 + 864);
          if ( v22 != v6 )
          {
            v9 = 1;
            if ( v21 != v6 )
              goto LABEL_47;
            if ( v22 )
            {
              ++*(_DWORD *)(v22 + 8);
              if ( v21 )
              {
LABEL_59:
                v24 = (*(_DWORD *)(v6 + 8))-- == 1;
                if ( v24 )
                  sub_15D7BC0(v4, v6);
                v6 = v22;
                v9 = 0;
                goto LABEL_47;
              }
              v21 = v22;
              v27 = _mm_unpacklo_epi64((__m128i)v22, (__m128i)v4);
              *a1 = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v4);
              if ( !v3 )
              {
                a1[1] = v27;
                v3 = v22;
                v9 = 0;
                goto LABEL_35;
              }
LABEL_81:
              ++*(_DWORD *)(v3 + 8);
              v6 = v21;
              v9 = 0;
              a1[1] = v27;
              goto LABEL_10;
            }
            if ( v21 )
              goto LABEL_59;
            v14 = _mm_unpacklo_epi64((__m128i)0LL, (__m128i)v4);
            v15 = v14;
            *a1 = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v4);
            if ( !v3 )
            {
LABEL_64:
              a1[1] = v14;
              v9 = 0;
              goto LABEL_65;
            }
LABEL_21:
            v11 = *(_DWORD *)(v3 + 8);
            *(_DWORD *)(v3 + 8) = v11 + 1;
            v9 = 0;
            a1[1] = v15;
            goto LABEL_22;
          }
LABEL_52:
          if ( v21 )
          {
            ++*(_DWORD *)(v21 + 8);
            if ( !v6 )
            {
              v26 = _mm_unpacklo_epi64((__m128i)v21, (__m128i)v4);
              v27 = v26;
              *a1 = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v4);
              if ( !v3 )
              {
                a1[1] = v26;
                v3 = v21;
                v9 = 0;
                goto LABEL_35;
              }
              goto LABEL_81;
            }
          }
          else if ( !v6 )
          {
            v14 = _mm_unpacklo_epi64((__m128i)0LL, (__m128i)v4);
            v15 = v14;
            *a1 = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v4);
            if ( !v3 )
              goto LABEL_64;
            goto LABEL_21;
          }
          v24 = (*(_DWORD *)(v6 + 8))-- == 1;
          if ( v24 )
            sub_15D7BC0(v4, v6);
          v6 = v21;
          v9 = 0;
LABEL_47:
          v10 = _mm_unpacklo_epi64((__m128i)v6, (__m128i)v4);
          *a1 = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v4);
          if ( v3 )
            goto LABEL_9;
LABEL_48:
          a1[1] = v10;
          if ( v6 )
          {
            v3 = v6;
            goto LABEL_35;
          }
LABEL_65:
          a1[2].m128i_i8[0] = v9;
          return a1;
        }
        if ( !v9 )
        {
          v28 = (__m128i)v6;
          v10 = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v4);
          v29 = (__m128i)v4;
LABEL_86:
          v30 = v3;
          v3 = v6;
          v6 = v30;
          *a1 = _mm_unpacklo_epi64(v28, v29);
          goto LABEL_9;
        }
        goto LABEL_79;
      }
      v21 = *(_QWORD *)(v4 + 856);
      if ( v3 != v21 )
        goto LABEL_43;
      goto LABEL_67;
    }
  }
  ++*(_DWORD *)(v16 + 8);
  v8 = *(_QWORD *)(v4 + 856);
  v3 = v16;
  v6 = *(_QWORD *)(v4 + 864);
  if ( v9 )
  {
LABEL_30:
    v7 = v6;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 864);
  v6 = *(_QWORD *)(v4 + 856);
LABEL_5:
  if ( !v6 )
  {
    if ( v8 == v3 )
    {
      *a1 = _mm_unpacklo_epi64((__m128i)0LL, (__m128i)v4);
      a1[1] = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v4);
    }
    else
    {
      v10 = _mm_unpacklo_epi64((__m128i)0LL, (__m128i)v4);
      if ( v7 != v3 )
      {
        v9 = 0;
        *a1 = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v4);
        goto LABEL_9;
      }
      *a1 = v10;
      a1[1] = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v4);
    }
    v9 = 0;
LABEL_35:
    v20 = *(_DWORD *)(v3 + 8);
    a1[2].m128i_i8[0] = v9;
    *(_DWORD *)(v3 + 8) = v20;
    if ( v20 )
      return a1;
    goto LABEL_14;
  }
  ++*(_DWORD *)(v6 + 8);
  if ( v8 == v3 || v7 == v3 )
  {
    *a1 = _mm_unpacklo_epi64((__m128i)v6, (__m128i)v4);
    ++*(_DWORD *)(v6 + 8);
    a1[1] = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v4);
    v19 = v6;
    v9 = 0;
    v6 = v3;
    v3 = v19;
    goto LABEL_10;
  }
  v9 = 0;
  v10 = _mm_unpacklo_epi64((__m128i)v6, (__m128i)v4);
  *a1 = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v4);
LABEL_9:
  v11 = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(v3 + 8) = v11 + 1;
  a1[1] = v10;
  if ( !v6 )
  {
LABEL_22:
    a1[2].m128i_i8[0] = v9;
    goto LABEL_13;
  }
LABEL_10:
  v12 = *(_DWORD *)(v6 + 8);
  a1[2].m128i_i8[0] = v9;
  *(_DWORD *)(v6 + 8) = v12;
  if ( !v12 )
    sub_15D7BC0(v4, v6);
  v11 = *(_DWORD *)(v3 + 8) - 1;
LABEL_13:
  *(_DWORD *)(v3 + 8) = v11;
  if ( !v11 )
LABEL_14:
    sub_15D7BC0(v4, v3);
  return a1;
}

