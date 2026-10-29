void __fastcall sub_55A270(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rdi
  unsigned __int64 i; // r13
  _QWORD *v4; // r12
  char *v5; // rdx
  __int64 v6; // rbp
  __int64 j; // rbx
  char *v8; // rax
  void *v9; // rdi
  __int64 v10; // rbp
  _QWORD *v11; // rbx
  __int64 v12; // rdi
  void *v13; // rdi
  void *v14; // rdi
  void *v15; // rdi

  v1 = *(_QWORD *)(a1 + 1656);
  if ( *(_BYTE *)(v1 + 72) )
  {
    for ( i = 0; i < *(_QWORD *)(v1 + 24); ++i )
    {
      v4 = *(_QWORD **)(*(_QWORD *)(v1 + 16) + 8 * i);
      if ( v4 )
      {
        v4[6] = 0;
        v5 = (char *)v4[7];
        if ( v5 )
        {
          v6 = v4[8];
          if ( v6 )
          {
            for ( j = 0; j != v6; ++j )
            {
              v8 = &v5[24 * j];
              v9 = *(void **)v8;
              if ( *(_QWORD *)v8 )
              {
                *((_QWORD *)v8 + 1) = 0;
                qfree(v9);
                v5 = (char *)v4[7];
              }
            }
          }
          v4[8] = 0;
          qfree(v5);
        }
        v10 = v4[2];
        while ( v10 )
        {
          v11 = (_QWORD *)v10;
          sub_5567B0(*(char **)(v10 + 24));
          v12 = v10 + 128;
          v10 = *(_QWORD *)(v10 + 16);
          clear_tinfo_t(v12);
          v13 = (void *)v11[12];
          if ( v13 )
          {
            v11[13] = 0;
            qfree(v13);
          }
          v14 = (void *)v11[9];
          if ( v14 )
          {
            v11[10] = 0;
            qfree(v14);
          }
          v15 = (void *)v11[6];
          if ( v15 )
          {
            v11[7] = 0;
            qfree(v15);
          }
          operator delete(v11, 0x90u);
        }
        operator delete(v4, 0x58u);
      }
    }
    *(_QWORD *)(v1 + 24) = 0;
    unhook_event_listener(0);
    unhook_event_listener(3);
    *(_BYTE *)(v1 + 72) = 0;
  }
  v2 = *(_QWORD *)(v1 + 64);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  *(_QWORD *)(v1 + 64) = 0;
}
