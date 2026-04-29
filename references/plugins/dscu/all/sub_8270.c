void __fastcall sub_8270(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  _QWORD *v4; // rbx
  _QWORD *i; // r13
  void *v6; // r12
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // r14
  __int64 v15; // r13
  __int64 j; // r12
  _QWORD *v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // r12
  __int64 k; // rbx
  __int64 *v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rdi
  __int64 v29; // rdi
  __int64 v30; // rdi

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 && *(_BYTE *)(a1 + 774) )
    close_linput(v2);
  v3 = *(_QWORD *)(a1 + 752);
  if ( v3 && *(_BYTE *)(a1 + 775) )
    close_linput(v3);
  v4 = *(_QWORD **)(a1 + 784);
  for ( i = &v4[*(_QWORD *)(a1 + 792)]; i != v4; ++v4 )
  {
    v6 = (void *)*v4;
    if ( *v4 )
    {
      sub_8270(*v4);
      operator delete(v6, 0x360u);
    }
  }
  v7 = *(_QWORD *)(a1 + 832);
  if ( v7 )
  {
    *(_QWORD *)(a1 + 840) = 0;
    qfree(v7);
  }
  v8 = *(_QWORD *)(a1 + 784);
  if ( v8 )
  {
    *(_QWORD *)(a1 + 792) = 0;
    qfree(v8);
  }
  v9 = *(_QWORD *)(a1 + 776);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  v10 = *(_QWORD *)(a1 + 728);
  if ( v10 )
  {
    *(_QWORD *)(a1 + 736) = 0;
    qfree(v10);
  }
  v11 = *(_QWORD *)(a1 + 704);
  if ( v11 )
  {
    *(_QWORD *)(a1 + 712) = 0;
    qfree(v11);
  }
  v12 = *(_QWORD *)(a1 + 672);
  if ( v12 )
  {
    *(_QWORD *)(a1 + 680) = 0;
    qfree(v12);
  }
  v13 = *(_QWORD *)(a1 + 648);
  if ( v13 )
  {
    v14 = *(_QWORD *)(a1 + 656);
    if ( v14 )
    {
      v15 = 0;
      for ( j = 0; j != v14; ++j )
      {
        v17 = (_QWORD *)(v13 + v15);
        v18 = *(_QWORD *)(v13 + v15 + 120);
        if ( v18 )
        {
          v17[16] = 0;
          qfree(v18);
        }
        v19 = v17[12];
        if ( v19 )
        {
          v17[13] = 0;
          qfree(v19);
        }
        v20 = v17[9];
        if ( v20 )
        {
          v17[10] = 0;
          qfree(v20);
        }
        v21 = v17[5];
        if ( v21 )
        {
          v17[6] = 0;
          qfree(v21);
        }
        v13 = *(_QWORD *)(a1 + 648);
        v15 += 168;
      }
    }
    *(_QWORD *)(a1 + 656) = 0;
    qfree(v13);
  }
  v22 = *(_QWORD *)(a1 + 624);
  if ( v22 )
  {
    *(_QWORD *)(a1 + 632) = 0;
    qfree(v22);
  }
  v23 = *(_QWORD *)(a1 + 600);
  if ( v23 )
  {
    v24 = *(_QWORD *)(a1 + 608);
    if ( v24 )
    {
      for ( k = 0; k != v24; ++k )
      {
        v26 = (__int64 *)(v23 + 24 * k);
        v27 = *v26;
        if ( *v26 )
        {
          v26[1] = 0;
          qfree(v27);
          v23 = *(_QWORD *)(a1 + 600);
        }
      }
    }
    *(_QWORD *)(a1 + 608) = 0;
    qfree(v23);
  }
  v28 = *(_QWORD *)(a1 + 576);
  if ( v28 )
  {
    *(_QWORD *)(a1 + 584) = 0;
    qfree(v28);
  }
  v29 = *(_QWORD *)(a1 + 552);
  if ( v29 )
  {
    *(_QWORD *)(a1 + 560) = 0;
    qfree(v29);
  }
  v30 = *(_QWORD *)(a1 + 528);
  if ( v30 )
  {
    *(_QWORD *)(a1 + 536) = 0;
    qfree(v30);
  }
}
