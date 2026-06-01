void __fastcall sub_13577A0(_QWORD *a1)
{
  void **v2; // r12
  void **v3; // rbx
  char *v4; // rdi
  int v5; // eax
  __int64 v6; // rbx
  __int64 v7; // r12
  _QWORD *v8; // rax

  v2 = (void **)a1[5];
  v3 = (void **)a1[4];
  *a1 = &off_2BB2108;
  if ( v2 != v3 )
  {
    do
    {
      while ( *v3 != v3 + 2 )
      {
        operator delete(*v3);
        v3 += 4;
        if ( v3 == v2 )
          goto LABEL_4;
      }
      v3 += 4;
    }
    while ( v2 != v3 );
LABEL_4:
    v3 = (void **)a1[4];
  }
  if ( v3 )
    operator delete(v3);
  v4 = (char *)a1[1];
  if ( *((_DWORD *)a1 + 5) )
  {
    v5 = *((_DWORD *)a1 + 4);
    if ( v5 )
    {
      v6 = 0;
      v7 = 8LL * (unsigned int)(v5 - 1) + 8;
      do
      {
        v8 = *(_QWORD **)&v4[v6];
        if ( v8 != (_QWORD *)-8LL && v8 )
        {
          operator delete(*(_QWORD *)&v4[v6], *v8 + 9LL, 8);
          v4 = (char *)a1[1];
        }
        v6 += 8;
      }
      while ( v7 != v6 );
    }
  }
  free(v4);
  operator delete(a1, 0x38u);
}
