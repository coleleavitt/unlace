void __fastcall sub_3BE3F0(_QWORD *a1)
{
  unsigned __int64 v1; // rax
  _QWORD *v2; // rdx
  _QWORD *v3; // rbp
  __int64 v5; // rdi
  void *v6; // rax

  v1 = a1[129];
  if ( v1 > 0xFFFFFFFFFFFFFFFDLL )
  {
    v2 = a1 + 119;
    v3 = a1 + 113;
    v5 = a1[125];
    if ( v1 == -1 )
      v3 = v2;
    v6 = (void *)std::_Rb_tree_rebalance_for_erase(v5, v3 + 1);
    operator delete(v6, 0x38u);
    --v3[5];
    a1[128] = -1;
  }
}
