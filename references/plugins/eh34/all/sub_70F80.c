void __fastcall sub_70F80(__int64 a1)
{
  __int64 v2; // rbx
  _QWORD *v3; // rbp
  __int64 v4; // rdi
  __int64 v5; // rbx
  void *v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // r15
  __int64 v9; // r14
  __int64 i; // r13
  __int64 v11; // rbx
  _QWORD *v12; // rbp
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rbx
  void *v16; // rdi
  __int64 v17; // rbx
  void *v18; // rdi
  __int64 v19; // rbx
  void *v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rdi

  v2 = *(_QWORD *)(a1 + 1944);
  while ( v2 )
  {
    v3 = (_QWORD *)v2;
    sub_6F800(*(_QWORD **)(v2 + 24));
    v4 = *(_QWORD *)(v2 + 40);
    v2 = *(_QWORD *)(v2 + 16);
    if ( v4 )
    {
      v3[6] = 0;
      qfree(v4);
    }
    operator delete(v3, 0x40u);
  }
  v5 = *(_QWORD *)(a1 + 1896);
  while ( v5 )
  {
    sub_70040(*(_QWORD **)(v5 + 24));
    v6 = (void *)v5;
    v5 = *(_QWORD *)(v5 + 16);
    operator delete(v6, 0x28u);
  }
  v7 = *(_QWORD *)(a1 + 1840);
  *(_QWORD *)(a1 + 1360) = &off_8C4B0;
  if ( v7 )
  {
    v8 = *(_QWORD *)(a1 + 1848);
    if ( v8 )
    {
      v9 = 0;
      for ( i = 0; i != v8; ++i )
      {
        v11 = *(_QWORD *)(v7 + v9 + 48);
        if ( v11 )
        {
          do
          {
            v12 = (_QWORD *)v11;
            sub_6FD80(*(_QWORD **)(v11 + 24));
            v13 = *(_QWORD *)(v11 + 64);
            v11 = *(_QWORD *)(v11 + 16);
            if ( v13 )
            {
              v12[9] = 0;
              qfree(v13);
            }
            operator delete(v12, 0x58u);
          }
          while ( v11 );
          v7 = *(_QWORD *)(a1 + 1840);
        }
        v9 += 88;
      }
    }
    *(_QWORD *)(a1 + 1848) = 0;
    qfree(v7);
  }
  v14 = *(_QWORD *)(a1 + 1808);
  if ( v14 )
  {
    *(_QWORD *)(a1 + 1816) = 0;
    qfree(v14);
  }
  v15 = *(_QWORD *)(a1 + 1776);
  while ( v15 )
  {
    sub_70040(*(_QWORD **)(v15 + 24));
    v16 = (void *)v15;
    v15 = *(_QWORD *)(v15 + 16);
    operator delete(v16, 0x28u);
  }
  sub_70720(*(_QWORD **)(a1 + 1728));
  v17 = *(_QWORD *)(a1 + 1680);
  while ( v17 )
  {
    sub_70040(*(_QWORD **)(v17 + 24));
    v18 = (void *)v17;
    v17 = *(_QWORD *)(v17 + 16);
    operator delete(v18, 0x28u);
  }
  *(_QWORD *)(a1 + 1360) = &unk_8C9D8;
  sub_5F670(a1 + 1360);
  v19 = *(_QWORD *)(a1 + 1600);
  while ( v19 )
  {
    sub_70040(*(_QWORD **)(v19 + 24));
    v20 = (void *)v19;
    v19 = *(_QWORD *)(v19 + 16);
    operator delete(v20, 0x28u);
  }
  v21 = *(_QWORD *)(a1 + 1552);
  if ( v21 )
  {
    *(_QWORD *)(a1 + 1560) = 0;
    qfree(v21);
  }
  if ( *(_BYTE *)(a1 + 1528) )
  {
    v22 = *(_QWORD *)(a1 + 1504);
    *(_BYTE *)(a1 + 1528) = 0;
    if ( v22 )
    {
      *(_QWORD *)(a1 + 1512) = 0;
      qfree(v22);
    }
  }
  sub_E860(a1 + 48);
}
