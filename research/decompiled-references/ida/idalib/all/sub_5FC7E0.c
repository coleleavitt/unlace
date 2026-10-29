void __fastcall sub_5FC7E0(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  void *v7; // rdi

  v2 = *(void **)(a1 + 8);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 16) = 0;
    qfree(v2);
    *(_QWORD *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 24) = 0;
  }
  v3 = *(void **)(a1 + 40);
  *(_WORD *)(a1 + 32) = 0;
  if ( v3 )
  {
    *(_QWORD *)(a1 + 48) = 0;
    qfree(v3);
    *(_QWORD *)(a1 + 40) = 0;
    *(_QWORD *)(a1 + 56) = 0;
  }
  v4 = *(void **)(a1 + 64);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 72) = 0;
    qfree(v4);
    *(_QWORD *)(a1 + 64) = 0;
    *(_QWORD *)(a1 + 80) = 0;
  }
  v5 = *(void **)(a1 + 88);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 96) = 0;
    qfree(v5);
    *(_QWORD *)(a1 + 88) = 0;
    *(_QWORD *)(a1 + 104) = 0;
  }
  v6 = *(void **)(a1 + 120);
  *(_WORD *)(a1 + 112) = 0;
  if ( v6 )
  {
    *(_QWORD *)(a1 + 128) = 0;
    qfree(v6);
    *(_QWORD *)(a1 + 120) = 0;
    *(_QWORD *)(a1 + 136) = 0;
  }
  v7 = *(void **)(a1 + 144);
  if ( v7 )
  {
    *(_QWORD *)(a1 + 152) = 0;
    qfree(v7);
    *(_QWORD *)(a1 + 144) = 0;
    *(_QWORD *)(a1 + 160) = 0;
  }
  *(_DWORD *)(a1 + 168) = 0;
}
