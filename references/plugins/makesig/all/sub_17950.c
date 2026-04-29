void __fastcall sub_17950(_QWORD *a1)
{
  void (*v2)(void); // rax
  _QWORD *v3; // rbp
  __int64 *v4; // r12
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // r12
  __int64 j; // rbp
  _QWORD *v10; // r14
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // r13
  __int64 k; // r15
  __int64 *v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 *v19; // r14
  __int64 v20; // rdi
  __int64 v21; // r15
  __int64 i; // r12
  _QWORD *v23; // r13
  __int64 v24; // rdi
  __int64 *v25; // [rsp+0h] [rbp-48h]
  __int64 v26; // [rsp+8h] [rbp-40h]

  if ( a1 )
  {
    v2 = (void (*)(void))a1[11];
    if ( v2 )
      v2();
    v3 = (_QWORD *)a1[10];
    if ( v3 )
    {
      if ( *(_BYTE *)v3 )
      {
        v4 = (__int64 *)v3[1];
        if ( v4 )
        {
          v5 = *v4;
          if ( *v4 )
          {
            v4[1] = 0;
            qfree(v5);
          }
          qfree(v4);
        }
      }
      else
      {
        v19 = (__int64 *)v3[1];
        if ( v19 )
        {
          v20 = *v19;
          if ( *v19 )
          {
            v21 = v19[1];
            if ( v21 )
            {
              for ( i = 0; i != v21; ++i )
              {
                v23 = (_QWORD *)(v20 + 40 * i);
                v24 = v23[2];
                if ( v24 )
                {
                  v23[3] = 0;
                  qfree(v24);
                }
                sub_A960(v23);
                v20 = *v19;
              }
            }
            v19[1] = 0;
            qfree(v20);
          }
          qfree(v19);
        }
      }
      operator delete(v3, 0x10u);
    }
    v6 = a1[7];
    if ( v6 )
    {
      a1[8] = 0;
      qfree(v6);
      a1[7] = 0;
      a1[9] = 0;
    }
    v25 = (__int64 *)a1[6];
    if ( v25 )
    {
      v7 = *v25;
      if ( *v25 )
      {
        v26 = v25[1];
        if ( v26 )
        {
          v8 = 0;
          for ( j = 0; j != v26; ++j )
          {
            v10 = (_QWORD *)(v7 + v8);
            v11 = *(_QWORD *)(v7 + v8 + 72);
            if ( v11 )
            {
              v10[10] = 0;
              qfree(v11);
            }
            v12 = v10[4];
            if ( v12 )
            {
              v10[5] = 0;
              qfree(v12);
            }
            v13 = v10[1];
            if ( v13 )
            {
              v14 = v10[2];
              if ( v14 )
              {
                for ( k = 0; k != v14; ++k )
                {
                  v16 = (__int64 *)(v13 + 32 * k);
                  v17 = *v16;
                  if ( *v16 )
                  {
                    v16[1] = 0;
                    qfree(v17);
                    v13 = v10[1];
                  }
                }
              }
              v10[2] = 0;
              qfree(v13);
            }
            v8 += 104;
            v7 = *v25;
          }
        }
        v25[1] = 0;
        qfree(v7);
      }
      qfree(v25);
      v18 = a1[7];
      if ( v18 )
      {
        a1[8] = 0;
        qfree(v18);
      }
    }
    operator delete(a1, 0x60u);
  }
}
