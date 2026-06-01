unsigned __int64 *__fastcall sub_9F4170(_QWORD *a1, const char *a2, unsigned __int64 **a3)
{
  unsigned __int64 *v5; // rbx
  const char *v6; // rax
  _QWORD *v7; // rdx
  _QWORD *v8; // rcx
  _BOOL8 v9; // rdi
  const char *v11; // [rsp+8h] [rbp-30h]

  v5 = (unsigned __int64 *)operator new(0x138u);
  v5[4] = **a3;
  v5[5] = (unsigned __int64)(v5 + 7);
  v5[6] = 0x400000000LL;
  v6 = sub_9F4080(a1, a2, v5 + 4);
  if ( v7 )
  {
    v8 = a1 + 1;
    v9 = 1;
    if ( !v6 && v7 != v8 )
      v9 = v5[4] < v7[4];
    std::_Rb_tree_insert_and_rebalance(v9, v5, v7, v8);
    ++a1[5];
    return v5;
  }
  else
  {
    v11 = v6;
    sub_9ED140((__int64)(v5 + 5));
    operator delete(v5);
    return (unsigned __int64 *)v11;
  }
}
