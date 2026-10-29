void __fastcall sub_4B51A0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  void *v3; // rdi
  void *v4; // rdi

  switch_dbctx(*(int *)(a1 + 8));
  v2 = (_QWORD *)(**(_QWORD **)(a1 + 40) + 88 * a2);
  v3 = (void *)v2[5];
  if ( v3 )
  {
    qfree(v3);
    v2[5] = 0;
  }
  v4 = (void *)v2[6];
  if ( v4 )
  {
    v2[7] = 0;
    qfree(v4);
    v2[6] = 0;
    v2[8] = 0;
  }
  v2[9] = -1;
}
