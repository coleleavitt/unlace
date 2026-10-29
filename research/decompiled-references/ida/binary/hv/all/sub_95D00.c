__int64 __fastcall sub_95D00(__int64 *a1, FILE *a2)
{
  char *v2; // r14
  unsigned __int64 v4; // rbp
  char *v6; // rdi
  unsigned __int64 v7; // rax
  char *v8; // rsi
  __int64 v9; // r14
  __int64 v10; // rsi
  char *v11; // r15
  unsigned __int64 v12; // r8
  char *v13; // rax
  unsigned __int64 v14; // rdi
  char *v15; // rbp
  unsigned __int64 v17; // r15
  __int64 v18; // rax
  unsigned __int64 v19; // r14
  __int64 v20; // rax
  unsigned __int64 v21; // [rsp+8h] [rbp-40h]
  unsigned __int64 v22; // [rsp+8h] [rbp-40h]
  unsigned __int64 v23; // [rsp+8h] [rbp-40h]

  v2 = nullptr;
  v4 = 0;
  a1[1] = 0;
  while ( 1 )
  {
    if ( feof(a2) )
    {
      v19 = v4 | (unsigned __int64)v2;
      goto LABEL_26;
    }
    v6 = (char *)*a1;
    v7 = a1[1];
    v8 = (char *)*a1;
    if ( !v7 )
    {
      v9 = 1024;
      v17 = 1025;
      goto LABEL_19;
    }
    v9 = v7 + 1023;
    if ( v7 != -1023 )
    {
      v17 = v7 + 1024;
      if ( v7 >= v7 + 1024 )
      {
LABEL_22:
        a1[1] = v17;
        v8[v9] = 0;
        v10 = a1[1];
        v6 = (char *)*a1;
        goto LABEL_7;
      }
LABEL_19:
      if ( a1[2] < v17 )
      {
        v18 = sub_96080(a1, v8, v17, 1);
        *a1 = v18;
        v6 = (char *)v18;
        v7 = a1[1];
      }
      memset(&v6[v7], 0, v17 - v7);
      v8 = (char *)*a1;
      goto LABEL_22;
    }
    v10 = -1023;
    if ( v6 )
    {
      a1[1] = 0;
      j__free(v6);
      *a1 = 0;
      v10 = a1[1];
      v6 = nullptr;
      a1[2] = 0;
    }
LABEL_7:
    v2 = sub_95C50(&v6[v4], v10 - v4, a2);
    if ( !v2 )
      break;
    v11 = (char *)*a1;
    v4 += strlen((const char *)(*a1 + v4));
    if ( v4 )
    {
      v12 = v4 - 1;
      v13 = &v11[v4 - 1];
      if ( !(a1[1] | (v4 - 1)) )
        v13 = &byte_165961;
      if ( *v13 == 10 )
      {
        if ( v4 != 1 )
          goto LABEL_13;
LABEL_23:
        if ( v11 )
        {
          a1[1] = 0;
          v21 = v12;
          j__free(v11);
          *a1 = 0;
          v12 = v21;
          a1[2] = 0;
        }
        return v12;
      }
    }
  }
  v19 = v4;
LABEL_26:
  if ( v19 )
  {
    v12 = v4;
    v11 = (char *)*a1;
    if ( !v4 )
      goto LABEL_23;
LABEL_13:
    v14 = a1[1];
    v15 = (char *)(v12 + 1);
    if ( v14 < v12 + 1 )
    {
      if ( a1[2] < (unsigned __int64)v15 )
      {
        v23 = v12;
        v20 = sub_96080(a1, v11, v12 + 1, 1);
        v14 = a1[1];
        v12 = v23;
        *a1 = v20;
        v11 = (char *)v20;
      }
      v22 = v12;
      memset(&v11[v14], 0, (size_t)&v15[-v14]);
      a1[1] = (__int64)v15;
      v11 = (char *)*a1;
      v12 = v22;
    }
    else if ( v15 != (char *)v14 )
    {
      a1[1] = (__int64)v15;
    }
    v11[v12] = 0;
    return v12;
  }
  return -1;
}

