void __fastcall sub_1429F0(__int64 a1)
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

  sub_121100(*(__int64 **)(a1 + 952));
  sub_C2670(*(_QWORD **)(a1 + 944));
  *(_QWORD *)(a1 + 616) = &off_234CC8;
  clear_tinfo_t();
  if ( *(_QWORD *)(a1 + 888) )
  {
    *(_QWORD *)(a1 + 896) = 0;
    qfree();
  }
  v2 = *(_QWORD *)(a1 + 832);
  *(_QWORD *)(a1 + 616) = &unk_2389E8;
  if ( v2 )
  {
    v3 = *(_QWORD *)(a1 + 840);
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (_QWORD *)(v2 + 24 * i);
        if ( *v5 )
        {
          v5[1] = 0;
          qfree();
          v2 = *(_QWORD *)(a1 + 832);
        }
      }
    }
    *(_QWORD *)(a1 + 840) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 808) )
  {
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
  clear_tinfo_t();
  v6 = *(_QWORD *)(a1 + 712);
  if ( v6 )
  {
    v7 = *(_QWORD *)(a1 + 720);
    if ( v7 )
    {
      for ( j = 0; j != v7; ++j )
      {
        v9 = (_QWORD *)(v6 + 24 * j);
        if ( *v9 )
        {
          v9[1] = 0;
          qfree();
          v6 = *(_QWORD *)(a1 + 712);
        }
      }
    }
    *(_QWORD *)(a1 + 720) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 680) )
  {
    *(_QWORD *)(a1 + 688) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 624) )
  {
    *(_QWORD *)(a1 + 632) = 0;
    qfree();
  }
  v10 = *(_QWORD *)(a1 + 584);
  *(_QWORD *)(a1 + 320) = &off_234C80;
  if ( v10 )
  {
    *(_QWORD *)(a1 + 592) = 0;
    qfree();
  }
  v11 = *(_QWORD *)(a1 + 536);
  *(_QWORD *)(a1 + 320) = &unk_2389E8;
  if ( v11 )
  {
    v12 = *(_QWORD *)(a1 + 544);
    if ( v12 )
    {
      for ( k = 0; k != v12; ++k )
      {
        v14 = (_QWORD *)(v11 + 24 * k);
        if ( *v14 )
        {
          v14[1] = 0;
          qfree();
          v11 = *(_QWORD *)(a1 + 536);
        }
      }
    }
    *(_QWORD *)(a1 + 544) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 512) )
  {
    *(_QWORD *)(a1 + 520) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 488) )
  {
    *(_QWORD *)(a1 + 496) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 464) )
  {
    *(_QWORD *)(a1 + 472) = 0;
    qfree();
  }
  clear_tinfo_t();
  v15 = *(_QWORD *)(a1 + 416);
  if ( v15 )
  {
    v16 = *(_QWORD *)(a1 + 424);
    if ( v16 )
    {
      for ( m = 0; m != v16; ++m )
      {
        v18 = (_QWORD *)(v15 + 24 * m);
        if ( *v18 )
        {
          v18[1] = 0;
          qfree();
          v15 = *(_QWORD *)(a1 + 416);
        }
      }
    }
    *(_QWORD *)(a1 + 424) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 384) )
  {
    *(_QWORD *)(a1 + 392) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 328) )
  {
    *(_QWORD *)(a1 + 336) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 232) )
  {
    *(_QWORD *)(a1 + 240) = 0;
    qfree();
  }
  v19 = *(_QWORD *)(a1 + 184);
  for ( *(_QWORD *)(a1 + 152) = &off_22F558; a1 + 168 != v19; v19 = std::_Rb_tree_increment() )
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v19 + 32) + 32LL))(*(_QWORD *)(v19 + 32), a1 + 152);
  sub_140E80(*(_QWORD **)(a1 + 176));
  if ( *(_BYTE *)(a1 + 148) )
    sub_19B8C0(a1 + 16);
  v20 = *(_QWORD *)(a1 + 104);
  while ( v20 )
  {
    sub_1416A0(*(_QWORD **)(v20 + 24));
    v21 = (void *)v20;
    v20 = *(_QWORD *)(v20 + 16);
    operator delete(v21, 0x30u);
  }
  v22 = *(_QWORD *)(a1 + 56);
  while ( v22 )
  {
    v23 = (_QWORD *)v22;
    sub_141AD0(*(_QWORD **)(v22 + 24));
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

