__int64 __fastcall sub_4321A0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // r13
  const char *v6; // rsi
  const char *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // r12

  v2 = *a1;
  v3 = *a1 + 240 * a1[1];
  if ( v3 != *a1 )
  {
    v4 = *(_QWORD *)(a2 + 8);
    while ( 1 )
    {
      v8 = *(_QWORD *)(v2 + 8);
      v9 = v2;
      if ( !v4 )
        break;
      v6 = *(const char **)a2;
      v7 = &s1;
      if ( v8 )
        goto LABEL_9;
LABEL_4:
      if ( !strcmp(v7, v6) )
        return v9;
      v2 += 240;
      if ( v3 == v2 )
        return 0;
    }
    if ( !v8 )
      return v9;
    v6 = &s1;
LABEL_9:
    v7 = *(const char **)v2;
    goto LABEL_4;
  }
  return 0;
}
