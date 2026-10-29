void __fastcall sub_7AF5C0(char *a1, __int64 a2, __int64 a3)
{
  void *v4; // rdi
  __int64 v5; // rbx
  void *v6; // rdi
  char *v7; // rdx
  __int64 v8; // r12
  __int64 i; // rbx
  char *v10; // rax
  void *v11; // rdi

  sub_7AF120(a1, 0, a3);
  v4 = *((void **)a1 + 749);
  if ( v4 )
  {
    *((_QWORD *)a1 + 750) = 0;
    qfree(v4);
  }
  v5 = *((_QWORD *)a1 + 745);
  while ( v5 )
  {
    sub_7AEA40(*(_QWORD **)(v5 + 24));
    v6 = (void *)v5;
    v5 = *(_QWORD *)(v5 + 16);
    operator delete(v6, 0x30u);
  }
  v7 = *((char **)a1 + 740);
  if ( v7 )
  {
    v8 = *((_QWORD *)a1 + 741);
    if ( v8 )
    {
      for ( i = 0; i != v8; ++i )
      {
        v10 = &v7[24 * i];
        v11 = *(void **)v10;
        if ( *(_QWORD *)v10 )
        {
          *((_QWORD *)v10 + 1) = 0;
          qfree(v11);
          v7 = *((char **)a1 + 740);
        }
      }
    }
    *((_QWORD *)a1 + 741) = 0;
    qfree(v7);
  }
  sub_743350((__int64)a1);
  operator delete(a1, 0x1788u);
}
