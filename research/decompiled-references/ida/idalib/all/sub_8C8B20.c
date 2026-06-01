void __fastcall sub_8C8B20(_QWORD *a1)
{
  void *v2; // rdi
  __int64 v3; // rbx
  _QWORD *v4; // rbp
  void *v5; // rdi
  __int64 v6; // rbx
  _QWORD *v7; // rbp
  void *v8; // rdi

  *a1 = off_2B3E018;
  v2 = (void *)a1[20];
  if ( v2 )
  {
    a1[21] = 0;
    qfree(v2);
  }
  v3 = a1[16];
  while ( v3 )
  {
    v4 = (_QWORD *)v3;
    sub_8C86D0(*(_QWORD **)(v3 + 24));
    v5 = *(void **)(v3 + 32);
    v3 = *(_QWORD *)(v3 + 16);
    if ( v5 )
    {
      v4[5] = 0;
      qfree(v5);
    }
    operator delete(v4, 0x58u);
  }
  v6 = a1[10];
  while ( v6 )
  {
    v7 = (_QWORD *)v6;
    sub_8C86D0(*(_QWORD **)(v6 + 24));
    v8 = *(void **)(v6 + 32);
    v6 = *(_QWORD *)(v6 + 16);
    if ( v8 )
    {
      v7[5] = 0;
      qfree(v8);
    }
    operator delete(v7, 0x58u);
  }
  sub_8C8990((void *)a1[4]);
  sub_7CCF10(a1);
  operator delete(a1, 0xB8u);
}
