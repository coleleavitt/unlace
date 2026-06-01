void __fastcall sub_C8B5A0(_QWORD *a1)
{
  _QWORD *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  __int64 v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // r12
  void *v8; // rdi
  void **v9; // r12
  void **v10; // rbp

  *a1 = &off_2BDAB38;
  operator delete();
  v2 = (_QWORD *)a1[75];
  if ( v2 != a1 + 77 )
    free(v2);
  operator delete();
  operator delete();
  v3 = (void *)a1[58];
  *a1 = &unk_2BDAAF0;
  if ( v3 )
    operator delete(v3);
  v4 = (void *)a1[55];
  if ( v4 )
    operator delete(v4);
  v5 = a1[52];
  v6 = *((unsigned int *)a1 + 108);
  if ( (_DWORD)v6 )
  {
    v7 = v5 + 48 * v6;
    do
    {
      while ( 1 )
      {
        if ( (unsigned int)(*(_DWORD *)v5 + 2) > 1 )
        {
          v8 = *(void **)(v5 + 8);
          if ( v8 != (void *)(v5 + 24) )
            break;
        }
        v5 += 48;
        if ( v7 == v5 )
          goto LABEL_13;
      }
      free(v8);
      v5 += 48;
    }
    while ( v7 != v5 );
  }
LABEL_13:
  operator delete();
  operator delete();
  v9 = (void **)a1[8];
  v10 = &v9[18 * *((unsigned int *)a1 + 18)];
  if ( v9 != v10 )
  {
    do
    {
      while ( 1 )
      {
        v10 -= 18;
        if ( *v10 == v10 + 2 )
          break;
        free(*v10);
        if ( v9 == v10 )
          goto LABEL_16;
      }
    }
    while ( v9 != v10 );
LABEL_16:
    v10 = (void **)a1[8];
  }
  if ( v10 != a1 + 10 )
    free(v10);
  operator delete();
  operator delete();
  operator delete(a1, 0x2F0u);
}

