__int64 __fastcall sub_442FF0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r12
  __int64 v4; // r14
  const char *v6; // rsi
  const char *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // r13

  v2 = *(_QWORD *)(a1 + 400);
  v3 = v2 + 88LL * *(_QWORD *)(a1 + 408);
  if ( v3 != v2 )
  {
    v4 = *(_QWORD *)(a2 + 8);
    while ( 1 )
    {
      v8 = *(_QWORD *)(v2 + 32);
      v9 = v2;
      if ( v4 )
        break;
      v6 = &s1;
      if ( v8 )
        goto LABEL_4;
LABEL_9:
      if ( *(_DWORD *)(v2 + 84) == *(_DWORD *)(a2 + 24) )
        return v9;
LABEL_6:
      v2 += 88;
      if ( v3 == v2 )
        return 0;
    }
    v6 = *(const char **)a2;
    v7 = &s1;
    if ( v8 )
LABEL_4:
      v7 = *(const char **)(v2 + 24);
    if ( strcmp(v7, v6) )
      goto LABEL_6;
    goto LABEL_9;
  }
  return 0;
}
