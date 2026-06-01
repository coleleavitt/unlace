void __fastcall sub_4BCBA0(char *a1)
{
  char *v2; // rdx
  __int64 v3; // r12
  __int64 i; // rbx
  char *v5; // rax
  void *v6; // rdi
  void *v7; // rdi
  _QWORD *v8; // r12
  _QWORD *v9; // rbx
  void *v10; // rdi
  void *v11; // rdi
  void *v12; // rdi
  char *v13; // rdi
  __int64 v14; // r13
  __int64 j; // r12
  char *v16; // rbx
  void *v17; // rdi
  void *v18; // rdi
  void *v19; // rdi
  char *v20; // rdi
  __int64 v21; // rbx
  _QWORD *v22; // r12
  void *v23; // rdi
  __int64 v24; // rbx
  _QWORD *v25; // r12
  void *v26; // rdi

  if ( a1 )
  {
    v2 = *((char **)a1 + 39);
    if ( v2 )
    {
      v3 = *((_QWORD *)a1 + 40);
      if ( v3 )
      {
        for ( i = 0; i != v3; ++i )
        {
          v5 = &v2[24 * i];
          v6 = *(void **)v5;
          if ( *(_QWORD *)v5 )
          {
            *((_QWORD *)v5 + 1) = 0;
            qfree(v6);
            v2 = *((char **)a1 + 39);
          }
        }
      }
      *((_QWORD *)a1 + 40) = 0;
      qfree(v2);
    }
    v7 = *((void **)a1 + 36);
    if ( v7 )
    {
      *((_QWORD *)a1 + 37) = 0;
      qfree(v7);
    }
    v8 = *((_QWORD **)a1 + 34);
    v9 = *((_QWORD **)a1 + 33);
    if ( v8 != v9 )
    {
      do
      {
        if ( v9[3] )
          qregfree(v9);
        v10 = (void *)v9[4];
        *(_OWORD *)v9 = 0;
        *((_OWORD *)v9 + 1) = 0;
        if ( v10 )
        {
          v9[5] = 0;
          qfree(v10);
          v9[4] = 0;
          v9[6] = 0;
        }
        v11 = (void *)v9[7];
        if ( v11 )
        {
          v9[8] = 0;
          qfree(v11);
          v9[7] = 0;
          v9[9] = 0;
        }
        v12 = (void *)v9[4];
        *((_BYTE *)v9 + 80) = 0;
        if ( v12 )
        {
          v9[5] = 0;
          qfree(v12);
        }
        v9 += 11;
      }
      while ( v8 != v9 );
      v9 = *((_QWORD **)a1 + 33);
    }
    if ( v9 )
      operator delete(v9, *((_QWORD *)a1 + 35) - (_QWORD)v9);
    v13 = *((char **)a1 + 30);
    if ( v13 )
    {
      v14 = *((_QWORD *)a1 + 31);
      if ( v14 )
      {
        for ( j = 0; j != v14; ++j )
        {
          v16 = &v13[72 * j];
          v17 = *((void **)v16 + 6);
          if ( v17 )
          {
            *((_QWORD *)v16 + 7) = 0;
            qfree(v17);
          }
          v18 = *((void **)v16 + 3);
          if ( v18 )
          {
            *((_QWORD *)v16 + 4) = 0;
            qfree(v18);
          }
          v19 = *(void **)v16;
          if ( *(_QWORD *)v16 )
          {
            *((_QWORD *)v16 + 1) = 0;
            qfree(v19);
          }
          v13 = *((char **)a1 + 30);
        }
      }
      *((_QWORD *)a1 + 31) = 0;
      qfree(v13);
    }
    sub_4BCA70((__int64)(a1 + 184));
    v20 = *((char **)a1 + 23);
    if ( v20 != a1 + 232 )
      operator delete(v20, 8LL * *((_QWORD *)a1 + 24));
    v21 = *((_QWORD *)a1 + 19);
    while ( v21 )
    {
      v22 = (_QWORD *)v21;
      sub_4B23A0(*(_QWORD **)(v21 + 24));
      v23 = *(void **)(v21 + 32);
      v21 = *(_QWORD *)(v21 + 16);
      if ( v23 )
      {
        v22[5] = 0;
        qfree(v23);
      }
      operator delete(v22, 0x40u);
    }
    sub_4B1290(*((void **)a1 + 13));
    v24 = *((_QWORD *)a1 + 3);
    while ( v24 )
    {
      v25 = (_QWORD *)v24;
      sub_4B2060(*(_QWORD **)(v24 + 24));
      v26 = *(void **)(v24 + 32);
      v24 = *(_QWORD *)(v24 + 16);
      if ( v26 )
      {
        v25[5] = 0;
        qfree(v26);
      }
      operator delete(v25, 0x40u);
    }
    operator delete(a1, 0x208u);
  }
}

