void __fastcall dirtree_item_model_base_t::restore_persistent_indexes(_QWORD *a1, const char *a2)
{
  __int64 v3; // rbx
  _QWORD *v4; // rbp
  __int64 v5; // rdi

  v3 = a1[3];
  *a1 = &dirtree_item_model_base_t::restore_persistent_indexes;
  while ( v3 )
  {
    v4 = (_QWORD *)v3;
    sub_489280(*(_QWORD **)(v3 + 24), a2);
    v5 = *(_QWORD *)(v3 + 32);
    v3 = *(_QWORD *)(v3 + 16);
    if ( v5 )
    {
      v4[5] = 0;
      qfree(v5, a2);
    }
    a2 = (_BYTE *)off_50;
    operator delete(v4, 0x50u);
  }
  operator delete(a1, 0x40u);
}
