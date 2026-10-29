void __fastcall sub_177AC0(TFileDialog *this)
{
  __int64 v2; // rdx
  __int64 v3; // r12
  __int64 i; // rbx
  _QWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r12
  __int64 j; // rbx
  _QWORD *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // r13
  __int64 k; // r12
  _QWORD *v13; // r14
  __int64 v14; // rdx
  __int64 v15; // r15
  __int64 m; // rbx
  _QWORD *v17; // rax

  v2 = *((_QWORD *)this + 555);
  *(_QWORD *)this = off_23C6C0;
  *((_QWORD *)this + 549) = 0;
  *(_OWORD *)((char *)this + 4424) = 0;
  if ( v2 )
  {
    v3 = *((_QWORD *)this + 556);
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (_QWORD *)(v2 + 24 * i);
        if ( *v5 )
        {
          v5[1] = 0;
          qfree();
          v2 = *((_QWORD *)this + 555);
        }
      }
    }
    *((_QWORD *)this + 556) = 0;
    qfree();
  }
  v6 = *((_QWORD *)this + 550);
  if ( v6 )
  {
    v7 = *((_QWORD *)this + 551);
    if ( v7 )
    {
      for ( j = 0; j != v7; ++j )
      {
        v9 = (_QWORD *)(v6 + 24 * j);
        if ( *v9 )
        {
          v9[1] = 0;
          qfree();
          v6 = *((_QWORD *)this + 550);
        }
      }
    }
    *((_QWORD *)this + 551) = 0;
    qfree();
  }
  if ( *((_QWORD *)this + 545) )
  {
    *((_QWORD *)this + 546) = 0;
    qfree();
  }
  if ( *((_QWORD *)this + 542) )
  {
    *((_QWORD *)this + 543) = 0;
    qfree();
  }
  v10 = *((_QWORD *)this + 539);
  if ( v10 )
  {
    v11 = *((_QWORD *)this + 540);
    if ( v11 )
    {
      for ( k = 0; k != v11; ++k )
      {
        v13 = (_QWORD *)(v10 + 48 * k);
        v14 = v13[3];
        if ( v14 )
        {
          v15 = v13[4];
          if ( v15 )
          {
            for ( m = 0; m != v15; ++m )
            {
              v17 = (_QWORD *)(v14 + 24 * m);
              if ( *v17 )
              {
                v17[1] = 0;
                qfree();
                v14 = v13[3];
              }
            }
          }
          v13[4] = 0;
          qfree();
        }
        if ( *v13 )
        {
          v13[1] = 0;
          qfree();
        }
        v10 = *((_QWORD *)this + 539);
      }
    }
    *((_QWORD *)this + 540) = 0;
    qfree();
  }
  TFileDialog::~TFileDialog(this);
}

