const char *__fastcall sub_14260(_QWORD *a1, const char *a2, __int64 a3, __int64 *a4)
{
  __int64 v8; // rax
  size_t v9; // r15
  __int64 v10; // rbx
  __int64 v11; // rax
  __m128i v12; // xmm0
  __int64 v13; // rax
  __int64 v14; // r15
  __m128i v15; // xmm0
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  const char *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rdi
  _QWORD *v22; // rcx
  const char *v23; // rbp
  __int64 v25; // rdi
  void *v26; // rax
  const void *v27; // rsi
  const char *v28; // rsi
  const char *v29; // rdi
  unsigned int v30; // eax
  __int64 v31; // [rsp+0h] [rbp-48h]

  v8 = operator new(0x88u);
  v9 = *(_QWORD *)(a3 + 8);
  *(_QWORD *)(v8 + 32) = 0;
  v10 = v8;
  *(_OWORD *)(v8 + 40) = 0;
  if ( v9 )
  {
    v26 = (void *)qalloc_or_throw(v9);
    *(_QWORD *)(v10 + 32) = v26;
    v27 = *(const void **)a3;
    *(_QWORD *)(v10 + 48) = v9;
    memcpy(v26, v27, v9);
    *(_QWORD *)(v10 + 40) = v9;
  }
  v11 = *a4;
  v12 = _mm_loadu_si128((const __m128i *)(a4 + 1));
  *(_QWORD *)(v10 + 80) = 0;
  *(_QWORD *)(v10 + 56) = v11;
  *(__m128i *)(v10 + 64) = v12;
  copy_tinfo_t(v10 + 80, a4 + 3);
  v13 = a4[7];
  v14 = a4[4];
  v15 = _mm_loadu_si128((const __m128i *)(a4 + 5));
  a4[4] = 0;
  *(_QWORD *)(v10 + 112) = v13;
  v16 = a4[8];
  *(_QWORD *)(v10 + 88) = v14;
  *(_QWORD *)(v10 + 120) = v16;
  LOBYTE(v16) = *((_BYTE *)a4 + 72);
  *(__m128i *)(v10 + 96) = v15;
  *(_BYTE *)(v10 + 128) = v16;
  *(_OWORD *)(a4 + 5) = 0;
  v19 = sub_136E0(a1, a2, v10 + 32, v17, v18);
  if ( v20 )
  {
    v21 = 1;
    v22 = a1 + 1;
    if ( !v19 && (_QWORD *)v20 != v22 )
    {
      v28 = s1;
      if ( *(_QWORD *)(v20 + 40) )
        v28 = *(const char **)(v20 + 32);
      v29 = s1;
      if ( *(_QWORD *)(v10 + 40) )
        v29 = *(const char **)(v10 + 32);
      v31 = v20;
      v30 = strcmp(v29, v28);
      v22 = a1 + 1;
      v20 = v31;
      v21 = v30 >> 31;
    }
    v23 = (const char *)v10;
    std::_Rb_tree_insert_and_rebalance(v21, v10, v20, v22);
    ++a1[5];
  }
  else
  {
    v23 = v19;
    if ( v10 )
    {
      if ( v14 )
      {
        *(_QWORD *)(v10 + 96) = 0;
        qfree(v14);
      }
      clear_tinfo_t();
      v25 = *(_QWORD *)(v10 + 32);
      if ( v25 )
      {
        *(_QWORD *)(v10 + 40) = 0;
        qfree(v25);
      }
      operator delete((void *)v10, 0x88u);
    }
  }
  return v23;
}
