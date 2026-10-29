void *__fastcall sub_ED2880(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r12
  int v8; // r8d
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r9
  size_t v12; // r8
  __int64 v13; // rax
  void *v14; // r12
  __int64 *v15; // rdi
  char *v16; // rbx
  char *v17; // rbp
  _BYTE *i; // rax
  __int64 v19; // rsi
  unsigned int v20; // ecx
  __int64 v21; // rdi
  __m128i *v22; // rbx
  __m128i *v23; // rbp
  __int64 v24; // rsi
  __int64 v25; // rdi
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  int v30; // [rsp+0h] [rbp-168h]
  size_t v31; // [rsp+0h] [rbp-168h]
  __int64 v32; // [rsp+8h] [rbp-160h]
  __m128i src; // [rsp+10h] [rbp-158h] BYREF
  __int64 v34; // [rsp+20h] [rbp-148h] BYREF
  __m128 v35[3]; // [rsp+30h] [rbp-138h] BYREF
  __int128 v36; // [rsp+60h] [rbp-108h] BYREF
  void *v37; // [rsp+70h] [rbp-F8h]
  __int64 v38; // [rsp+78h] [rbp-F0h]
  _BYTE v39[32]; // [rsp+80h] [rbp-E8h] BYREF
  __m128i *p_si128; // [rsp+A0h] [rbp-C8h]
  __int64 v41; // [rsp+A8h] [rbp-C0h]
  __m128i si128; // [rsp+B0h] [rbp-B8h] BYREF
  _BYTE v43[64]; // [rsp+C0h] [rbp-A8h] BYREF
  void *ptr; // [rsp+100h] [rbp-68h]
  __int64 v45; // [rsp+118h] [rbp-50h] BYREF

  if ( (*(_BYTE *)(a1 + 32) & 1) == 0 )
  {
    v27 = sub_ED1E50((_DWORD *)a1, a2[289], a3, a4, a5, a6);
    *(_BYTE *)(a1 + 32) |= 1u;
    *(_QWORD *)(a1 + 8) = v27;
    *(_QWORD *)(a1 + 16) = v28;
  }
  v7 = *(_QWORD *)(a1 + 8);
  v8 = *(_DWORD *)a1;
  v9 = *(_QWORD *)(a1 + 16);
  v36 = 0;
  v37 = v39;
  v38 = 0x400000000LL;
  si128 = _mm_load_si128((const __m128i *)&unk_23A7BC0);
  v32 = v7 + v9;
  v30 = v8;
  p_si128 = &si128;
  v41 = 0;
  v10 = sub_A62AC0((__int64)a2);
  sub_B41480((__int64)v43, (__int64)&v36, v10, (__int64)(a2 + 2321), v30, v7, v32, 1);
  sub_B3B400(v35, (__int64)v43, (__int64)(a2 + 2321));
  sub_B3B5A0(&src, v35);
  v12 = (unsigned int)(src.m128i_i32[2] + 1);
  v13 = a2[294];
  a2[304] += v12;
  v14 = (void *)((v13 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( a2[295] >= (unsigned __int64)v14 + v12 && v13 )
  {
    a2[294] = (__int64)v14 + v12;
  }
  else
  {
    v31 = v12;
    v29 = sub_986170((__int64)(a2 + 294), v12, v12, 3, v12, v11);
    v12 = v31;
    v14 = (void *)v29;
  }
  memcpy(v14, (const void *)src.m128i_i64[0], v12);
  v15 = (__int64 *)src.m128i_i64[0];
  *(_QWORD *)(a1 + 24) = v14;
  *(_BYTE *)(a1 + 32) |= 2u;
  if ( v15 != &v34 )
    operator delete(v15);
  if ( ptr != &v45 )
    free(ptr);
  v16 = (char *)v37;
  v17 = (char *)v37 + 8 * (unsigned int)v38;
  if ( v37 != v17 )
  {
    for ( i = v37; ; i = v37 )
    {
      v19 = 0x40000000000LL;
      v20 = (unsigned int)((v16 - i) >> 3) >> 7;
      if ( v20 <= 0x1D )
        v19 = 4096LL << v20;
      v21 = *(_QWORD *)v16;
      v16 += 8;
      operator delete(v21, v19, 16);
      if ( v17 == v16 )
        break;
    }
  }
  v22 = p_si128;
  v23 = &p_si128[(unsigned int)v41];
  if ( p_si128 != v23 )
  {
    do
    {
      v24 = v22->m128i_i64[1];
      v25 = v22->m128i_i64[0];
      ++v22;
      operator delete(v25, v24, 16);
    }
    while ( v23 != v22 );
    v23 = p_si128;
  }
  if ( v23 != &si128 )
    free(v23);
  if ( v37 != v39 )
    free(v37);
  return v14;
}
