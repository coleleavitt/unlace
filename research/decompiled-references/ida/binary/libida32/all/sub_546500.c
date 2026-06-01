__int64 __fastcall sub_546500(_QWORD *a1, __int64 a2, _DWORD *a3, __int64 *a4)
{
  __int64 v6; // rax
  __m128i v7; // xmm0
  __int64 v8; // rbx
  __m128i v9; // xmm1
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned int v15; // r15d
  char v16; // al
  __int64 v17; // rbp
  unsigned int v18; // ecx
  __int64 v19; // rdx
  __int64 v20; // rax
  void *v21; // rdi
  void *v22; // rdi
  void *v23; // rdi
  __int64 v25; // rax

  v6 = operator new(0x90u);
  v7 = _mm_loadu_si128((const __m128i *)a4 + 1);
  v8 = v6;
  LODWORD(v6) = *a3;
  *(__m128i *)(v8 + 80) = _mm_loadu_si128((const __m128i *)(a4 + 5));
  v9 = _mm_loadu_si128((const __m128i *)a4 + 4);
  *(_DWORD *)(v8 + 32) = v6;
  v10 = *a4;
  *(_QWORD *)(v8 + 128) = 0;
  *(_QWORD *)(v8 + 40) = v10;
  v11 = a4[1];
  a4[1] = 0;
  *(_QWORD *)(v8 + 48) = v11;
  v12 = a4[4];
  a4[4] = 0;
  *(_QWORD *)(v8 + 72) = v12;
  v13 = a4[7];
  a4[7] = 0;
  *(_QWORD *)(v8 + 96) = v13;
  v14 = a4[10];
  *(__m128i *)(v8 + 56) = v7;
  *(_QWORD *)(v8 + 120) = v14;
  *((_OWORD *)a4 + 1) = 0;
  *(_OWORD *)(a4 + 5) = 0;
  *(__m128i *)(v8 + 104) = v9;
  *((_OWORD *)a4 + 4) = 0;
  copy_tinfo_t(v8 + 128);
  v15 = *(_DWORD *)(v8 + 32);
  *(_DWORD *)(v8 + 136) = *((_DWORD *)a4 + 24);
  *(_WORD *)(v8 + 140) = *((_WORD *)a4 + 50);
  v16 = *((_BYTE *)a4 + 102);
  v17 = a2;
  *(_BYTE *)(v8 + 142) = v16;
  if ( a1 + 1 == (_QWORD *)a2 )
  {
    if ( a1[5] )
    {
      v19 = a1[4];
      v17 = 0;
      if ( *(_DWORD *)(v19 + 32) < v15 )
        goto LABEL_6;
    }
LABEL_5:
    v17 = sub_53CD80((__int64)a1, v15);
    goto LABEL_6;
  }
  v18 = *(_DWORD *)(a2 + 32);
  if ( v15 >= v18 )
  {
    if ( v18 >= v15 )
      goto LABEL_9;
    if ( a1[4] == a2 )
    {
      if ( a2 )
        goto LABEL_7;
      goto LABEL_9;
    }
    v25 = std::_Rb_tree_increment();
    v19 = v25;
    if ( v15 < *(_DWORD *)(v25 + 32) )
    {
      if ( !*(_QWORD *)(a2 + 24) )
      {
        if ( a2 )
          goto LABEL_7;
        goto LABEL_9;
      }
      v17 = v25;
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v19 = a2;
  if ( a1[3] == a2 )
    goto LABEL_6;
  v20 = std::_Rb_tree_decrement();
  v19 = v20;
  if ( *(_DWORD *)(v20 + 32) >= v15 )
    goto LABEL_5;
  if ( *(_QWORD *)(v20 + 24) )
    v19 = a2;
  else
    v17 = 0;
LABEL_6:
  if ( v19 )
  {
LABEL_7:
    v17 = v8;
    std::_Rb_tree_insert_and_rebalance();
    ++a1[5];
    return v17;
  }
LABEL_9:
  if ( v8 )
  {
    clear_tinfo_t(v8 + 128);
    v21 = *(void **)(v8 + 96);
    if ( v21 )
    {
      *(_QWORD *)(v8 + 104) = 0;
      qfree(v21);
    }
    v22 = *(void **)(v8 + 72);
    if ( v22 )
    {
      *(_QWORD *)(v8 + 80) = 0;
      qfree(v22);
    }
    v23 = *(void **)(v8 + 48);
    if ( v23 )
    {
      *(_QWORD *)(v8 + 56) = 0;
      qfree(v23);
    }
    operator delete((void *)v8, 0x90u);
  }
  return v17;
}

