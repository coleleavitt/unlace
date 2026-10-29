void __fastcall sub_2007580(_QWORD *a1)
{
  void (__fastcall *v2)(_QWORD *, _QWORD *, __int64); // rax
  void *v3; // rdi
  __int64 *v4; // rbp
  __int64 *v5; // r12
  __int64 i; // rax
  __int64 v7; // rsi
  unsigned int v8; // ecx
  __int64 v9; // rdi
  __int64 *v10; // rbp
  __int64 *v11; // r12
  __int64 v12; // rsi
  __int64 v13; // rdi
  _QWORD *v14; // rdi
  void (__fastcall *v15)(_QWORD *, _QWORD *, __int64); // rax
  void **v16; // r12
  void **v17; // rbp
  __int64 v18; // rdi

  *a1 = &off_2BE4E48;
  v2 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))a1[55];
  if ( v2 )
    v2(a1 + 53, a1 + 53, 3);
  v3 = (void *)a1[50];
  a1[33] = &off_2BE4CE0;
  if ( v3 )
    operator delete(v3);
  operator delete(a1[47], 16LL * *((unsigned int *)a1 + 98), 8);
  v4 = (__int64 *)a1[36];
  v5 = &v4[*((unsigned int *)a1 + 74)];
  if ( v4 != v5 )
  {
    for ( i = a1[36]; ; i = a1[36] )
    {
      v7 = 0x40000000000LL;
      v8 = (unsigned int)(((__int64)v4 - i) >> 3) >> 7;
      if ( v8 <= 0x1D )
        v7 = 4096LL << v8;
      v9 = *v4++;
      operator delete(v9, v7, 16);
      if ( v5 == v4 )
        break;
    }
  }
  v10 = (__int64 *)a1[42];
  v11 = &v10[2 * *((unsigned int *)a1 + 86)];
  if ( v10 != v11 )
  {
    do
    {
      v12 = v10[1];
      v13 = *v10;
      v10 += 2;
      operator delete(v13, v12, 16);
    }
    while ( v11 != v10 );
    v11 = (__int64 *)a1[42];
  }
  if ( v11 != a1 + 44 )
    free(v11);
  v14 = (_QWORD *)a1[36];
  if ( v14 != a1 + 38 )
    free(v14);
  sub_20093A0(a1 + 10);
  if ( *((_BYTE *)a1 + 72) )
  {
    v15 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))a1[7];
    if ( v15 )
      v15(a1 + 5, a1 + 5, 3);
    v16 = (void **)a1[3];
    v17 = (void **)a1[2];
    if ( v16 != v17 )
    {
      do
      {
        while ( *v17 != v17 + 2 )
        {
          operator delete(*v17);
          v17 += 4;
          if ( v16 == v17 )
            goto LABEL_25;
        }
        v17 += 4;
      }
      while ( v16 != v17 );
LABEL_25:
      v17 = (void **)a1[2];
    }
    if ( v17 )
      operator delete(v17);
    v18 = a1[1];
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
  }
  operator delete(a1, 0x1C8u);
}
