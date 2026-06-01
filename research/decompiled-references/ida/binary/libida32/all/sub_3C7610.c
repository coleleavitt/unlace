void __fastcall sub_3C7610(__int64 a1)
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

  sub_4EF9B0(*(_QWORD *)(a1 + 2712), a1 + 2672);
  v2 = *(void **)(a1 + 2640);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 2648) = 0;
    qfree(v2);
  }
  v3 = *(void **)(a1 + 2600);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 2608) = 0;
    qfree(v3);
  }
  v4 = *(void **)(a1 + 2568);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 2576) = 0;
    qfree(v4);
  }
  sub_4EF9B0(*(_QWORD *)(a1 + 2448), a1 + 2408);
  v5 = *(_QWORD *)(a1 + 2376);
  while ( v5 )
  {
    sub_3B5890(*(_QWORD **)(v5 + 24));
    v6 = (void *)v5;
    v5 = *(_QWORD *)(v5 + 16);
    operator delete(v6, 0x40u);
  }
  sub_3C65C0(a1 + 2248);
  v7 = *(void **)(a1 + 2248);
  if ( v7 != (void *)(a1 + 2296) )
    operator delete(v7, 8LL * *(_QWORD *)(a1 + 2256));
  v8 = *(_QWORD *)(a1 + 2200);
  while ( v8 )
  {
    sub_3B56C0(*(_QWORD **)(v8 + 24));
    v9 = (void *)v8;
    v8 = *(_QWORD *)(v8 + 16);
    operator delete(v9, 0x28u);
  }
  v10 = *(_QWORD *)(a1 + 2144);
  while ( v10 )
  {
    sub_3B56C0(*(_QWORD **)(v10 + 24));
    v11 = (void *)v10;
    v10 = *(_QWORD *)(v10 + 16);
    operator delete(v11, 0x28u);
  }
  sub_3C6650(a1 + 2016, *(_QWORD **)(a1 + 2088));
  v12 = *(void **)(a1 + 2016);
  if ( v12 )
  {
    *(_QWORD *)(a1 + 2024) = 0;
    qfree(v12);
  }
  sub_3C6650(a1 + 1912, *(_QWORD **)(a1 + 1984));
  v13 = *(void **)(a1 + 1912);
  if ( v13 )
  {
    *(_QWORD *)(a1 + 1920) = 0;
    qfree(v13);
  }
  sub_3C6650(a1 + 1808, *(_QWORD **)(a1 + 1880));
  v14 = *(void **)(a1 + 1808);
  if ( v14 )
  {
    *(_QWORD *)(a1 + 1816) = 0;
    qfree(v14);
  }
  sub_3C6650(a1 + 1704, *(_QWORD **)(a1 + 1776));
  v15 = *(void **)(a1 + 1704);
  if ( v15 )
  {
    *(_QWORD *)(a1 + 1712) = 0;
    qfree(v15);
  }
  sub_4EF9B0(*(_QWORD *)(a1 + 1664), a1 + 1624);
  sub_4EF9B0(*(_QWORD *)(a1 + 1592), a1 + 1552);
  v16 = *(_QWORD *)(a1 + 1496);
  while ( v16 )
  {
    sub_3B66F0(*(_QWORD **)(v16 + 24));
    v17 = (void *)v16;
    v16 = *(_QWORD *)(v16 + 16);
    operator delete(v17, 0x28u);
  }
  v18 = *(_QWORD *)(a1 + 1448);
  while ( v18 )
  {
    sub_3B66F0(*(_QWORD **)(v18 + 24));
    v19 = (void *)v18;
    v18 = *(_QWORD *)(v18 + 16);
    operator delete(v19, 0x28u);
  }
  sub_4EF9B0(*(_QWORD *)(a1 + 1400), a1 + 1360);
  sub_4EF9B0(*(_QWORD *)(a1 + 1328), a1 + 1288);
  v20 = *(void **)(a1 + 1248);
  if ( v20 )
  {
    *(_QWORD *)(a1 + 1256) = 0;
    qfree(v20);
  }
  v21 = *(void **)(a1 + 1152);
  if ( v21 )
  {
    *(_QWORD *)(a1 + 1160) = 0;
    qfree(v21);
  }
  v22 = *(void **)(a1 + 1112);
  if ( v22 )
  {
    *(_QWORD *)(a1 + 1120) = 0;
    qfree(v22);
  }
  v23 = *(void **)(a1 + 1072);
  if ( v23 )
  {
    *(_QWORD *)(a1 + 1080) = 0;
    qfree(v23);
  }
  v24 = *(void **)(a1 + 1032);
  if ( v24 )
  {
    *(_QWORD *)(a1 + 1040) = 0;
    qfree(v24);
  }
  v25 = *(_QWORD *)(a1 + 960);
  while ( v25 )
  {
    sub_3B68C0(*(_QWORD **)(v25 + 24));
    v26 = (void *)v25;
    v25 = *(_QWORD *)(v25 + 16);
    operator delete(v26, 0x30u);
  }
  v27 = *(_QWORD *)(a1 + 912);
  while ( v27 )
  {
    sub_3B68C0(*(_QWORD **)(v27 + 24));
    v28 = (void *)v27;
    v27 = *(_QWORD *)(v27 + 16);
    operator delete(v28, 0x30u);
  }
  v29 = *(_QWORD *)(a1 + 864);
  while ( v29 )
  {
    v30 = (_QWORD *)v29;
    sub_3B5C30(*(_QWORD **)(v29 + 24));
    v31 = *(void **)(v29 + 40);
    v29 = *(_QWORD *)(v29 + 16);
    if ( v31 )
    {
      v30[6] = 0;
      qfree(v31);
    }
    operator delete(v30, 0x48u);
  }
  v32 = *(void **)(a1 + 808);
  if ( v32 )
  {
    *(_QWORD *)(a1 + 816) = 0;
    qfree(v32);
  }
  v33 = *(_QWORD *)(a1 + 736);
  while ( v33 )
  {
    sub_3B5A60(*(_QWORD **)(v33 + 24));
    v34 = (void *)v33;
    v33 = *(_QWORD *)(v33 + 16);
    operator delete(v34, 0x28u);
  }
  sub_5E3500((void *)(a1 + 40));
}

