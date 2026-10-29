__int64 __fastcall base_dirtree_widget_t::collect_tree_state(
        __int64 a1,
        __int64 a2,
        const __m128i *a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8,
        __m128 a9)
{
  __int64 *v11; // rbp
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rbx
  __int64 v17; // rax
  QT::QAbstractItemView *v18; // rdi
  char *v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rdx
  char *v26; // [rsp+0h] [rbp-78h] BYREF
  __int128 v27; // [rsp+8h] [rbp-70h]
  __int128 v28; // [rsp+18h] [rbp-60h]
  __int128 v29; // [rsp+28h] [rbp-50h]
  unsigned __int64 v30; // [rsp+38h] [rbp-40h]

  v11 = *(__int64 **)(a1 + 32);
  v30 = __readfsqword(0x28u);
  v13 = v11[1];
  v14 = *v11;
  if ( v11[2] < (unsigned __int64)(v13 + 1) )
  {
    v17 = qvector_reserve(v11, v14, v13 + 1, 40);
    v13 = v11[1];
    *v11 = v17;
    v14 = v17;
  }
  v15 = v14 + 40 * v13;
  *(_QWORD *)(v15 + 24) = -1;
  *(_OWORD *)(v15 + 8) = 0;
  *(_QWORD *)v15 = 0;
  *(_BYTE *)(v15 + 32) = 0;
  ++v11[1];
  *(_QWORD *)(v15 + 24) = *a4;
  *(_BYTE *)(v15 + 32) = QT::QTreeView::isExpanded(*(_QWORD *)(a1 + 8), a2, v13, a4, a5, a6);
  if ( (~*(_BYTE *)(*(_QWORD *)(a1 + 32) + 112LL) & 0x30) == 0 )
  {
    v18 = *(QT::QAbstractItemView **)(a1 + 8);
    v27 = 0;
    v19 = (char *)&v26;
    v26 = nullptr;
    v28 = -1;
    v29 = -1;
    if ( !(unsigned __int8)sub_48DE20(v18, (__int64 *)&v26, a3, 1, NAN, a8, a9) || (unsigned __int64)v27 <= 1 )
    {
      v19 = v26;
      if ( *((_QWORD *)&v27 + 1) <= 1u )
      {
        v26 = (char *)qvector_reserve(&v26, v26, 2, 1);
        v19 = v26;
      }
      *(_QWORD *)&v27 = 2;
      *v19 = 47;
      v26[1] = 0;
    }
    v23 = *(_QWORD *)v15;
    v24 = *(_QWORD *)(v15 + 16);
    *(_QWORD *)v15 = v26;
    v26 = (char *)v23;
    *(_QWORD *)(v15 + 8) = v27;
    v25 = *((_QWORD *)&v27 + 1);
    *(_QWORD *)(v15 + 16) = *((_QWORD *)&v27 + 1);
    *((_QWORD *)&v27 + 1) = v24;
    if ( v23 )
      qfree(v23, v19, v25, v20, v21, v22, v26, 0, *((_QWORD *)&v27 + 1));
  }
  return 0;
}
