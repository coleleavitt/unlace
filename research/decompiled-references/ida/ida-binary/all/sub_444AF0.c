unsigned __int64 __fastcall sub_444AF0(
        QT::QWidget *this,
        const char *a2,
        char a3,
        unsigned int a4,
        __int64 a5,
        char a6,
        int a7)
{
  __int64 v9; // rax
  __int64 v10; // rax
  __m128i si128; // xmm0
  char *v12; // r13
  __int64 v13; // r12
  __int64 v14; // rax
  __int64 v15; // rax
  char *v19; // [rsp+8h] [rbp-58h]
  __int64 v20; // [rsp+10h] [rbp-50h] BYREF
  __int128 v21; // [rsp+18h] [rbp-48h]
  unsigned __int64 v22; // [rsp+28h] [rbp-38h]

  v22 = __readfsqword(0x28u);
  v20 = 0;
  v21 = 0;
  v9 = qvector_reserve(&v20, 0, 45, 1);
  v20 = v9;
  *(_QWORD *)&v21 = 45;
  *(__m128i *)v9 = _mm_load_si128((const __m128i *)&xmmword_5DDA90);
  *(__m128i *)(v9 + 16) = _mm_load_si128((const __m128i *)&xmmword_5DDBD0);
  *(__m128i *)(v9 + 28) = _mm_load_si128((const __m128i *)&xmmword_5DDBE0);
  *(_BYTE *)(v20 + 44) = 0;
  sub_42B350(this, a2, 66, (__int64)&v20, a4, a5);
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    qfree(v20, nullptr);
  }
  *((_BYTE *)this + 2532) = 0;
  *((_QWORD *)this + 317) = 0;
  *(_QWORD *)this = &worklists_dirtree_widget_t___vtable;
  *((_QWORD *)this + 2) = worklists_dirtree_widget_t___vtable_at__16;
  *((_QWORD *)this + 30) = worklists_dirtree_widget_t___vtable_at__240;
  *((_QWORD *)this + 38) = worklists_dirtree_widget_t___vtable_at__304;
  *((_QWORD *)this + 311) = worklists_dirtree_widget_t___vtable_at__2488;
  v19 = (char *)operator new(0x30u);
  *(_QWORD *)v19 = &unk_8725A0;
  *((_DWORD *)v19 + 2) = 0;
  *((_QWORD *)v19 + 2) = 0;
  *(_OWORD *)(v19 + 24) = 0;
  v10 = qvector_reserve(v19 + 16, 0, 25, 1);
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DDBF0);
  *((_QWORD *)v19 + 2) = v10;
  *((_QWORD *)v19 + 3) = 25;
  *(_QWORD *)(v10 + 16) = 0x73656C69665F7473LL;
  *(__m128i *)v10 = si128;
  *(_BYTE *)(*((_QWORD *)v19 + 2) + 24LL) = 0;
  *((_QWORD *)v19 + 5) = 0;
  *(_QWORD *)v19 = &worklists_dirspec_t___vtable;
  v12 = (char *)operator new(8u);
  *(_QWORD *)v12 = create_dirtree(v12, v19);
  if ( (*((_BYTE *)this + 232) & 0x20) != 0 )
  {
    v13 = operator new(0x200u);
    sub_444630(v13, v12, (__int64)v19, a3, (__int64)this, a6);
    *(_QWORD *)v13 = &worklist_picker_item_model_t___vtable;
    *(_DWORD *)(v13 + 504) = a7;
  }
  else
  {
    v13 = operator new(0x1F8u);
    sub_444630(v13, v12, (__int64)v19, a3, (__int64)this, a6);
  }
  sub_42B4F0(this, (__int64)v19, v13);
  v14 = QT::QAbstractItemView::model(this);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 544LL))(v14);
  sub_4E4770((char *)this + 304);
  QT::QTreeView::expandAll(this);
  *((_BYTE *)this + 2532) = 0;
  LOBYTE(v20) = 0;
  v15 = sub_5313F0(unk_8CAB08);
  if ( v15 )
    sub_537630(v15, 7, &v20);
  return v22 - __readfsqword(0x28u);
}
