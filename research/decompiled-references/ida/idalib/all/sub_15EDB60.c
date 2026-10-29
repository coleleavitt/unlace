void __fastcall sub_15EDB60(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi

  *(_QWORD *)a1 = &off_2BC63C0;
  v2 = *(void **)(a1 + 1480);
  if ( v2 != (void *)(a1 + 1496) )
    free(v2);
  v3 = *(void **)(a1 + 1320);
  if ( v3 != (void *)(a1 + 1336) )
    free(v3);
  operator delete(*(_QWORD *)(a1 + 1288), 16LL * *(unsigned int *)(a1 + 1304), 8);
  sub_15ED760(a1);
}
