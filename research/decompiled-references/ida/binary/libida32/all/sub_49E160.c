void __fastcall sub_49E160(char *a1)
{
  char *v2; // rbx
  char *v3; // rbp
  _QWORD *v4; // rbx
  void *v5; // rdi
  char *v6; // rbp
  _QWORD *v7; // rbx
  void *v8; // rdi
  void **v9; // rbx
  void **v10; // rbp
  void *v11; // rdi

  if ( a1 )
  {
    v2 = a1 + 184;
    do
    {
      if ( *(_QWORD *)v2 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v2 + 16LL))(*(_QWORD *)v2);
      *(_QWORD *)v2 = 0;
      v2 += 8;
    }
    while ( v2 != a1 + 256 );
    v3 = a1 + 8;
    do
    {
      v4 = *(_QWORD **)v3;
      if ( *(_QWORD *)v3 )
      {
        do
        {
          v5 = v4;
          v4 = (_QWORD *)*v4;
          operator delete(v5, 0x20u);
        }
        while ( v4 );
      }
      v3 += 8;
    }
    while ( v3 != a1 + 80 );
    v6 = a1 + 80;
    do
    {
      v7 = *(_QWORD **)v6;
      if ( *(_QWORD *)v6 )
      {
        do
        {
          v8 = v7;
          v7 = (_QWORD *)*v7;
          operator delete(v8, 0x20u);
        }
        while ( v7 );
      }
      v6 += 8;
    }
    while ( a1 + 152 != v6 );
    v9 = *((void ***)a1 + 19);
    v10 = &v9[*((_QWORD *)a1 + 20)];
    if ( v9 != v10 )
    {
      do
      {
        if ( *v9 )
          operator delete(*v9, 0x20u);
        ++v9;
      }
      while ( v10 != v9 );
      v10 = *((void ***)a1 + 19);
    }
    if ( v10 )
    {
      *((_QWORD *)a1 + 20) = 0;
      qfree(v10);
      *((_QWORD *)a1 + 19) = 0;
      *((_QWORD *)a1 + 21) = 0;
    }
    *(_OWORD *)(a1 + 8) = 0;
    *((_QWORD *)a1 + 9) = 0;
    *(_OWORD *)(a1 + 24) = 0;
    *(_OWORD *)(a1 + 40) = 0;
    *(_OWORD *)(a1 + 56) = 0;
    *((_OWORD *)a1 + 5) = 0;
    *((_QWORD *)a1 + 18) = 0;
    *((_OWORD *)a1 + 6) = 0;
    *((_OWORD *)a1 + 7) = 0;
    *((_OWORD *)a1 + 8) = 0;
    v11 = *((void **)a1 + 19);
    if ( v11 )
    {
      *((_QWORD *)a1 + 20) = 0;
      qfree(v11);
    }
    operator delete(a1, 0x100u);
  }
}

