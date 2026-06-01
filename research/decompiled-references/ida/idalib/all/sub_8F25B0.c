void __fastcall sub_8F25B0(_QWORD *a1)
{
  __int64 v2; // rbx
  _QWORD *v3; // rbp
  void *v4; // rdi
  __int64 v5; // rbx
  void *v6; // rdi

  v2 = a1[9];
  *a1 = &off_2BFC7F8;
  while ( v2 )
  {
    v3 = (_QWORD *)v2;
    sub_8F0CF0(*(_QWORD **)(v2 + 24));
    v4 = *(void **)(v2 + 32);
    v2 = *(_QWORD *)(v2 + 16);
    if ( v4 )
    {
      v3[5] = 0;
      qfree(v4);
    }
    operator delete(v3, 0x38u);
  }
  v5 = a1[3];
  while ( v5 )
  {
    sub_8F0380(*(_QWORD **)(v5 + 24));
    v6 = (void *)v5;
    v5 = *(_QWORD *)(v5 + 16);
    operator delete(v6, 0x28u);
  }
  operator delete(a1, 0x70u);
}
