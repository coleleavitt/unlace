void __fastcall sub_7A2880(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi

  *(_QWORD *)a1 = off_2B108F0;
  v2 = *(void **)(a1 + 8);
  if ( v2 )
    dlclose(v2);
  v3 = *(void **)(a1 + 104);
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 96) = 0;
  *(_OWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  if ( v3 )
  {
    *(_QWORD *)(a1 + 112) = 0;
    qfree(v3);
  }
}

