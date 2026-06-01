void __fastcall sub_4D2320(_QWORD *a1)
{
  int *v2; // rax
  int *v3; // rbp
  __int64 v4; // rax
  void *v5; // rdi
  __int64 (__fastcall **v6)(); // r12
  void *v7; // rdi
  __int64 v8; // rax
  void *v9; // rdi
  void *v10; // rbx
  __int64 v11; // rax

  v2 = (int *)sub_4D2210((__int64)&unk_2CA1FA0, (__int64)(a1 + 8));
  if ( v2 != &dword_2CA1FA8 )
  {
    v3 = v2;
    if ( a1 )
    {
      if ( (debug & 0x20) != 0 )
        sub_383DA0();
      if ( a1 == (_QWORD *)a1[16] )
      {
        v6 = (__int64 (__fastcall **)())&unk_2B03360;
        do
        {
          if ( *(_BYTE *)v6 == 7 )
          {
            v7 = *(void **)((char *)v6[2] + (_QWORD)a1);
            if ( v7 )
              qfree(v7);
          }
          v6 += 4;
        }
        while ( v6 != &off_2B03460 );
        v11 = a1[11];
        if ( v11 )
          --*(_DWORD *)(v11 + 12);
        a1[11] = 0;
      }
      a1[16] = 0;
      free_idcv(a1 + 12);
      v4 = a1[11];
      if ( v4 )
        --*(_DWORD *)(v4 + 12);
      v5 = (void *)a1[8];
      if ( v5 )
      {
        a1[9] = 0;
        qfree(v5);
      }
      operator delete(a1, 0x88u);
    }
    if ( *((_QWORD **)v3 + 7) == a1 )
    {
      v8 = std::_Rb_tree_rebalance_for_erase();
      v9 = *(void **)(v8 + 32);
      v10 = (void *)v8;
      if ( v9 )
      {
        *(_QWORD *)(v8 + 40) = 0;
        qfree(v9);
      }
      operator delete(v10, 0x40u);
      --qword_2CA1FC8;
    }
  }
}

