bool __fastcall sub_418280(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // r12
  const char *v7; // rsi
  const char *v8; // rdi

  v2 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)(v2 + 304);
  v4 = v3 + 24LL * *(_QWORD *)(v2 + 312);
  if ( v3 == v4 )
    return 0;
  v5 = *(_QWORD *)(a2 + 8);
  while ( 1 )
  {
    if ( *(_QWORD *)(v3 + 8) )
    {
      v7 = *(const char **)v3;
      v8 = &s1;
      if ( !v5 )
        goto LABEL_4;
      goto LABEL_9;
    }
    if ( !v5 )
      return v3 != v4;
    v7 = &s1;
LABEL_9:
    v8 = *(const char **)a2;
LABEL_4:
    if ( !strcmp(v8, v7) )
      return v3 != v4;
    v3 += 24;
    if ( v4 == v3 )
      return 0;
  }
}
