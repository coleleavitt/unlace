__int64 __fastcall sub_6B8D40(__int64 a1)
{
  __int64 v1; // rbp
  char *v2; // rdi
  __int64 v3; // r14
  __int64 v4; // r13
  __int64 i; // r12
  char *v6; // rbx
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi
  __int64 v10; // rbx
  _QWORD *v11; // r12
  void *v12; // rdi

  v1 = *(_QWORD *)(*(_QWORD *)a1 + 1864LL);
  v2 = *(char **)(v1 + 48);
  *(_BYTE *)(v1 + 10) = 0;
  *(_QWORD *)(v1 + 24) = 0;
  *(_QWORD *)(v1 + 40) = -1;
  if ( v2 )
  {
    v3 = *(_QWORD *)(v1 + 56);
    if ( v3 )
    {
      v4 = 0;
      for ( i = 0; i != v3; ++i )
      {
        v6 = &v2[v4];
        v7 = *(void **)&v2[v4 + 24];
        if ( v7 )
        {
          *((_QWORD *)v6 + 4) = 0;
          qfree(v7);
        }
        v8 = *(void **)v6;
        if ( *(_QWORD *)v6 )
        {
          *((_QWORD *)v6 + 1) = 0;
          qfree(v8);
        }
        v2 = *(char **)(v1 + 48);
        v4 += 56;
      }
    }
    *(_QWORD *)(v1 + 56) = 0;
    qfree(v2);
    *(_QWORD *)(v1 + 48) = 0;
    *(_QWORD *)(v1 + 64) = 0;
  }
  v9 = *(void **)(v1 + 72);
  if ( v9 )
  {
    *(_QWORD *)(v1 + 80) = 0;
    qfree(v9);
    *(_QWORD *)(v1 + 72) = 0;
    *(_QWORD *)(v1 + 88) = 0;
  }
  v10 = *(_QWORD *)(v1 + 120);
  *(_DWORD *)(v1 + 96) = 0;
  *(_BYTE *)(v1 + 100) = 0x80;
  while ( v10 )
  {
    v11 = (_QWORD *)v10;
    sub_6B85C0(*(_QWORD **)(v10 + 24));
    v12 = *(void **)(v10 + 40);
    v10 = *(_QWORD *)(v10 + 16);
    if ( v12 )
    {
      v11[6] = 0;
      qfree(v12);
    }
    operator delete(v11, 0x40u);
  }
  *(_QWORD *)(v1 + 120) = 0;
  *(_QWORD *)(v1 + 128) = v1 + 112;
  *(_QWORD *)(v1 + 136) = v1 + 112;
  *(_QWORD *)(v1 + 144) = 0;
  return v1 + 112;
}
