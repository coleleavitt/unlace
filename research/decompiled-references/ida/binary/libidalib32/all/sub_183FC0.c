void __fastcall sub_183FC0(TWindow *this)
{
  TWindow **v2; // rdi
  TWindow **v3; // rdx
  void (__fastcall *v4)(__int64, char *); // rax
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r12
  __int64 i; // rbp
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r12
  __int64 j; // rbp
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r12
  __int64 k; // rbp
  __int64 v17; // rax

  *(_QWORD *)this = &off_23BD28;
  *((_QWORD *)this + 24) = &off_23BE48;
  v2 = (TWindow **)qword_2554F0;
  v3 = (TWindow **)(qword_2554F0 + 8 * xmmword_2554F8);
  if ( (TWindow **)qword_2554F0 != v3 )
  {
    while ( this != *v2 )
    {
      if ( v3 == ++v2 )
        goto LABEL_7;
    }
    if ( v3 != v2 )
    {
      memmove(v2, v2 + 1, (char *)v3 - (char *)v2 - 8);
      *(_QWORD *)&xmmword_2554F8 = xmmword_2554F8 - 1;
    }
  }
LABEL_7:
  v4 = *((void (__fastcall **)(__int64, char *))this + 40);
  if ( v4 && *((_DWORD *)this + 84) == 1 )
  {
    *((_DWORD *)this + 84) = 2;
    v4(4294967291LL, (char *)this + 248);
    *((_DWORD *)this + 84) = 1;
  }
  v5 = *((_QWORD *)this + 64);
  *((_QWORD *)this + 40) = 0;
  if ( v5 )
  {
    *((_QWORD *)this + 65) = 0;
    qfree();
  }
  v6 = *((_QWORD *)this + 51);
  if ( v6 )
  {
    v7 = *((_QWORD *)this + 52);
    if ( v7 )
    {
      for ( i = 0; i != v7; ++i )
      {
        v9 = v6 + 40 * i;
        if ( *(_QWORD *)(v9 + 16) )
        {
          *(_QWORD *)(v9 + 24) = 0;
          qfree();
          v6 = *((_QWORD *)this + 51);
        }
      }
    }
    *((_QWORD *)this + 52) = 0;
    qfree();
  }
  if ( *((_QWORD *)this + 48) )
  {
    *((_QWORD *)this + 49) = 0;
    qfree();
  }
  v10 = *((_QWORD *)this + 37);
  if ( v10 )
  {
    v11 = *((_QWORD *)this + 38);
    if ( v11 )
    {
      for ( j = 0; j != v11; ++j )
      {
        v13 = (_QWORD *)(v10 + 24 * j);
        if ( *v13 )
        {
          v13[1] = 0;
          qfree();
          v10 = *((_QWORD *)this + 37);
        }
      }
    }
    *((_QWORD *)this + 38) = 0;
    qfree();
  }
  if ( *((_QWORD *)this + 28) )
  {
    *((_QWORD *)this + 29) = 0;
    qfree();
  }
  v14 = *((_QWORD *)this + 25);
  if ( v14 )
  {
    v15 = *((_QWORD *)this + 26);
    if ( v15 )
    {
      for ( k = 0; k != v15; ++k )
      {
        v17 = v14 + 72 * k;
        if ( *(_QWORD *)(v17 + 8) )
        {
          *(_QWORD *)(v17 + 16) = 0;
          qfree();
          v14 = *((_QWORD *)this + 25);
        }
      }
    }
    *((_QWORD *)this + 26) = 0;
    qfree();
  }
  sub_176A50((_QWORD *)this + 21);
  *(_QWORD *)this = &unk_23BC40;
  TWindow::~TWindow(this);
}

