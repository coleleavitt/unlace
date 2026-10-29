void __fastcall sub_21911F0(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  void **v3; // rbp
  char *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rbp
  unsigned int v7; // r12d
  __int64 v8; // rax
  void **v9; // rbx
  int v10; // ebx
  size_t v11; // rdx
  char *v12; // [rsp+8h] [rbp-50h]
  __int64 v13[8]; // [rsp+18h] [rbp-40h] BYREF

  v2 = sub_2237400(a1, a1 + 16, a2, 16, v13);
  v3 = (void **)(*(_QWORD *)a1 + 16LL * *(unsigned int *)(a1 + 8));
  if ( *(void ***)a1 == v3 )
    goto LABEL_12;
  v4 = (char *)(v3 + 2);
  v5 = *(_QWORD *)a1 + 16LL;
  v6 = v2;
  v12 = v4;
  do
  {
    while ( 1 )
    {
      *(_DWORD *)(v6 + 8) = 0;
      *(_DWORD *)(v6 + 12) = 0;
      v7 = *(_DWORD *)(v5 - 8);
      *(_QWORD *)v6 = v6 + 16;
      if ( v6 != v5 - 16 )
      {
        if ( v7 )
          break;
      }
LABEL_3:
      v6 += 16;
      v5 += 16;
      if ( v12 == (char *)v5 )
        goto LABEL_8;
    }
    v8 = *(_QWORD *)(v5 - 16);
    if ( v8 == v5 )
    {
      sub_2237220(v6, v6 + 16, v7, 24);
      v11 = 24LL * *(unsigned int *)(v5 - 8);
      if ( v11 )
        memcpy(*(void **)v6, *(const void **)(v5 - 16), v11);
      *(_DWORD *)(v6 + 8) = v7;
      *(_DWORD *)(v5 - 8) = 0;
      goto LABEL_3;
    }
    *(_QWORD *)v6 = v8;
    *(_DWORD *)(v6 + 8) = v7;
    *(_DWORD *)(v6 + 12) = *(_DWORD *)(v5 - 4);
    v6 += 16;
    *(_QWORD *)(v5 - 16) = v5;
    v5 += 16;
    *(_DWORD *)(v5 - 20) = 0;
    *(_DWORD *)(v5 - 24) = 0;
  }
  while ( v12 != (char *)v5 );
LABEL_8:
  v3 = *(void ***)a1;
  v9 = (void **)(*(_QWORD *)a1 + 16LL * *(unsigned int *)(a1 + 8));
  if ( v9 != *(void ***)a1 )
  {
    do
    {
      while ( 1 )
      {
        v9 -= 2;
        if ( *v9 == v9 + 2 )
          break;
        free(*v9);
        if ( v9 == v3 )
        {
          v3 = *(void ***)a1;
          goto LABEL_12;
        }
      }
    }
    while ( v9 != v3 );
    v3 = *(void ***)a1;
  }
LABEL_12:
  v10 = v13[0];
  if ( (void **)(a1 + 16) != v3 )
    free(v3);
  *(_QWORD *)a1 = v2;
  *(_DWORD *)(a1 + 12) = v10;
}
