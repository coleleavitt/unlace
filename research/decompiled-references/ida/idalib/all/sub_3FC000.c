void __fastcall sub_3FC000(__int64 a1)
{
  void *v2; // rdi
  __int64 v3; // rdi

  v2 = *(void **)(a1 + 816);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 824) = 0;
    qfree(v2);
    *(_QWORD *)(a1 + 816) = 0;
    *(_QWORD *)(a1 + 832) = 0;
  }
  *(_QWORD *)(a1 + 840) = 0;
  v3 = *(_QWORD *)a1;
  *(_BYTE *)(a1 + 805) = 0;
  sub_359AE0(v3, 0xFFFFFFFFFFFFFFFFLL, 0);
}
