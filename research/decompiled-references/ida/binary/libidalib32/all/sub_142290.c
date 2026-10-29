void __fastcall sub_142290(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r13
  __int64 i; // rbp
  _QWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r13
  __int64 j; // rbp
  _QWORD *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r12
  __int64 k; // rbp
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r12
  __int64 m; // rbp
  _QWORD *v18; // rax
  __int64 v19; // rbp
  __int64 v20; // rbp
  void *v21; // rdi
  __int64 v22; // rbp
  _QWORD *v23; // r12
  __int64 v24; // rdi

  sub_120B70(*(__int64 **)(a1 + 928));
  sub_C14D0(*(_QWORD **)(a1 + 920));
  *(_QWORD *)(a1 + 600) = &off_233CC8;
  clear_tinfo_t();
  if ( *(_QWORD *)(a1 + 864) )
  {
    *(_QWORD *)(a1 + 872) = 0;
    qfree();
  }
  v2 = *(_QWORD *)(a1 + 808);
  *(_QWORD *)(a1 + 600) = &unk_2379E8;
  if ( v2 )
  {
    v3 = *(_QWORD *)(a1 + 816);
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (_QWORD *)(v2 + 24 * i);
        if ( *v5 )
        {
          v5[1] = 0;
          qfree();
          v2 = *(_QWORD *)(a1 + 808);
        }
      }
    }
    *(_QWORD *)(a1 + 816) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 784) )
  {
    *(_QWORD *)(a1 + 792) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 760) )
  {
    *(_QWORD *)(a1 + 768) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 736) )
  {
    *(_QWORD *)(a1 + 744) = 0;
    qfree();
  }
  clear_tinfo_t();
  v6 = *(_QWORD *)(a1 + 688);
  if ( v6 )
  {
    v7 = *(_QWORD *)(a1 + 696);
    if ( v7 )
    {
      for ( j = 0; j != v7; ++j )
      {
        v9 = (_QWORD *)(v6 + 24 * j);
        if ( *v9 )
        {
          v9[1] = 0;
          qfree();
          v6 = *(_QWORD *)(a1 + 688);
        }
      }
    }
    *(_QWORD *)(a1 + 696) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 656) )
  {
    *(_QWORD *)(a1 + 664) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 608) )
  {
    *(_QWORD *)(a1 + 616) = 0;
    qfree();
  }
  v10 = *(_QWORD *)(a1 + 568);
  *(_QWORD *)(a1 + 312) = &off_233C80;
  if ( v10 )
  {
    *(_QWORD *)(a1 + 576) = 0;
    qfree();
  }
  v11 = *(_QWORD *)(a1 + 520);
  *(_QWORD *)(a1 + 312) = &unk_2379E8;
  if ( v11 )
  {
    v12 = *(_QWORD *)(a1 + 528);
    if ( v12 )
    {
      for ( k = 0; k != v12; ++k )
      {
        v14 = (_QWORD *)(v11 + 24 * k);
        if ( *v14 )
        {
          v14[1] = 0;
          qfree();
          v11 = *(_QWORD *)(a1 + 520);
        }
      }
    }
    *(_QWORD *)(a1 + 528) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 496) )
  {
    *(_QWORD *)(a1 + 504) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 472) )
  {
    *(_QWORD *)(a1 + 480) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 448) )
  {
    *(_QWORD *)(a1 + 456) = 0;
    qfree();
  }
  clear_tinfo_t();
  v15 = *(_QWORD *)(a1 + 400);
  if ( v15 )
  {
    v16 = *(_QWORD *)(a1 + 408);
    if ( v16 )
    {
      for ( m = 0; m != v16; ++m )
      {
        v18 = (_QWORD *)(v15 + 24 * m);
        if ( *v18 )
        {
          v18[1] = 0;
          qfree();
          v15 = *(_QWORD *)(a1 + 400);
        }
      }
    }
    *(_QWORD *)(a1 + 408) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 368) )
  {
    *(_QWORD *)(a1 + 376) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 320) )
  {
    *(_QWORD *)(a1 + 328) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 232) )
  {
    *(_QWORD *)(a1 + 240) = 0;
    qfree();
  }
  v19 = *(_QWORD *)(a1 + 184);
  for ( *(_QWORD *)(a1 + 152) = &off_22E4D8; a1 + 168 != v19; v19 = std::_Rb_tree_increment() )
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v19 + 32) + 32LL))(*(_QWORD *)(v19 + 32), a1 + 152);
  sub_140720(*(_QWORD **)(a1 + 176));
  if ( *(_BYTE *)(a1 + 148) )
    sub_19ACC0(a1 + 16);
  v20 = *(_QWORD *)(a1 + 104);
  while ( v20 )
  {
    sub_140F40(*(_QWORD **)(v20 + 24));
    v21 = (void *)v20;
    v20 = *(_QWORD *)(v20 + 16);
    operator delete(v21, 0x30u);
  }
  v22 = *(_QWORD *)(a1 + 56);
  while ( v22 )
  {
    v23 = (_QWORD *)v22;
    sub_141370(*(_QWORD **)(v22 + 24));
    v24 = *(_QWORD *)(v22 + 32);
    v22 = *(_QWORD *)(v22 + 16);
    if ( v24 )
    {
      v23[5] = 0;
      qfree();
    }
    operator delete(v23, 0x40u);
  }
  if ( *(_QWORD *)(a1 + 16) )
  {
    *(_QWORD *)(a1 + 24) = 0;
    qfree();
  }
}

