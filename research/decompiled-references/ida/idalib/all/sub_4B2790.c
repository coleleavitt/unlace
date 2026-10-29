unsigned __int64 __fastcall sub_4B2790(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  unsigned __int64 *v4; // rbx
  _QWORD *v5; // r13
  _QWORD *v6; // rbp
  _QWORD *v7; // rbx
  void *v8; // rdi
  void *v9; // rdi

  v3 = **(_QWORD **)(a1 + 40);
  *(_BYTE *)(a1 + 144) = 1;
  v4 = (unsigned __int64 *)(16 * a2 + v3);
  switch_dbctx(*(int *)(a1 + 8));
  v5 = sub_4B1D30(a1, *v4, *(_QWORD **)(a1 + 56));
  v6 = sub_4B1D30(a1, v4[1], v5);
  if ( v5 != v6 )
  {
    v7 = v5;
    do
    {
      clear_tinfo_t(v7 + 8);
      v8 = (void *)v7[5];
      if ( v8 )
      {
        v7[6] = 0;
        qfree(v8);
      }
      v9 = (void *)v7[2];
      if ( v9 )
      {
        v7[3] = 0;
        qfree(v9);
      }
      v7 += 18;
    }
    while ( v6 != v7 );
  }
  memmove(v5, v6, *(_QWORD *)(a1 + 56) + 144LL * *(_QWORD *)(a1 + 64) - (_QWORD)v6);
  *(_QWORD *)(a1 + 64) -= 0x8E38E38E38E38E39LL * (((char *)v6 - (char *)v5) >> 4);
  return 0x8E38E38E38E38E39LL;
}
