void __fastcall sub_1AFD6E0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // r15
  void ***v4; // r8
  __int64 v6; // r13
  unsigned int v7; // r14d
  void **v8; // rbp
  void **v9; // rbx
  size_t v10; // rdx
  void ***v11; // [rsp+8h] [rbp-40h]

  v2 = *a1;
  v3 = *a1 + 16LL * *((unsigned int *)a1 + 2);
  if ( *a1 == v3 )
    return;
  v4 = (void ***)a1;
  do
  {
    while ( 1 )
    {
      *(_DWORD *)(a2 + 8) = 0;
      v6 = v2 + 16;
      *(_DWORD *)(a2 + 12) = 0;
      v7 = *(_DWORD *)(v2 + 8);
      *(_QWORD *)a2 = a2 + 16;
      if ( v7 )
      {
        if ( a2 != v2 )
          break;
      }
LABEL_3:
      a2 += 16;
      v2 += 16;
      if ( v3 == v6 )
        goto LABEL_8;
    }
    if ( *(_QWORD *)v2 == v6 )
    {
      v11 = v4;
      sub_2237220(a2, a2 + 16, v7, 8);
      v4 = v11;
      v10 = 8LL * *(unsigned int *)(v2 + 8);
      if ( v10 )
      {
        memcpy(*(void **)a2, *(const void **)v2, v10);
        v4 = v11;
      }
      *(_DWORD *)(a2 + 8) = v7;
      *(_DWORD *)(v2 + 8) = 0;
      goto LABEL_3;
    }
    *(_QWORD *)a2 = *(_QWORD *)v2;
    *(_DWORD *)(a2 + 8) = v7;
    *(_DWORD *)(a2 + 12) = *(_DWORD *)(v2 + 12);
    a2 += 16;
    *(_QWORD *)v2 = v6;
    *(_DWORD *)(v2 + 12) = 0;
    *(_DWORD *)(v2 + 8) = 0;
    v2 += 16;
  }
  while ( v3 != v6 );
LABEL_8:
  v8 = *v4;
  v9 = &(*v4)[2 * *((unsigned int *)v4 + 2)];
  if ( *v4 != v9 )
  {
    do
    {
      while ( 1 )
      {
        v9 -= 2;
        if ( *v9 == v9 + 2 )
          break;
        free(*v9);
        if ( v9 == v8 )
          return;
      }
    }
    while ( v9 != v8 );
  }
}
