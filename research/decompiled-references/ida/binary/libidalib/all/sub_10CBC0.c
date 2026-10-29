__int64 __fastcall sub_10CBC0(__int64 a1)
{
  __int64 *v2; // rbp
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rbx
  void *v6; // rdi

  v2 = *(__int64 **)(a1 + 16);
  *(_QWORD *)a1 = &off_231798;
  if ( v2 )
  {
    sub_F2CE0(v2 + 20);
    sub_169C90(v2 + 9);
    v3 = v2[4];
    *v2 = (__int64)&off_22F558;
    if ( (__int64 *)v3 == v2 + 2 )
    {
      v4 = (__int64)(v2 + 2);
    }
    else
    {
      do
      {
        (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(v3 + 32) + 32LL))(*(_QWORD *)(v3 + 32), v2);
        v3 = std::_Rb_tree_increment();
      }
      while ( v2 + 2 != (__int64 *)v3 );
      v4 = v2[4];
    }
    sub_99FE0((__int64)(v2 + 1), v4, (__int64)(v2 + 2));
    v5 = v2[3];
    while ( v5 )
    {
      sub_107030(*(_QWORD **)(v5 + 24));
      v6 = (void *)v5;
      v5 = *(_QWORD *)(v5 + 16);
      operator delete(v6, 0x28u);
    }
    operator delete(v2, 0xA8u);
  }
  if ( *(_QWORD *)(a1 + 64) )
  {
    *(_QWORD *)(a1 + 72) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 32) )
  {
    *(_QWORD *)(a1 + 40) = 0;
    qfree();
  }
  sub_F27B0((int *)(a1 + 24));
  return sub_19A100(a1);
}

