__int64 __fastcall sub_342440(QT::QWidget *this, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r12
  char *v8; // rbp
  __int64 v9; // r14
  unsigned __int64 v10; // rdx
  __int64 *v11; // r12
  __int64 *v12; // rdi
  unsigned __int64 v13; // rbp
  __int64 result; // rax
  unsigned __int64 *v15; // rbp
  _DWORD *v16; // r11
  int v17; // ecx
  unsigned __int64 *v18; // r8
  unsigned __int64 *v19; // rax
  unsigned __int64 v20; // rdx
  int v21; // eax
  int v22; // r10d
  unsigned __int64 *v23; // rsi
  unsigned __int64 v24; // rdi
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // r13
  unsigned __int64 v28; // r14
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  bool v31; // cf
  unsigned __int64 v32; // rax
  bool v33; // dl
  int v34; // eax
  __int64 v35; // rax
  __int64 v36; // rsi
  int v37; // ecx

  v6 = *((_QWORD *)this + 15);
  v8 = *((char **)this + 14);
  v9 = 32 * v6;
  if ( &v8[32 * v6] == v8 )
    goto LABEL_7;
  if ( v9 >> 5 )
  {
    _BitScanReverse64(&v10, v9 >> 5);
    sub_3420E0(*((_QWORD *)this + 14), (unsigned __int64)&v8[v9], 2LL * (int)v10, a4, a5, a6);
    if ( v9 > 512 )
    {
      v11 = (__int64 *)(v8 + 512);
      sub_33EC60(v8, v8 + 512);
      do
      {
        v12 = v11;
        v11 += 4;
        sub_33EBE0(v12);
      }
      while ( &v8[v9] != (char *)v11 );
      v6 = *((_QWORD *)this + 15);
      goto LABEL_7;
    }
  }
  else
  {
    sub_3420E0(*((_QWORD *)this + 14), (unsigned __int64)&v8[v9], -2, a4, a5, a6);
  }
  sub_33EC60(v8, &v8[v9]);
  v6 = *((_QWORD *)this + 15);
LABEL_7:
  *((_DWORD *)this + 44) = 4;
  *((_QWORD *)this + 21) = 1;
  if ( !v6 )
  {
    v13 = *((_QWORD *)this + 23);
    result = sub_341530(this, 1);
    if ( v13 == -1 )
      return result;
    goto LABEL_9;
  }
  v15 = *((unsigned __int64 **)this + 14);
  v16 = *((_DWORD **)this + 4);
  v17 = 4;
  v18 = &v15[4 * v6];
  do
  {
    *((_DWORD *)this + 44) = --v17;
    if ( v15 == v18 )
      goto LABEL_50;
LABEL_13:
    v19 = v15;
    v20 = 0;
    do
    {
      if ( *((_BYTE *)v19 + 24) )
        v20 += v17;
      v19 += 4;
    }
    while ( v19 != v18 );
    if ( *((_BYTE *)this + 345) )
      goto LABEL_18;
LABEL_51:
    v21 = v16[7] + 1 - v16[5];
LABEL_19:
    ;
  }
  while ( v20 >= v21 && v17 );
  *((_QWORD *)this + 21) = 1;
  v22 = 64;
  while ( v15 == v18 )
  {
    v33 = 1;
    v25 = 0;
LABEL_36:
    if ( *((_BYTE *)this + 345) )
      v34 = v16[8] + 1 - v16[6];
    else
      v34 = v16[7] + 1 - v16[5];
    v31 = v34 < v25;
    v35 = *((_QWORD *)this + 21);
    if ( !v31 && v33 )
      goto LABEL_47;
    v36 = 2 * v35;
    if ( !(2 * v35) )
      goto LABEL_47;
    *((_QWORD *)this + 21) = v36;
    if ( !--v22 )
      goto LABEL_42;
  }
  v23 = v15;
  v24 = 0;
  v25 = 0;
  do
  {
    while ( 1 )
    {
      v27 = ~v25;
      if ( *((_BYTE *)v23 + 24) )
      {
        v26 = *((int *)this + 44);
        v25 += v26;
        if ( v27 < v26 )
          v25 = -1;
        goto LABEL_26;
      }
      v28 = *((_QWORD *)this + 21);
      if ( __CFADD__(v28, v23[1] - *v23) )
        v29 = -2;
      else
        v29 = v28 + v23[1] - *v23 - 1;
      v30 = v29 / v28;
      v25 += v30;
      if ( v27 < v30 )
        v25 = -1;
      v31 = __CFADD__(v24, v30);
      v32 = v24 + v30;
      if ( !v31 )
        break;
      v24 = -1;
LABEL_26:
      v23 += 4;
      if ( v18 == v23 )
        goto LABEL_34;
    }
    v23 += 4;
    v24 = v32;
  }
  while ( v18 != v23 );
LABEL_34:
  if ( v25 != v6 )
  {
    v33 = v25 >= v24;
    goto LABEL_36;
  }
  v35 = *((_QWORD *)this + 21);
LABEL_47:
  v36 = v35;
  if ( !v35 )
  {
    v37 = *((_DWORD *)this + 44);
    if ( v37 > 0 )
    {
      v17 = v37 - 1;
      *((_DWORD *)this + 44) = v17;
      if ( v15 == v18 )
      {
LABEL_50:
        v20 = 0;
        if ( !*((_BYTE *)this + 345) )
          goto LABEL_51;
LABEL_18:
        v21 = v16[8] + 1 - v16[6];
        goto LABEL_19;
      }
      goto LABEL_13;
    }
  }
LABEL_42:
  v13 = *v15;
  result = sub_341530(this, v36);
  if ( v13 != -1 )
  {
LABEL_9:
    if ( *((_QWORD *)this + 21) )
      return sub_33FA70(this, v13);
  }
  return result;
}
