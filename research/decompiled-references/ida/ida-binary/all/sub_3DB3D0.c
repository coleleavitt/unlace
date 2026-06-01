void __fastcall sub_3DB3D0(char *dest, char *a2, char *a3, char *a4)
{
  size_t v5; // r12
  char *v6; // rbp
  char *v7; // rbx
  char *v8; // rdx
  int v9; // esi
  int v10; // eax
  signed __int64 v11; // rdx

  v5 = a2 - dest;
  v6 = a2;
  v7 = dest;
  if ( a2 - dest <= 4 )
  {
    if ( a2 - dest == 4 )
      *(_DWORD *)a4 = *(_DWORD *)dest;
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
      v9 = *(_DWORD *)v6;
      v10 = *(_DWORD *)a4;
      if ( *(_DWORD *)v6 < *(_DWORD *)a4 )
      {
        v6 += 4;
        v7 += 4;
        *((_DWORD *)v7 - 1) = v9;
        if ( v8 == a4 )
          return;
      }
      else
      {
        a4 += 4;
        *(_DWORD *)v7 = v10;
        v7 += 4;
        if ( v8 == a4 )
          return;
      }
    }
    while ( a3 != v6 );
  }
  if ( v8 != a4 )
  {
    v11 = v8 - a4;
    if ( v11 <= 4 )
    {
      if ( v11 == 4 )
        *(_DWORD *)v7 = *(_DWORD *)a4;
    }
    else
    {
      memmove(v7, a4, v11);
    }
  }
}
