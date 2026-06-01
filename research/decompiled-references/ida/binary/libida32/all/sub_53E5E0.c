void __fastcall sub_53E5E0(_BYTE *a1)
{
  char *v2; // rbx
  bool v3; // zf
  __int64 v4; // rdi
  _QWORD *v5; // rdi
  unsigned __int64 v6; // r13
  _QWORD *v7; // rbp
  char *v8; // rdx
  __int64 v9; // r15
  __int64 k; // rbx
  char *v11; // rax
  void *v12; // rdi
  __int64 v13; // r15
  _QWORD *v14; // rbx
  __int64 v15; // rdi
  void *v16; // rdi
  void *v17; // rdi
  void *v18; // rdi
  unsigned __int64 i; // r14
  _QWORD *v20; // r13
  char *v21; // rdx
  __int64 v22; // rbp
  __int64 j; // rbx
  char *v24; // rax
  void *v25; // rdi
  __int64 v26; // rbp
  _QWORD *v27; // rbx
  __int64 v28; // rdi
  void *v29; // rdi
  void *v30; // rdi
  void *v31; // rdi

  v2 = a1 + 40;
  v3 = a1[72] == 0;
  *(_QWORD *)a1 = off_2B043E8;
  if ( !v3 )
  {
    for ( i = 0; i < *((_QWORD *)a1 + 3); ++i )
    {
      v20 = *(_QWORD **)(*((_QWORD *)a1 + 2) + 8 * i);
      if ( v20 )
      {
        v21 = (char *)v20[7];
        v20[6] = 0;
        if ( v21 )
        {
          v22 = v20[8];
          if ( v22 )
          {
            for ( j = 0; j != v22; ++j )
            {
              v24 = &v21[24 * j];
              v25 = *(void **)v24;
              if ( *(_QWORD *)v24 )
              {
                *((_QWORD *)v24 + 1) = 0;
                qfree(v25);
                v21 = (char *)v20[7];
              }
            }
          }
          v20[8] = 0;
          qfree(v21);
        }
        v26 = v20[2];
        while ( v26 )
        {
          v27 = (_QWORD *)v26;
          sub_53D640(*(char **)(v26 + 24));
          v28 = v26 + 128;
          v26 = *(_QWORD *)(v26 + 16);
          clear_tinfo_t(v28);
          v29 = (void *)v27[12];
          if ( v29 )
          {
            v27[13] = 0;
            qfree(v29);
          }
          v30 = (void *)v27[9];
          if ( v30 )
          {
            v27[10] = 0;
            qfree(v30);
          }
          v31 = (void *)v27[6];
          if ( v31 )
          {
            v27[7] = 0;
            qfree(v31);
          }
          operator delete(v27, 0x90u);
        }
        operator delete(v20, 0x58u);
      }
    }
    *((_QWORD *)a1 + 3) = 0;
    v2 = a1 + 40;
    unhook_event_listener(0);
    unhook_event_listener(3);
    a1[72] = 0;
  }
  v4 = *((_QWORD *)a1 + 8);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  *((_QWORD *)a1 + 8) = 0;
  *((_QWORD *)a1 + 5) = &off_2BCFA28;
  remove_event_listener(v2);
  v5 = *((_QWORD **)a1 + 2);
  if ( *((_QWORD *)a1 + 3) )
  {
    v6 = 0;
    do
    {
      v7 = (_QWORD *)v5[v6];
      if ( v7 )
      {
        v8 = (char *)v7[7];
        v7[6] = 0;
        if ( v8 )
        {
          v9 = v7[8];
          if ( v9 )
          {
            for ( k = 0; k != v9; ++k )
            {
              v11 = &v8[24 * k];
              v12 = *(void **)v11;
              if ( *(_QWORD *)v11 )
              {
                *((_QWORD *)v11 + 1) = 0;
                qfree(v12);
                v8 = (char *)v7[7];
              }
            }
          }
          v7[8] = 0;
          qfree(v8);
        }
        v13 = v7[2];
        while ( v13 )
        {
          v14 = (_QWORD *)v13;
          sub_53D640(*(char **)(v13 + 24));
          v15 = v13 + 128;
          v13 = *(_QWORD *)(v13 + 16);
          clear_tinfo_t(v15);
          v16 = (void *)v14[12];
          if ( v16 )
          {
            v14[13] = 0;
            qfree(v16);
          }
          v17 = (void *)v14[9];
          if ( v17 )
          {
            v14[10] = 0;
            qfree(v17);
          }
          v18 = (void *)v14[6];
          if ( v18 )
          {
            v14[7] = 0;
            qfree(v18);
          }
          operator delete(v14, 0x90u);
        }
        operator delete(v7, 0x58u);
        v5 = *((_QWORD **)a1 + 2);
      }
      ++v6;
    }
    while ( v6 < *((_QWORD *)a1 + 3) );
  }
  *((_QWORD *)a1 + 3) = 0;
  if ( v5 )
    qfree(v5);
  *(_QWORD *)a1 = &off_2BCFA28;
  remove_event_listener(a1);
  operator delete(a1, 0x50u);
}

