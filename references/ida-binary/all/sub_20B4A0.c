void __fastcall sub_20B4A0(void *a1, const char *a2)
{
  void *v2; // r12
  _QWORD *v3; // rbp
  __int64 v4; // rdi
  __int64 v5; // r13
  __int64 i; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx

  if ( a1 )
  {
    v2 = a1;
    do
    {
      v3 = v2;
      sub_20B4A0(*((void **)v2 + 3));
      v4 = *((_QWORD *)v2 + 5);
      v2 = *((void **)v2 + 2);
      if ( v4 )
      {
        v5 = v3[6];
        if ( v5 )
        {
          for ( i = 0; i != v5; ++i )
          {
            v7 = v4 + 32 * i;
            if ( *(int *)v7 >= -1 )
            {
              v8 = *(_QWORD *)(v7 + 8);
              if ( v8 )
              {
                *(_QWORD *)(v7 + 16) = 0;
                qfree(v8, a2);
                v4 = v3[5];
              }
            }
          }
        }
        v3[6] = 0;
        qfree(v4, a2);
      }
      a2 = (const char *)&dword_40;
      operator delete(v3, 0x40u);
    }
    while ( v2 );
  }
}
