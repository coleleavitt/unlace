size_t __fastcall sub_20D1A10(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // rsi
  char *v6; // rax
  size_t v7; // rdi
  size_t v8; // rsi
  char *v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rax
  size_t result; // rax
  char *v13; // rsi
  char *v14; // r13
  size_t v15; // r12
  size_t v16; // rsi
  char *v17; // rdi
  unsigned __int64 v18; // rax
  size_t v19; // rsi

  v4 = a2[2];
  v5 = a2[3];
  v6 = (char *)a2[1];
  if ( v4 + 5 > v5 )
  {
    v7 = v4 + 997;
    v8 = 2 * v5;
    if ( v7 <= v8 )
    {
      a2[3] = v8;
    }
    else
    {
      a2[3] = v7;
      v8 = v7;
    }
    v6 = (char *)realloc(v6, v8);
    a2[1] = v6;
    if ( !v6 )
LABEL_24:
      abort();
    v4 = a2[2];
  }
  v9 = &v6[v4];
  *(_DWORD *)v9 = 979661939;
  v9[4] = 58;
  v10 = a2[2] + 5LL;
  v11 = *(unsigned int *)(a1 + 12);
  a2[2] = v10;
  switch ( v11 )
  {
    case 0LL:
      v14 = (char *)"allocator";
      result = j__strlen("allocator");
      v15 = result;
      if ( result )
        goto LABEL_13;
      return result;
    case 1LL:
      v14 = "basic_string";
      result = j__strlen("basic_string");
      v15 = result;
      goto LABEL_9;
    case 2LL:
      result = j__strlen("basic_string");
      v13 = "basic_string";
      goto LABEL_8;
    case 3LL:
      result = j__strlen("basic_istream");
      v13 = "basic_istream";
      goto LABEL_8;
    case 4LL:
      result = j__strlen("basic_ostream");
      v13 = "basic_ostream";
      goto LABEL_8;
    case 5LL:
      result = j__strlen("basic_iostream");
      v13 = "basic_iostream";
LABEL_8:
      v14 = v13 + 6;
      v15 = result - 6;
LABEL_9:
      if ( !v15 )
        return result;
LABEL_13:
      v16 = a2[3];
      v17 = (char *)a2[1];
      if ( v15 + v10 <= v16 )
        goto LABEL_18;
      v18 = v15 + v10 + 992;
      v19 = 2 * v16;
      if ( v18 > v19 )
      {
        a2[3] = v18;
        v19 = v15 + v10 + 992;
      }
      else
      {
        a2[3] = v19;
      }
      v17 = (char *)realloc(v17, v19);
      a2[1] = v17;
      if ( !v17 )
        goto LABEL_24;
      v10 = a2[2];
LABEL_18:
      result = (size_t)memcpy(&v17[v10], v14, v15);
      a2[2] += v15;
      return result;
  }
}
