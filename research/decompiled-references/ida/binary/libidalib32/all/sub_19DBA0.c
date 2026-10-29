_QWORD *__fastcall sub_19DBA0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r14
  _QWORD *v5; // r13
  __int64 v6; // rbp
  const char *v7; // rsi
  const char *v8; // rdi
  int v9; // eax
  int v10; // eax
  __int64 v11; // r15
  __int64 v12; // rax
  const char *v13; // rsi
  const char *v14; // rdi

  v2 = (_QWORD *)(a1 + 8);
  v5 = *(_QWORD **)(a1 + 16);
  if ( v5 )
  {
    v6 = *(_QWORD *)(a2 + 8);
    while ( 1 )
    {
      v11 = v5[5];
      if ( v11 )
      {
        v7 = (const char *)v5[4];
        if ( !v6 )
        {
          v8 = s1;
          v2 = v5;
          goto LABEL_5;
        }
      }
      else
      {
        if ( !v6 )
        {
          while ( 1 )
          {
            v2 = (_QWORD *)v5[3];
            if ( !v2 )
              break;
            v11 = v2[5];
            if ( v11 )
            {
              v7 = (const char *)v2[4];
              v8 = s1;
              goto LABEL_5;
            }
            v5 = (_QWORD *)v5[3];
          }
          if ( !*(_QWORD *)(a2 + 8) )
            return v5;
          v13 = *(const char **)a2;
          v14 = s1;
          v2 = v5;
          goto LABEL_21;
        }
        v7 = s1;
      }
      v8 = *(const char **)a2;
      v2 = v5;
LABEL_5:
      v9 = strcmp(v8, v7);
      v5 = (_QWORD *)v2[3];
      if ( v9 < 0 )
        v5 = (_QWORD *)v2[2];
      v10 = (v9 >> 31) & 1;
      if ( !v5 )
      {
        if ( (_BYTE)v10 )
          break;
        if ( *(_QWORD *)(a2 + 8) )
          goto LABEL_19;
LABEL_25:
        if ( v11 )
        {
          v13 = s1;
          goto LABEL_20;
        }
        return v2;
      }
    }
  }
  if ( v2 == *(_QWORD **)(a1 + 24) )
    return nullptr;
  v12 = std::_Rb_tree_decrement();
  v11 = *(_QWORD *)(v12 + 40);
  v2 = (_QWORD *)v12;
  if ( !*(_QWORD *)(a2 + 8) )
    goto LABEL_25;
LABEL_19:
  v13 = *(const char **)a2;
  if ( v11 )
LABEL_20:
    v14 = (const char *)v2[4];
  else
    v14 = s1;
LABEL_21:
  if ( strcmp(v14, v13) < 0 )
    return nullptr;
  return v2;
}

