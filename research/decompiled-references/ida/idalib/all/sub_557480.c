__int64 __fastcall sub_557480(__int64 a1)
{
  __int64 v2; // rbx
  bool v3; // zf
  __int64 v4; // rdi
  _QWORD *v5; // rdi
  unsigned __int64 v6; // r12
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
  _QWORD *v21; // r12
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

  v2 = a1 + 40;
  v3 = *(_BYTE *)(a1 + 72) == 0;
  *(_QWORD *)a1 = off_2B2E3A8;
  if ( !v3 )
  {
    for ( i = 0; i < *(_QWORD *)(a1 + 24); ++i )
    {
      v21 = *(_QWORD **)(*(_QWORD *)(a1 + 16) + 8 * i);
      if ( v21 )
      {
        v21[6] = 0;
        v22 = (char *)v21[7];
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
    *(_QWORD *)(a1 + 24) = 0;
    v2 = a1 + 40;
    unhook_event_listener(0);
    unhook_event_listener(3);
    *(_BYTE *)(a1 + 72) = 0;
  }
  v4 = *(_QWORD *)(a1 + 64);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 40) = &off_2BF99C8;
  remove_event_listener(v2);
  v5 = *(_QWORD **)(a1 + 16);
  if ( *(_QWORD *)(a1 + 24) )
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
          sub_5567B0(*(char **)(v13 + 24));
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
        v5 = *(_QWORD **)(a1 + 16);
      }
      ++v6;
    }
    while ( v6 < *(_QWORD *)(a1 + 24) );
  }
  *(_QWORD *)(a1 + 24) = 0;
  if ( v5 )
    qfree(v5);
  *(_QWORD *)a1 = &off_2BF99C8;
  return remove_event_listener(a1);
}
