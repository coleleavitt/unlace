void __fastcall sub_10450(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // r13
  __int64 v3; // rsi
  __int64 v4; // rbx
  _QWORD *v5; // r13
  __int64 v6; // rsi
  __int64 v7; // rbx
  _QWORD *v8; // r13
  __int64 v9; // rsi
  __int64 v10; // rbx
  _QWORD *v11; // r13
  __int64 v12; // rsi

  *(_QWORD *)a1 = &off_4D8D0;
  sub_10240(*(_QWORD **)(a1 + 248));
  v1 = *(_QWORD *)(a1 + 200);
  while ( v1 )
  {
    v2 = (_QWORD *)v1;
    sub_101E0(*(void **)(v1 + 24));
    v3 = *(_QWORD *)(v1 + 56);
    v1 = *(_QWORD *)(v1 + 16);
    v2[5] = &off_4D850;
    if ( v3 )
      Z3_dec_ref(*(_QWORD *)(v2[6] + 8LL));
    operator delete(v2, 0x40u);
  }
  v4 = *(_QWORD *)(a1 + 152);
  while ( v4 )
  {
    v5 = (_QWORD *)v4;
    sub_101E0(*(void **)(v4 + 24));
    v6 = *(_QWORD *)(v4 + 56);
    v4 = *(_QWORD *)(v4 + 16);
    v5[5] = &off_4D850;
    if ( v6 )
      Z3_dec_ref(*(_QWORD *)(v5[6] + 8LL));
    operator delete(v5, 0x40u);
  }
  v7 = *(_QWORD *)(a1 + 104);
  while ( v7 )
  {
    v8 = (_QWORD *)v7;
    sub_101E0(*(void **)(v7 + 24));
    v9 = *(_QWORD *)(v7 + 56);
    v7 = *(_QWORD *)(v7 + 16);
    v8[5] = &off_4D850;
    if ( v9 )
      Z3_dec_ref(*(_QWORD *)(v8[6] + 8LL));
    operator delete(v8, 0x40u);
  }
  v10 = *(_QWORD *)(a1 + 56);
  while ( v10 )
  {
    v11 = (_QWORD *)v10;
    sub_101E0(*(void **)(v10 + 24));
    v12 = *(_QWORD *)(v10 + 56);
    v10 = *(_QWORD *)(v10 + 16);
    v11[5] = &off_4D850;
    if ( v12 )
      Z3_dec_ref(*(_QWORD *)(v11[6] + 8LL));
    operator delete(v11, 0x40u);
  }
  if ( *(_QWORD *)(a1 + 32) )
    Z3_del_context();
}
