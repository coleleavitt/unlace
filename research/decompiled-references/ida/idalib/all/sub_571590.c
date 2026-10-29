void __fastcall sub_571590(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi

  *(_QWORD *)a1 = &off_2BFB0E8;
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 184) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  v2 = *(void **)(a1 + 160);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 168) = 0;
    qfree(v2);
  }
  v3 = *(void **)(a1 + 112);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 120) = 0;
    qfree(v3);
  }
  v4 = *(void **)(a1 + 24);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 32) = 0;
    qfree(v4);
  }
}
