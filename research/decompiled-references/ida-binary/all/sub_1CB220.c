void __fastcall sub_1CB220(void *a1, const char *a2)
{
  void *v2; // r12
  _QWORD *v3; // rbp
  __int64 v4; // rdx
  __int64 v5; // r13
  __int64 i; // rbx
  __int64 *v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rdi

  if ( a1 )
  {
    v2 = a1;
    do
    {
      v3 = v2;
      sub_1CB220(*((void **)v2 + 3));
      v4 = *((_QWORD *)v2 + 7);
      v2 = *((void **)v2 + 2);
      if ( v4 )
      {
        v5 = v3[8];
        if ( v5 )
        {
          for ( i = 0; i != v5; ++i )
          {
            v7 = (__int64 *)(v4 + 24 * i);
            v8 = *v7;
            if ( *v7 )
            {
              v7[1] = 0;
              qfree(v8, a2);
              v4 = v3[7];
            }
          }
        }
        v3[8] = 0;
        qfree(v4, a2);
      }
      v9 = v3[4];
      if ( v9 )
      {
        v3[5] = 0;
        qfree(v9, a2);
      }
      a2 = (_BYTE *)off_50;
      operator delete(v3, 0x50u);
    }
    while ( v2 );
  }
}
