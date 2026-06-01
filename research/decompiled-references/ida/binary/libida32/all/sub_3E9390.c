void __fastcall sub_3E9390(__int64 a1, unsigned int a2, int a3)
{
  __int64 v4; // rbx
  __int64 v5; // r13
  unsigned int v6; // r14d
  __int64 v7; // r15
  _QWORD *v8; // rax
  void *v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rbx
  _QWORD *v12; // r13
  void *v13; // rdi
  unsigned int v14; // [rsp+0h] [rbp-48h]
  _QWORD *v16; // [rsp+8h] [rbp-40h]

  if ( a2 == -1 )
  {
    v11 = *(_QWORD *)(a1 + 864);
    while ( v11 )
    {
      v12 = (_QWORD *)v11;
      sub_3E8DD0(*(_QWORD **)(v11 + 24));
      v13 = *(void **)(v11 + 40);
      v11 = *(_QWORD *)(v11 + 16);
      if ( v13 )
      {
        v12[6] = 0;
        qfree(v13);
      }
      operator delete(v12, 0x48u);
    }
    *(_QWORD *)(a1 + 864) = 0;
    *(_QWORD *)(a1 + 872) = a1 + 856;
    *(_QWORD *)(a1 + 880) = a1 + 856;
    *(_QWORD *)(a1 + 888) = 0;
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 872);
    v5 = a1 + 856;
    v14 = a2 + a3 - 1;
    while ( v4 != v5 )
    {
      while ( 1 )
      {
        v6 = *(_DWORD *)(v4 + 32);
        v7 = v4;
        v4 = std::_Rb_tree_increment();
        if ( v14 < v6 || v6 + *(__int16 *)(v7 + 66) - 1 < a2 )
          break;
        v8 = (_QWORD *)std::_Rb_tree_rebalance_for_erase();
        v9 = (void *)v8[5];
        if ( v9 )
        {
          v8[6] = 0;
          v16 = v8;
          qfree(v9);
          v8 = v16;
        }
        operator delete(v8, 0x48u);
        --*(_QWORD *)(a1 + 888);
        if ( v4 == v5 )
          goto LABEL_9;
      }
    }
  }
LABEL_9:
  v10 = *(_QWORD *)a1;
  *(_DWORD *)(a1 + 1016) = -1;
  sub_356720(v10, a2, a2 + a3);
}

