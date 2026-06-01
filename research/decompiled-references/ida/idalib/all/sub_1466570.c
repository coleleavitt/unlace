void __fastcall sub_1466570(__int64 a1)
{
  void *v2; // rdi
  _QWORD *v3; // rdi

  if ( (*(_BYTE *)(a1 + 64) & 8) != 0 )
  {
    v2 = *(void **)(a1 + 24);
    if ( v2 )
      operator delete[](v2);
    *(_BYTE *)(a1 + 64) &= ~8u;
    *(_QWORD *)(a1 + 24) = 0;
  }
  v3 = *(_QWORD **)(a1 + 8);
  if ( v3 )
    sub_13EFF90(v3, *(_QWORD *)(a1 + 16));
}
