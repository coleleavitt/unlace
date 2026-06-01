__int64 __fastcall sub_1FA200(
        int a1,
        int a2,
        __int64 a3,
        const std::string *a4,
        const char *a5,
        const char *a6,
        char *a7)
{
  size_t v11; // rax
  const char *v12; // rbx
  __int64 result; // rax
  __int64 v14; // rsi
  size_t v15; // rax
  const char *v16; // rbx
  int v17; // r13d
  __int64 v18; // rcx
  int v19; // eax
  char *v20; // rcx
  unsigned int v21; // eax
  unsigned __int64 v22; // rsi
  unsigned int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // ecx
  __int64 v26; // rdi
  __int64 v27; // [rsp+18h] [rbp-50h] BYREF
  char dest[65]; // [rsp+27h] [rbp-41h] BYREF

  std::string::string((std::string *)&v27, a4);
  if ( (unsigned int)(a1 - 2) > 5 && a1 )
  {
    v11 = strlen(a5);
    std::string::append((std::string *)&v27, a5, v11);
    if ( a2 > 0 )
    {
      v12 = a7;
      do
      {
        std::string::append((std::string *)&v27, " ", 1u);
        std::string::append((std::string *)&v27, v12, strlen(v12));
        std::string::append((std::string *)&v27, " ", 1u);
        std::string::append((std::string *)&v27, a6, strlen(a6));
        v12 += 100;
        a6 += 24;
      }
      while ( &a7[100 * (a2 - 1) + 100] != v12 );
    }
    goto LABEL_6;
  }
  strcpy(dest, a5);
  if ( !dest[0] )
  {
    v18 = 0;
    goto LABEL_29;
  }
  if ( !dest[1] )
  {
    v18 = 1;
    goto LABEL_29;
  }
  if ( !dest[2] )
  {
    v18 = 2;
    goto LABEL_29;
  }
  if ( !dest[3] )
  {
    v18 = 3;
    goto LABEL_29;
  }
  if ( !dest[4] )
  {
    v18 = 4;
    goto LABEL_29;
  }
  if ( !dest[5] )
  {
    v18 = 5;
    goto LABEL_29;
  }
  if ( !dest[6] )
  {
    v18 = 6;
    goto LABEL_29;
  }
  if ( !dest[7] )
  {
    v18 = 7;
LABEL_29:
    v19 = 7 - v18;
    v20 = &dest[v18];
    v21 = v19 + 1;
    if ( v21 >= 8 )
    {
      *(_QWORD *)v20 = 0x2020202020202020LL;
      *(_QWORD *)&v20[v21 - 8] = 0x2020202020202020LL;
      v22 = (unsigned __int64)(v20 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v23 = ((_DWORD)v20 - v22 + v21) & 0xFFFFFFF8;
      if ( v23 >= 8 )
      {
        v24 = v23 & 0xFFFFFFF8;
        v25 = 0;
        do
        {
          v26 = v25;
          v25 += 8;
          *(_QWORD *)(v22 + v26) = 0x2020202020202020LL;
        }
        while ( v25 < v24 );
      }
    }
    else if ( (v21 & 4) != 0 )
    {
      *(_DWORD *)v20 = 538976288;
      *(_DWORD *)&v20[v21 - 4] = 538976288;
    }
    else if ( v21 )
    {
      *v20 = 32;
      if ( (v21 & 2) != 0 )
        *(_WORD *)&v20[v21 - 2] = 8224;
    }
  }
  dest[8] = 0;
  v15 = strlen(dest);
  std::string::append((std::string *)&v27, dest, v15);
  std::string::append((std::string *)&v27, "  ", 2u);
  if ( a2 > 0 )
  {
    v16 = a7;
    v17 = 0;
    do
    {
      std::string::append((std::string *)&v27, v16, strlen(v16));
      std::string::append((std::string *)&v27, "  ", 2u);
      std::string::append((std::string *)&v27, a6, strlen(a6));
      if ( a2 - 1 > v17 )
        std::string::append((std::string *)&v27, "   ", 3u);
      ++v17;
      v16 += 100;
      a6 += 24;
    }
    while ( a2 != v17 );
  }
LABEL_6:
  result = std::string::append((std::string *)&v27, "\n", 1u);
  v14 = v27;
  if ( a3 )
  {
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a3 + 24LL))(a3, v27);
    v14 = v27;
  }
  if ( (_UNKNOWN *)(v14 - 24) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v14 - 8), 0xFFFFFFFF);
    }
    else
    {
      result = *(unsigned int *)(v14 - 8);
      *(_DWORD *)(v14 - 8) = result - 1;
    }
    if ( (int)result <= 0 )
      return std::string::_Rep::_M_destroy();
  }
  return result;
}

