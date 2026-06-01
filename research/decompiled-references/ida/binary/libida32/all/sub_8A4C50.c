void __fastcall sub_8A4C50(void *a1)
{
  void *v1; // r12
  _QWORD *v2; // r13
  __int64 v3; // rbx
  _QWORD *v4; // rbp
  void *v5; // rdi
  void *v6; // rdi

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v2 = v1;
      sub_8A4C50(*((void **)v1 + 3));
      v3 = *((_QWORD *)v1 + 9);
      v1 = *((void **)v1 + 2);
      while ( v3 )
      {
        v4 = (_QWORD *)v3;
        sub_8A4990(*(_QWORD **)(v3 + 24));
        v5 = *(void **)(v3 + 32);
        v3 = *(_QWORD *)(v3 + 16);
        if ( v5 )
        {
          v4[5] = 0;
          qfree(v5);
        }
        operator delete(v4, 0x58u);
      }
      v6 = (void *)v2[4];
      if ( v6 )
      {
        v2[5] = 0;
        qfree(v6);
      }
      operator delete(v2, 0x68u);
    }
    while ( v1 );
  }
}

