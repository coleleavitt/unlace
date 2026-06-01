/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_456050
// Address: 0x0000000000456050

//----- (0000000000456050) ----------------------------------------------------
__int64 __fastcall sub_456050(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v3; // r13
  __int64 v4; // rbp
  __int64 v5; // rbx
  __int64 v6; // r12
  __int64 v7; // rax
  const char *v8; // rsi
  __int64 v9; // rax
  const char *v10; // rsi
  const char *v11; // rdi

  result = 0;
  v3 = *(_QWORD *)(a1 + 464);
  if ( v3 == a2[1] )
  {
    if ( !v3 )
      return 1;
    v4 = *(_QWORD *)(a1 + 456);
    v5 = *a2;
    v6 = 0;
    while ( 1 )
    {
      if ( *(_QWORD *)v4 != *(_QWORD *)v5 || *(_QWORD *)(v4 + 8) != *(_QWORD *)(v5 + 8) )
        return 0;
      v7 = *(_QWORD *)(v4 + 24);
      if ( *(_QWORD *)(v5 + 24) )
      {
        v8 = *(const char **)(v5 + 16);
        if ( !v7 )
        {
          if ( strcmp(s1, v8) )
            return 0;
          goto LABEL_11;
        }
      }
      else
      {
        v8 = s1;
        if ( !v7 )
          goto LABEL_11;
      }
      if ( strcmp(*(const char **)(v4 + 16), v8) )
        return 0;
LABEL_11:
      v9 = *(_QWORD *)(v4 + 48);
      if ( *(_QWORD *)(v5 + 48) )
      {
        v10 = *(const char **)(v5 + 40);
        v11 = s1;
        if ( !v9 )
          goto LABEL_14;
      }
      else
      {
        v10 = s1;
        if ( !v9 )
          goto LABEL_15;
      }
      v11 = *(const char **)(v4 + 40);
LABEL_14:
      if ( strcmp(v11, v10) )
        return 0;
LABEL_15:
      if ( *(_QWORD *)(v4 + 64) != *(_QWORD *)(v5 + 64) || *(_WORD *)(v4 + 72) != *(_WORD *)(v5 + 72) )
        return 0;
      ++v6;
      v4 += 80;
      v5 += 80;
      if ( v3 == v6 )
        return 1;
    }
  }
  return result;
}
