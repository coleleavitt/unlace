void __fastcall sub_5E7C70(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi

  if ( *(_QWORD *)(a1 + 400) )
    *(_QWORD *)(a1 + 400) = 0;
  if ( *(_QWORD *)(a1 + 176) )
    *(_QWORD *)(a1 + 176) = 0;
  if ( *(_QWORD *)(a1 + 448) )
    *(_QWORD *)(a1 + 448) = 0;
  sub_5E79E0(a1);
  sub_5E2210(*(void **)(a1 + 304));
  *(_QWORD *)(a1 + 304) = 0;
  v2 = *(void **)(a1 + 352);
  *(_QWORD *)(a1 + 312) = a1 + 296;
  *(_QWORD *)(a1 + 320) = a1 + 296;
  *(_QWORD *)(a1 + 328) = 0;
  sub_5E2210(v2);
  v3 = *(void **)(a1 + 608);
  *(_QWORD *)(a1 + 352) = 0;
  *(_QWORD *)(a1 + 360) = a1 + 344;
  *(_QWORD *)(a1 + 368) = a1 + 344;
  *(_QWORD *)(a1 + 376) = 0;
  if ( v3 )
  {
    *(_QWORD *)(a1 + 616) = 0;
    qfree(v3);
    *(_QWORD *)(a1 + 608) = 0;
    *(_QWORD *)(a1 + 624) = 0;
  }
}
