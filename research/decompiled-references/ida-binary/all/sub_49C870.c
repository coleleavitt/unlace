void __fastcall sub_49C870(char *dest, char *a2, char *a3, char *a4)
{
  size_t v5; // r12
  char *v6; // rbp
  char *v7; // rbx
  char *v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rax
  signed __int64 v11; // rdx

  v5 = a2 - dest;
  v6 = a2;
  v7 = dest;
  if ( a2 - dest <= 8 )
  {
    if ( a2 - dest == 8 )
      *(_QWORD *)a4 = *(_QWORD *)dest;
  }
  else
  {
    a4 = (char *)memmove(a4, dest, v5);
  }
  v8 = &a4[v5];
  if ( a2 != a3 && a4 != v8 )
  {
    do
    {
      v9 = *(_QWORD *)v6;
      v10 = *(_QWORD *)a4;
      if ( *(_QWORD *)v6 < *(_QWORD *)a4 )
      {
        v6 += 8;
        v7 += 8;
        *((_QWORD *)v7 - 1) = v9;
        if ( v8 == a4 )
          return;
      }
      else
      {
        a4 += 8;
        *(_QWORD *)v7 = v10;
        v7 += 8;
        if ( v8 == a4 )
          return;
      }
    }
    while ( a3 != v6 );
  }
  if ( v8 != a4 )
  {
    v11 = v8 - a4;
    if ( v11 <= 8 )
    {
      if ( v11 == 8 )
        *(_QWORD *)v7 = *(_QWORD *)a4;
    }
    else
    {
      memmove(v7, a4, v11);
    }
  }
}
