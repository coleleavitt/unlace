__int64 __fastcall sub_55F6C0(_QWORD *a1, __int64 a2, _DWORD *a3, __int64 *a4)
{
  __int64 v8; // rax
  __m128i v9; // xmm0
  __int64 *v10; // rsi
  __int64 v11; // rbx
  __m128i v12; // xmm1
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  unsigned int v19; // r15d
  char v20; // al
  __int64 v21; // rbp
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rax
  _BOOL8 v25; // rdi
  void *v26; // rdi
  void *v27; // rdi
  void *v28; // rdi
  __int64 v30; // rax
  unsigned int v31; // ecx
  unsigned int v32; // [rsp+Ch] [rbp-3Ch]

  v8 = operator new(0x90u);
  v9 = _mm_loadu_si128((const __m128i *)a4 + 1);
  v10 = a4 + 11;
  v11 = v8;
  LODWORD(v8) = *a3;
  *(__m128i *)(v11 + 80) = _mm_loadu_si128((const __m128i *)(a4 + 5));
  v12 = _mm_loadu_si128((const __m128i *)a4 + 4);
  *(_DWORD *)(v11 + 32) = v8;
  v13 = *a4;
  *(_QWORD *)(v11 + 128) = 0;
  *(_QWORD *)(v11 + 40) = v13;
  v14 = a4[1];
  a4[1] = 0;
  *(_QWORD *)(v11 + 48) = v14;
  v15 = a4[4];
  a4[4] = 0;
  *(_QWORD *)(v11 + 72) = v15;
  v16 = a4[7];
  a4[7] = 0;
  *(_QWORD *)(v11 + 96) = v16;
  v17 = a4[10];
  *(__m128i *)(v11 + 56) = v9;
  *(_QWORD *)(v11 + 120) = v17;
  *((_OWORD *)a4 + 1) = 0;
  *(_OWORD *)(a4 + 5) = 0;
  *(__m128i *)(v11 + 104) = v12;
  *((_OWORD *)a4 + 4) = 0;
  copy_tinfo_t(v11 + 128);
  v19 = *(_DWORD *)(v11 + 32);
  *(_DWORD *)(v11 + 136) = *((_DWORD *)a4 + 24);
  *(_WORD *)(v11 + 140) = *((_WORD *)a4 + 50);
  v20 = *((_BYTE *)a4 + 102);
  v21 = a2;
  *(_BYTE *)(v11 + 142) = v20;
  if ( a1 + 1 == (_QWORD *)a2 )
  {
    if ( a1[5] )
    {
      v23 = a1[4];
      v21 = 0;
      if ( *(_DWORD *)(v23 + 32) < v19 )
        goto LABEL_6;
    }
LABEL_5:
    v21 = sub_555F00((__int64)a1, v19);
    goto LABEL_6;
  }
  v22 = *(unsigned int *)(a2 + 32);
  if ( v19 < (unsigned int)v22 )
  {
    v23 = a2;
    if ( a1[3] == a2 )
      goto LABEL_6;
    v24 = std::_Rb_tree_decrement(a2);
    v23 = v24;
    if ( *(_DWORD *)(v24 + 32) >= v19 )
      goto LABEL_5;
    if ( *(_QWORD *)(v24 + 24) )
      v23 = a2;
    else
      v21 = 0;
LABEL_6:
    if ( v23 )
    {
      if ( a1 + 1 == (_QWORD *)v23 || v21 )
      {
        v25 = 1;
LABEL_10:
        v21 = v11;
        std::_Rb_tree_insert_and_rebalance(v25, v11, v23, a1 + 1);
        ++a1[5];
        return v21;
      }
      goto LABEL_31;
    }
    goto LABEL_12;
  }
  v32 = *(_DWORD *)(a2 + 32);
  if ( (unsigned int)v22 >= v19 )
    goto LABEL_12;
  if ( a1[4] != a2 )
  {
    v30 = std::_Rb_tree_increment(a2, v10, v18, v22);
    v23 = v30;
    if ( v19 < *(_DWORD *)(v30 + 32) )
    {
      v31 = v32;
      if ( !*(_QWORD *)(a2 + 24) )
      {
        v23 = a2;
        if ( a2 )
          goto LABEL_32;
        goto LABEL_12;
      }
      v21 = v30;
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v23 = a2;
  if ( a2 )
  {
LABEL_31:
    v31 = *(_DWORD *)(v23 + 32);
LABEL_32:
    v25 = v19 < v31;
    goto LABEL_10;
  }
LABEL_12:
  if ( v11 )
  {
    clear_tinfo_t(v11 + 128);
    v26 = *(void **)(v11 + 96);
    if ( v26 )
    {
      *(_QWORD *)(v11 + 104) = 0;
      qfree(v26);
    }
    v27 = *(void **)(v11 + 72);
    if ( v27 )
    {
      *(_QWORD *)(v11 + 80) = 0;
      qfree(v27);
    }
    v28 = *(void **)(v11 + 48);
    if ( v28 )
    {
      *(_QWORD *)(v11 + 56) = 0;
      qfree(v28);
    }
    operator delete((void *)v11, 0x90u);
  }
  return v21;
}
