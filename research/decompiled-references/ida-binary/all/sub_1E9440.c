void __fastcall sub_1E9440(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbx
  __int64 v4; // r12
  const char *v6; // rsi
  const char *v7; // rdi
  __int64 v8; // rax

  if ( a2[2] <= 1u )
    return;
  v3 = *(_QWORD *)(a1 + 16);
  v4 = v3 + 80LL * *(_QWORD *)(a1 + 24);
  if ( !(80LL * *(_QWORD *)(a1 + 24)) )
    return;
  while ( 1 )
  {
    if ( a2 == (_QWORD *)v3 || (*(_BYTE *)(v3 + 72) & 4) == 0 )
      goto LABEL_6;
    v8 = *(_QWORD *)(v3 + 40);
    if ( a2[5] )
    {
      v6 = (const char *)a2[4];
      v7 = &s1;
      if ( !v8 )
        goto LABEL_5;
      goto LABEL_12;
    }
    if ( !v8 )
      break;
    v6 = &s1;
LABEL_12:
    v7 = *(const char **)(v3 + 32);
LABEL_5:
    if ( !strcmp(v7, v6) )
      break;
LABEL_6:
    v3 += 80;
    if ( v3 == v4 )
      return;
  }
  if ( v3 )
  {
    if ( *(_QWORD *)(v3 + 16) > 1u )
    {
      sub_1E88D0(v3, (const char *)&unk_5C2F25, 0);
      sub_459B60(a1);
    }
  }
}
