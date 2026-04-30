void __fastcall sub_4DE050(__int64 a1, const char *a2)
{
  __int64 v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  void *v7; // rdi

  v3 = *(_QWORD *)(a1 + 136);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 144) = 0;
    qfree(v3, a2);
  }
  v4 = *(void **)(a1 + 104);
  if ( v4 )
    operator delete(v4, *(_QWORD *)(a1 + 120) - (_QWORD)v4);
  v5 = *(void **)(a1 + 80);
  if ( v5 )
    operator delete(v5, *(_QWORD *)(a1 + 96) - (_QWORD)v5);
  v6 = *(void **)(a1 + 48);
  if ( v6 )
    operator delete(v6, *(_QWORD *)(a1 + 64) - (_QWORD)v6);
  v7 = *(void **)(a1 + 24);
  if ( v7 )
    operator delete(v7, *(_QWORD *)(a1 + 40) - (_QWORD)v7);
  if ( *(_QWORD *)a1 )
    operator delete(*(void **)a1, *(_QWORD *)(a1 + 16) - *(_QWORD *)a1);
}
