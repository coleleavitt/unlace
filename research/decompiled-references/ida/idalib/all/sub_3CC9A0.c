void __fastcall sub_3CC9A0(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  __int64 v5; // rbp
  void *v6; // rdi
  void *v7; // rdi
  __int64 v8; // rbp
  void *v9; // rdi
  __int64 v10; // rbp
  void *v11; // rdi
  void *v12; // rdi
  void *v13; // rdi
  void *v14; // rdi
  void *v15; // rdi
  __int64 v16; // rbp
  void *v17; // rdi
  __int64 v18; // rbp
  void *v19; // rdi
  void *v20; // rdi
  void *v21; // rdi
  void *v22; // rdi
  void *v23; // rdi
  void *v24; // rdi
  __int64 v25; // rbp
  void *v26; // rdi
  __int64 v27; // rbp
  void *v28; // rdi
  __int64 v29; // rbp
  _QWORD *v30; // r12
  void *v31; // rdi
  void *v32; // rdi
  __int64 v33; // rbp
  void *v34; // rdi

  sub_506F90(*(_QWORD *)(a1 + 2920), a1 + 2872);
  v2 = *(void **)(a1 + 2840);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 2848) = 0;
    qfree(v2);
  }
  v3 = *(void **)(a1 + 2800);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 2808) = 0;
    qfree(v3);
  }
  v4 = *(void **)(a1 + 2768);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 2776) = 0;
    qfree(v4);
  }
  sub_506F90(*(_QWORD *)(a1 + 2568), a1 + 2520);
  v5 = *(_QWORD *)(a1 + 2488);
  while ( v5 )
  {
    sub_3BA3B0(*(_QWORD **)(v5 + 24));
    v6 = (void *)v5;
    v5 = *(_QWORD *)(v5 + 16);
    operator delete(v6, 0x50u);
  }
  sub_3CB900(a1 + 2336);
  v7 = *(void **)(a1 + 2336);
  if ( v7 != (void *)(a1 + 2384) )
    operator delete(v7, 8LL * *(_QWORD *)(a1 + 2344));
  v8 = *(_QWORD *)(a1 + 2288);
  while ( v8 )
  {
    sub_3BA080(*(_QWORD **)(v8 + 24));
    v9 = (void *)v8;
    v8 = *(_QWORD *)(v8 + 16);
    operator delete(v9, 0x30u);
  }
  v10 = *(_QWORD *)(a1 + 2232);
  while ( v10 )
  {
    sub_3BA080(*(_QWORD **)(v10 + 24));
    v11 = (void *)v10;
    v10 = *(_QWORD *)(v10 + 16);
    operator delete(v11, 0x30u);
  }
  sub_3CB990(a1 + 2104, *(_QWORD **)(a1 + 2176));
  v12 = *(void **)(a1 + 2104);
  if ( v12 )
  {
    *(_QWORD *)(a1 + 2112) = 0;
    qfree(v12);
  }
  sub_3CB990(a1 + 2000, *(_QWORD **)(a1 + 2072));
  v13 = *(void **)(a1 + 2000);
  if ( v13 )
  {
    *(_QWORD *)(a1 + 2008) = 0;
    qfree(v13);
  }
  sub_3CB990(a1 + 1896, *(_QWORD **)(a1 + 1968));
  v14 = *(void **)(a1 + 1896);
  if ( v14 )
  {
    *(_QWORD *)(a1 + 1904) = 0;
    qfree(v14);
  }
  sub_3CB990(a1 + 1792, *(_QWORD **)(a1 + 1864));
  v15 = *(void **)(a1 + 1792);
  if ( v15 )
  {
    *(_QWORD *)(a1 + 1800) = 0;
    qfree(v15);
  }
  sub_506F90(*(_QWORD *)(a1 + 1752), a1 + 1704);
  sub_506F90(*(_QWORD *)(a1 + 1672), a1 + 1624);
  v16 = *(_QWORD *)(a1 + 1544);
  while ( v16 )
  {
    sub_3BBB90(*(_QWORD **)(v16 + 24));
    v17 = (void *)v16;
    v16 = *(_QWORD *)(v16 + 16);
    operator delete(v17, 0x30u);
  }
  v18 = *(_QWORD *)(a1 + 1496);
  while ( v18 )
  {
    sub_3BBB90(*(_QWORD **)(v18 + 24));
    v19 = (void *)v18;
    v18 = *(_QWORD *)(v18 + 16);
    operator delete(v19, 0x30u);
  }
  sub_506F90(*(_QWORD *)(a1 + 1448), a1 + 1400);
  sub_506F90(*(_QWORD *)(a1 + 1368), a1 + 1320);
  v20 = *(void **)(a1 + 1280);
  if ( v20 )
  {
    *(_QWORD *)(a1 + 1288) = 0;
    qfree(v20);
  }
  v21 = *(void **)(a1 + 1160);
  if ( v21 )
  {
    *(_QWORD *)(a1 + 1168) = 0;
    qfree(v21);
  }
  v22 = *(void **)(a1 + 1120);
  if ( v22 )
  {
    *(_QWORD *)(a1 + 1128) = 0;
    qfree(v22);
  }
  v23 = *(void **)(a1 + 1080);
  if ( v23 )
  {
    *(_QWORD *)(a1 + 1088) = 0;
    qfree(v23);
  }
  v24 = *(void **)(a1 + 1040);
  if ( v24 )
  {
    *(_QWORD *)(a1 + 1048) = 0;
    qfree(v24);
  }
  v25 = *(_QWORD *)(a1 + 968);
  while ( v25 )
  {
    sub_3BBD60(*(_QWORD **)(v25 + 24));
    v26 = (void *)v25;
    v25 = *(_QWORD *)(v25 + 16);
    operator delete(v26, 0x38u);
  }
  v27 = *(_QWORD *)(a1 + 920);
  while ( v27 )
  {
    sub_3BBD60(*(_QWORD **)(v27 + 24));
    v28 = (void *)v27;
    v27 = *(_QWORD *)(v27 + 16);
    operator delete(v28, 0x38u);
  }
  v29 = *(_QWORD *)(a1 + 872);
  while ( v29 )
  {
    v30 = (_QWORD *)v29;
    sub_3BA750(*(_QWORD **)(v29 + 24));
    v31 = *(void **)(v29 + 40);
    v29 = *(_QWORD *)(v29 + 16);
    if ( v31 )
    {
      v30[6] = 0;
      qfree(v31);
    }
    operator delete(v30, 0x48u);
  }
  v32 = *(void **)(a1 + 816);
  if ( v32 )
  {
    *(_QWORD *)(a1 + 824) = 0;
    qfree(v32);
  }
  v33 = *(_QWORD *)(a1 + 744);
  while ( v33 )
  {
    sub_3BA580(*(_QWORD **)(v33 + 24));
    v34 = (void *)v33;
    v33 = *(_QWORD *)(v33 + 16);
    operator delete(v34, 0x28u);
  }
  sub_5FF3C0((void *)(a1 + 40));
}
