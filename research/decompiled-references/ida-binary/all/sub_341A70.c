void __fastcall sub_341A70(QT::QWidget *this, __int64 a2, double a3, double a4)
{
  int v6; // r14d
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rax
  __int64 v10; // r8
  unsigned __int64 v11; // r9
  bool v12; // cf
  __int64 v13; // r8
  __int64 v14; // rsi
  int v15; // r13d
  int v16; // edx
  __int64 v17; // rsi
  __int64 v18; // rax
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // r12
  __int64 *v21; // rdi
  __int64 *v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // rsi

  v6 = *(_DWORD *)(a2 + 92);
  if ( *(_DWORD *)(a2 + 32) != 0x4000000 )
  {
    if ( !*((_QWORD *)this + 15) )
      goto LABEL_11;
    v7 = *((_QWORD *)this + 42);
    v8 = *((_QWORD *)this + 25);
    if ( v6 > 0 )
    {
      if ( v7 >= v8 )
      {
        v13 = 0;
LABEL_8:
        if ( *((_QWORD *)this + 21) )
        {
          v14 = v13;
LABEL_10:
          sub_341920(this, v14);
          goto LABEL_11;
        }
        goto LABEL_11;
      }
      v13 = v8 - v7;
    }
    else
    {
      v9 = sub_33EF60((__int64)this);
      if ( v11 > v9 )
        v11 = v9;
      v12 = __CFADD__(v11, v10);
      v13 = v11 + v10;
      if ( v12 )
        goto LABEL_11;
    }
    if ( v13 == -1 )
      goto LABEL_11;
    goto LABEL_8;
  }
  QT::QEventPoint::position(*(QT::QEventPoint **)(a2 + 48));
  v15 = (int)(a4 + COERCE_DOUBLE(*(_QWORD *)&a4 & 0x8000000000000000LL | 0x3FE0000000000000LL));
  v16 = (int)(a3 + COERCE_DOUBLE(*(_QWORD *)&a3 & 0x8000000000000000LL | 0x3FE0000000000000LL));
  v17 = v15;
  if ( !*((_BYTE *)this + 345) )
  {
    v17 = v16;
    v16 = (int)(a4 + COERCE_DOUBLE(*(_QWORD *)&a4 & 0x8000000000000000LL | 0x3FE0000000000000LL));
    v15 = (int)(a3 + COERCE_DOUBLE(*(_QWORD *)&a3 & 0x8000000000000000LL | 0x3FE0000000000000LL));
  }
  v18 = sub_3417A0((__int64)this, v17, v16, nullptr);
  v19 = *((_QWORD *)this + 21);
  v20 = v18;
  if ( v6 <= 0 )
  {
    v24 = 2 * v19;
    if ( v24 )
      sub_341530(this, v24);
  }
  else if ( v19 != 1 )
  {
    sub_341530(this, v19 >> 1);
  }
  v21 = *((__int64 **)this + 14);
  v22 = &v21[4 * *((_QWORD *)this + 15)];
  if ( v21 != v22 )
  {
    while ( v20 < *v21 || v20 >= v21[1] )
    {
      v21 += 4;
      if ( v22 == v21 )
        goto LABEL_11;
    }
    if ( v21 )
    {
      v23 = sub_33F1E0(v21, v20, (__int64)this);
      if ( v15 >= v23 )
      {
        v14 = 0;
      }
      else
      {
        v14 = v23 - v15;
        if ( v14 == -1 )
          goto LABEL_11;
      }
      if ( !*((_QWORD *)this + 21) )
        goto LABEL_11;
      goto LABEL_10;
    }
  }
LABEL_11:
  *(_BYTE *)(a2 + 12) = 1;
}
