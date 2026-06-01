__int64 __fastcall sub_1E9510(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r12
  const char *v5; // rsi
  const char *v6; // rdi
  int v7; // ebp
  __int64 v8; // rax

  v2 = *(_QWORD *)(a1 + 16);
  v3 = v2 + 80LL * *(_QWORD *)(a1 + 24);
  if ( v2 != v3 )
  {
    while ( 1 )
    {
      v7 = *(_DWORD *)(v2 + 72);
      if ( (v7 & 4) == 0 )
        goto LABEL_6;
      v8 = *(_QWORD *)(v2 + 40);
      if ( *(_QWORD *)(a2 + 40) )
        break;
      v5 = &s1;
      if ( v8 )
        goto LABEL_4;
LABEL_10:
      if ( ((*(_DWORD *)(a2 + 72) ^ v7) & 3) == 0 )
        return v2;
LABEL_6:
      v2 += 80;
      if ( v3 == v2 )
        return 0;
    }
    v5 = *(const char **)(a2 + 32);
    v6 = &s1;
    if ( v8 )
LABEL_4:
      v6 = *(const char **)(v2 + 32);
    if ( strcmp(v6, v5) )
      goto LABEL_6;
    goto LABEL_10;
  }
  return 0;
}
