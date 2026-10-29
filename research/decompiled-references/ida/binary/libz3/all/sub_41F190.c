void __fastcall sub_41F190(char *dest, char *a2, char *a3, __int64 a4, __int64 a5, char *a6)
{
  char *v6; // r13
  char *v7; // r12
  char *v8; // rbp
  char *v9; // rbx
  size_t v10; // r15
  char *v11; // r15
  __int64 v12; // rax
  __int64 v13; // rax
  size_t v14; // r14
  char *v15; // r15
  char *v16; // rbx
  char *v17; // r15
  signed __int64 v18; // rdx
  char *v19; // rsi
  char *v20; // rdi
  __int64 v21; // rax
  _BYTE v22[57]; // [rsp+Fh] [rbp-39h] BYREF

  v6 = dest;
  v7 = a6;
  v8 = a3;
  v9 = a2;
  if ( a4 > a5 )
  {
    v14 = a3 - a2;
    if ( a3 - a2 <= 8 )
    {
      if ( a3 - a2 == 8 )
      {
        v21 = *(_QWORD *)a2;
        v15 = a6 + 8;
        *(_QWORD *)a6 = *(_QWORD *)a2;
        if ( a2 == dest )
        {
          *((_QWORD *)a3 - 1) = v21;
          return;
        }
      }
      else
      {
        v15 = &a6[v14];
        if ( a2 == dest )
          return;
      }
    }
    else
    {
      v15 = &a6[v14];
      memmove(a6, a2, a3 - a2);
      if ( a2 == dest )
      {
        memmove(a2, v7, v14);
        return;
      }
    }
    if ( v7 == v15 )
      return;
    v16 = a2 - 8;
    v17 = v15 - 8;
    while ( 1 )
    {
      if ( (unsigned __int8)sub_422720(v22, *(_QWORD *)v17, *(_QWORD *)v16) )
      {
        *((_QWORD *)v8 - 1) = *(_QWORD *)v16;
        if ( dest == v16 )
        {
          v18 = v17 + 8 - v7;
          if ( v18 <= 8 )
          {
            if ( v18 == 8 )
              *((_QWORD *)v8 - 2) = *(_QWORD *)v7;
          }
          else
          {
            v20 = &v8[-v18 - 8];
            v19 = v7;
LABEL_25:
            memmove(v20, v19, v18);
          }
          return;
        }
        v16 -= 8;
      }
      else
      {
        *((_QWORD *)v8 - 1) = *(_QWORD *)v17;
        if ( v7 == v17 )
          return;
        v17 -= 8;
      }
      v8 -= 8;
    }
  }
  v10 = a2 - dest;
  if ( a2 - dest <= 8 )
  {
    if ( a2 - dest == 8 )
      *(_QWORD *)a6 = *(_QWORD *)dest;
  }
  else
  {
    memmove(a6, dest, v10);
  }
  v11 = &v7[v10];
  if ( a2 != v8 && v7 != v11 )
  {
    do
    {
      if ( (unsigned __int8)sub_422720(v22, *(_QWORD *)v9, *(_QWORD *)v7) )
      {
        v12 = *(_QWORD *)v9;
        v6 += 8;
        v9 += 8;
        *((_QWORD *)v6 - 1) = v12;
        if ( v11 == v7 )
          return;
      }
      else
      {
        v13 = *(_QWORD *)v7;
        v7 += 8;
        v6 += 8;
        *((_QWORD *)v6 - 1) = v13;
        if ( v11 == v7 )
          return;
      }
    }
    while ( v8 != v9 );
  }
  if ( v11 != v7 )
  {
    v18 = v11 - v7;
    if ( v11 - v7 > 8 )
    {
      v19 = v7;
      v20 = v6;
      goto LABEL_25;
    }
    if ( v11 - v7 == 8 )
      *(_QWORD *)v6 = *(_QWORD *)v7;
  }
}

