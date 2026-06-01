void __fastcall sub_185220(TWindow *this, _QWORD *a2)
{
  TWindow **v3; // rdi
  TWindow **v4; // rdx
  void (__fastcall *v5)(__int64, char *); // rax
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r13
  __int64 i; // rbp
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r13
  __int64 j; // rbp
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r13
  __int64 k; // rbp
  __int64 v18; // rax

  *(_QWORD *)this = *a2;
  *((_QWORD *)this + 24) = &off_23CE48;
  v3 = (TWindow **)qword_2566B0;
  v4 = (TWindow **)(qword_2566B0 + 8 * xmmword_2566B8);
  if ( (TWindow **)qword_2566B0 != v4 )
  {
    while ( this != *v3 )
    {
      if ( v4 == ++v3 )
        goto LABEL_7;
    }
    if ( v4 != v3 )
    {
      memmove(v3, v3 + 1, (char *)v4 - (char *)v3 - 8);
      *(_QWORD *)&xmmword_2566B8 = xmmword_2566B8 - 1;
    }
  }
LABEL_7:
  v5 = *((void (__fastcall **)(__int64, char *))this + 40);
  if ( v5 && *((_DWORD *)this + 84) == 1 )
  {
    *((_DWORD *)this + 84) = 2;
    v5(4294967291LL, (char *)this + 248);
    *((_DWORD *)this + 84) = 1;
  }
  v6 = *((_QWORD *)this + 64);
  *((_QWORD *)this + 40) = 0;
  if ( v6 )
  {
    *((_QWORD *)this + 65) = 0;
    qfree();
  }
  v7 = *((_QWORD *)this + 51);
  if ( v7 )
  {
    v8 = *((_QWORD *)this + 52);
    if ( v8 )
    {
      for ( i = 0; i != v8; ++i )
      {
        v10 = v7 + 40 * i;
        if ( *(_QWORD *)(v10 + 16) )
        {
          *(_QWORD *)(v10 + 24) = 0;
          qfree();
          v7 = *((_QWORD *)this + 51);
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
  v11 = *((_QWORD *)this + 37);
  if ( v11 )
  {
    v12 = *((_QWORD *)this + 38);
    if ( v12 )
    {
      for ( j = 0; j != v12; ++j )
      {
        v14 = (_QWORD *)(v11 + 24 * j);
        if ( *v14 )
        {
          v14[1] = 0;
          qfree();
          v11 = *((_QWORD *)this + 37);
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
  v15 = *((_QWORD *)this + 25);
  if ( v15 )
  {
    v16 = *((_QWORD *)this + 26);
    if ( v16 )
    {
      for ( k = 0; k != v16; ++k )
      {
        v18 = v15 + 72 * k;
        if ( *(_QWORD *)(v18 + 8) )
        {
          *(_QWORD *)(v18 + 16) = 0;
          qfree();
          v15 = *((_QWORD *)this + 25);
        }
      }
    }
    *((_QWORD *)this + 26) = 0;
    qfree();
  }
  sub_177550((_QWORD *)this + 21);
  *(_QWORD *)this = a2[1];
  TWindow::~TWindow(this);
}

