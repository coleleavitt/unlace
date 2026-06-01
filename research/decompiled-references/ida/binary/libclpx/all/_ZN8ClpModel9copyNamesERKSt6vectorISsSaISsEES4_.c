__int64 __fastcall ClpModel::copyNames(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 *v5; // r14
  __int64 *v6; // rdx
  __int64 *v7; // rbp
  _BYTE *v8; // r8
  __int64 *v9; // r14
  __int64 *v10; // rax
  __int64 *v11; // rbp
  _BYTE *v12; // r9
  int v13; // ebp
  __int64 v14; // r14
  unsigned int v15; // ebx
  std::string *v16; // rdi
  unsigned int v17; // eax
  __int64 v18; // rdx
  int v19; // esi
  __int64 result; // rax
  int v21; // ebp
  __int64 v22; // r13
  std::string *v23; // rdi
  unsigned int v24; // eax
  __int64 v25; // rax
  _BYTE *v26; // r9
  int v27; // esi
  _BYTE *v29; // [rsp+18h] [rbp-60h]
  _BYTE *v30; // [rsp+18h] [rbp-60h]
  _BYTE *v31; // [rsp+20h] [rbp-58h]
  __int64 *v32; // [rsp+20h] [rbp-58h]
  _BYTE *v33; // [rsp+20h] [rbp-58h]
  __int64 *v34; // [rsp+20h] [rbp-58h]
  __int64 *v35; // [rsp+28h] [rbp-50h]
  __int64 *v36; // [rsp+28h] [rbp-50h]
  _BYTE v37[57]; // [rsp+3Fh] [rbp-39h] BYREF

  v5 = *(__int64 **)(a1 + 376);
  *(_QWORD *)(a1 + 384) = 0;
  v6 = *(__int64 **)(a1 + 368);
  *(_QWORD *)(a1 + 368) = 0;
  *(_QWORD *)(a1 + 376) = 0;
  if ( v6 != v5 )
  {
    v7 = v6;
    v8 = v37;
    if ( &_pthread_key_create )
    {
      do
      {
        if ( (_UNKNOWN *)(*v7 - 24) != &std::string::_Rep::_S_empty_rep_storage
          && _InterlockedExchangeAdd((volatile signed __int32 *)(*v7 - 8), 0xFFFFFFFF) <= 0 )
        {
          v34 = v6;
          v30 = v8;
          std::string::_Rep::_M_destroy();
          v6 = v34;
          v8 = v30;
        }
        ++v7;
      }
      while ( v5 != v7 );
    }
    else
    {
      v25 = *v6;
      v26 = v37;
      if ( (_UNKNOWN *)(*v6 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        goto LABEL_43;
      while ( v5 != ++v7 )
      {
        v25 = *v7;
        if ( (_UNKNOWN *)(*v7 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        {
LABEL_43:
          v27 = *(_DWORD *)(v25 - 8);
          *(_DWORD *)(v25 - 8) = v27 - 1;
          if ( v27 <= 0 )
          {
            v32 = v6;
            v29 = v26;
            std::string::_Rep::_M_destroy();
            v26 = v29;
            v6 = v32;
          }
        }
      }
    }
  }
  if ( v6 )
    operator delete(v6);
  v9 = *(__int64 **)(a1 + 392);
  *(_QWORD *)(a1 + 408) = 0;
  *(_QWORD *)(a1 + 392) = 0;
  v10 = *(__int64 **)(a1 + 400);
  *(_QWORD *)(a1 + 400) = 0;
  if ( v9 != v10 )
  {
    v11 = v9;
    v12 = v37;
    if ( &_pthread_key_create )
    {
      do
      {
        if ( (_UNKNOWN *)(*v11 - 24) != &std::string::_Rep::_S_empty_rep_storage
          && _InterlockedExchangeAdd((volatile signed __int32 *)(*v11 - 8), 0xFFFFFFFF) <= 0 )
        {
          v36 = v10;
          v33 = v12;
          std::string::_Rep::_M_destroy();
          v10 = v36;
          v12 = v33;
        }
        ++v11;
      }
      while ( v10 != v11 );
    }
    else
    {
      v18 = *v9;
      if ( (_UNKNOWN *)(*v9 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        goto LABEL_26;
      while ( v10 != ++v11 )
      {
        v18 = *v11;
        if ( (_UNKNOWN *)(*v11 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        {
LABEL_26:
          v19 = *(_DWORD *)(v18 - 8);
          *(_DWORD *)(v18 - 8) = v19 - 1;
          if ( v19 <= 0 )
          {
            v35 = v10;
            v31 = v12;
            std::string::_Rep::_M_destroy();
            v12 = v31;
            v10 = v35;
          }
        }
      }
    }
  }
  if ( v9 )
    operator delete(v9);
  std::vector<std::string>::reserve(a1 + 368, *(int *)(a1 + 104));
  v13 = *(_DWORD *)(a1 + 104);
  if ( v13 <= 0 )
  {
    v15 = 0;
  }
  else
  {
    v14 = 0;
    v15 = 0;
    do
    {
      v16 = *(std::string **)(a1 + 376);
      if ( v16 == *(std::string **)(a1 + 384) )
      {
        std::vector<std::string>::_M_realloc_insert<std::string const&>();
        v13 = *(_DWORD *)(a1 + 104);
      }
      else
      {
        if ( v16 )
        {
          std::string::string(v16, (const std::string *)(8 * v14 + *a2));
          v16 = *(std::string **)(a1 + 376);
          v13 = *(_DWORD *)(a1 + 104);
        }
        *(_QWORD *)(a1 + 376) = (char *)v16 + 8;
      }
      v17 = strlen(*(const char **)(*(_QWORD *)(a1 + 368) + 8 * v14));
      if ( v15 < v17 )
        v15 = v17;
      ++v14;
    }
    while ( (int)v14 < v13 );
  }
  result = std::vector<std::string>::reserve(a1 + 392, *(int *)(a1 + 108));
  v21 = *(_DWORD *)(a1 + 108);
  if ( v21 > 0 )
  {
    v22 = 0;
    do
    {
      v23 = *(std::string **)(a1 + 400);
      if ( v23 == *(std::string **)(a1 + 408) )
      {
        std::vector<std::string>::_M_realloc_insert<std::string const&>();
        v21 = *(_DWORD *)(a1 + 108);
      }
      else
      {
        if ( v23 )
        {
          std::string::string(v23, (const std::string *)(8 * v22 + *a3));
          v23 = *(std::string **)(a1 + 400);
          v21 = *(_DWORD *)(a1 + 108);
        }
        *(_QWORD *)(a1 + 400) = (char *)v23 + 8;
      }
      v24 = strlen(*(const char **)(*(_QWORD *)(a1 + 392) + 8 * v22));
      if ( v15 < v24 )
        v15 = v24;
      result = (unsigned int)++v22;
    }
    while ( v21 > (int)v22 );
  }
  *(_DWORD *)(a1 + 328) = v15;
  return result;
}

