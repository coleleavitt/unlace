__int64 __fastcall sub_78D1E0(__int64 *a1, const char *a2)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  __int64 v4; // rbx
  void *v5; // rdi
  char *v6; // rdx
  __int64 v7; // r13
  __int64 i; // r12
  char *v9; // rax
  void *v10; // rdi
  void *v11; // rdi
  char *v12; // rdi
  __int64 v13; // r13
  __int64 j; // r12
  __int64 v15; // rax
  __int64 v17; // rax
  size_t v18; // rax
  size_t v19; // rbp
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rax
  size_t v23; // r14
  void *v24; // rax

  v2 = sub_78D170(a1, a2);
  if ( v2 == -1 )
  {
    v17 = operator new(0x90u);
    *(_QWORD *)v17 = 0;
    v4 = v17;
    *(_QWORD *)(v17 + 32) = 0;
    *(_QWORD *)(v17 + 64) = 0;
    *(_QWORD *)(v17 + 88) = 0;
    *(_QWORD *)(v17 + 112) = 0;
    *(_OWORD *)(v17 + 8) = 0;
    *(_OWORD *)(v17 + 40) = 0;
    *(_OWORD *)(v17 + 72) = 0;
    *(_OWORD *)(v17 + 96) = 0;
    *(_OWORD *)(v17 + 120) = 0;
    if ( a2 )
    {
      v18 = strlen(a2);
      v19 = v18;
      if ( v18 )
      {
        v23 = v18 + 1;
        v24 = (void *)qvector_reserve(v4, 0, v18 + 1, 1);
        *(_QWORD *)(v4 + 8) = v23;
        *(_QWORD *)v4 = v24;
        memmove(v24, a2, v19);
        *(_BYTE *)(*(_QWORD *)v4 + v19) = 0;
      }
    }
    v20 = a1[1];
    v21 = *a1;
    v3 = v20;
    if ( a1[2] < (unsigned __int64)(v20 + 1) )
    {
      v22 = qvector_reserve(a1, v21, v20 + 1, 8);
      v20 = a1[1];
      *a1 = v22;
      v21 = v22;
    }
    *(_QWORD *)(v21 + 8 * v20) = v4;
    ++a1[1];
  }
  else
  {
    v3 = v2;
    v4 = *(_QWORD *)(*a1 + 8 * v2);
    if ( *(_DWORD *)(v4 + 136) )
      return -1;
    v5 = *(void **)(v4 + 32);
    if ( v5 )
    {
      *(_QWORD *)(v4 + 40) = 0;
      qfree(v5);
      *(_QWORD *)(v4 + 32) = 0;
      *(_QWORD *)(v4 + 48) = 0;
    }
    v6 = *(char **)(v4 + 88);
    if ( v6 )
    {
      v7 = *(_QWORD *)(v4 + 96);
      if ( v7 )
      {
        for ( i = 0; i != v7; ++i )
        {
          v9 = &v6[32 * i];
          v10 = *((void **)v9 + 1);
          if ( v10 )
          {
            *((_QWORD *)v9 + 2) = 0;
            qfree(v10);
            v6 = *(char **)(v4 + 88);
          }
        }
      }
      *(_QWORD *)(v4 + 96) = 0;
      qfree(v6);
      *(_QWORD *)(v4 + 88) = 0;
      *(_QWORD *)(v4 + 104) = 0;
    }
    v11 = *(void **)(v4 + 112);
    if ( v11 )
    {
      *(_QWORD *)(v4 + 120) = 0;
      qfree(v11);
      *(_QWORD *)(v4 + 112) = 0;
      *(_QWORD *)(v4 + 128) = 0;
    }
    v12 = *(char **)(v4 + 64);
    if ( v12 )
    {
      v13 = *(_QWORD *)(v4 + 72);
      if ( v13 )
      {
        for ( j = 0; j != v13; ++j )
        {
          v15 = j;
          free_idcv(&v12[32 * v15]);
          v12 = *(char **)(v4 + 64);
        }
      }
      *(_QWORD *)(v4 + 72) = 0;
      qfree(v12);
      *(_QWORD *)(v4 + 64) = 0;
      *(_QWORD *)(v4 + 80) = 0;
    }
    *(_DWORD *)(v4 + 24) = 0;
  }
  *(_DWORD *)(v4 + 136) = -1;
  *(_DWORD *)(v4 + 24) = 0;
  return v3;
}
