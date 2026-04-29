size_t __fastcall sub_7640(size_t *a1, const char *a2)
{
  int v2; // r15d
  const char *v3; // r12
  size_t result; // rax
  int v6; // ebp
  __int64 v7; // rdx
  char v8; // cl
  int v9; // r14d
  char *v10; // r13
  const char *v11; // r8
  unsigned __int64 v12; // rdx
  __int64 v13; // r9
  __int64 v14; // rsi
  size_t v15; // r12
  char v16; // bp
  __int64 v17; // rax
  __int64 v18; // r13
  unsigned __int64 v19; // r12
  size_t v20; // rsi
  size_t v21; // rbp
  __int64 v23; // rax
  char v24; // di
  unsigned __int64 v25; // [rsp+8h] [rbp-50h]
  const char *v26; // [rsp+10h] [rbp-48h]
  __int64 v27; // [rsp+18h] [rbp-40h]

  v2 = 0;
  v3 = a2;
  result = strlen(a2);
  if ( result > 1 )
  {
    while ( 1 )
    {
      v7 = v2;
      v8 = a2[v2];
      if ( v8 != 91 )
        break;
      --result;
      v6 = v2 + 1;
      if ( result == 1 )
      {
        v24 = a2[v6];
        goto LABEL_25;
      }
      ++v2;
    }
    v9 = v2 - 1;
    v10 = (char *)&a2[v2];
    if ( v8 != 76 || v10[result - 1] != 59 )
      goto LABEL_7;
    result -= 2LL;
    LODWORD(v7) = v2 + 1;
    goto LABEL_26;
  }
  if ( result == 1 )
  {
    v24 = *a2;
    v2 = -1;
    v6 = 0;
LABEL_25:
    v9 = v2;
    v2 = v6;
    v3 = sub_5670(v24);
    result = strlen(v3);
    LODWORD(v7) = 0;
LABEL_26:
    if ( result )
    {
      v7 = (int)v7;
      v10 = (char *)&v3[(int)v7];
LABEL_7:
      v11 = &v3[v7 + result];
      do
      {
        v16 = *v10;
        v15 = a1[1];
        if ( *v10 == 47 )
          v16 = 46;
        if ( v15 )
        {
          v12 = v15 + 1;
          v13 = a1[1];
          v14 = *a1;
          --v15;
          if ( a1[2] < v12 )
            goto LABEL_14;
        }
        else
        {
          v14 = *a1;
          v13 = 1;
          v12 = 2;
          if ( a1[2] < 2 )
          {
LABEL_14:
            v27 = v13;
            v26 = v11;
            v25 = v12;
            v17 = qvector_reserve(a1, v14, v12, 1);
            v13 = v27;
            v11 = v26;
            *a1 = v17;
            v12 = v25;
            v14 = v17;
          }
        }
        a1[1] = v12;
        ++v10;
        *(_BYTE *)(v14 + v15) = v16;
        result = *a1;
        *(_BYTE *)(*a1 + v13) = 0;
      }
      while ( v11 != v10 );
    }
    if ( v2 <= 0 )
      return result;
    do
    {
      v21 = a1[1];
      if ( v21 )
      {
        v18 = v21 + 1;
        v19 = v21 + 2;
        v20 = *a1;
        --v21;
        if ( a1[2] < v19 )
          goto LABEL_21;
      }
      else
      {
        v20 = *a1;
        v19 = 3;
        v18 = 2;
        if ( a1[2] < 3 )
        {
LABEL_21:
          v23 = qvector_reserve(a1, v20, v19, 1);
          *a1 = v23;
          v20 = v23;
        }
      }
      a1[1] = v19;
      result = 23899;
      *(_BYTE *)(v20 + v18) = 0;
      *(_WORD *)(*a1 + v21) = 23899;
    }
    while ( v9-- != 0 );
  }
  return result;
}
