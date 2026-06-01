void __fastcall sub_3F0180(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  void *v3; // rdi
  void *v4; // rdi

  v2 = (_QWORD *)(*(_QWORD *)(a1 + 40) + 80 * a2);
  switch_dbctx(*(int *)(a1 + 8));
  sub_75E950(*(_QWORD *)(a1 + 64), *(unsigned int *)v2, 0);
  v3 = (void *)v2[1];
  *v2 = -1;
  if ( v3 )
  {
    v2[2] = 0;
    qfree(v3);
    v2[1] = 0;
    v2[3] = 0;
  }
  v4 = (void *)v2[4];
  if ( v4 )
  {
    v2[5] = 0;
    qfree(v4);
    v2[4] = 0;
    v2[6] = 0;
  }
}

