void __fastcall sub_15CB0(_QWORD *a1)
{
  _QWORD *v2; // rbp
  __int64 v3; // rbx
  void *v4; // rdi
  __int64 v5; // rbx
  _QWORD *v6; // rbp
  __int64 v7; // rdi
  __int64 v8; // rdi

  v2 = (_QWORD *)a1[16];
  *a1 = &off_C71D8;
  if ( v2 )
  {
    v3 = v2[2];
    while ( v3 )
    {
      sub_15270(*(_QWORD **)(v3 + 24));
      v4 = (void *)v3;
      v3 = *(_QWORD *)(v3 + 16);
      operator delete(v4, 0x30u);
    }
    operator delete(v2, 0x30u);
  }
  v5 = a1[19];
  while ( v5 )
  {
    v6 = (_QWORD *)v5;
    sub_159F0(*(_QWORD **)(v5 + 24));
    v7 = *(_QWORD *)(v5 + 32);
    v5 = *(_QWORD *)(v5 + 16);
    if ( v7 )
    {
      v6[5] = 0;
      qfree(v7);
    }
    operator delete(v6, 0x48u);
  }
  v8 = a1[12];
  if ( v8 )
  {
    a1[13] = 0;
    qfree(v8);
  }
}
