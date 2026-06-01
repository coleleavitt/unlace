void __fastcall sub_17F3F0(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi

  if ( *(_QWORD *)(a1 + 136) )
  {
    *(_QWORD *)(a1 + 144) = 0;
    qfree();
  }
  v2 = *(void **)(a1 + 104);
  if ( v2 )
    operator delete(v2, *(_QWORD *)(a1 + 120) - (_QWORD)v2);
  v3 = *(void **)(a1 + 80);
  if ( v3 )
    operator delete(v3, *(_QWORD *)(a1 + 96) - (_QWORD)v3);
  v4 = *(void **)(a1 + 48);
  if ( v4 )
    operator delete(v4, *(_QWORD *)(a1 + 64) - (_QWORD)v4);
  v5 = *(void **)(a1 + 24);
  if ( v5 )
    operator delete(v5, *(_QWORD *)(a1 + 40) - (_QWORD)v5);
  if ( *(_QWORD *)a1 )
    operator delete(*(void **)a1, *(_QWORD *)(a1 + 16) - *(_QWORD *)a1);
}

