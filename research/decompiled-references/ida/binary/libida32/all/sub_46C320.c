void __fastcall sub_46C320(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbx
  void *v3; // rdi

  if ( a2 >= *(_QWORD *)(a1 + 48) || !*(_BYTE *)(*(_QWORD *)(a1 + 40) + 32 * a2 + 24) )
  {
    if ( !under_debugger )
      interr(1938);
    BUG();
  }
  switch_dbctx(*(int *)(a1 + 8));
  v2 = *(_QWORD *)(a1 + 40) + 32 * a2;
  v3 = *(void **)v2;
  if ( *(_QWORD *)v2 )
  {
    *(_QWORD *)(v2 + 8) = 0;
    qfree(v3);
    *(_QWORD *)v2 = 0;
    *(_QWORD *)(v2 + 16) = 0;
  }
  *(_BYTE *)(v2 + 24) = 0;
}

