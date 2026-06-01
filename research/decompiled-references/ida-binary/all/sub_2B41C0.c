void __fastcall sub_2B41C0(_QWORD *a1, char *a2)
{
  __int64 *v3; // rbp
  char v4; // al
  char *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rdi
  char *v8; // rbx
  __int64 v9; // r8
  char *v10; // r9
  char *v11; // r13
  __int64 v12; // rcx
  char *v13; // rdi
  char *v14; // rdx
  char v15; // al
  int v16; // r10d
  __int64 v17; // rdx

  v3 = a1 + 24;
  v4 = sub_47B6A0(QT::QCoreApplication::self, a2);
  if ( (v4 & 4) != 0 )
  {
    v5 = (char *)a1[37];
    if ( 20LL * a1[38] )
    {
      do
      {
        a2 = v5;
        v5 += 20;
        sub_2B2D00(v3, a2);
      }
      while ( v5 != (char *)(a1[37] + 20LL * a1[38]) );
    }
    goto LABEL_4;
  }
  if ( (v4 & 2) == 0 )
  {
    v7 = a1[24];
    if ( v7 )
    {
      a1[25] = 0;
      qfree(v7, a2);
      a1[24] = 0;
      a1[26] = 0;
    }
    sub_2B38C0((__int64)v3);
    v8 = (char *)a1[37];
    if ( 20LL * a1[38] )
    {
      do
      {
        a2 = v8;
        v8 += 20;
        sub_2B2D00(v3, a2);
      }
      while ( v8 != (char *)(a1[37] + 20LL * a1[38]) );
    }
    goto LABEL_4;
  }
  v9 = a1[38];
  v10 = (char *)a1[37];
  v11 = v10;
  if ( !(20 * v9) )
    goto LABEL_4;
  do
  {
    v12 = a1[25];
    v13 = (char *)a1[24];
    v14 = &v13[20 * v12];
    if ( v13 == v14 )
      goto LABEL_23;
    v15 = *v11;
    while ( 1 )
    {
      while ( v15 != *v13 )
      {
LABEL_22:
        v13 += 20;
        if ( v14 == v13 )
          goto LABEL_23;
      }
      if ( v15 )
        break;
      a2 = (char *)*((unsigned int *)v11 + 3);
      do
      {
        if ( (_DWORD)a2 != *((_DWORD *)v13 + 3) )
          goto LABEL_27;
        v16 = *((_DWORD *)v13 + 4);
        if ( *((_DWORD *)v11 + 4) >= v16 && *((_DWORD *)v11 + 4) <= v16 )
        {
          if ( *((_DWORD *)v11 + 2) == *((_DWORD *)v13 + 2) )
            goto LABEL_34;
LABEL_27:
          v13 += 20;
          if ( v14 == v13 )
            goto LABEL_23;
          continue;
        }
        v13 += 20;
        if ( v13 == v14 )
          goto LABEL_23;
      }
      while ( !*v13 );
      v13 += 20;
      if ( v14 == v13 )
        goto LABEL_23;
    }
    a2 = (char *)*((unsigned int *)v11 + 1);
    while ( (_DWORD)a2 != *((_DWORD *)v13 + 1) )
    {
      v13 += 20;
      if ( v14 == v13 )
        goto LABEL_23;
      if ( !*v13 )
        goto LABEL_22;
    }
LABEL_34:
    if ( v13 != v14 )
    {
      v17 = v14 - v13;
      a2 = v13 + 20;
      if ( (__int64)(0xCCCCCCCCCCCCCCCDLL * (v17 >> 2) - 2) >= 0 )
      {
        memmove(v13, a2, v17 - 20);
        v12 = a1[25];
        v10 = (char *)a1[37];
        v9 = a1[38];
      }
      a1[25] = v12 - 1;
    }
LABEL_23:
    v11 += 20;
  }
  while ( v11 != &v10[20 * v9] );
LABEL_4:
  sub_2B38C0((__int64)v3);
  v6 = a1[37];
  if ( v6 )
  {
    a1[38] = 0;
    qfree(v6, a2);
    a1[37] = 0;
    a1[39] = 0;
  }
}
