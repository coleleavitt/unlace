void __fastcall sub_836EF0(__int64 a1)
{
  __int64 v2; // rdi
  void *v3; // rdi

  *(_QWORD *)a1 = off_2B3CCC8;
  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 )
    qfclose(v2);
  v3 = *(void **)(a1 + 48);
  *(_OWORD *)(a1 + 24) = 0;
  if ( v3 )
  {
    *(_QWORD *)(a1 + 56) = 0;
    qfree(v3);
  }
}
