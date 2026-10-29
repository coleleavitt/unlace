void __fastcall sub_49FCB0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  void *v3; // rdi
  void *v4; // rdi

  switch_dbctx(*(int *)(a1 + 8));
  v2 = **(_QWORD **)(a1 + 40) + 80 * a2;
  v3 = *(void **)(v2 + 40);
  if ( v3 )
  {
    qfree(v3);
    *(_QWORD *)(v2 + 40) = 0;
  }
  v4 = *(void **)(v2 + 48);
  if ( v4 )
  {
    *(_QWORD *)(v2 + 56) = 0;
    qfree(v4);
    *(_QWORD *)(v2 + 48) = 0;
    *(_QWORD *)(v2 + 64) = 0;
  }
  *(_DWORD *)(v2 + 72) = -1;
}

