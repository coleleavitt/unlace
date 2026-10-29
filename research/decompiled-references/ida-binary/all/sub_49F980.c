__int64 __fastcall actions_inspector_chooser_widget_t__::vfunc_31(__int64 a1, __int64 *a2, __int64 a3)
{
  unsigned __int64 v5; // rcx
  __int64 *v6; // r12
  __int64 v7; // rdx
  __int64 v8; // r15
  __int64 i; // rbx
  __int64 *v10; // rax
  __int64 v11; // rdi
  __m128i v12; // xmm2
  __int64 v13; // rdx
  __int64 v15; // rbx
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  __int128 v18; // xmm0
  __int64 v19; // r15
  __int64 v20; // rdx
  size_t v21; // r14
  __int64 v22; // rdi
  void *v23; // rax
  __int64 **v24; // rsi
  __int64 v25; // [rsp+8h] [rbp-60h]
  __m128i v26; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v27; // [rsp+20h] [rbp-48h]
  __int64 **v28; // [rsp+28h] [rbp-40h]

  if ( a2 )
  {
    v5 = *(_QWORD *)(a1 + 1936);
    v6 = a2;
    v25 = 0;
    v26 = _mm_unpacklo_epi64((__m128i)v5, (__m128i)v5);
    if ( v5 )
    {
      v27 = v5;
      v15 = 0;
      v16 = qalloc_or_throw(24 * v5);
      v17 = v27;
      v18 = 0;
      v25 = v16;
      v19 = v16;
      do
      {
        v20 = *(_QWORD *)(a1 + 1928);
        *(_QWORD *)v19 = 0;
        *(_OWORD *)(v19 + 8) = v18;
        a2 = (__int64 *)(v20 + 24 * v15);
        v21 = a2[1];
        if ( v21 )
        {
          v22 = a2[1];
          v27 = v17;
          v28 = (__int64 **)(v20 + 24 * v15);
          v23 = (void *)qalloc_or_throw(v22);
          v24 = v28;
          *(_QWORD *)(v19 + 16) = v21;
          *(_QWORD *)v19 = v23;
          a2 = *v24;
          memcpy(v23, a2, v21);
          *(_QWORD *)(v19 + 8) = v21;
          v17 = v27;
          v18 = 0;
        }
        ++v15;
        v19 += 24;
      }
      while ( v17 != v15 );
    }
    v7 = *v6;
    if ( *v6 )
    {
      v8 = v6[1];
      if ( v8 )
      {
        for ( i = 0; i != v8; ++i )
        {
          v10 = (__int64 *)(v7 + 24 * i);
          v11 = *v10;
          if ( *v10 )
          {
            v10[1] = 0;
            qfree(v11, (const char *)a2);
            v7 = *v6;
          }
        }
      }
      v6[1] = 0;
      qfree(v7, (const char *)a2);
    }
    v12 = _mm_load_si128(&v26);
    *v6 = v25;
    *(__m128i *)(v6 + 1) = v12;
  }
  if ( a3 )
  {
    if ( *(_DWORD *)(a1 + 2272) == 2 )
      v13 = QT::QTreeView::header(*(QT::QTreeView **)(a1 + 2280));
    else
      v13 = QT::QTableView::horizontalHeader(*(QT::QTableView **)(a1 + 2368));
    sub_4E2120(a1, a3, v13);
  }
  return *(_QWORD *)(a1 + 1936);
}
