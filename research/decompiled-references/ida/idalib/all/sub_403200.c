void __fastcall sub_403200(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  void *v3; // rdi
  void *v4; // rdi

  v2 = (_QWORD *)(*(_QWORD *)(a1 + 40) + 88 * a2);
  switch_dbctx(*(int *)(a1 + 8));
  sub_77EDA0(*(_QWORD *)(a1 + 64), *v2, 0);
  v3 = (void *)v2[2];
  *(_OWORD *)v2 = -1;
  if ( v3 )
  {
    v2[3] = 0;
    qfree(v3);
    v2[2] = 0;
    v2[4] = 0;
  }
  v4 = (void *)v2[5];
  if ( v4 )
  {
    v2[6] = 0;
    qfree(v4);
    v2[5] = 0;
    v2[7] = 0;
  }
}
