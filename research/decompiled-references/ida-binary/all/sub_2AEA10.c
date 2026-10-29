__int64 __fastcall sub_2AEA10(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v4; // r13
  __int64 v5; // r12
  __int64 v6; // rbp
  __int64 i; // rbx
  const char *v8; // rsi
  const char *v9; // rdi
  __int64 v10; // rax

  result = 0;
  v4 = a2[1];
  if ( v4 == a3[1] )
  {
    if ( !v4 )
      return 1;
    v5 = 0;
    v6 = *a2 + 8LL;
    for ( i = *a3 + 8LL; ; i += 272 )
    {
      if ( *(_DWORD *)(v6 + 28) != *(_DWORD *)(i + 28) )
        return 0;
      v10 = *(_QWORD *)(v6 + 8);
      if ( *(_QWORD *)(i + 8) )
      {
        v8 = *(const char **)i;
        v9 = &s1;
        if ( !v10 )
          goto LABEL_6;
      }
      else
      {
        v8 = &s1;
        if ( !v10 )
          goto LABEL_7;
      }
      v9 = *(const char **)v6;
LABEL_6:
      if ( strcmp(v9, v8) )
        return 0;
LABEL_7:
      ++v5;
      v6 += 272;
      if ( v4 == v5 )
        return 1;
    }
  }
  return result;
}
