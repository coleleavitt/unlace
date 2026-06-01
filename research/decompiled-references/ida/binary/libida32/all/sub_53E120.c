__int64 __fastcall sub_53E120(__int64 a1, __int64 a2)
{
  char *v3; // rdi
  char *v4; // rdx
  char *v5; // rcx
  char *v6; // rsi
  char *v7; // rax
  __int64 v8; // rax
  unsigned __int64 i; // r14
  _QWORD *v11; // r12
  char *v12; // rdx
  __int64 v13; // rbp
  __int64 j; // rbx
  char *v15; // rax
  void *v16; // rdi
  __int64 v17; // rbp
  _QWORD *v18; // rbx
  __int64 v19; // rdi
  void *v20; // rdi
  void *v21; // rdi
  void *v22; // rdi

  if ( a2 == 72 )
  {
    for ( i = 0; i < *(_QWORD *)(a1 + 24); ++i )
    {
      v11 = *(_QWORD **)(*(_QWORD *)(a1 + 16) + 8 * i);
      if ( v11 )
      {
        v11[6] = 0;
        v12 = (char *)v11[7];
        if ( v12 )
        {
          v13 = v11[8];
          if ( v13 )
          {
            for ( j = 0; j != v13; ++j )
            {
              v15 = &v12[24 * j];
              v16 = *(void **)v15;
              if ( *(_QWORD *)v15 )
              {
                *((_QWORD *)v15 + 1) = 0;
                qfree(v16);
                v12 = (char *)v11[7];
              }
            }
          }
          v11[8] = 0;
          qfree(v12);
        }
        v17 = v11[2];
        while ( v17 )
        {
          v18 = (_QWORD *)v17;
          sub_53D640(*(char **)(v17 + 24));
          v19 = v17 + 128;
          v17 = *(_QWORD *)(v17 + 16);
          clear_tinfo_t(v19);
          v20 = (void *)v18[12];
          if ( v20 )
          {
            v18[13] = 0;
            qfree(v20);
          }
          v21 = (void *)v18[9];
          if ( v21 )
          {
            v18[10] = 0;
            qfree(v21);
          }
          v22 = (void *)v18[6];
          if ( v22 )
          {
            v18[7] = 0;
            qfree(v22);
          }
          operator delete(v18, 0x90u);
        }
        operator delete(v11, 0x58u);
      }
    }
    *(_QWORD *)(a1 + 24) = 0;
    return 0;
  }
  else
  {
    if ( a2 > 72 )
    {
      if ( (unsigned __int64)(a2 - 78) > 4 )
        return 0;
LABEL_4:
      v3 = *(char **)(a1 + 16);
      v4 = &v3[8 * *(_QWORD *)(a1 + 24)];
      v5 = *(char **)(a1 + 16);
      if ( v3 != v4 )
      {
        do
        {
          while ( 1 )
          {
            v6 = v5 + 8;
            if ( !*(_BYTE *)(*(_QWORD *)v5 + 80LL) )
              break;
            v5 += 8;
            v4 = &v3[8 * *(_QWORD *)(a1 + 24)];
            if ( v4 == v6 )
              return 0;
          }
          v7 = (char *)memmove(v5, v6, v4 - v5 - 8);
          v3 = *(char **)(a1 + 16);
          v5 = v7;
          v8 = *(_QWORD *)(a1 + 24) - 1LL;
          v4 = &v3[8 * v8];
          *(_QWORD *)(a1 + 24) = v8;
        }
        while ( v4 != v5 );
      }
      return 0;
    }
    if ( a2 == 37 )
      goto LABEL_4;
    return 0;
  }
}

