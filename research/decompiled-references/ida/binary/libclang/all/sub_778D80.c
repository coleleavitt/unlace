__int64 __fastcall sub_778D80(__int64 a1, int a2)
{
  int v2; // ebp
  __int64 v3; // rax
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  char v7; // al
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v13; // [rsp+8h] [rbp-20h]

  if ( !a2 )
  {
    if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
      goto LABEL_22;
    v3 = sub_79A2B0(a1);
    v4 = *(_QWORD *)v3;
    v5 = *(_QWORD *)v3 + 8LL * *(unsigned int *)(v3 + 8);
    if ( v4 >= v5 )
    {
      if ( v4 == v5 )
        goto LABEL_12;
      while ( *(_WORD *)(*(_QWORD *)v5 + 32LL) != 375 )
      {
        v5 += 8LL;
        if ( v4 == v5 )
          goto LABEL_12;
      }
      v6 = v4;
    }
    else
    {
      v6 = v4;
      while ( *(_WORD *)(*(_QWORD *)v6 + 32LL) != 375 )
      {
        v6 += 8LL;
        if ( v5 == v6 )
          goto LABEL_12;
      }
    }
    if ( v6 != v5 )
    {
      while ( *(_WORD *)(*(_QWORD *)v4 + 32LL) != 375 )
        v4 += 8LL;
      v2 = *((_DWORD *)&qword_3C91558 + *(unsigned int *)(*(_QWORD *)v4 + 36LL));
      v7 = 1;
      goto LABEL_23;
    }
  }
LABEL_12:
  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    goto LABEL_22;
  v8 = sub_79A2B0(a1);
  v9 = *(_QWORD *)v8;
  v10 = *(_QWORD *)v8 + 8LL * *(unsigned int *)(v8 + 8);
  if ( v9 >= v10 )
  {
    if ( v9 == v10 )
      goto LABEL_22;
    while ( *(_WORD *)(*(_QWORD *)v10 + 32LL) != 386 )
    {
      v10 += 8LL;
      if ( v9 == v10 )
        goto LABEL_22;
    }
    v11 = v9;
  }
  else
  {
    v11 = v9;
    while ( *(_WORD *)(*(_QWORD *)v11 + 32LL) != 386 )
    {
      v11 += 8LL;
      if ( v10 == v11 )
        goto LABEL_22;
    }
  }
  if ( v11 == v10 )
  {
LABEL_22:
    v7 = 0;
    goto LABEL_23;
  }
  while ( *(_WORD *)(*(_QWORD *)v9 + 32LL) != 386 )
    v9 += 8LL;
  v2 = *((_DWORD *)&qword_3C91558 + *(unsigned int *)(*(_QWORD *)v9 + 36LL));
  v7 = 1;
LABEL_23:
  LODWORD(v13) = v2;
  BYTE4(v13) = v7;
  return v13;
}

