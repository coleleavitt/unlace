void __fastcall sub_15F04D0(__int64 a1)
{
  bool v2; // zf
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  void *v7; // rdi

  v2 = *(_BYTE *)(a1 + 1932) == 0;
  *(_QWORD *)a1 = &off_2BC6440;
  if ( v2 )
    free(*(void **)(a1 + 1912));
  v3 = *(void **)(a1 + 1824);
  if ( v3 != (void *)(a1 + 1840) )
    free(v3);
  operator delete(*(_QWORD *)(a1 + 1800), 12LL * *(unsigned int *)(a1 + 1816), 4);
  if ( !*(_BYTE *)(a1 + 1732) )
    free(*(void **)(a1 + 1712));
  v4 = *(void **)(a1 + 1664);
  if ( v4 != (void *)(a1 + 1680) )
    free(v4);
  v5 = *(void **)(a1 + 1536);
  if ( v5 != (void *)(a1 + 1552) )
    free(v5);
  v6 = *(void **)(a1 + 1480);
  *(_QWORD *)a1 = &off_2BC63C0;
  if ( v6 != (void *)(a1 + 1496) )
    free(v6);
  v7 = *(void **)(a1 + 1320);
  if ( v7 != (void *)(a1 + 1336) )
    free(v7);
  operator delete(*(_QWORD *)(a1 + 1288), 16LL * *(unsigned int *)(a1 + 1304), 8);
  sub_15ED760(a1);
}
