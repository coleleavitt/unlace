void __fastcall sub_53DC00(__int64 a1)
{
  _QWORD *v2; // rbp
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi

  v2 = *(_QWORD **)(a1 + 128);
  *(_QWORD *)a1 = &off_2B04608;
  if ( v2 )
  {
    delete_dirtree(*v2);
    operator delete(v2, 8u);
  }
  v3 = *(void **)(a1 + 88);
  *(_QWORD *)a1 = &unk_2BD1060;
  *(_OWORD *)(a1 + 120) = 0;
  if ( v3 )
  {
    *(_QWORD *)(a1 + 96) = 0;
    qfree(v3);
  }
  v4 = *(void **)(a1 + 64);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 72) = 0;
    qfree(v4);
  }
  v5 = *(void **)(a1 + 32);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 40) = 0;
    qfree(v5);
  }
  v6 = *(void **)(a1 + 8);
  if ( v6 )
  {
    *(_QWORD *)(a1 + 16) = 0;
    qfree(v6);
  }
}

