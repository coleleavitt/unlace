__int64 __fastcall ClpSolve::generateCpp(ClpSolve *this, _IO_FILE *a2)
{
  void *v3; // rdi
  __int64 result; // rax
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  __int64 v16; // [rsp+20h] [rbp-90h]
  __int64 v17; // [rsp+28h] [rbp-88h]
  __int64 v18; // [rsp+30h] [rbp-80h]
  __int64 v19; // [rsp+38h] [rbp-78h]
  __int64 v20; // [rsp+40h] [rbp-70h]
  __int64 v21; // [rsp+48h] [rbp-68h]
  __int64 v22; // [rsp+50h] [rbp-60h]
  __int64 v23; // [rsp+58h] [rbp-58h]
  __int64 v24; // [rsp+60h] [rbp-50h]
  __int64 v25; // [rsp+68h] [rbp-48h]
  __int64 v26; // [rsp+70h] [rbp-40h]

  std::string::string();
  std::string::string();
  std::string::string();
  std::string::string();
  std::string::string();
  std::string::string();
  std::string::string();
  std::string::string();
  std::string::string();
  std::string::string();
  std::string::string();
  fprintf(a2, "3  ClpSolve::SolveType method = %s;\n", (const char *)*(&v20 + *(int *)this));
  fprintf(a2, "3  ClpSolve::PresolveType presolveType = %s;\n", (const char *)*(&v16 + *((int *)this + 1)));
  fprintf(a2, "3  int numberPasses = %d;\n", *((_DWORD *)this + 2));
  fprintf(
    a2,
    "3  int options[] = {%d,%d,%d,%d,%d,%d};\n",
    *((_DWORD *)this + 3),
    *((_DWORD *)this + 4),
    *((_DWORD *)this + 5),
    *((_DWORD *)this + 6),
    *((_DWORD *)this + 7),
    *((_DWORD *)this + 8));
  fprintf(
    a2,
    "3  int extraInfo[] = {%d,%d,%d,%d,%d,%d};\n",
    *((_DWORD *)this + 10),
    *((_DWORD *)this + 11),
    *((_DWORD *)this + 12),
    *((_DWORD *)this + 13),
    *((_DWORD *)this + 14),
    *((_DWORD *)this + 15));
  fprintf(
    a2,
    "3  int independentOptions[] = {%d,%d,%d};\n",
    *((_DWORD *)this + 17),
    *((_DWORD *)this + 18),
    *((_DWORD *)this + 19));
  fwrite("3  ClpSolve clpSolve(method,presolveType,numberPasses,\n", 1u, 0x37u, a2);
  fwrite("3                    options,extraInfo,independentOptions);\n", 1u, 0x3Cu, a2);
  v3 = (void *)(v19 - 24);
  if ( !&_pthread_key_create )
  {
    if ( v3 != &std::string::_Rep::_S_empty_rep_storage )
    {
      v7 = *(_DWORD *)(v19 - 8);
      *(_DWORD *)(v19 - 8) = v7 - 1;
      if ( v7 <= 0 )
        std::string::_Rep::_M_destroy();
    }
    if ( (_UNKNOWN *)(v18 - 24) != &std::string::_Rep::_S_empty_rep_storage )
    {
      v10 = *(_DWORD *)(v18 - 8);
      *(_DWORD *)(v18 - 8) = v10 - 1;
      if ( v10 <= 0 )
        std::string::_Rep::_M_destroy();
    }
    if ( (_UNKNOWN *)(v17 - 24) != &std::string::_Rep::_S_empty_rep_storage )
    {
      v13 = *(_DWORD *)(v17 - 8);
      *(_DWORD *)(v17 - 8) = v13 - 1;
      if ( v13 <= 0 )
        std::string::_Rep::_M_destroy();
    }
    if ( (_UNKNOWN *)(v16 - 24) != &std::string::_Rep::_S_empty_rep_storage )
    {
      v5 = *(_DWORD *)(v16 - 8);
      *(_DWORD *)(v16 - 8) = v5 - 1;
      if ( v5 <= 0 )
        std::string::_Rep::_M_destroy();
    }
LABEL_21:
    if ( (_UNKNOWN *)(v26 - 24) != &std::string::_Rep::_S_empty_rep_storage )
    {
      v8 = *(_DWORD *)(v26 - 8);
      *(_DWORD *)(v26 - 8) = v8 - 1;
      if ( v8 <= 0 )
        std::string::_Rep::_M_destroy();
    }
    if ( (_UNKNOWN *)(v25 - 24) != &std::string::_Rep::_S_empty_rep_storage )
    {
      v9 = *(_DWORD *)(v25 - 8);
      *(_DWORD *)(v25 - 8) = v9 - 1;
      if ( v9 <= 0 )
        std::string::_Rep::_M_destroy();
    }
    if ( (_UNKNOWN *)(v24 - 24) != &std::string::_Rep::_S_empty_rep_storage )
    {
      v11 = *(_DWORD *)(v24 - 8);
      *(_DWORD *)(v24 - 8) = v11 - 1;
      if ( v11 <= 0 )
        std::string::_Rep::_M_destroy();
    }
    if ( (_UNKNOWN *)(v23 - 24) != &std::string::_Rep::_S_empty_rep_storage )
    {
      v12 = *(_DWORD *)(v23 - 8);
      *(_DWORD *)(v23 - 8) = v12 - 1;
      if ( v12 <= 0 )
        std::string::_Rep::_M_destroy();
    }
    if ( (_UNKNOWN *)(v22 - 24) != &std::string::_Rep::_S_empty_rep_storage )
    {
      v14 = *(_DWORD *)(v22 - 8);
      *(_DWORD *)(v22 - 8) = v14 - 1;
      if ( v14 <= 0 )
        std::string::_Rep::_M_destroy();
    }
    if ( (_UNKNOWN *)(v21 - 24) != &std::string::_Rep::_S_empty_rep_storage )
    {
      v15 = *(_DWORD *)(v21 - 8);
      *(_DWORD *)(v21 - 8) = v15 - 1;
      if ( v15 <= 0 )
        std::string::_Rep::_M_destroy();
    }
    result = v20;
    if ( (_UNKNOWN *)(v20 - 24) != &std::string::_Rep::_S_empty_rep_storage )
    {
      v6 = *(_DWORD *)(v20 - 8);
      *(_DWORD *)(v20 - 8) = v6 - 1;
      if ( v6 <= 0 )
        return std::string::_Rep::_M_destroy();
    }
    return result;
  }
  if ( v3 != &std::string::_Rep::_S_empty_rep_storage
    && _InterlockedExchangeAdd((volatile signed __int32 *)(v19 - 8), 0xFFFFFFFF) <= 0 )
  {
    std::string::_Rep::_M_destroy();
  }
  if ( (_UNKNOWN *)(v18 - 24) != &std::string::_Rep::_S_empty_rep_storage
    && _InterlockedExchangeAdd((volatile signed __int32 *)(v18 - 8), 0xFFFFFFFF) <= 0 )
  {
    std::string::_Rep::_M_destroy();
  }
  if ( (_UNKNOWN *)(v17 - 24) != &std::string::_Rep::_S_empty_rep_storage
    && _InterlockedExchangeAdd((volatile signed __int32 *)(v17 - 8), 0xFFFFFFFF) <= 0 )
  {
    std::string::_Rep::_M_destroy();
  }
  if ( (_UNKNOWN *)(v16 - 24) != &std::string::_Rep::_S_empty_rep_storage
    && _InterlockedExchangeAdd((volatile signed __int32 *)(v16 - 8), 0xFFFFFFFF) <= 0 )
  {
    std::string::_Rep::_M_destroy();
  }
  if ( !&_pthread_key_create )
    goto LABEL_21;
  if ( (_UNKNOWN *)(v26 - 24) != &std::string::_Rep::_S_empty_rep_storage
    && _InterlockedExchangeAdd((volatile signed __int32 *)(v26 - 8), 0xFFFFFFFF) <= 0 )
  {
    std::string::_Rep::_M_destroy();
  }
  if ( (_UNKNOWN *)(v25 - 24) != &std::string::_Rep::_S_empty_rep_storage
    && _InterlockedExchangeAdd((volatile signed __int32 *)(v25 - 8), 0xFFFFFFFF) <= 0 )
  {
    std::string::_Rep::_M_destroy();
  }
  if ( (_UNKNOWN *)(v24 - 24) != &std::string::_Rep::_S_empty_rep_storage
    && _InterlockedExchangeAdd((volatile signed __int32 *)(v24 - 8), 0xFFFFFFFF) <= 0 )
  {
    std::string::_Rep::_M_destroy();
  }
  if ( (_UNKNOWN *)(v23 - 24) != &std::string::_Rep::_S_empty_rep_storage
    && _InterlockedExchangeAdd((volatile signed __int32 *)(v23 - 8), 0xFFFFFFFF) <= 0 )
  {
    std::string::_Rep::_M_destroy();
  }
  if ( (_UNKNOWN *)(v22 - 24) != &std::string::_Rep::_S_empty_rep_storage
    && _InterlockedExchangeAdd((volatile signed __int32 *)(v22 - 8), 0xFFFFFFFF) <= 0 )
  {
    std::string::_Rep::_M_destroy();
  }
  if ( (_UNKNOWN *)(v21 - 24) != &std::string::_Rep::_S_empty_rep_storage
    && _InterlockedExchangeAdd((volatile signed __int32 *)(v21 - 8), 0xFFFFFFFF) <= 0 )
  {
    std::string::_Rep::_M_destroy();
  }
  result = v20;
  if ( (_UNKNOWN *)(v20 - 24) != &std::string::_Rep::_S_empty_rep_storage
    && _InterlockedExchangeAdd((volatile signed __int32 *)(v20 - 8), 0xFFFFFFFF) <= 0 )
  {
    return std::string::_Rep::_M_destroy();
  }
  return result;
}

