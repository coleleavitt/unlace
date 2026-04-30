void __fastcall sub_1AE860(__int64 **a1, const char *a2)
{
  __int64 *v3; // rdx
  __int64 *v4; // rdi
  __int64 *v5; // r12
  __int64 v6; // rbp
  volatile signed __int32 *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r14
  __int64 i; // rbx
  __int64 *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r14
  __int64 j; // rbx
  __int64 *v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // r14
  __int64 k; // rbx
  __int64 *v21; // rax
  __int64 v22; // rdi

  v3 = a1[1];
  v4 = *a1;
  if ( 8LL * (_QWORD)v3 )
  {
    v5 = v4;
    do
    {
      v6 = *v5;
      if ( *v5 )
      {
        v7 = *(volatile signed __int32 **)(v6 + 96);
        if ( v7 && !_InterlockedSub(v7, 1u) )
          free(*(void **)(v6 + 96));
        v8 = *(_QWORD *)(v6 + 72);
        if ( v8 )
        {
          v9 = *(_QWORD *)(v6 + 80);
          if ( v9 )
          {
            for ( i = 0; i != v9; ++i )
            {
              v11 = (__int64 *)(v8 + 24 * i);
              v12 = *v11;
              if ( *v11 )
              {
                v11[1] = 0;
                qfree(v12, a2);
                v8 = *(_QWORD *)(v6 + 72);
              }
            }
          }
          *(_QWORD *)(v6 + 80) = 0;
          qfree(v8, a2);
        }
        v13 = *(_QWORD *)(v6 + 48);
        if ( v13 )
        {
          v14 = *(_QWORD *)(v6 + 56);
          if ( v14 )
          {
            for ( j = 0; j != v14; ++j )
            {
              v16 = (__int64 *)(v13 + 24 * j);
              v17 = *v16;
              if ( *v16 )
              {
                v16[1] = 0;
                qfree(v17, a2);
                v13 = *(_QWORD *)(v6 + 48);
              }
            }
          }
          *(_QWORD *)(v6 + 56) = 0;
          qfree(v13, a2);
        }
        v18 = *(_QWORD *)(v6 + 24);
        if ( v18 )
        {
          v19 = *(_QWORD *)(v6 + 32);
          if ( v19 )
          {
            for ( k = 0; k != v19; ++k )
            {
              v21 = (__int64 *)(v18 + 24 * k);
              v22 = *v21;
              if ( *v21 )
              {
                v21[1] = 0;
                qfree(v22, a2);
                v18 = *(_QWORD *)(v6 + 24);
              }
            }
          }
          *(_QWORD *)(v6 + 32) = 0;
          qfree(v18, a2);
        }
        a2 = (const char *)&qword_80;
        operator delete((void *)v6, 0x80u);
        v4 = *a1;
        v3 = a1[1];
      }
      ++v5;
    }
    while ( v5 != &v4[(_QWORD)v3] );
  }
  if ( v4 )
  {
    a1[1] = nullptr;
    qfree(v4, a2);
  }
}
