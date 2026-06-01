void __fastcall sub_7F7BC0(
        unsigned int *dest,
        unsigned int *a2,
        unsigned int *a3,
        __int64 a4,
        __int64 a5,
        unsigned int *a6)
{
  unsigned int *v6; // r12
  unsigned int *v7; // rbp
  unsigned int *v8; // rbx
  size_t v9; // r13
  unsigned int *v10; // rdx
  unsigned int *v11; // rsi
  unsigned int *v12; // rdi
  unsigned int *v13; // rsi
  signed __int64 v14; // rdx
  signed __int64 v15; // r13
  unsigned int *v16; // r8
  unsigned int *v17; // r12
  unsigned int *v18; // r8
  unsigned int *v19; // rdi
  signed __int64 v20; // rdx

  v6 = a2;
  v7 = a3;
  v8 = dest;
  if ( a4 > a5 )
  {
    v15 = (char *)a3 - (char *)a2;
    if ( (char *)a3 - (char *)a2 <= 2192 )
    {
      if ( (char *)a3 - (char *)a2 == 2192 )
      {
        v16 = a6 + 548;
        qmemcpy(a6, a2, 0x890u);
        if ( dest == a2 )
        {
          qmemcpy(a3 - 548, a6, 0x890u);
          return;
        }
      }
      else
      {
        v16 = (unsigned int *)((char *)a6 + v15);
        if ( dest == a2 )
          return;
      }
    }
    else
    {
      a6 = (unsigned int *)memmove(a6, a2, (char *)a3 - (char *)a2);
      v16 = (unsigned int *)((char *)a6 + v15);
      if ( dest == a2 )
      {
        v14 = v15;
        goto LABEL_13;
      }
    }
    if ( a6 == v16 )
      return;
    v17 = a2 - 548;
    v18 = v16 - 548;
    while ( 1 )
    {
      v19 = v7 - 548;
      if ( v18[1] + ((unsigned __int64)*v18 << 32) < v17[1] + ((unsigned __int64)*v17 << 32) )
      {
        qmemcpy(v19, v17, 0x890u);
        if ( v8 == v17 )
        {
          v20 = (char *)(v18 + 548) - (char *)a6;
          if ( v20 <= 2192 )
          {
            if ( v20 == 2192 )
              qmemcpy(v7 - 1096, a6, 0x890u);
          }
          else
          {
            memmove((char *)v7 - v20 - 2192, a6, v20);
          }
          return;
        }
        v17 -= 548;
      }
      else
      {
        qmemcpy(v19, v18, 0x890u);
        if ( a6 == v18 )
          return;
        v18 -= 548;
      }
      v7 -= 548;
    }
  }
  v9 = (char *)a2 - (char *)dest;
  if ( (char *)a2 - (char *)dest <= 2192 )
  {
    if ( (char *)a2 - (char *)dest == 2192 )
      qmemcpy(a6, dest, 0x890u);
  }
  else
  {
    a6 = (unsigned int *)memmove(a6, dest, v9);
  }
  v10 = (unsigned int *)((char *)a6 + v9);
  if ( a2 != v7 && a6 != v10 )
  {
    do
    {
      v12 = v8;
      if ( v6[1] + ((unsigned __int64)*v6 << 32) < a6[1] + ((unsigned __int64)*a6 << 32) )
      {
        v11 = v6;
        v8 += 548;
        v6 += 548;
        qmemcpy(v12, v11, 0x890u);
        if ( a6 == v10 )
          break;
      }
      else
      {
        v13 = a6;
        a6 += 548;
        v8 += 548;
        qmemcpy(v12, v13, 0x890u);
        if ( a6 == v10 )
          break;
      }
    }
    while ( v7 != v6 );
  }
  if ( v10 != a6 )
  {
    v14 = (char *)v10 - (char *)a6;
    if ( v14 <= 2192 )
    {
      if ( v14 == 2192 )
        qmemcpy(v8, a6, 0x890u);
      return;
    }
LABEL_13:
    memmove(v8, a6, v14);
  }
}
