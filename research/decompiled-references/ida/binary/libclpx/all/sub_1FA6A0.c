__int64 __fastcall sub_1FA6A0(const char **a1, int a2, char a3)
{
  const char **v4; // rbp
  const char **v5; // rbx
  int v6; // r14d
  __int64 v7; // r13
  const char *v8; // r12
  int v9; // edx
  bool v10; // zf
  int v11; // r14d
  unsigned int v12; // r12d
  char *v13; // r13
  char *v14; // r14
  char *v15; // rax
  int v17; // [rsp+4h] [rbp-54h]
  char v18[68]; // [rsp+14h] [rbp-44h] BYREF

  if ( a2 <= 0 )
  {
    return 0;
  }
  else
  {
    v4 = a1;
    v5 = a1;
    v6 = -1;
    v7 = (__int64)&a1[(unsigned int)(a2 - 1) + 1];
    do
    {
      while ( 1 )
      {
        v8 = *v5;
        if ( **v5 == a3
          && strlen(*v5) == 8
          && (unsigned __int8)(v8[1] - 48) <= 9u
          && (unsigned __int8)(v8[2] - 48) <= 9u
          && (unsigned __int8)(v8[3] - 48) <= 9u
          && (unsigned __int8)(v8[4] - 48) <= 9u
          && (unsigned __int8)(v8[5] - 48) <= 9u
          && (unsigned __int8)(v8[6] - 48) <= 9u )
        {
          v9 = v8[6]
             + 10 * (v8[5] + 10 * (v8[4] + 10 * (v8[3] + 10 * (v8[2] + 10 * (v8[1] - 48) - 48) - 48) - 48) - 48)
             - 48;
          if ( (unsigned __int8)(v8[7] - 48) <= 9u )
            break;
        }
        if ( (const char **)v7 == ++v5 )
          goto LABEL_16;
      }
      if ( v6 < v8[7] + 10 * v9 - 48 )
        v6 = v8[7] + 10 * v9 - 48;
      ++v5;
    }
    while ( (const char **)v7 != v5 );
LABEL_16:
    v10 = v6 == -1;
    v11 = v6 + 1;
    v12 = v11;
    if ( !v10 )
    {
      v13 = (char *)operator new[](v11);
      memset(v13, 0, v11);
      v17 = v11;
      v12 = 0;
      do
      {
        v14 = (char *)*v4;
        if ( **v4 == a3
          && strlen(*v4) == 8
          && (unsigned __int8)(v14[1] - 48) <= 9u
          && (unsigned __int8)(v14[2] - 48) <= 9u
          && (unsigned __int8)(v14[3] - 48) <= 9u
          && (unsigned __int8)(v14[4] - 48) <= 9u
          && (unsigned __int8)(v14[5] - 48) <= 9u
          && (unsigned __int8)(v14[6] - 48) <= 9u
          && (unsigned __int8)(v14[7] - 48) <= 9u )
        {
          v15 = &v13[1000000 * v14[1]
                   - 53333328
                   + 100000 * v14[2]
                   + 10000 * v14[3]
                   + 1000 * v14[4]
                   + 100 * v14[5]
                   + 10 * v14[6]
                   + v14[7]];
          if ( *v15 )
          {
            ++v12;
            free(v14);
            sprintf(v18, "%c%7.7d", (unsigned int)a3, v17++);
            *v4 = (const char *)CoinStrdup(v18);
          }
          else
          {
            *v15 = 1;
          }
        }
        ++v4;
      }
      while ( v5 != v4 );
      operator delete[](v13);
    }
  }
  return v12;
}

