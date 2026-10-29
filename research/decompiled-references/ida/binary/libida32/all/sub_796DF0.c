__int64 __fastcall sub_796DF0(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rbx
  __m128i si128; // xmm0
  __int64 v6; // rdx
  void *v7; // rdi
  __int64 v8; // rbp
  void *v9; // rdi
  char *v10; // rdi
  __int64 v11; // r12
  __int64 i; // rbp
  char *v13; // rdx
  void *v14; // rax
  unsigned int v15; // r13d
  __int64 v17; // rdx
  __int64 v18; // rdx
  void *v19; // rdi
  __int64 v20; // rbp
  void *v21; // rdi
  char *v22; // rdi
  __int64 v23; // r12
  __int64 j; // rbp
  char *v25; // rdx
  void *v26; // rax

  if ( !a2 )
    return 0;
  qunlink(a2);
  v4 = operator new(0x1768u);
  sub_722C00(v4, a2, 0x2000, nullptr);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23843A0);
  *(_QWORD *)(v4 + 5840) = 1025;
  *(_QWORD *)(v4 + 5864) = 1025;
  *(_QWORD *)(v4 + 5888) = 0;
  *(_DWORD *)(v4 + 5920) = 0;
  *(_QWORD *)(v4 + 5928) = 0;
  *(_QWORD *)(v4 + 5936) = v4 + 5920;
  *(_QWORD *)(v4 + 5944) = v4 + 5920;
  *(_QWORD *)(v4 + 5952) = 0;
  *(_QWORD *)(v4 + 5960) = 0;
  *(_DWORD *)(v4 + 5984) = 0;
  *(__m128i *)(v4 + 5848) = si128;
  *(__m128i *)(v4 + 5872) = si128;
  *(_OWORD *)(v4 + 5896) = 0;
  *(_OWORD *)(v4 + 5968) = 0;
  *(_BYTE *)(v4 + 5988) = get_undo_param(0) != 0;
  if ( !(unsigned __int8)sub_71C350(v4, 0x2000u) || (v15 = sub_71C750((unsigned int *)v4, 0), !(_BYTE)v15) )
  {
    if ( v4 )
    {
      sub_78E9A0((_QWORD *)v4, 0, v6);
      v7 = *(void **)(v4 + 5960);
      if ( v7 )
      {
        *(_QWORD *)(v4 + 5968) = 0;
        qfree(v7);
      }
      v8 = *(_QWORD *)(v4 + 5928);
      while ( v8 )
      {
        sub_796C20(*(_QWORD **)(v8 + 24));
        v9 = (void *)v8;
        v8 = *(_QWORD *)(v8 + 16);
        operator delete(v9, 0x30u);
      }
      v10 = *(char **)(v4 + 5888);
      if ( v10 )
      {
        v11 = *(_QWORD *)(v4 + 5896);
        if ( v11 )
        {
          for ( i = 0; i != v11; ++i )
          {
            v13 = &v10[24 * i];
            v14 = *(void **)v13;
            if ( *(_QWORD *)v13 )
            {
              *((_QWORD *)v13 + 1) = 0;
              qfree(v14);
              v10 = *(char **)(v4 + 5888);
            }
          }
        }
        *(_QWORD *)(v4 + 5896) = 0;
        qfree(v10);
      }
      sub_722E10(v4);
      operator delete((void *)v4, 0x1768u);
    }
    return 0;
  }
  sub_78EDA0((_DWORD *)v4, a1, a3);
  sub_78E9A0((_QWORD *)v4, 1, v17);
  sub_78E7A0(v4);
  if ( !v4 )
    return v15;
  sub_78E9A0((_QWORD *)v4, 0, v18);
  v19 = *(void **)(v4 + 5960);
  if ( v19 )
  {
    *(_QWORD *)(v4 + 5968) = 0;
    qfree(v19);
  }
  v20 = *(_QWORD *)(v4 + 5928);
  while ( v20 )
  {
    sub_796C20(*(_QWORD **)(v20 + 24));
    v21 = (void *)v20;
    v20 = *(_QWORD *)(v20 + 16);
    operator delete(v21, 0x30u);
  }
  v22 = *(char **)(v4 + 5888);
  if ( v22 )
  {
    v23 = *(_QWORD *)(v4 + 5896);
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
          v22 = *(char **)(v4 + 5888);
        }
      }
    }
    *(_QWORD *)(v4 + 5896) = 0;
    qfree(v22);
  }
  sub_722E10(v4);
  operator delete((void *)v4, 0x1768u);
  return v15;
}

