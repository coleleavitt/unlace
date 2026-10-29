void __fastcall sub_427D40(__int64 a1)
{
  bool v2; // zf
  __int64 v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  char *v6; // rdi
  __int64 v7; // r15
  __int64 v8; // r14
  __int64 i; // r13
  void **v10; // rbp
  _QWORD *v11; // rbx
  void *v12; // rdi
  char *v13; // rdi
  _QWORD *v14; // rbx
  void *v15; // rdi
  char *v16; // rdi
  void *v17; // rdi
  void *v18; // rdi
  void *v19; // rdi

  v2 = *(_BYTE *)(a1 + 110) == 0;
  *(_QWORD *)a1 = &unk_2BFBC50;
  if ( !v2 )
  {
    v3 = *(_QWORD *)(a1 + 40);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  *(_QWORD *)(a1 + 32) = 0;
  v4 = *(void **)(a1 + 112);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 120) = 0;
    qfree(v4);
  }
  v5 = *(void **)(a1 + 72);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 80) = 0;
    qfree(v5);
  }
  v6 = *(char **)(a1 + 48);
  if ( v6 )
  {
    v7 = *(_QWORD *)(a1 + 56);
    if ( v7 )
    {
      v8 = 0;
      for ( i = 0; i != v7; ++i )
      {
        v10 = (void **)&v6[v8];
        v11 = *(_QWORD **)&v6[v8 + 120];
        while ( v11 )
        {
          v12 = v11;
          v11 = (_QWORD *)*v11;
          operator delete(v12, 0x10u);
        }
        memset(v10[13], 0, 8LL * (_QWORD)v10[14]);
        v13 = (char *)v10[13];
        v10[16] = nullptr;
        v10[15] = nullptr;
        if ( v13 != (char *)(v10 + 19) )
          operator delete(v13, 8LL * (_QWORD)v10[14]);
        v14 = v10[8];
        while ( v14 )
        {
          v15 = v14;
          v14 = (_QWORD *)*v14;
          operator delete(v15, 0x10u);
        }
        memset(v10[6], 0, 8LL * (_QWORD)v10[7]);
        v16 = (char *)v10[6];
        v10[9] = nullptr;
        v10[8] = nullptr;
        if ( v16 != (char *)(v10 + 12) )
          operator delete(v16, 8LL * (_QWORD)v10[7]);
        v17 = v10[3];
        if ( v17 )
        {
          v10[4] = nullptr;
          qfree(v17);
        }
        v18 = *v10;
        if ( *v10 )
        {
          v10[1] = nullptr;
          qfree(v18);
        }
        v6 = *(char **)(a1 + 48);
        v8 += 176;
      }
    }
    *(_QWORD *)(a1 + 56) = 0;
    qfree(v6);
  }
  *(_QWORD *)a1 = &off_2B28308;
  unbind_event_source_all(a1);
  v19 = *(void **)(a1 + 8);
  if ( v19 )
  {
    *(_QWORD *)(a1 + 16) = 0;
    qfree(v19);
  }
}
