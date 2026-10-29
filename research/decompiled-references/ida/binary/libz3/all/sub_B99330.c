void __fastcall sub_B99330(_DWORD *a1, int *a2)
{
  _DWORD *v2; // rbx
  __int64 v3; // r8
  _DWORD *v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // eax
  _DWORD *v8; // rcx
  int v9; // eax

  if ( !a1 )
    return;
  v2 = a1;
  v3 = (unsigned int)*(a1 - 1);
  v4 = &a1[v3];
  v5 = (4 * v3) >> 2;
  v6 = (4 * v3) >> 4;
  if ( v6 )
  {
    v7 = *a2;
    v8 = &a1[4 * v6];
    while ( *a1 != v7 )
    {
      if ( v7 == a1[1] )
      {
        ++a1;
        goto LABEL_9;
      }
      if ( v7 == a1[2] )
      {
        a1 += 2;
        goto LABEL_9;
      }
      if ( v7 == a1[3] )
      {
        a1 += 3;
        goto LABEL_9;
      }
      a1 += 4;
      if ( a1 == v8 )
      {
        v5 = v4 - a1;
        goto LABEL_18;
      }
    }
    goto LABEL_9;
  }
LABEL_18:
  if ( v5 == 2 )
  {
    v9 = *a2;
LABEL_28:
    if ( v9 != *a1 )
    {
      ++a1;
      goto LABEL_22;
    }
    goto LABEL_9;
  }
  if ( v5 != 3 )
  {
    if ( v5 != 1 )
      return;
    v9 = *a2;
LABEL_22:
    if ( v9 != *a1 )
      return;
    goto LABEL_9;
  }
  v9 = *a2;
  if ( *a1 != *a2 )
  {
    ++a1;
    goto LABEL_28;
  }
LABEL_9:
  if ( v4 != a1 )
  {
    if ( v4 != a1 + 1 )
    {
      memmove(a1, a1 + 1, (char *)(v4 - 1) - (char *)a1);
      LODWORD(v3) = *(v2 - 1);
    }
    *(v2 - 1) = v3 - 1;
  }
}

