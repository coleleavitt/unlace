size_t __fastcall sub_3F1AB0(size_t *a1, const char *a2)
{
  const char *v2; // r12
  size_t result; // rax
  unsigned __int64 v5; // r14
  __int64 v6; // r15
  size_t v7; // rsi
  size_t v8; // rbp
  char v9; // r13
  __int64 v10; // rax
  char *v11; // rbp
  int v12; // r14d
  unsigned int v13; // edi
  size_t v14; // rbp
  unsigned __int64 v15; // r13
  __int64 v16; // r14
  __int64 v17; // rsi
  size_t v18; // rbp
  __int64 v19; // r14
  unsigned __int64 v20; // r13
  __int64 v21; // rsi
  size_t v22; // rbp
  __int64 v23; // r14
  unsigned __int64 v24; // r13
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax

  v2 = a2;
  result = strlen(a2);
  if ( a1[2] < result )
  {
    result = qvector_reserve(a1, *a1, result, 1);
    *a1 = result;
  }
LABEL_5:
  while ( 1 )
  {
    v9 = *v2;
    if ( !*v2 )
      return result;
    if ( v9 == 1 && v2[1] == 40 )
    {
      v11 = (char *)(v2 + 2);
      v12 = 8;
      while ( 1 )
      {
        v13 = *v11++;
        if ( v13 > 0x7F || !isxdigit(v13) )
          break;
        if ( !--v12 )
        {
          v14 = a1[1];
          if ( v14 )
          {
            v16 = v14 + 1;
            v15 = v14 + 2;
            --v14;
          }
          else
          {
            v15 = 3;
            v16 = 2;
          }
          v17 = *a1;
          if ( a1[2] < v15 )
          {
            v26 = qvector_reserve(a1, v17, v15, 1);
            *a1 = v26;
            v17 = v26;
          }
          a1[1] = v15;
          *(_BYTE *)(v17 + v16) = 0;
          *(_WORD *)(*a1 + v14) = *(_WORD *)v2;
          v18 = a1[1];
          if ( v18 )
          {
            v19 = v18 + 7;
            v20 = v18 + 8;
            --v18;
          }
          else
          {
            v20 = 9;
            v19 = 8;
          }
          v21 = *a1;
          if ( a1[2] < v20 )
          {
            v28 = qvector_reserve(a1, v21, v20, 1);
            *a1 = v28;
            v21 = v28;
          }
          a1[1] = v20;
          *(_BYTE *)(v21 + v19) = 0;
          *(_QWORD *)(*a1 + v18) = 0x3030303030303030LL;
          v22 = a1[1];
          if ( v22 )
          {
            v23 = v22 + 7;
            v24 = v22 + 8;
            --v22;
          }
          else
          {
            v24 = 9;
            v23 = 8;
          }
          v25 = *a1;
          if ( a1[2] < v24 )
          {
            v27 = qvector_reserve(a1, v25, v24, 1);
            *a1 = v27;
            v25 = v27;
          }
          a1[1] = v24;
          v2 += 10;
          *(_BYTE *)(v25 + v23) = 0;
          result = *a1;
          *(_QWORD *)(*a1 + v22) = *((_QWORD *)v2 - 1);
          goto LABEL_5;
        }
      }
    }
    v8 = a1[1];
    ++v2;
    if ( v8 )
    {
      v5 = v8 + 1;
      v6 = a1[1];
      v7 = *a1;
      --v8;
      if ( a1[2] >= v5 )
        goto LABEL_4;
    }
    else
    {
      v7 = *a1;
      v6 = 1;
      v5 = 2;
      if ( a1[2] >= 2 )
        goto LABEL_4;
    }
    v10 = qvector_reserve(a1, v7, v5, 1);
    *a1 = v10;
    v7 = v10;
LABEL_4:
    a1[1] = v5;
    *(_BYTE *)(v7 + v8) = v9;
    result = *a1;
    *(_BYTE *)(*a1 + v6) = 0;
  }
}
