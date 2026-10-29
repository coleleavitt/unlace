void __fastcall sub_CAF2E0(_QWORD *a1)
{
  __int64 v1; // rsi
  _QWORD *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // r12
  void *v10; // rdi
  void **v11; // r12
  void **v12; // rbp

  v1 = *((unsigned int *)a1 + 174);
  *a1 = &off_2C04B38;
  operator delete(a1[85], 16 * v1, 8);
  v3 = (_QWORD *)a1[75];
  if ( v3 != a1 + 77 )
    free(v3);
  operator delete(a1[66], 16LL * *((unsigned int *)a1 + 136), 8);
  operator delete(a1[63], 24LL * *((unsigned int *)a1 + 130), 8);
  v4 = (void *)a1[58];
  *a1 = &unk_2C04AF0;
  if ( v4 )
    operator delete(v4);
  v5 = (void *)a1[55];
  if ( v5 )
    operator delete(v5);
  v6 = a1[52];
  v7 = *((unsigned int *)a1 + 108);
  v8 = 48 * v7;
  if ( (_DWORD)v7 )
  {
    v9 = v6 + 48 * v7;
    do
    {
      while ( 1 )
      {
        if ( (unsigned int)(*(_DWORD *)v6 + 2) > 1 )
        {
          v10 = *(void **)(v6 + 8);
          if ( v10 != (void *)(v6 + 24) )
            break;
        }
        v6 += 48;
        if ( v9 == v6 )
          goto LABEL_13;
      }
      free(v10);
      v6 += 48;
    }
    while ( v9 != v6 );
LABEL_13:
    v6 = a1[52];
    v8 = 48LL * *((unsigned int *)a1 + 108);
  }
  operator delete(v6, v8, 8);
  operator delete(a1[49], 8LL * *((unsigned int *)a1 + 102), 4);
  v11 = (void **)a1[8];
  v12 = &v11[18 * *((unsigned int *)a1 + 18)];
  if ( v11 != v12 )
  {
    do
    {
      while ( 1 )
      {
        v12 -= 18;
        if ( *v12 == v12 + 2 )
          break;
        free(*v12);
        if ( v11 == v12 )
          goto LABEL_17;
      }
    }
    while ( v11 != v12 );
LABEL_17:
    v12 = (void **)a1[8];
  }
  if ( v12 != a1 + 10 )
    free(v12);
  operator delete(a1[4], 16LL * *((unsigned int *)a1 + 12), 8);
  operator delete(a1[1], 16LL * *((unsigned int *)a1 + 6), 8);
  operator delete(a1, 0x2F0u);
}
