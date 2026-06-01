unsigned __int64 *__fastcall sub_9D0430(_QWORD *a1, _QWORD *a2, unsigned __int64 **a3)
{
  unsigned __int64 *v4; // rbx
  _QWORD *v5; // rax
  __int64 v6; // rdx
  _QWORD *v8; // [rsp+8h] [rbp-30h]

  v4 = (unsigned __int64 *)operator new(0x138u);
  v4[4] = **a3;
  v4[5] = (unsigned __int64)(v4 + 7);
  v4[6] = 0x400000000LL;
  v5 = sub_9D0340(a1, a2, v4 + 4);
  if ( v6 )
  {
    std::_Rb_tree_insert_and_rebalance();
    ++a1[5];
    return v4;
  }
  else
  {
    v8 = v5;
    sub_9C9400((__int64)(v4 + 5));
    operator delete(v4);
    return v8;
  }
}

