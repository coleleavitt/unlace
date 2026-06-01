void __fastcall sub_3C6CC0(__int64 a1)
{
  __int64 v2; // rbx
  void *v3; // rdi
  __int64 v4; // rbx
  void *v5; // rdi
  void *v6; // rdi
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi

  v2 = *(_QWORD *)(a1 + 496);
  while ( v2 )
  {
    sub_3B56C0(*(_QWORD **)(v2 + 24));
    v3 = (void *)v2;
    v2 = *(_QWORD *)(v2 + 16);
    operator delete(v3, 0x28u);
  }
  v4 = *(_QWORD *)(a1 + 440);
  while ( v4 )
  {
    sub_3B56C0(*(_QWORD **)(v4 + 24));
    v5 = (void *)v4;
    v4 = *(_QWORD *)(v4 + 16);
    operator delete(v5, 0x28u);
  }
  sub_3C6650(a1 + 312, *(_QWORD **)(a1 + 384));
  v6 = *(void **)(a1 + 312);
  if ( v6 )
  {
    *(_QWORD *)(a1 + 320) = 0;
    qfree(v6);
  }
  sub_3C6650(a1 + 208, *(_QWORD **)(a1 + 280));
  v7 = *(void **)(a1 + 208);
  if ( v7 )
  {
    *(_QWORD *)(a1 + 216) = 0;
    qfree(v7);
  }
  sub_3C6650(a1 + 104, *(_QWORD **)(a1 + 176));
  v8 = *(void **)(a1 + 104);
  if ( v8 )
  {
    *(_QWORD *)(a1 + 112) = 0;
    qfree(v8);
  }
  sub_3C6650(a1, *(_QWORD **)(a1 + 72));
  v9 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    qfree(v9);
  }
}

