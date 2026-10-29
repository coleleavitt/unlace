void __fastcall sub_441670(void *a1, const char *a2)
{
  void *v2; // r15
  _QWORD *v3; // r13
  __int64 v4; // rdi
  __int64 v5; // r14
  __int64 v6; // r12
  __int64 i; // rbp
  __int64 *v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi

  if ( a1 )
  {
    v2 = a1;
    do
    {
      v3 = v2;
      sub_441670(*((void **)v2 + 3));
      v4 = *((_QWORD *)v2 + 8);
      v2 = *((void **)v2 + 2);
      if ( v4 )
      {
        v5 = v3[9];
        if ( v5 )
        {
          v6 = 0;
          for ( i = 0; i != v5; ++i )
          {
            v8 = (__int64 *)(v4 + v6);
            v9 = *(_QWORD *)(v4 + v6 + 48);
            if ( v9 )
            {
              v8[7] = 0;
              qfree(v9, a2);
            }
            v10 = v8[3];
            if ( v10 )
            {
              v8[4] = 0;
              qfree(v10, a2);
            }
            v11 = *v8;
            if ( *v8 )
            {
              v8[1] = 0;
              qfree(v11, a2);
            }
            v4 = v3[8];
            v6 += 88;
          }
        }
        v3[9] = 0;
        qfree(v4, a2);
      }
      v12 = v3[4];
      if ( v12 )
      {
        v3[5] = 0;
        qfree(v12, a2);
      }
      a2 = (const char *)&qword_58;
      operator delete(v3, 0x58u);
    }
    while ( v2 );
  }
}
