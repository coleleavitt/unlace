__m128i **__fastcall sub_1FF1160(__m128i **a1, const char *a2, int a3)
{
  _QWORD *v3; // rbp
  size_t v5; // rax
  size_t v6; // rbx
  __int64 v7; // rax
  _BYTE *v8; // r15
  __int64 v9; // rbp
  __int64 v10; // r14
  __int64 v11; // rbx
  void *v12; // rax
  _QWORD *v13; // rax
  _BYTE *v14; // rsi
  __int64 v15; // rdx
  _QWORD *v16; // rbp
  __m128i *v17; // rax
  __m128i *v18; // r15
  _QWORD *v19; // rax
  _BYTE *v20; // rsi
  __m128i v21; // xmm0
  __int64 v22; // rdx
  __int64 v23; // r9
  _BYTE *v24; // rdi
  __int64 v25; // r8
  _QWORD *v27; // rax
  __int64 (__fastcall *v28)(); // [rsp+8h] [rbp-70h] BYREF
  __m128i v29; // [rsp+10h] [rbp-68h] BYREF
  void *src; // [rsp+20h] [rbp-58h]
  size_t n; // [rsp+28h] [rbp-50h]
  _QWORD v32[9]; // [rsp+30h] [rbp-48h] BYREF

  LODWORD(v28) = a3;
  v3 = v32;
  src = v32;
  if ( !a2 )
LABEL_26:
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  v5 = strlen(a2);
  v6 = v5;
  if ( v5 > 0xF )
  {
    v27 = (_QWORD *)operator new(v5 + 1);
    v32[0] = v6;
    src = v27;
    goto LABEL_21;
  }
  if ( v5 != 1 )
  {
    if ( !v5 )
      goto LABEL_5;
    v27 = v32;
LABEL_21:
    memcpy(v27, a2, v6);
    v3 = src;
    goto LABEL_5;
  }
  LOBYTE(v32[0]) = *a2;
LABEL_5:
  n = v6;
  *((_BYTE *)v3 + v6) = 0;
  v7 = operator new(0x20u);
  v8 = src;
  v9 = n;
  v10 = v7 + 16;
  v11 = v7;
  *(_QWORD *)v7 = v7 + 16;
  if ( &v8[v9] && !v8 )
    goto LABEL_26;
  if ( (unsigned __int64)v9 > 0xF )
  {
    if ( v9 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v12 = (void *)operator new(v9 + 1);
    *(_QWORD *)(v11 + 16) = v9;
    *(_QWORD *)v11 = v12;
  }
  else
  {
    if ( v9 == 1 )
    {
      *(_BYTE *)(v7 + 16) = *v8;
      v12 = (void *)(v7 + 16);
      goto LABEL_10;
    }
    v12 = (void *)(v7 + 16);
    if ( !v9 )
      goto LABEL_10;
  }
  memcpy(v12, v8, v9);
  v12 = *(void **)v11;
LABEL_10:
  *(_QWORD *)(v11 + 8) = v9;
  *((_BYTE *)v12 + v9) = 0;
  v13 = (_QWORD *)operator new(0x20u);
  v14 = *(_BYTE **)v11;
  v15 = *(_QWORD *)(v11 + 8);
  v16 = v13;
  *v13 = v13 + 2;
  v29.m128i_i64[1] = (__int64)(v13 + 2);
  sub_1FF0D10(v13, v14, (__int64)&v14[v15]);
  a1[2] = nullptr;
  v17 = (__m128i *)operator new(0x20u);
  v17[1].m128i_i64[0] = 0;
  v18 = v17;
  *v17 = 0;
  v19 = (_QWORD *)operator new(0x20u);
  v20 = (_BYTE *)*v16;
  v29.m128i_i64[0] = (__int64)v19;
  v21 = _mm_loadl_epi64(&v29);
  *v19 = v19 + 2;
  v18[1].m128i_i64[0] = (__int64)(v19 + 4);
  v22 = v16[1];
  v29.m128i_i64[0] = (__int64)(v19 + 4);
  *v18 = _mm_unpacklo_epi64(v21, v21);
  sub_1FF0D10(v19, v20, (__int64)&v20[v22]);
  v23 = v29.m128i_i64[0];
  v24 = (_BYTE *)*v16;
  v25 = v29.m128i_i64[1];
  v18[1].m128i_i32[2] = (int)v28;
  v28 = sub_1FF1C20;
  v18->m128i_i64[1] = v23;
  *a1 = v18;
  *((__m128 *)a1 + 1) = _mm_loadh_ps((const double *)&v28);
  if ( v24 != (_BYTE *)v25 )
    operator delete(v24);
  operator delete(v16);
  if ( *(_QWORD *)v11 != v10 )
    operator delete(*(void **)v11);
  operator delete((void *)v11);
  if ( src != v32 )
    operator delete(src);
  return a1;
}
