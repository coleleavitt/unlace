__int64 __fastcall sub_4462E0(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // rbx
  __int64 v4; // r12
  __int64 v6; // r13
  const char *v7; // rsi
  const char *v8; // rdi
  unsigned int v9; // eax
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  const char *v14; // rsi
  int v15; // eax
  bool v16; // sf
  int v18; // eax

  v2 = a1 + 8;
  v3 = *(_QWORD *)(a1 + 16);
  if ( !v3 )
    return v2;
  v4 = *(_QWORD *)(a2 + 8);
  v6 = a1 + 8;
  do
  {
    while ( 1 )
    {
      v13 = *(_QWORD *)(v3 + 40);
      if ( v4 )
      {
        v7 = *(const char **)a2;
        v8 = &s1;
        if ( !v13 )
          goto LABEL_5;
      }
      else
      {
        v7 = &s1;
        if ( !v13 )
        {
LABEL_6:
          LOBYTE(v10) = *(_DWORD *)(v3 + 56) < *(_DWORD *)(a2 + 24);
          goto LABEL_7;
        }
      }
      v8 = *(const char **)(v3 + 32);
LABEL_5:
      v9 = strcmp(v8, v7);
      if ( !v9 )
        goto LABEL_6;
      v10 = v9 >> 31;
LABEL_7:
      v11 = *(_QWORD *)(v3 + 16);
      v12 = *(_QWORD *)(v3 + 24);
      if ( (_BYTE)v10 )
        break;
      v6 = v3;
      v3 = *(_QWORD *)(v3 + 16);
      if ( !v11 )
        goto LABEL_13;
    }
    v3 = *(_QWORD *)(v3 + 24);
  }
  while ( v12 );
LABEL_13:
  if ( v2 != v6 )
  {
    if ( *(_QWORD *)(v6 + 40) )
    {
      v14 = *(const char **)(v6 + 32);
      if ( v4 )
      {
LABEL_16:
        v15 = strcmp(*(const char **)a2, v14);
        v16 = v15 < 0;
        if ( !v15 )
          goto LABEL_17;
      }
      else
      {
        v18 = strcmp(&s1, v14);
        v16 = v18 < 0;
        if ( !v18 )
          goto LABEL_17;
      }
      if ( !v16 )
        return v6;
    }
    else
    {
      v14 = &s1;
      if ( v4 )
        goto LABEL_16;
LABEL_17:
      if ( *(_DWORD *)(a2 + 24) >= *(_DWORD *)(v6 + 56) )
        return v6;
    }
  }
  return v2;
}
