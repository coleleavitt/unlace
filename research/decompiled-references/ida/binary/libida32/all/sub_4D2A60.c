void __fastcall sub_4D2A60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v7; // rbx
  _QWORD *v8; // rdi
  __int64 v9; // rdx
  void *v10; // rdi

  if ( qword_2CA2088 )
    qmutex_lock(qword_2CA2088);
  v7 = qword_2CA2080;
  if ( !qword_2CA2080 )
  {
LABEL_22:
    if ( !under_debugger )
      interr(1810);
    BUG();
  }
  while ( v7[1] != *(_QWORD *)(a2 + 8) )
  {
    v7 = (_QWORD *)*v7;
    if ( !v7 )
      goto LABEL_22;
  }
  v8 = (_QWORD *)v7[23];
  v9 = (__int64)&v8[v7[24]];
  if ( v8 != (_QWORD *)v9 )
  {
    while ( a2 != *v8 )
    {
      if ( (_QWORD *)v9 == ++v8 )
        goto LABEL_13;
    }
    if ( v8 != (_QWORD *)v9 )
    {
      memmove(v8, v8 + 1, v9 - (_QWORD)v8 - 8);
      --v7[24];
    }
  }
LABEL_13:
  if ( qword_2CA2088 )
    qmutex_unlock(qword_2CA2088);
  if ( *(char *)(a2 + 144) >= 0 )
  {
    sub_4D2860(a1, *(_QWORD *)(a2 + 48), v9, a4, a5, a6);
    qfree(*(void **)(a2 + 24));
    if ( !a2 )
      return;
  }
  else
  {
    qfree(*(void **)(a2 + 24));
    if ( !a2 )
      return;
  }
  v10 = *(void **)(a2 + 160);
  if ( v10 )
  {
    *(_QWORD *)(a2 + 168) = 0;
    qfree(v10);
  }
  operator delete((void *)a2, 0xB8u);
}

