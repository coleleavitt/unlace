void __fastcall sub_44BFF0(__int64 a1)
{
  __int64 v2; // rbx
  _QWORD *v3; // rbp
  void *v4; // rdi
  __int64 v5; // rbx
  void *v6; // rdi

  v2 = *(_QWORD *)(a1 + 136);
  while ( v2 )
  {
    v3 = (_QWORD *)v2;
    sub_44AE10(*(_QWORD **)(v2 + 24));
    v4 = *(void **)(v2 + 40);
    v2 = *(_QWORD *)(v2 + 16);
    if ( v4 )
    {
      v3[6] = 0;
      qfree(v4);
    }
    operator delete(v3, 0x48u);
  }
  v5 = *(_QWORD *)(a1 + 88);
  while ( v5 )
  {
    sub_44A540(*(_QWORD **)(v5 + 24));
    v6 = (void *)v5;
    v5 = *(_QWORD *)(v5 + 16);
    operator delete(v6, 0x30u);
  }
}
