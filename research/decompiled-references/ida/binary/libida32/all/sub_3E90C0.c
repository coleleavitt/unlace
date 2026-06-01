void __fastcall sub_3E90C0(__int64 a1)
{
  void *v2; // rdi
  __int64 v3; // rdi

  v2 = *(void **)(a1 + 808);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 816) = 0;
    qfree(v2);
    *(_QWORD *)(a1 + 808) = 0;
    *(_QWORD *)(a1 + 824) = 0;
  }
  *(_QWORD *)(a1 + 832) = 0;
  v3 = *(_QWORD *)a1;
  *(_BYTE *)(a1 + 797) = 0;
  sub_356720(v3, 0xFFFFFFFF, 0);
}

