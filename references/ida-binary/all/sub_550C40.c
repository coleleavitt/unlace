void __fastcall sub_550C40(void *a1, const char *a2)
{
  void *v2; // r12
  _QWORD *v3; // rbp
  __int64 v4; // rdx
  __int64 v5; // r13
  __int64 i; // rbx
  __int64 *v7; // rax
  __int64 v8; // rdi

  if ( a1 )
  {
    v2 = a1;
    do
    {
      v3 = v2;
      sub_550C40(*((void **)v2 + 3));
      v4 = *((_QWORD *)v2 + 5);
      v2 = *((void **)v2 + 2);
      if ( v4 )
      {
        v5 = v3[6];
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
              v4 = v3[5];
            }
          }
        }
        v3[6] = 0;
        qfree(v4, a2);
      }
      a2 = (_BYTE *)dword_40;
      operator delete(v3, 0x40u);
    }
    while ( v2 );
  }
}
