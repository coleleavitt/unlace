__int64 __fastcall CoinStructuredModel::addColumnBlock(CoinStructuredModel *this, int a2, const std::string *a3)
{
  int v5; // r12d
  const void *v6; // r8
  unsigned int v7; // ebp
  const void **v8; // rbx
  size_t v9; // r14
  const void *v10; // rsi
  int v11; // eax
  std::string *v13; // rdi
  int v14; // eax
  const void *v15; // [rsp+0h] [rbp-48h]

  v5 = *((_DWORD *)this + 26);
  if ( v5 <= 0 )
  {
    v7 = 0;
    goto LABEL_7;
  }
  v6 = *(const void **)a3;
  v7 = 0;
  v8 = *((const void ***)this + 18);
  v9 = *(_QWORD *)(*(_QWORD *)a3 - 24LL);
  if ( !v9 )
  {
    while ( *((_QWORD *)*v8 - 3) )
    {
      ++v7;
      ++v8;
      if ( v5 == v7 )
        goto LABEL_12;
    }
LABEL_7:
    if ( v5 != v7 )
      return v7;
    goto LABEL_12;
  }
  v10 = *v8;
  if ( v9 == *((_QWORD *)*v8 - 3) )
    goto LABEL_6;
  while ( 1 )
  {
    ++v7;
    ++v8;
    if ( v5 == v7 )
      break;
    v10 = *v8;
    if ( v9 == *((_QWORD *)*v8 - 3) )
    {
LABEL_6:
      v15 = v6;
      v11 = memcmp(v6, v10, v9);
      v6 = v15;
      if ( !v11 )
        goto LABEL_7;
    }
  }
LABEL_12:
  v13 = *((std::string **)this + 19);
  if ( v13 == *((std::string **)this + 20) )
  {
    std::vector<std::string>::_M_realloc_insert<std::string const&>();
    v14 = *((_DWORD *)this + 26);
  }
  else
  {
    v14 = v5;
    if ( v13 )
    {
      std::string::string(v13, a3);
      v13 = *((std::string **)this + 19);
      v14 = *((_DWORD *)this + 26);
    }
    *((_QWORD *)this + 19) = (char *)v13 + 8;
  }
  v7 = v5;
  *((_DWORD *)this + 26) = v14 + 1;
  *((_DWORD *)this + 3) += a2;
  return v7;
}

