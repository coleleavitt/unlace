__int64 __fastcall sub_D65B70(__int64 a1)
{
  void **v1; // rbp
  void **v2; // rbx
  char *v3; // r13
  __int64 v4; // rdx
  void (__fastcall *v5)(void *, char *); // rax
  void **v6; // rbp
  __int64 v7; // rax
  void **v8; // rbp
  void **v9; // rbx

  v1 = *(void ***)(a1 + 1168);
  *(_QWORD *)a1 = &unk_2BDABF0;
  v2 = &v1[*(unsigned int *)(a1 + 1176)];
  if ( v1 != v2 )
  {
    do
    {
      v3 = (char *)*v1;
      if ( *((_BYTE *)*v1 + 27) )
      {
        v4 = *((_QWORD *)v3 + 4);
        v5 = *(void (__fastcall **)(void *, char *))(v4 + 72);
        if ( v5 )
          v5(*v1, &v3[*(unsigned int *)(v4 + 24) + 40]);
        v3[27] = 0;
      }
      ++v1;
    }
    while ( v2 != v1 );
    v6 = *(void ***)(a1 + 1168);
    v2 = &v6[*(unsigned int *)(a1 + 1176)];
    if ( v6 != v2 )
    {
      do
      {
        while ( *--v2 )
        {
          operator delete[](*v2);
          if ( v6 == v2 )
            goto LABEL_10;
        }
      }
      while ( v6 != v2 );
LABEL_10:
      v2 = *(void ***)(a1 + 1168);
    }
  }
  if ( v2 != (void **)(a1 + 1184) )
    free(v2);
  v7 = *(unsigned __int8 *)(a1 + 1112);
  if ( (_BYTE)v7 != 0xFF )
    funcs_CC1BB6[v7]();
  sub_DFE9F0(a1 + 384);
  v8 = *(void ***)(a1 + 64);
  v9 = &v8[18 * *(unsigned int *)(a1 + 72)];
  if ( v8 != v9 )
  {
    do
    {
      while ( 1 )
      {
        v9 -= 18;
        if ( *v9 == v9 + 2 )
          break;
        free(*v9);
        if ( v8 == v9 )
          goto LABEL_18;
      }
    }
    while ( v8 != v9 );
LABEL_18:
    v9 = *(void ***)(a1 + 64);
  }
  if ( v9 != (void **)(a1 + 80) )
    free(v9);
  operator delete();
  return operator delete();
}

