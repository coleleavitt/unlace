void __fastcall sub_559F30(char *a1)
{
  void (*v2)(void); // rax
  bool v3; // zf
  char *v4; // rbx
  __int64 v5; // rdi
  _QWORD *v6; // rdi
  unsigned __int64 v7; // r13
  _QWORD *v8; // rbp
  char *v9; // rdx
  __int64 v10; // r15
  __int64 k; // rbx
  char *v12; // rax
  void *v13; // rdi
  __int64 v14; // r15
  _QWORD *v15; // rbx
  __int64 v16; // rdi
  void *v17; // rdi
  void *v18; // rdi
  void *v19; // rdi
  unsigned __int64 i; // r14
  _QWORD *v21; // r13
  char *v22; // rdx
  __int64 v23; // rbp
  __int64 j; // rbx
  char *v25; // rax
  void *v26; // rdi
  __int64 v27; // rbp
  _QWORD *v28; // rbx
  __int64 v29; // rdi
  void *v30; // rdi
  void *v31; // rdi
  void *v32; // rdi

  if ( !a1 )
    return;
  v2 = *(void (**)(void))(*(_QWORD *)a1 + 16LL);
  if ( (char *)v2 != (char *)sub_557760 )
  {
    v2();
    return;
  }
  v3 = a1[72] == 0;
  v4 = a1 + 40;
  *(_QWORD *)a1 = off_2B2E3A8;
  if ( !v3 )
  {
    for ( i = 0; i < *((_QWORD *)a1 + 3); ++i )
    {
      v21 = *(_QWORD **)(*((_QWORD *)a1 + 2) + 8 * i);
      if ( v21 )
      {
        v22 = (char *)v21[7];
        v21[6] = 0;
        if ( v22 )
        {
          v23 = v21[8];
          if ( v23 )
          {
            for ( j = 0; j != v23; ++j )
            {
              v25 = &v22[24 * j];
              v26 = *(void **)v25;
              if ( *(_QWORD *)v25 )
              {
                *((_QWORD *)v25 + 1) = 0;
                qfree(v26);
                v22 = (char *)v21[7];
              }
            }
          }
          v21[8] = 0;
          qfree(v22);
        }
        v27 = v21[2];
        while ( v27 )
        {
          v28 = (_QWORD *)v27;
          sub_5567B0(*(char **)(v27 + 24));
          v29 = v27 + 128;
          v27 = *(_QWORD *)(v27 + 16);
          clear_tinfo_t(v29);
          v30 = (void *)v28[12];
          if ( v30 )
          {
            v28[13] = 0;
            qfree(v30);
          }
          v31 = (void *)v28[9];
          if ( v31 )
          {
            v28[10] = 0;
            qfree(v31);
          }
          v32 = (void *)v28[6];
          if ( v32 )
          {
            v28[7] = 0;
            qfree(v32);
          }
          operator delete(v28, 0x90u);
        }
        operator delete(v21, 0x58u);
      }
    }
    *((_QWORD *)a1 + 3) = 0;
    v4 = a1 + 40;
    unhook_event_listener(0);
    unhook_event_listener(3);
    v5 = *((_QWORD *)a1 + 8);
    a1[72] = 0;
    if ( !v5 )
      goto LABEL_6;
    goto LABEL_5;
  }
  v5 = *((_QWORD *)a1 + 8);
  if ( v5 )
LABEL_5:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
LABEL_6:
  *((_QWORD *)a1 + 8) = 0;
  *((_QWORD *)a1 + 5) = &off_2BF99C8;
  remove_event_listener(v4);
  v6 = *((_QWORD **)a1 + 2);
  if ( *((_QWORD *)a1 + 3) )
  {
    v7 = 0;
    do
    {
      v8 = (_QWORD *)v6[v7];
      if ( v8 )
      {
        v9 = (char *)v8[7];
        v8[6] = 0;
        if ( v9 )
        {
          v10 = v8[8];
          if ( v10 )
          {
            for ( k = 0; k != v10; ++k )
            {
              v12 = &v9[24 * k];
              v13 = *(void **)v12;
              if ( *(_QWORD *)v12 )
              {
                *((_QWORD *)v12 + 1) = 0;
                qfree(v13);
                v9 = (char *)v8[7];
              }
            }
          }
          v8[8] = 0;
          qfree(v9);
        }
        v14 = v8[2];
        while ( v14 )
        {
          v15 = (_QWORD *)v14;
          sub_5567B0(*(char **)(v14 + 24));
          v16 = v14 + 128;
          v14 = *(_QWORD *)(v14 + 16);
          clear_tinfo_t(v16);
          v17 = (void *)v15[12];
          if ( v17 )
          {
            v15[13] = 0;
            qfree(v17);
          }
          v18 = (void *)v15[9];
          if ( v18 )
          {
            v15[10] = 0;
            qfree(v18);
          }
          v19 = (void *)v15[6];
          if ( v19 )
          {
            v15[7] = 0;
            qfree(v19);
          }
          operator delete(v15, 0x90u);
        }
        operator delete(v8, 0x58u);
        v6 = *((_QWORD **)a1 + 2);
      }
      ++v7;
    }
    while ( v7 < *((_QWORD *)a1 + 3) );
  }
  *((_QWORD *)a1 + 3) = 0;
  if ( v6 )
    qfree(v6);
  *(_QWORD *)a1 = &off_2BF99C8;
  remove_event_listener(a1);
  operator delete(a1, 0x50u);
}
