unsigned __int64 __fastcall sub_210A9A0(
        __int64 a1,
        _BYTE *a2,
        size_t a3,
        unsigned int a4,
        void *a5,
        size_t a6,
        signed int a7,
        unsigned int a8)
{
  size_t v8; // r13
  __int64 *v9; // r12
  size_t v10; // rbx
  __int64 v11; // rbx
  _QWORD *v12; // r13
  size_t v13; // r14
  size_t v14; // r15
  const void *v15; // r8
  const void *v16; // r9
  size_t v17; // r12
  int v18; // eax
  int v19; // eax
  int v20; // eax
  unsigned __int64 v21; // r14
  __m128i *v23; // rax
  _BYTE *v24; // rsi
  size_t v25; // rdx
  const char *m128i_i8; // r14
  __m128i *v27; // rbx
  unsigned __int64 v28; // rax
  __m128i si128; // xmm0
  __int64 v30; // rax
  _QWORD *v31; // rdx
  __int64 v32; // r13
  __int64 v33; // rdi
  __int64 v34; // r15
  _QWORD *v35; // r13
  unsigned __int64 v36; // rax
  __int64 v37; // rax
  size_t *v38; // rbx
  void *v39; // rax
  __m128i *v40; // rdi
  __m128i *v41; // rdi
  bool v42; // al
  _QWORD *v44; // [rsp+8h] [rbp-B0h]
  __int64 v45; // [rsp+8h] [rbp-B0h]
  void *s2; // [rsp+20h] [rbp-98h]
  __m128i *s2a; // [rsp+20h] [rbp-98h]
  _QWORD *s2b; // [rsp+20h] [rbp-98h]
  void *s1; // [rsp+28h] [rbp-90h]
  __int64 v52; // [rsp+30h] [rbp-88h]
  void *v53; // [rsp+40h] [rbp-78h] BYREF
  size_t v54; // [rsp+48h] [rbp-70h]
  _BYTE v55[16]; // [rsp+50h] [rbp-68h] BYREF
  size_t n[2]; // [rsp+60h] [rbp-58h] BYREF
  unsigned __int64 v57; // [rsp+70h] [rbp-48h]

  v8 = a6;
  v9 = (__int64 *)a1;
  v10 = (size_t)a5;
  if ( a6 )
  {
    v53 = a5;
    LOWORD(n[0]) = 261;
    v54 = a6;
    v37 = sub_2108A30(a1, (const void ***)&v53);
    v52 = v37;
    if ( (*(_BYTE *)(v37 + 8) & 1) != 0 )
    {
      v38 = *(size_t **)(v37 - 8);
      v8 = *v38;
      v10 = (size_t)(v38 + 3);
    }
    else
    {
      v8 = 0;
      v10 = 0;
    }
    if ( a7 != 5 )
    {
      if ( sub_21003E0(v37) )
      {
        v39 = (void *)sub_21003E0(v52);
        if ( !v39 || v39 == off_2C8EF40 || v52 != *(_QWORD *)(*(_QWORD *)(sub_21003E0(v52) + 8) + 184LL) )
        {
          v53 = "invalid symbol redefinition";
          LOWORD(n[0]) = 259;
          sub_2100A30(a1, 0, (__int64)&v53);
        }
      }
    }
  }
  else
  {
    v52 = 0;
  }
  v53 = v55;
  sub_2100260(&v53, a2, (__int64)&a2[a3]);
  n[0] = v10;
  v11 = *(_QWORD *)(a1 + 1992);
  n[1] = v8;
  v57 = __PAIR64__(a8, a7);
  v44 = (_QWORD *)(a1 + 1984);
  v12 = (_QWORD *)(a1 + 1984);
  if ( !v11 )
    goto LABEL_24;
  do
  {
    if ( sub_9C4B50(v11 + 32, (__int64)&v53) < 0 )
    {
LABEL_16:
      v11 = *(_QWORD *)(v11 + 24);
      continue;
    }
    if ( sub_9C4B50((__int64)&v53, v11 + 32) < 0 )
      goto LABEL_32;
    v13 = *(_QWORD *)(v11 + 72);
    v14 = n[1];
    v15 = *(const void **)(v11 + 64);
    v16 = (const void *)n[0];
    v17 = v13;
    if ( n[1] <= v13 )
      v17 = n[1];
    if ( !v17 )
    {
      if ( n[1] == v13 )
        goto LABEL_15;
      goto LABEL_11;
    }
    s1 = (void *)n[0];
    s2 = *(void **)(v11 + 64);
    v18 = memcmp(s2, (const void *)n[0], v17);
    v15 = s2;
    v16 = s1;
    if ( v18 )
    {
      if ( v18 < 0 )
        goto LABEL_16;
      v19 = memcmp(s1, s2, v17);
      if ( v19 )
        goto LABEL_40;
      if ( v14 != v13 )
      {
LABEL_14:
        if ( v14 < v13 )
        {
LABEL_32:
          v12 = (_QWORD *)v11;
          v11 = *(_QWORD *)(v11 + 16);
          continue;
        }
      }
LABEL_15:
      v20 = *(_DWORD *)(v11 + 80);
      if ( a7 > v20 || a7 == v20 && a8 > *(_DWORD *)(v11 + 84) )
        goto LABEL_16;
      goto LABEL_32;
    }
    if ( v14 == v13 )
    {
      v19 = memcmp(s1, s2, v17);
      if ( !v19 )
        goto LABEL_15;
      goto LABEL_40;
    }
LABEL_11:
    if ( v14 > v13 )
      goto LABEL_16;
    if ( !v17 )
      goto LABEL_14;
    v19 = memcmp(v16, v15, v17);
    if ( !v19 )
      goto LABEL_14;
LABEL_40:
    if ( v19 >= 0 )
      goto LABEL_15;
    v12 = (_QWORD *)v11;
    v11 = *(_QWORD *)(v11 + 16);
  }
  while ( v11 );
  v9 = (__int64 *)a1;
  if ( v44 != v12 && !sub_2103460((__int64)&v53, (__int64)(v12 + 4)) )
  {
    v21 = v12[11];
    goto LABEL_21;
  }
LABEL_24:
  v23 = (__m128i *)operator new(0x60u);
  v24 = v53;
  v25 = v54;
  m128i_i8 = v23[2].m128i_i8;
  v27 = v23;
  v23[2].m128i_i64[0] = (__int64)v23[3].m128i_i64;
  s2a = v23 + 3;
  sub_2100320((__m128i *)v23[2].m128i_i64, v24, (__int64)&v24[v25]);
  v28 = v57;
  si128 = _mm_load_si128((const __m128i *)n);
  v27[5].m128i_i64[1] = 0;
  v27[5].m128i_i64[0] = v28;
  v27[4] = si128;
  v30 = sub_210A860(v9 + 247, v12, m128i_i8);
  v32 = v30;
  if ( v31 )
  {
    if ( v30 || v44 == v31 )
    {
      v33 = 1;
    }
    else
    {
      s2b = v31;
      v42 = sub_2103460((__int64)m128i_i8, (__int64)(v31 + 4));
      v31 = s2b;
      v33 = v42;
    }
    std::_Rb_tree_insert_and_rebalance(v33, v27, v31, v44);
    ++v9[252];
  }
  else
  {
    v40 = (__m128i *)v27[2].m128i_i64[0];
    if ( s2a != v40 )
      operator delete(v40);
    v41 = v27;
    v27 = (__m128i *)v32;
    operator delete(v41);
  }
  v34 = v27[2].m128i_i64[1];
  v45 = v27[2].m128i_i64[0];
  v35 = (_QWORD *)sub_21078A0((__int64)v9, a2, a3);
  v21 = sub_2105F40(v9 + 48, 200, 3u);
  sub_2113B00(v21, 0, v45, v34, (a4 >> 5) & 1, (a4 >> 7) & 1, (__int64)v35);
  *(_DWORD *)(v21 + 176) = -1;
  *(_QWORD *)v21 = off_2BE8D28;
  *(_DWORD *)(v21 + 172) = a4;
  *(_QWORD *)(v21 + 184) = v52;
  *(_DWORD *)(v21 + 192) = a7;
  *(_DWORD *)(v21 + 196) = a8;
  v27[5].m128i_i64[1] = v21;
  v36 = sub_2105F80((__int64)v9);
  *(_QWORD *)(v36 + 8) = v21;
  **(_QWORD **)(v21 + 8) = v36;
  *(_QWORD *)(*(_QWORD *)(v21 + 8) + 8LL) = v36;
  *v35 = v36;
LABEL_21:
  if ( v53 != v55 )
    operator delete(v53);
  return v21;
}
