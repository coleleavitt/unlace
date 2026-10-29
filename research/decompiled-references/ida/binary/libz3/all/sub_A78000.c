void __fastcall sub_A78000(_QWORD *dest, _QWORD *a2, _QWORD *a3, __int64 a4, __int64 a5, char *a6)
{
  _QWORD *v6; // r12
  _QWORD *v7; // rbp
  _QWORD *v8; // rbx
  size_t v9; // r13
  char *v10; // rdx
  __int64 v11; // rax
  signed __int64 v12; // r13
  char *v13; // rdx
  _QWORD *v14; // rax
  char *v15; // rdx
  signed __int64 v16; // rdx
  signed __int64 v17; // rdx
  __int64 v18; // rax

  v6 = dest;
  v7 = a3;
  v8 = a2;
  if ( a4 > a5 )
  {
    v12 = (char *)a3 - (char *)a2;
    if ( (char *)a3 - (char *)a2 <= 8 )
    {
      if ( (char *)a3 - (char *)a2 == 8 )
      {
        v18 = *a2;
        v13 = a6 + 8;
        *(_QWORD *)a6 = *a2;
        if ( dest == a2 )
        {
          *(v7 - 1) = v18;
          return;
        }
      }
      else
      {
        v13 = &a6[v12];
        if ( dest == a2 )
          return;
      }
    }
    else
    {
      a6 = (char *)memmove(a6, a2, (char *)a3 - (char *)a2);
      v13 = &a6[v12];
      if ( dest == a2 )
      {
        v16 = v12;
        goto LABEL_24;
      }
    }
    if ( a6 == v13 )
      return;
    v14 = a2 - 1;
    v15 = v13 - 8;
    while ( 1 )
    {
      if ( *(_QWORD *)v15 < *v14 )
      {
        *(v7 - 1) = *v14;
        if ( dest == v14 )
        {
          v17 = v15 + 8 - a6;
          if ( v17 <= 8 )
          {
            if ( v17 == 8 )
              *(v7 - 2) = *(_QWORD *)a6;
          }
          else
          {
            memmove((char *)v7 - v17 - 8, a6, v17);
          }
          return;
        }
        --v14;
      }
      else
      {
        *(v7 - 1) = *(_QWORD *)v15;
        if ( a6 == v15 )
          return;
        v15 -= 8;
      }
      --v7;
    }
  }
  v9 = (char *)a2 - (char *)dest;
  if ( (char *)a2 - (char *)dest <= 8 )
  {
    if ( (char *)a2 - (char *)dest == 8 )
      *(_QWORD *)a6 = *dest;
  }
  else
  {
    a6 = (char *)memmove(a6, dest, v9);
  }
  v10 = &a6[v9];
  if ( a2 != v7 && a6 != v10 )
  {
    do
    {
      v11 = *(_QWORD *)a6;
      if ( *v8 < *(_QWORD *)a6 )
      {
        *v6++ = *v8++;
        if ( v10 == a6 )
          return;
      }
      else
      {
        a6 += 8;
        *v6++ = v11;
        if ( v10 == a6 )
          return;
      }
    }
    while ( v7 != v8 );
  }
  if ( v10 != a6 )
  {
    v16 = v10 - a6;
    if ( v16 <= 8 )
    {
      if ( v16 == 8 )
        *v6 = *(_QWORD *)a6;
      return;
    }
LABEL_24:
    memmove(v6, a6, v16);
  }
}

