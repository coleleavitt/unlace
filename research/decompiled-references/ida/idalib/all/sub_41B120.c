void __fastcall sub_41B120(_QWORD *a1)
{
  __int64 v2; // rbx
  _QWORD *v3; // r12
  void *v4; // rdi
  void *v5; // rdi
  __int64 v6; // rbx
  _QWORD *v7; // r12
  void *v8; // rdi
  void *v9; // rdi

  if ( a1 )
  {
    v2 = a1[21];
    while ( v2 )
    {
      v3 = (_QWORD *)v2;
      sub_41ABB0(*(_QWORD **)(v2 + 24));
      v4 = *(void **)(v2 + 32);
      v2 = *(_QWORD *)(v2 + 16);
      if ( v4 )
      {
        v3[5] = 0;
        qfree(v4);
      }
      operator delete(v3, 0x40u);
    }
    v5 = (void *)a1[16];
    if ( v5 )
    {
      a1[17] = 0;
      qfree(v5);
    }
    v6 = a1[7];
    while ( v6 )
    {
      v7 = (_QWORD *)v6;
      sub_41ABB0(*(_QWORD **)(v6 + 24));
      v8 = *(void **)(v6 + 32);
      v6 = *(_QWORD *)(v6 + 16);
      if ( v8 )
      {
        v7[5] = 0;
        qfree(v8);
      }
      operator delete(v7, 0x40u);
    }
    v9 = (void *)a1[2];
    if ( v9 )
    {
      a1[3] = 0;
      qfree(v9);
    }
    operator delete(a1, 0xF0u);
  }
}
