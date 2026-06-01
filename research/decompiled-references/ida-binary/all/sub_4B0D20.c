void sub_4B0D20()
{
  __int64 v0; // rbx
  __int64 i; // rdi
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 **v6; // r12
  _QWORD *v7; // rbx
  __int64 v8; // rdi

  v0 = qword_8D1CB8;
  if ( (int *)qword_8D1CB8 != &dword_8D1CA8 )
  {
    do
    {
      sub_4B03E0((__int64 **)(v0 + 56), (_BYTE *)&dword_0 + 1);
      v0 = std::_Rb_tree_increment(v0);
    }
    while ( (int *)v0 != &dword_8D1CA8 );
LABEL_3:
    for ( i = qword_8D1CB8; (int *)i != &dword_8D1CA8; i = std::_Rb_tree_increment(i) )
    {
      v2 = *(_QWORD *)(i + 72);
      if ( !v2 || !*(_QWORD *)(v2 + 8) )
      {
        v3 = *(_QWORD *)(i + 64);
        if ( !v3 || !*(_QWORD *)(v3 + 8) )
        {
          v4 = *(_QWORD *)(i + 56);
          if ( !v4 || !*(_QWORD *)(v4 + 8) )
          {
            v5 = std::_Rb_tree_rebalance_for_erase(i, &dword_8D1CA8);
            v6 = (__int64 **)(v5 + 56);
            v7 = (_QWORD *)v5;
            sub_4B03E0((__int64 **)(v5 + 56), (_BYTE *)&dword_0 + 1);
            sub_4B03E0(v6, nullptr);
            v8 = v7[4];
            if ( v8 )
            {
              v7[5] = 0;
              qfree(v8, nullptr);
            }
            operator delete(v7, 0x50u);
            --qword_8D1CC8;
            goto LABEL_3;
          }
        }
      }
    }
  }
}
