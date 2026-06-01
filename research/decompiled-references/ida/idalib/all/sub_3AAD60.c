void sub_3AAD60()
{
  __int64 v0; // rbx
  _QWORD **v1; // rbp
  __int64 v2; // r13
  _QWORD *v3; // r12
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  _QWORD **v7; // rdi
  char *v8; // rdx
  __int64 v9; // r12
  __int64 i; // rbp
  char *v11; // rax
  void *v12; // rdi
  char *v13; // rdx
  __int64 v14; // r12
  __int64 j; // rbp
  char *v16; // rax
  void *v17; // rdi
  void *v18; // rdi

  v0 = *(_QWORD *)(qword_2CCB598 + 1576);
  v1 = *(_QWORD ***)v0;
  v2 = *(_QWORD *)v0 + 8LL * *(_QWORD *)(v0 + 8);
  if ( v2 != *(_QWORD *)v0 )
  {
    do
    {
      v3 = *v1;
      if ( *v1 )
      {
        v4 = (void *)v3[1];
        if ( v4 )
        {
          v3[2] = 0;
          qfree(v4);
        }
        operator delete(v3, 0x60u);
      }
      ++v1;
    }
    while ( (_QWORD **)v2 != v1 );
  }
  sub_3AA600(*(void **)(v0 + 88));
  *(_QWORD *)(v0 + 88) = 0;
  v5 = *(void **)(v0 + 136);
  *(_QWORD *)(v0 + 96) = v0 + 80;
  *(_QWORD *)(v0 + 104) = v0 + 80;
  *(_QWORD *)(v0 + 112) = 0;
  sub_3AA600(v5);
  *(_QWORD *)(v0 + 136) = 0;
  v6 = *(void **)(v0 + 184);
  *(_QWORD *)(v0 + 144) = v0 + 128;
  *(_QWORD *)(v0 + 152) = v0 + 128;
  *(_QWORD *)(v0 + 160) = 0;
  sub_3AA600(v6);
  v7 = *(_QWORD ***)v0;
  *(_QWORD *)(v0 + 184) = 0;
  *(_QWORD *)(v0 + 192) = v0 + 176;
  *(_QWORD *)(v0 + 200) = v0 + 176;
  *(_QWORD *)(v0 + 208) = 0;
  if ( v7 )
  {
    *(_QWORD *)(v0 + 8) = 0;
    qfree(v7);
    *(_QWORD *)v0 = 0;
    *(_QWORD *)(v0 + 16) = 0;
  }
  v8 = *(char **)(v0 + 48);
  if ( v8 )
  {
    v9 = *(_QWORD *)(v0 + 56);
    if ( v9 )
    {
      for ( i = 0; i != v9; ++i )
      {
        v11 = &v8[32 * i];
        v12 = *(void **)v11;
        if ( *(_QWORD *)v11 )
        {
          *((_QWORD *)v11 + 1) = 0;
          qfree(v12);
          v8 = *(char **)(v0 + 48);
        }
      }
    }
    *(_QWORD *)(v0 + 56) = 0;
    qfree(v8);
    *(_QWORD *)(v0 + 48) = 0;
    *(_QWORD *)(v0 + 64) = 0;
  }
  v13 = *(char **)(v0 + 216);
  if ( v13 )
  {
    v14 = *(_QWORD *)(v0 + 224);
    if ( v14 )
    {
      for ( j = 0; j != v14; ++j )
      {
        v16 = &v13[24 * j];
        v17 = *(void **)v16;
        if ( *(_QWORD *)v16 )
        {
          *((_QWORD *)v16 + 1) = 0;
          qfree(v17);
          v13 = *(char **)(v0 + 216);
        }
      }
    }
    *(_QWORD *)(v0 + 224) = 0;
    qfree(v13);
    *(_QWORD *)(v0 + 216) = 0;
    *(_QWORD *)(v0 + 232) = 0;
  }
  v18 = *(void **)(v0 + 240);
  if ( v18 )
  {
    *(_QWORD *)(v0 + 248) = 0;
    qfree(v18);
    *(_QWORD *)(v0 + 240) = 0;
    *(_QWORD *)(v0 + 256) = 0;
  }
  *(_DWORD *)(v0 + 304) = 0;
  *(_QWORD *)(v0 + 272) = 0;
  *(_BYTE *)(v0 + 308) = 0;
}
