__int64 __fastcall sub_1F9E00(
        int a1,
        __int64 a2,
        const std::string *a3,
        const char *a4,
        const char *a5,
        const char *a6)
{
  size_t v10; // rax
  const char *v11; // rdx
  int v12; // ecx
  unsigned int v13; // eax
  __int64 result; // rax
  __int64 v15; // rsi
  size_t v16; // rax
  int v17; // ecx
  __int64 v18; // rcx
  int v19; // eax
  char *v20; // rcx
  unsigned int v21; // eax
  unsigned __int64 v22; // rsi
  unsigned int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // ecx
  __int64 v26; // rdi
  __int64 v27; // [rsp+8h] [rbp-50h] BYREF
  char dest[65]; // [rsp+17h] [rbp-41h] BYREF

  std::string::string((std::string *)&v27, a3);
  if ( (unsigned int)(a1 - 2) > 5 && a1 )
  {
    v10 = strlen(a4);
    std::string::append((std::string *)&v27, a4, v10);
    std::string::append((std::string *)&v27, " ", 1u);
    std::string::append((std::string *)&v27, a6, strlen(a6));
    std::string::append((std::string *)&v27, " ", 1u);
    v11 = a5;
    do
    {
      v12 = *(_DWORD *)v11;
      v11 += 4;
      v13 = ~v12 & (v12 - 16843009) & 0x80808080;
    }
    while ( !v13 );
    goto LABEL_5;
  }
  strcpy(dest, a4);
  if ( !dest[0] )
  {
    v18 = 0;
    goto LABEL_27;
  }
  if ( !dest[1] )
  {
    v18 = 1;
    goto LABEL_27;
  }
  if ( !dest[2] )
  {
    v18 = 2;
    goto LABEL_27;
  }
  if ( !dest[3] )
  {
    v18 = 3;
    goto LABEL_27;
  }
  if ( !dest[4] )
  {
    v18 = 4;
    goto LABEL_27;
  }
  if ( !dest[5] )
  {
    v18 = 5;
    goto LABEL_27;
  }
  if ( !dest[6] )
  {
    v18 = 6;
    goto LABEL_27;
  }
  if ( !dest[7] )
  {
    v18 = 7;
LABEL_27:
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
  v16 = strlen(dest);
  std::string::append((std::string *)&v27, dest, v16);
  std::string::append((std::string *)&v27, "  ", 2u);
  std::string::append((std::string *)&v27, a6, strlen(a6));
  std::string::append((std::string *)&v27, "  ", 2u);
  v11 = a5;
  do
  {
    v17 = *(_DWORD *)v11;
    v11 += 4;
    v13 = ~v17 & (v17 - 16843009) & 0x80808080;
  }
  while ( !v13 );
LABEL_5:
  if ( (v13 & 0x8080) == 0 )
  {
    LOBYTE(v13) = BYTE2(v13);
    v11 += 2;
  }
  std::string::append((std::string *)&v27, a5, &v11[-__CFADD__((_BYTE)v13, (_BYTE)v13) - 3] - a5);
  result = std::string::append((std::string *)&v27, "\n", 1u);
  v15 = v27;
  if ( a2 )
  {
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 24LL))(a2, v27);
    v15 = v27;
  }
  if ( (_UNKNOWN *)(v15 - 24) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v15 - 8), 0xFFFFFFFF);
    }
    else
    {
      result = *(unsigned int *)(v15 - 8);
      *(_DWORD *)(v15 - 8) = result - 1;
    }
    if ( (int)result <= 0 )
      return std::string::_Rep::_M_destroy();
  }
  return result;
}

