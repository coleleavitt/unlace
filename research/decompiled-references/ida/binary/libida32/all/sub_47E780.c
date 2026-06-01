__int64 __fastcall sub_47E780(__int64 *a1, const char **a2)
{
  __int64 v2; // rax
  const char *v3; // rbp
  __int64 v4; // rbx
  __int64 v5; // r13
  __int64 v6; // r12
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 result; // rax

  v2 = *a1;
  v3 = *a2;
  v4 = *(_QWORD *)(*a1 + 16);
  if ( !v4 )
    return 1;
  v5 = v2 + 8;
  v6 = v2 + 8;
  do
  {
    while ( 1 )
    {
      v7 = strcmp(*(const char **)(v4 + 32), v3);
      v8 = *(_QWORD *)(v4 + 16);
      v9 = *(_QWORD *)(v4 + 24);
      if ( v7 < 0 )
        break;
      v6 = v4;
      v4 = *(_QWORD *)(v4 + 16);
      if ( !v8 )
        goto LABEL_6;
    }
    v4 = *(_QWORD *)(v4 + 24);
  }
  while ( v9 );
LABEL_6:
  result = 1;
  if ( v5 != v6 )
    return (unsigned int)strcmp(v3, *(const char **)(v6 + 32)) >> 31;
  return result;
}

