__int64 __fastcall sub_10525C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, size_t a5)
{
  _BYTE *v5; // r12
  __int64 v8; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rsi
  __int64 v12; // rcx
  unsigned __int64 v13; // r14
  __m128i v14; // xmm1
  __int64 v15; // rsi
  __m128i v16; // xmm0
  __m128i v17; // xmm2
  __int64 v18; // rcx
  signed __int64 v19; // r8
  _BYTE *v20; // rcx
  unsigned __int64 v22; // r13
  _BYTE *v23; // rax
  size_t v24; // r10
  _BYTE *v25; // rcx
  _BYTE *v26; // r11
  unsigned __int64 v27; // r9
  _BYTE *v28; // rdi
  __int64 v29; // rbp
  size_t i; // rsi
  _BYTE *v31; // rdi
  _BYTE *v32; // rdi
  size_t v33; // rsi
  size_t v34; // r8
  _BYTE *v35; // rcx
  _BYTE *v36; // rdi
  unsigned __int64 v37; // r14
  unsigned __int64 v38; // rax
  _BYTE *v39; // rdi
  unsigned __int64 v40; // r14
  unsigned __int64 v41; // rax
  _BYTE *v42; // rax
  __int64 v43; // [rsp+8h] [rbp-50h]
  _BYTE *v44; // [rsp+10h] [rbp-48h]
  unsigned __int64 v45; // [rsp+10h] [rbp-48h]
  unsigned __int64 v46; // [rsp+10h] [rbp-48h]
  _BYTE *v47; // [rsp+10h] [rbp-48h]
  size_t v48; // [rsp+18h] [rbp-40h]

  v5 = (_BYTE *)(a1 + 16);
  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 16) = 0;
  if ( a2 == a3 )
    return a1;
  v8 = a2;
  v10 = a3 - a2;
  v11 = a3 - 16 - a2;
  v12 = a5 * ((v10 >> 4) - 1);
  v13 = v11 >> 4;
  if ( v11 > 0x40 )
  {
    v14 = 0;
    v15 = a2 + (v11 & 0xFFFFFFFFFFFFFFE0LL);
    do
    {
      v16 = _mm_loadu_si128((const __m128i *)(v8 + 8));
      v17 = _mm_loadu_si128((const __m128i *)(v8 + 24));
      v8 += 32;
      v14 = _mm_add_epi64(v14, _mm_unpacklo_epi64(v16, v17));
    }
    while ( v8 != v15 );
    v12 += _mm_add_epi64(v14, _mm_srli_si128(v14, 8)).m128i_u64[0];
    v8 = a2 + 16 * (v13 & 0xFFFFFFFFFFFFFFFELL);
  }
  v18 = *(_QWORD *)(v8 + 8) + v12;
  if ( a3 != v8 + 16 )
  {
    v18 += *(_QWORD *)(v8 + 24);
    if ( a3 != v8 + 32 )
    {
      v18 += *(_QWORD *)(v8 + 40);
      if ( a3 != v8 + 48 )
      {
        v18 += *(_QWORD *)(v8 + 56);
        if ( a3 != v8 + 64 )
          v18 += *(_QWORD *)(v8 + 72);
      }
    }
  }
  v43 = a2 + 16 * (v13 + 1);
  if ( (unsigned __int64)v18 <= 0xF )
  {
    v19 = *(_QWORD *)(a2 + 8);
    v20 = *(_BYTE **)a2;
    if ( v19 < 0 )
      goto LABEL_13;
    v26 = (_BYTE *)(a1 + 16);
    v27 = *(_QWORD *)(a2 + 8);
    v24 = 0;
    v22 = 15;
    goto LABEL_26;
  }
  if ( v18 < 0 )
    std::__throw_length_error("basic_string::_M_create");
  v22 = 30;
  if ( (unsigned __int64)v18 >= 0x1E )
    v22 = v18;
  v23 = (_BYTE *)operator new(v22 + 1);
  v24 = *(_QWORD *)(a1 + 8);
  v25 = *(_BYTE **)a1;
  v26 = v23;
  if ( v24 )
  {
    if ( v24 != -1 )
    {
      v48 = *(_QWORD *)(a1 + 8);
      v47 = *(_BYTE **)a1;
      v42 = memcpy(v23, *(const void **)a1, v24 + 1);
      v24 = v48;
      v25 = v47;
      v26 = v42;
    }
    if ( v5 == v25 )
      goto LABEL_23;
  }
  else
  {
    *v23 = *v25;
    if ( v5 == v25 )
      goto LABEL_23;
  }
  v44 = v26;
  operator delete(v25);
  v24 = *(_QWORD *)(a1 + 8);
  v26 = v44;
LABEL_23:
  *(_QWORD *)a1 = v26;
  *(_QWORD *)(a1 + 16) = v22;
  v19 = *(_QWORD *)(a2 + 8);
  v20 = *(_BYTE **)a2;
  if ( v19 > 0x7FFFFFFFFFFFFFFFLL - v24 )
    goto LABEL_13;
  v27 = v19 + v24;
  if ( v5 == v26 )
    v22 = 15;
LABEL_26:
  if ( v22 < v27 )
  {
    v46 = v27;
    sub_998B30(a1, v24, 0, v20, v19);
    v26 = *(_BYTE **)a1;
    v27 = v46;
  }
  else if ( v19 )
  {
    v28 = &v26[v24];
    if ( v19 == 1 )
    {
      *v28 = *v20;
      v26 = *(_BYTE **)a1;
    }
    else
    {
      v45 = v27;
      memcpy(v28, v20, v19);
      v26 = *(_BYTE **)a1;
      v27 = v45;
    }
  }
  *(_QWORD *)(a1 + 8) = v27;
  v29 = a2 + 16;
  v26[v27] = 0;
  if ( v29 != v43 )
  {
    for ( i = *(_QWORD *)(a1 + 8); a5 <= 0x7FFFFFFFFFFFFFFFLL - i; i = *(_QWORD *)(a1 + 8) )
    {
      v32 = *(_BYTE **)a1;
      v40 = a5 + i;
      v41 = v5 == *(_BYTE **)a1 ? 15LL : *(_QWORD *)(a1 + 16);
      if ( v40 <= v41 )
      {
        if ( a5 )
        {
          v31 = &v32[i];
          if ( a5 == 1 )
            *v31 = 44;
          else
            memcpy(v31, ", ", a5);
          v32 = *(_BYTE **)a1;
        }
      }
      else
      {
        sub_998B30(a1, i, 0, ", ", a5);
        v32 = *(_BYTE **)a1;
      }
      *(_QWORD *)(a1 + 8) = v40;
      v32[v40] = 0;
      v33 = *(_QWORD *)(a1 + 8);
      v34 = *(_QWORD *)(v29 + 8);
      v35 = *(_BYTE **)v29;
      if ( v34 > 0x7FFFFFFFFFFFFFFFLL - v33 )
        break;
      v36 = *(_BYTE **)a1;
      v37 = v34 + v33;
      if ( v5 == *(_BYTE **)a1 )
        v38 = 15;
      else
        v38 = *(_QWORD *)(a1 + 16);
      if ( v37 > v38 )
      {
        sub_998B30(a1, v33, 0, v35, v34);
        v36 = *(_BYTE **)a1;
      }
      else if ( v34 )
      {
        v39 = &v36[v33];
        if ( v34 == 1 )
          *v39 = *v35;
        else
          memcpy(v39, *(const void **)v29, *(_QWORD *)(v29 + 8));
        v36 = *(_BYTE **)a1;
      }
      *(_QWORD *)(a1 + 8) = v37;
      v29 += 16;
      v36[v37] = 0;
      if ( v29 == v43 )
        return a1;
    }
LABEL_13:
    std::__throw_length_error("basic_string::append");
  }
  return a1;
}
