const char *__fastcall CoinLpIO::insertHash(CoinLpIO *this, const char *a2, int a3)
{
  const char *v3; // r15
  char *v4; // rbp
  __int64 v5; // r12
  char *v6; // rax
  _DWORD *v7; // rbx
  __int64 v8; // r13
  int v9; // eax
  __int64 v10; // rsi
  int v11; // edx
  int v12; // edi
  __int64 v13; // r8
  int v14; // eax
  unsigned int v15; // ecx
  int v16; // edx
  int *v17; // r14
  __int64 v18; // rax
  _DWORD *v19; // rax
  const char **v20; // r12
  int v21; // ebx
  const char *result; // rax
  unsigned int v23; // esi
  __int64 v24; // rdx
  unsigned int v25; // ecx
  __int64 v26; // rdx
  const char *v27; // rcx
  char *v28; // rdx
  __int64 v29; // rcx
  char *v30; // rcx
  void *exception; // r12
  int v32; // [rsp+Ch] [rbp-206Ch]
  __int64 v33; // [rsp+20h] [rbp-2058h]
  __int64 v34; // [rsp+28h] [rbp-2050h]
  __int64 v35; // [rsp+30h] [rbp-2048h]
  __int64 v36; // [rsp+38h] [rbp-2040h]
  char v37[8248]; // [rsp+40h] [rbp-2038h] BYREF

  v3 = a2;
  v4 = (char *)this + 4 * a3;
  v5 = *((int *)v4 + 78);
  v32 = *((_DWORD *)v4 + 76);
  v6 = (char *)this + 8 * a3;
  v7 = *((_DWORD **)v6 + 40);
  v8 = *((_QWORD *)v6 + 36);
  v9 = strlen(a2);
  if ( v9 <= 0 )
  {
    v16 = 0;
  }
  else
  {
    v10 = 1;
    v11 = 262139;
    v12 = 0;
    v13 = (unsigned int)(v9 - 1) + 2LL;
    while ( 1 )
    {
      v14 = v3[v10 - 1];
      v15 = v10++;
      v12 += v11 * v14;
      if ( v10 == v13 )
        break;
      v11 = *((_DWORD *)qword_295B80 + v15 % 0x51);
    }
    v16 = (int)abs32(v12) % v32;
  }
  do
  {
    v17 = &v7[2 * v16];
    v18 = *v17;
    if ( (_DWORD)v18 == -1 )
    {
      *v17 = v5;
      goto LABEL_14;
    }
    if ( !strcmp(v3, *(const char **)(v8 + 8 * v18)) )
    {
      while ( 1 )
        ;
    }
    v16 = v17[1];
  }
  while ( v16 != -1 );
  do
  {
    if ( v32 == ++v16 )
    {
      strcpy(v37, "### ERROR: Hash table: too many names\n");
      exception = __cxa_allocate_exception(0x30u);
      std::string::string();
      std::string::string();
      std::string::string();
      std::string::string();
      CoinError::CoinError();
      if ( (_UNKNOWN *)(v33 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        sub_5C66A(v33 - 24);
      if ( (_UNKNOWN *)(v34 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        sub_5C66A(v34 - 24);
      if ( (_UNKNOWN *)(v35 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        sub_5C66A(v35 - 24);
      if ( (_UNKNOWN *)(v36 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        sub_5C66A(v36 - 24);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'CoinError, (void (*)(void *))CoinError::~CoinError);
    }
    v19 = v7;
    v7 += 2;
  }
  while ( *(v7 - 2) != -1 );
  v17[1] = v16;
  *v19 = v5;
LABEL_14:
  v20 = (const char **)(v8 + 8 * v5);
  v21 = strlen(v3);
  result = (const char *)malloc(v21 + 1);
  if ( v21 && v3 != result )
  {
    v23 = v21 >> 3;
    if ( v21 >> 3 <= 0 )
    {
      v30 = (char *)result;
LABEL_23:
      switch ( v21 % 8 )
      {
        case 1:
          goto LABEL_30;
        case 2:
          goto LABEL_29;
        case 3:
          goto LABEL_28;
        case 4:
          goto LABEL_27;
        case 5:
          goto LABEL_26;
        case 6:
          goto LABEL_25;
        case 7:
          v30[6] = v3[6];
LABEL_25:
          v30[5] = v3[5];
LABEL_26:
          v30[4] = v3[4];
LABEL_27:
          v30[3] = v3[3];
LABEL_28:
          v30[2] = v3[2];
LABEL_29:
          v30[1] = v3[1];
LABEL_30:
          *v30 = *v3;
          break;
        default:
          goto LABEL_31;
      }
      goto LABEL_31;
    }
    if ( v23 == 1 )
    {
      v28 = (char *)result;
      v27 = v3;
    }
    else
    {
      v24 = 0;
      v25 = 0;
      do
      {
        ++v25;
        *(__m128i *)&result[v24] = _mm_loadu_si128((const __m128i *)&v3[v24]);
        v24 += 16;
      }
      while ( v23 >> 1 > v25 );
      v26 = 8LL * (v23 & 0xFFFFFFFE);
      v27 = &v3[v26];
      v28 = (char *)&result[v26];
      if ( (v23 & 0xFFFFFFFE) == v23 )
        goto LABEL_22;
    }
    *v28 = *v27;
    v28[1] = v27[1];
    v28[2] = v27[2];
    v28[3] = v27[3];
    v28[4] = v27[4];
    v28[5] = v27[5];
    v28[6] = v27[6];
    v28[7] = v27[7];
LABEL_22:
    v29 = 8LL * (int)(v23 - 1) + 8;
    v3 += v29;
    v30 = (char *)&result[v29];
    goto LABEL_23;
  }
LABEL_31:
  result[v21] = 0;
  *v20 = result;
  ++*((_DWORD *)v4 + 78);
  return result;
}

