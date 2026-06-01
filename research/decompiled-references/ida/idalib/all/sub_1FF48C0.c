__int64 *__fastcall sub_1FF48C0(__int64 *a1, __int64 a2, _BYTE *a3, __int64 a4)
{
  __int64 v4; // rbp
  signed __int64 v6; // r13
  unsigned __int64 v7; // rax
  __m128i v8; // xmm0
  __int64 v9; // r8
  __int64 v10; // r15
  signed __int64 v11; // r13
  _QWORD *v12; // r14
  __m128i v13; // xmm0
  __int64 v14; // r11
  _BYTE *v15; // rsi
  signed __int64 v16; // r12
  __int64 v17; // r13
  _BYTE *v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // rdi
  __int64 v21; // r14
  _BYTE *v22; // rsi
  __int64 v23; // rbp
  __m128i *v24; // rsi
  _QWORD *v25; // rbp
  __m128i *v26; // rdi
  __int64 v27; // rdx
  __int64 v29; // rdx
  _BYTE *v30; // [rsp+0h] [rbp-80h] BYREF
  __m128i v31; // [rsp+8h] [rbp-78h] BYREF
  __int64 v32; // [rsp+18h] [rbp-68h]
  __int64 v33; // [rsp+20h] [rbp-60h]
  __m128i v34; // [rsp+28h] [rbp-58h] BYREF
  __m128i v35[4]; // [rsp+38h] [rbp-48h] BYREF

  v4 = 0;
  v6 = *(_QWORD *)(a2 + 16) - *(_QWORD *)(a2 + 8);
  *(_OWORD *)a1 = 0;
  v30 = a3;
  v33 = a4;
  v7 = 0x86BCA1AF286BCA1BLL * (v6 >> 3);
  a1[2] = 0;
  if ( v7 )
  {
    if ( v7 > 0x1AF286BCA1AF286LL )
LABEL_52:
      std::__throw_bad_alloc();
    v4 = operator new(v6);
  }
  v31.m128i_i64[0] = v4;
  v8 = _mm_loadl_epi64(&v31);
  a1[2] = v4 + v6;
  *(__m128i *)a1 = _mm_unpacklo_epi64(v8, v8);
  v9 = *(_QWORD *)(a2 + 8);
  v32 = *(_QWORD *)(a2 + 16);
  if ( v32 != v9 )
  {
    v10 = v9;
    while ( 1 )
    {
      *(_QWORD *)v4 = v4 + 16;
      sub_1FF3350((_QWORD *)v4, *(_BYTE **)v10, *(_QWORD *)v10 + *(_QWORD *)(v10 + 8));
      *(_QWORD *)(v4 + 32) = v4 + 48;
      sub_1FF3350((_QWORD *)(v4 + 32), *(_BYTE **)(v10 + 32), *(_QWORD *)(v10 + 32) + *(_QWORD *)(v10 + 40));
      v11 = *(_QWORD *)(v10 + 72) - *(_QWORD *)(v10 + 64);
      *(_OWORD *)(v4 + 64) = 0;
      *(_QWORD *)(v4 + 80) = 0;
      if ( v11 >> 5 )
      {
        if ( (unsigned __int64)(v11 >> 5) > 0x7FFFFFFFFFFFFFFLL )
          goto LABEL_52;
        v12 = (_QWORD *)operator new(v11);
      }
      else
      {
        v12 = nullptr;
      }
      v31.m128i_i64[0] = (__int64)v12;
      v13 = _mm_loadl_epi64(&v31);
      *(_QWORD *)(v4 + 80) = (char *)v12 + v11;
      *(__m128i *)(v4 + 64) = _mm_unpacklo_epi64(v13, v13);
      v14 = *(_QWORD *)(v10 + 64);
      v31.m128i_i64[0] = *(_QWORD *)(v10 + 72);
      if ( v31.m128i_i64[0] != v14 )
        break;
LABEL_20:
      *(_QWORD *)(v4 + 72) = v12;
      v10 += 152;
      *(_QWORD *)(v4 + 88) = v4 + 104;
      sub_1FF3350((_QWORD *)(v4 + 88), *(_BYTE **)(v10 - 64), *(_QWORD *)(v10 - 64) + *(_QWORD *)(v10 - 56));
      v19 = v4 + 136;
      v20 = (_QWORD *)(v4 + 120);
      v4 += 152;
      *(_QWORD *)(v4 - 32) = v19;
      sub_1FF3350(v20, *(_BYTE **)(v10 - 32), *(_QWORD *)(v10 - 32) + *(_QWORD *)(v10 - 24));
      if ( v32 == v10 )
      {
        v21 = *a1;
        goto LABEL_22;
      }
    }
    *v12 = v12 + 2;
    v15 = *(_BYTE **)v14;
    v16 = *(_QWORD *)(v14 + 8);
    if ( v16 + *(_QWORD *)v14 && !v15 )
LABEL_19:
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    v17 = v14 + 32;
    while ( (unsigned __int64)v16 <= 0xF )
    {
      v18 = (_BYTE *)*v12;
      if ( v16 == 1 )
      {
        *v18 = *v15;
        v18 = (_BYTE *)*v12;
      }
      else if ( v16 )
      {
        goto LABEL_38;
      }
LABEL_16:
      v12[1] = v16;
      v12 += 4;
      v18[v16] = 0;
      if ( v31.m128i_i64[0] == v17 )
        goto LABEL_20;
      v17 += 32;
      *v12 = v12 + 2;
      v15 = *(_BYTE **)(v17 - 32);
      v16 = *(_QWORD *)(v17 - 24);
      if ( &v15[v16] && !v15 )
        goto LABEL_19;
    }
    if ( v16 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v31.m128i_i64[1] = (__int64)v15;
    v18 = (_BYTE *)operator new(v16 + 1);
    v12[2] = v16;
    v15 = (_BYTE *)v31.m128i_i64[1];
    *v12 = v18;
LABEL_38:
    memcpy(v18, v15, v16);
    v18 = (_BYTE *)*v12;
    goto LABEL_16;
  }
  v21 = v4;
LABEL_22:
  v22 = v30;
  a1[1] = v4;
  v34.m128i_i64[0] = (__int64)v35;
  v23 = (__int64)&v22[v33];
  sub_1FF3100(&v34, v22, (__int64)&v22[v33]);
  v24 = *(__m128i **)(v21 + 72);
  if ( v24 == *(__m128i **)(v21 + 80) )
  {
    sub_A82970((void ***)(v21 + 64), v24, &v34);
    if ( (__m128i *)v34.m128i_i64[0] != v35 )
      operator delete((void *)v34.m128i_i64[0]);
  }
  else
  {
    v24->m128i_i64[0] = (__int64)v24[1].m128i_i64;
    if ( (__m128i *)v34.m128i_i64[0] == v35 )
    {
      v24[1] = _mm_load_si128(v35);
    }
    else
    {
      v24->m128i_i64[0] = v34.m128i_i64[0];
      v24[1].m128i_i64[0] = v35[0].m128i_i64[0];
    }
    v24->m128i_i64[1] = v34.m128i_i64[1];
    *(_QWORD *)(v21 + 72) += 32LL;
  }
  v34.m128i_i64[0] = (__int64)v35;
  sub_1FF3100(&v34, v30, v23);
  v25 = (_QWORD *)*a1;
  v26 = *(__m128i **)(*a1 + 32);
  if ( (__m128i *)v34.m128i_i64[0] == v35 )
  {
    v29 = v34.m128i_i64[1];
    if ( v34.m128i_i64[1] )
    {
      if ( v34.m128i_i64[1] == 1 )
        v26->m128i_i8[0] = v35[0].m128i_i8[0];
      else
        memcpy(v26, (const void *)v34.m128i_i64[0], v34.m128i_u64[1]);
      v29 = v34.m128i_i64[1];
      v26 = (__m128i *)v25[4];
    }
    v25[5] = v29;
    v26->m128i_i8[v29] = 0;
    v26 = (__m128i *)v34.m128i_i64[0];
  }
  else
  {
    if ( v26 == (__m128i *)(v25 + 6) )
    {
      v30 = (_BYTE *)v35[0].m128i_i64[0];
      v25[4] = v34.m128i_i64[0];
      *(__m128 *)(v25 + 5) = _mm_loadh_ps((const double *)&v30);
    }
    else
    {
      v30 = (_BYTE *)v35[0].m128i_i64[0];
      v27 = v25[6];
      v25[4] = v34.m128i_i64[0];
      *(__m128 *)(v25 + 5) = _mm_loadh_ps((const double *)&v30);
      if ( v26 )
      {
        v34.m128i_i64[0] = (__int64)v26;
        v35[0].m128i_i64[0] = v27;
        goto LABEL_30;
      }
    }
    v26 = v35;
    v34.m128i_i64[0] = (__int64)v35;
  }
LABEL_30:
  v34.m128i_i64[1] = 0;
  v26->m128i_i8[0] = 0;
  if ( (__m128i *)v34.m128i_i64[0] != v35 )
    operator delete((void *)v34.m128i_i64[0]);
  return a1;
}
