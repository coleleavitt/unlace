__int64 __fastcall fileCoinReadable(std::string *a1, const std::string *a2)
{
  struct _IO_FILE *v3; // rdi
  unsigned int v4; // ebx
  int i; // r12d
  char *v7; // rbx
  char v8; // bp
  const char *v9; // rsi
  char v10; // r14
  _BYTE *v11; // rax
  volatile signed __int32 *v12; // rdx
  int v13; // edx
  char *v14; // rax
  __int64 v15; // r14
  __int64 v16; // r15
  char *v17; // rax
  char *v18; // rdx
  unsigned __int64 v19; // rdx
  int v20; // edx
  int v21; // eax
  int v22; // edx
  int v23; // edx
  char *v24; // [rsp+10h] [rbp-58h] BYREF
  _BYTE *v25; // [rsp+18h] [rbp-50h] BYREF
  __int64 v26; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v27[8]; // [rsp+28h] [rbp-40h] BYREF

  if ( !(unsigned int)std::string::compare(a1, "stdin") )
    goto LABEL_2;
  for ( i = 1000; ; i *= 2 )
  {
    v7 = (char *)operator new[](i);
    if ( getcwd(v7, i) )
      break;
    operator delete[](v7);
  }
  v8 = *v7;
  if ( *v7 == 47 )
  {
    operator delete[](v7);
    v24 = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
    v9 = "./";
    if ( !(unsigned int)std::string::compare(a2, "") )
      goto LABEL_14;
  }
  else
  {
    v8 = 92;
    operator delete[](v7);
    v24 = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
    v9 = ".\\";
    if ( !(unsigned int)std::string::compare(a2, "") )
    {
LABEL_14:
      std::string::assign((std::string *)&v24, v9, 2u);
      goto LABEL_15;
    }
  }
  std::string::assign((std::string *)&v24, a2);
  v14 = v24;
  v15 = *((_QWORD *)v24 - 3);
  if ( *((int *)v24 - 2) >= 0 )
  {
    std::string::_M_leak_hard((std::string *)&v24);
    v14 = v24;
  }
  if ( v14[v15 - 1] != v8 )
  {
    v16 = *((_QWORD *)v14 - 3);
    if ( (unsigned __int64)(v16 + 1) > *((_QWORD *)v14 - 2) || *((int *)v14 - 2) > 0 )
    {
      std::string::reserve((std::string *)&v24, v16 + 1);
      v14 = v24;
    }
    v14[*((_QWORD *)v14 - 3)] = v8;
    v17 = v24;
    v18 = v24 - 24;
    if ( v24 - 24 != (char *)&std::string::_Rep::_S_empty_rep_storage )
    {
      *((_DWORD *)v24 - 2) = 0;
      *((_QWORD *)v17 - 3) = v16 + 1;
      v18[v16 + 25] = 0;
    }
  }
LABEL_15:
  v10 = fileAbsPath(a1);
  std::string::string((std::string *)&v25, a1);
  v11 = v25;
  v12 = (volatile signed __int32 *)v25;
  if ( v10 )
    goto LABEL_16;
  if ( *((int *)v25 - 2) >= 0 )
  {
    std::string::_M_leak_hard((std::string *)&v25);
    v11 = v25;
  }
  if ( *v11 == 126 )
  {
    if ( !getenv("HOME") )
    {
      std::string::assign(a1, (const std::string *)&v25);
      goto LABEL_34;
    }
    std::string::string();
    v19 = 1;
    if ( !*((_QWORD *)v25 - 3) )
      v19 = *((_QWORD *)v25 - 3);
    std::string::_M_mutate((std::string *)&v25, 0, v19, 0);
    std::string::assign((std::string *)&v25, (const std::string *)&v25);
    std::string::string((std::string *)v27, (const std::string *)&v26);
    std::string::append((std::string *)v27, (const std::string *)&v25);
    std::string::swap(a1, (std::string *)v27);
    if ( (_UNKNOWN *)(v27[0] - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        v23 = _InterlockedExchangeAdd((volatile signed __int32 *)(v27[0] - 8LL), 0xFFFFFFFF);
      }
      else
      {
        v23 = *(_DWORD *)(v27[0] - 8LL);
        *(_DWORD *)(v27[0] - 8LL) = v23 - 1;
      }
      if ( v23 <= 0 )
        std::string::_Rep::_M_destroy();
    }
    if ( (_UNKNOWN *)(v26 - 24) == &std::string::_Rep::_S_empty_rep_storage )
      goto LABEL_34;
    if ( &_pthread_key_create )
    {
      v20 = _InterlockedExchangeAdd((volatile signed __int32 *)(v26 - 8), 0xFFFFFFFF);
    }
    else
    {
      v20 = *(_DWORD *)(v26 - 8);
      *(_DWORD *)(v26 - 8) = v20 - 1;
    }
    if ( v20 > 0 )
      goto LABEL_34;
  }
  else
  {
    std::string::string((std::string *)v27, (const std::string *)&v24);
    std::string::append((std::string *)v27, (const std::string *)&v25);
    std::string::swap(a1, (std::string *)v27);
    if ( (_UNKNOWN *)(v27[0] - 24LL) == &std::string::_Rep::_S_empty_rep_storage )
      goto LABEL_34;
    if ( &_pthread_key_create )
    {
      v22 = _InterlockedExchangeAdd((volatile signed __int32 *)(v27[0] - 8LL), 0xFFFFFFFF);
    }
    else
    {
      v22 = *(_DWORD *)(v27[0] - 8LL);
      *(_DWORD *)(v27[0] - 8LL) = v22 - 1;
    }
    if ( v22 > 0 )
      goto LABEL_34;
  }
  std::string::_Rep::_M_destroy();
LABEL_34:
  v12 = (volatile signed __int32 *)v25;
LABEL_16:
  if ( v12 - 6 != (volatile signed __int32 *)&std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v21 = _InterlockedExchangeAdd(v12 - 2, 0xFFFFFFFF);
    }
    else
    {
      v21 = *((_DWORD *)v12 - 2);
      *((_DWORD *)v12 - 2) = v21 - 1;
    }
    if ( v21 <= 0 )
      std::string::_Rep::_M_destroy();
  }
  if ( v24 - 24 != (char *)&std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v13 = _InterlockedExchangeAdd((volatile signed __int32 *)v24 - 2, 0xFFFFFFFF);
    }
    else
    {
      v13 = *((_DWORD *)v24 - 2);
      *((_DWORD *)v24 - 2) = v13 - 1;
    }
    if ( v13 <= 0 )
      std::string::_Rep::_M_destroy();
  }
LABEL_2:
  if ( !strcmp(*(const char **)a1, "stdin") )
    v3 = stdin;
  else
    v3 = fopen(*(const char **)a1, "r");
  v4 = 0;
  if ( v3 )
  {
    v4 = 1;
    if ( stdin != v3 )
      fclose(v3);
  }
  return v4;
}

