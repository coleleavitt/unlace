void __fastcall dirtree_item_model_base_t::restore_persistent_indexes(_QWORD *a1, const char *a2)
{
  __int64 v2; // rbx
  _QWORD *v3; // rbp
  __int64 v4; // rdi

  v2 = a1[3];
  *a1 = &dirtree_item_model_base_t::restore_persistent_indexes;
  while ( v2 )
  {
    v3 = (_QWORD *)v2;
    sub_489280(*(_QWORD **)(v2 + 24), a2);
    v4 = *(_QWORD *)(v2 + 32);
    v2 = *(_QWORD *)(v2 + 16);
    if ( v4 )
    {
      v3[5] = 0;
      qfree(v4, a2);
    }
    a2 = (_BYTE *)off_50;
    operator delete(v3, 0x50u);
  }
}
