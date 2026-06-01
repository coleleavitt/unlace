__int64 __fastcall sub_FBAE40(__int64 a1, __int64 *a2)
{
  __int64 v3; // rsi
  unsigned __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  size_t v7; // r13
  __m128i *v8; // rax
  size_t v9; // r12
  __int64 v10; // rdx
  _BYTE *v11; // r15
  unsigned int *v12; // rsi
  __int64 v13; // rdx
  size_t v15; // r14
  unsigned __int64 v16; // rdi
  _BYTE *v17; // rax
  __m128i *v18; // rcx
  _BYTE *v19; // r12
  signed __int64 v20; // rax
  size_t v21; // rbp
  __int64 v22; // rax
  __m128i *v23; // [rsp+8h] [rbp-60h]
  void *src; // [rsp+10h] [rbp-58h] BYREF
  size_t n; // [rsp+18h] [rbp-50h]
  __m128i v26[4]; // [rsp+20h] [rbp-48h] BYREF

  v3 = *a2;
  if ( !v3 )
  {
    *(_QWORD *)a1 = a1 + 16;
    strcpy((char *)(a1 + 16), "<null selector>");
    *(_QWORD *)(a1 + 8) = 15;
    return a1;
  }
  v4 = (v3 >> 2) & 1;
  if ( ((v3 >> 2) & 1) != 0 )
  {
    sub_FBACA0((_QWORD *)a1, (_DWORD *)(v3 & 0xFFFFFFFFFFFFFFF8LL));
    return a1;
  }
  if ( (v3 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    v4 = v3 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v3 & 2) == 0 || (v3 & 3) != 2 && *(_DWORD *)(v3 & 0xFFFFFFFFFFFFFFF8LL) == 3 )
  {
    v12 = *(unsigned int **)(v4 + 16);
    v13 = *v12;
    *(_QWORD *)a1 = a1 + 16;
    sub_FB9F10((_QWORD *)a1, (_BYTE *)v12 + 16, (__int64)v12 + v13 + 16);
    return a1;
  }
  if ( !v4 )
  {
    v19 = (_BYTE *)(a1 + 16);
    *(_QWORD *)a1 = a1 + 16;
    v20 = j__strlen(":");
    v21 = v20;
    if ( (unsigned __int64)v20 > 0xF )
    {
      if ( v20 < 0 )
        goto LABEL_46;
      v22 = operator new(v20 + 1);
      *(_QWORD *)(a1 + 16) = v21;
      v19 = (_BYTE *)v22;
      *(_QWORD *)a1 = v22;
    }
    else
    {
      if ( v20 == 1 )
      {
        *(_BYTE *)(a1 + 16) = 58;
LABEL_39:
        *(_QWORD *)(a1 + 8) = v21;
        v19[v21] = 0;
        return a1;
      }
      if ( !v20 )
        goto LABEL_39;
    }
    memcpy(v19, ":", v21);
    v19 = *(_BYTE **)a1;
    goto LABEL_39;
  }
  v5 = *(_QWORD *)(v4 + 16);
  if ( v5 == -16 )
  {
    v26[0].m128i_i8[0] = 0;
    v7 = 0;
    v9 = 1;
    v8 = v26;
    src = v26;
    goto LABEL_13;
  }
  v6 = (unsigned int)*(_QWORD *)v5;
  src = v26;
  sub_FB9F10(&src, (_BYTE *)(v5 + 16), v5 + 16 + v6);
  v7 = n;
  if ( n == 0x7FFFFFFFFFFFFFFFLL )
    std::__throw_length_error("basic_string::append");
  v8 = (__m128i *)src;
  v9 = n + 1;
  if ( src == v26 )
  {
    if ( v9 <= 0xF )
      goto LABEL_13;
    v10 = 15;
    goto LABEL_24;
  }
  v10 = v26[0].m128i_i64[0];
  if ( v9 > v26[0].m128i_i64[0] )
  {
LABEL_24:
    if ( (v9 & 0x8000000000000000LL) == 0LL )
    {
      v15 = 2 * v10;
      if ( v9 < 2 * v10 )
      {
        v16 = v15 + 1;
        if ( (v10 & 0x4000000000000000LL) != 0 )
        {
          v16 = 0x8000000000000000LL;
          v15 = 0x7FFFFFFFFFFFFFFFLL;
        }
      }
      else
      {
        v16 = n + 2;
        v15 = n + 1;
      }
      v17 = (_BYTE *)operator new(v16);
      v18 = (__m128i *)src;
      v11 = v17;
      if ( v7 )
      {
        if ( v7 == 1 )
        {
          *v17 = *(_BYTE *)src;
        }
        else
        {
          v23 = (__m128i *)src;
          memcpy(v17, src, v7);
          v18 = v23;
        }
      }
      v11[v7] = 58;
      if ( v18 != v26 )
        operator delete(v18);
      src = v11;
      v26[0].m128i_i64[0] = v15;
      goto LABEL_14;
    }
LABEL_46:
    std::__throw_length_error("basic_string::_M_create");
  }
LABEL_13:
  v8->m128i_i8[v7] = 58;
  v11 = src;
LABEL_14:
  n = v9;
  v11[v9] = 0;
  *(_QWORD *)a1 = a1 + 16;
  if ( src == v26 )
  {
    *(__m128i *)(a1 + 16) = _mm_load_si128(v26);
  }
  else
  {
    *(_QWORD *)a1 = src;
    *(_QWORD *)(a1 + 16) = v26[0].m128i_i64[0];
  }
  *(_QWORD *)(a1 + 8) = n;
  return a1;
}

