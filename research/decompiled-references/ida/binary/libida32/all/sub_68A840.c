__int64 __fastcall sub_68A840(__int64 a1, const char *a2, size_t a3)
{
  __int64 result; // rax
  size_t v4; // rbx
  unsigned __int64 v5; // r12
  int v6; // r15d
  __int64 v7; // rax
  __int64 v8; // r13
  const char *v9; // r14
  __int64 v10; // r14

  if ( !a2 )
    return 0;
  result = 0;
  if ( *a2 )
  {
    v4 = a3;
    if ( a3 == -1 )
      v4 = strlen(a2);
    v5 = *(_QWORD *)(a1 + 344);
    if ( v5 )
    {
      v6 = 0;
      v7 = 0;
      v8 = *(_QWORD *)(a1 + 336);
      do
      {
        while ( 1 )
        {
          v10 = v8 + 24 * v7;
          if ( *(_QWORD *)(v10 + 8) )
            break;
          if ( strncmp(haystack, a2, v4 != 0) )
            goto LABEL_11;
          if ( !v4 )
            return 1;
          v9 = *(const char **)v10;
LABEL_10:
          if ( !v9[v4] )
            return 1;
LABEL_11:
          v7 = ++v6;
          if ( v6 >= v5 )
            return 0;
        }
        v9 = *(const char **)v10;
        if ( !strncmp(v9, a2, v4) )
          goto LABEL_10;
        v7 = ++v6;
      }
      while ( v6 < v5 );
    }
    return 0;
  }
  return result;
}

