__int64 __fastcall sub_CAF4D0(__int64 a1)
{
  __int64 v1; // rsi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // r12
  void *v10; // rdi
  void **v11; // r12
  void **v12; // rbp

  v1 = *(unsigned int *)(a1 + 696);
  *(_QWORD *)a1 = &off_2C04B38;
  operator delete(*(_QWORD *)(a1 + 680), 16 * v1, 8);
  v3 = *(void **)(a1 + 600);
  if ( v3 != (void *)(a1 + 616) )
    free(v3);
  operator delete(*(_QWORD *)(a1 + 528), 16LL * *(unsigned int *)(a1 + 544), 8);
  operator delete(*(_QWORD *)(a1 + 504), 24LL * *(unsigned int *)(a1 + 520), 8);
  v4 = *(void **)(a1 + 464);
  *(_QWORD *)a1 = &unk_2C04AF0;
  if ( v4 )
    operator delete(v4);
  v5 = *(void **)(a1 + 440);
  if ( v5 )
    operator delete(v5);
  v6 = *(_QWORD *)(a1 + 416);
  v7 = *(unsigned int *)(a1 + 432);
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
    v6 = *(_QWORD *)(a1 + 416);
    v8 = 48LL * *(unsigned int *)(a1 + 432);
  }
  operator delete(v6, v8, 8);
  operator delete(*(_QWORD *)(a1 + 392), 8LL * *(unsigned int *)(a1 + 408), 4);
  v11 = *(void ***)(a1 + 64);
  v12 = &v11[18 * *(unsigned int *)(a1 + 72)];
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
    v12 = *(void ***)(a1 + 64);
  }
  if ( v12 != (void **)(a1 + 80) )
    free(v12);
  operator delete(*(_QWORD *)(a1 + 32), 16LL * *(unsigned int *)(a1 + 48), 8);
  return operator delete(*(_QWORD *)(a1 + 8), 16LL * *(unsigned int *)(a1 + 24), 8);
}
