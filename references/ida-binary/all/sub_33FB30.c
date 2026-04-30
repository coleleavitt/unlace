void __fastcall sub_33FB30(QT::QWidget *this)
{
  __int64 v2; // rsi
  __int64 v3; // r9
  __int64 v4; // rcx
  unsigned __int64 v5; // rax
  bool v6; // cf
  bool v7; // zf
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rsi

  if ( *((_QWORD *)this + 21) )
  {
    v2 = *((_QWORD *)this + 14);
    v3 = v2 + 32LL * *((_QWORD *)this + 15);
    if ( v3 == v2 )
    {
      v10 = *((_QWORD *)this + 23);
      if ( v10 != -1 )
LABEL_16:
        sub_33FA70(this, v10);
    }
    else
    {
      v4 = 0;
      do
      {
        v7 = *(_BYTE *)(v2 + 24) == 0;
        *(_QWORD *)(v2 + 16) = v4;
        if ( v7 )
        {
          v8 = *((_QWORD *)this + 21);
          if ( __CFADD__(v8, *(_QWORD *)(v2 + 8) - *(_QWORD *)v2) )
            v9 = -2;
          else
            v9 = v8 + *(_QWORD *)(v2 + 8) - *(_QWORD *)v2 - 1;
          v5 = v9 / v8;
        }
        else
        {
          v5 = *((int *)this + 44);
        }
        v6 = __CFADD__(v5, v4);
        v4 += v5;
        if ( v6 )
          v4 = -1;
        v2 += 32;
      }
      while ( v3 != v2 );
      v10 = *((_QWORD *)this + 23);
      if ( v10 != -1 && *((_QWORD *)this + 21) )
        goto LABEL_16;
    }
  }
}
