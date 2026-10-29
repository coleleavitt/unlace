void __fastcall msg_entries_t__::vfunc_3(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  void *v3; // rbp

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 )
  {
    v2 = *(_QWORD *)(a1 + 16) + 48 * v1 - 48;
    v3 = *(void **)(v2 + 24);
    if ( v3 )
    {
      QT::QTextLayout::~QTextLayout(*(QT::QTextLayout **)(v2 + 24));
      operator delete(v3, 8u);
      *(_QWORD *)(v2 + 24) = 0;
    }
    *(_QWORD *)(v2 + 32) = -1;
  }
}
