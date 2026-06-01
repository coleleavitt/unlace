__int64 __fastcall sub_1353F10(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  _BYTE *v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rbp
  __int64 v10; // r14
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // r15
  __m128i v14; // xmm0
  __int64 v15; // r13
  __int64 v16; // rdx
  _QWORD *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rsi
  int *v20; // r15
  __int64 v21; // r13
  signed __int64 v22; // rbp
  _QWORD *v23; // r14
  __m128i v24; // xmm0
  __int64 v25; // r12
  _BYTE *v26; // rax
  _BYTE *v27; // rsi
  signed __int64 v28; // rbp
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rsi
  __m128i src; // [rsp+8h] [rbp-60h] BYREF
  __m128i v34; // [rsp+18h] [rbp-50h] BYREF
  __int64 v35; // [rsp+28h] [rbp-40h]

  v34.m128i_i64[1] = a1;
  src.m128i_i64[1] = a3;
  v35 = a4;
  v5 = operator new(0x58u);
  v6 = *(_BYTE **)(a2 + 32);
  v7 = v5;
  v8 = (__int64)&v6[*(_QWORD *)(a2 + 40)];
  *(_QWORD *)(v5 + 32) = v5 + 48;
  sub_12FAA20((_QWORD *)(v5 + 32), v6, v8);
  v9 = *(_QWORD *)(a2 + 72);
  v10 = *(_QWORD *)(a2 + 64);
  *(_OWORD *)(v7 + 64) = 0;
  *(_QWORD *)(v7 + 80) = 0;
  v11 = v9 - v10;
  if ( (v9 - v10) >> 5 )
  {
    if ( (unsigned __int64)((v9 - v10) >> 5) > 0x7FFFFFFFFFFFFFFLL )
LABEL_36:
      std::__throw_bad_alloc();
    v12 = operator new(v9 - v10);
    v9 = *(_QWORD *)(a2 + 72);
    v10 = *(_QWORD *)(a2 + 64);
    src.m128i_i64[0] = v12;
  }
  else
  {
    src.m128i_i64[0] = 0;
  }
  v13 = src.m128i_i64[0];
  v34.m128i_i64[0] = src.m128i_i64[0];
  v14 = _mm_loadl_epi64(&v34);
  *(_QWORD *)(v7 + 80) = src.m128i_i64[0] + v11;
  *(__m128i *)(v7 + 64) = _mm_unpacklo_epi64(v14, v14);
  if ( v9 != v10 )
  {
    v15 = v10;
    do
    {
      v16 = v13 + 16;
      v17 = (_QWORD *)v13;
      v15 += 32;
      v13 += 32;
      *(_QWORD *)(v13 - 32) = v16;
      sub_12FAA20(v17, *(_BYTE **)(v15 - 32), *(_QWORD *)(v15 - 32) + *(_QWORD *)(v15 - 24));
    }
    while ( v9 != v15 );
    src.m128i_i64[0] += ((v9 - 32 - v10) & 0xFFFFFFFFFFFFFFE0LL) + 32;
  }
  v18 = src.m128i_i64[0];
  v19 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 24) = 0;
  *(_QWORD *)(v7 + 72) = v18;
  *(_DWORD *)v7 = *(_DWORD *)a2;
  *(_QWORD *)(v7 + 8) = src.m128i_i64[1];
  if ( v19 )
    *(_QWORD *)(v7 + 24) = sub_1353F10(v34.m128i_i64[1], v19, v7, v35);
  v20 = *(int **)(a2 + 16);
  v34.m128i_i64[0] = v7;
  if ( v20 )
  {
    while ( 1 )
    {
      v21 = operator new(0x58u);
      *(_QWORD *)(v21 + 32) = v21 + 48;
      sub_12FAA20((_QWORD *)(v21 + 32), *((_BYTE **)v20 + 4), *((_QWORD *)v20 + 4) + *((_QWORD *)v20 + 5));
      v22 = *((_QWORD *)v20 + 9) - *((_QWORD *)v20 + 8);
      *(_OWORD *)(v21 + 64) = 0;
      *(_QWORD *)(v21 + 80) = 0;
      if ( v22 >> 5 )
      {
        if ( (unsigned __int64)(v22 >> 5) > 0x7FFFFFFFFFFFFFFLL )
          goto LABEL_36;
        v23 = (_QWORD *)operator new(v22);
      }
      else
      {
        v23 = nullptr;
      }
      src.m128i_i64[0] = (__int64)v23;
      v24 = _mm_loadl_epi64(&src);
      *(_QWORD *)(v21 + 80) = (char *)v23 + v22;
      *(__m128i *)(v21 + 64) = _mm_unpacklo_epi64(v24, v24);
      v25 = *((_QWORD *)v20 + 8);
      src.m128i_i64[1] = *((_QWORD *)v20 + 9);
      if ( src.m128i_i64[1] != v25 )
        break;
LABEL_27:
      *(_QWORD *)(v21 + 72) = v23;
      v29 = *v20;
      *(_QWORD *)(v21 + 16) = 0;
      *(_DWORD *)v21 = v29;
      v30 = v34.m128i_i64[0];
      *(_QWORD *)(v21 + 24) = 0;
      *(_QWORD *)(v30 + 16) = v21;
      *(_QWORD *)(v21 + 8) = v30;
      v31 = *((_QWORD *)v20 + 3);
      if ( v31 )
      {
        *(_QWORD *)(v21 + 24) = sub_1353F10(v34.m128i_i64[1], v31, v21, v35);
        v20 = *((int **)v20 + 2);
        if ( !v20 )
          return v7;
      }
      else
      {
        v20 = *((int **)v20 + 2);
        if ( !v20 )
          return v7;
      }
      v34.m128i_i64[0] = v21;
    }
    while ( 1 )
    {
      *v23 = v23 + 2;
      v27 = *(_BYTE **)v25;
      v28 = *(_QWORD *)(v25 + 8);
      if ( v28 + *(_QWORD *)v25 && !v27 )
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      if ( (unsigned __int64)v28 > 0xF )
        break;
      v26 = (_BYTE *)*v23;
      if ( v28 == 1 )
      {
        *v26 = *v27;
        v26 = (_BYTE *)*v23;
      }
      else if ( v28 )
      {
        goto LABEL_26;
      }
LABEL_17:
      v23[1] = v28;
      v25 += 32;
      v23 += 4;
      v26[v28] = 0;
      if ( src.m128i_i64[1] == v25 )
        goto LABEL_27;
    }
    if ( v28 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    src.m128i_i64[0] = *(_QWORD *)v25;
    v26 = (_BYTE *)operator new(v28 + 1);
    v23[2] = v28;
    v27 = (_BYTE *)src.m128i_i64[0];
    *v23 = v26;
LABEL_26:
    memcpy(v26, v27, v28);
    v26 = (_BYTE *)*v23;
    goto LABEL_17;
  }
  return v7;
}
