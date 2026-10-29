void __fastcall sub_5CBE90(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi

  if ( *(_QWORD *)(a1 + 392) )
    *(_QWORD *)(a1 + 392) = 0;
  if ( *(_QWORD *)(a1 + 168) )
    *(_QWORD *)(a1 + 168) = 0;
  if ( *(_QWORD *)(a1 + 440) )
    *(_QWORD *)(a1 + 440) = 0;
  sub_5CBC00(a1);
  sub_5C6510(*(void **)(a1 + 296));
  *(_QWORD *)(a1 + 296) = 0;
  v2 = *(void **)(a1 + 344);
  *(_QWORD *)(a1 + 304) = a1 + 288;
  *(_QWORD *)(a1 + 312) = a1 + 288;
  *(_QWORD *)(a1 + 320) = 0;
  sub_5C6510(v2);
  v3 = *(void **)(a1 + 600);
  *(_QWORD *)(a1 + 344) = 0;
  *(_QWORD *)(a1 + 352) = a1 + 336;
  *(_QWORD *)(a1 + 360) = a1 + 336;
  *(_QWORD *)(a1 + 368) = 0;
  if ( v3 )
  {
    *(_QWORD *)(a1 + 608) = 0;
    qfree(v3);
    *(_QWORD *)(a1 + 600) = 0;
    *(_QWORD *)(a1 + 616) = 0;
  }
}

