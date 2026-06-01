void __fastcall sub_3FAC0(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 *v4; // r12
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // r14
  __int64 i; // r13
  __int64 *v13; // rbp
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rbp
  void *v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // r12
  __int64 j; // rbp
  __int64 *v26; // rax
  __int64 v27; // rdi

  v2 = *(_QWORD *)(a1 + 240);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = *(_QWORD *)(a1 + 584);
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 240) = 0;
  if ( v3 )
  {
    *(_QWORD *)(a1 + 592) = 0;
    qfree(v3);
  }
  v4 = *(__int64 **)(a1 + 568);
  if ( v4 )
  {
    v5 = v4[172];
    if ( v5 )
    {
      v4[173] = 0;
      qfree(v5);
    }
    v6 = v4[169];
    if ( v6 )
    {
      v4[170] = 0;
      qfree(v6);
    }
    v7 = v4[166];
    if ( v7 )
    {
      v4[167] = 0;
      qfree(v7);
    }
    sub_3F920(v4 + 78);
    v8 = v4[75];
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    v9 = v4[72];
    if ( v9 )
    {
      v4[73] = 0;
      qfree(v9);
    }
    v10 = v4[36];
    if ( v10 )
    {
      v11 = v4[37];
      if ( v11 )
      {
        for ( i = 0; i != v11; ++i )
        {
          v13 = (__int64 *)(v10 + 96 * i);
          v14 = v13[3];
          if ( v14 )
          {
            v13[4] = 0;
            qfree(v14);
          }
          v15 = *v13;
          if ( *v13 )
          {
            v13[1] = 0;
            qfree(v15);
          }
          v10 = v4[36];
        }
      }
      v4[37] = 0;
      qfree(v10);
    }
    v16 = v4[14];
    if ( v16 )
    {
      v4[15] = 0;
      qfree(v16);
    }
    v17 = v4[4];
    if ( v17 )
    {
      v4[5] = 0;
      qfree(v17);
    }
    operator delete(v4, 0x578u);
  }
  *(_QWORD *)(a1 + 568) = 0;
  close_linput(*(_QWORD *)(a1 + 560));
  v18 = *(_QWORD *)(a1 + 536);
  *(_QWORD *)(a1 + 560) = 0;
  if ( v18 )
  {
    *(_QWORD *)(a1 + 544) = 0;
    qfree(v18);
  }
  v19 = *(_QWORD *)(a1 + 392);
  while ( v19 )
  {
    sub_31CE0(*(_QWORD **)(v19 + 24));
    v20 = (void *)v19;
    v19 = *(_QWORD *)(v19 + 16);
    operator delete(v20, 0x40u);
  }
  v21 = *(_QWORD *)(a1 + 336);
  if ( v21 )
  {
    *(_QWORD *)(a1 + 344) = 0;
    qfree(v21);
  }
  v22 = *(_QWORD *)(a1 + 280);
  if ( v22 )
  {
    *(_QWORD *)(a1 + 288) = 0;
    qfree(v22);
  }
  v23 = *(_QWORD *)(a1 + 248);
  if ( v23 )
  {
    v24 = *(_QWORD *)(a1 + 256);
    if ( v24 )
    {
      for ( j = 0; j != v24; ++j )
      {
        v26 = (__int64 *)(v23 + 24 * j);
        v27 = *v26;
        if ( *v26 )
        {
          v26[1] = 0;
          qfree(v27);
          v23 = *(_QWORD *)(a1 + 248);
        }
      }
    }
    *(_QWORD *)(a1 + 256) = 0;
    qfree(v23);
  }
  sub_2E1E0((_QWORD **)(a1 + 232));
}

