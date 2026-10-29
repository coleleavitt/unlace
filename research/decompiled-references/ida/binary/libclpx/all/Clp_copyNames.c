void __fastcall Clp_copyNames(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  int v5; // ebp
  __int64 v6; // r13
  volatile signed __int32 *v7; // rdx
  char *v8; // rsi
  char *v9; // rdx
  char *v10; // rsi
  __int64 v11; // rax
  int v12; // r12d
  __int64 v13; // rbx
  volatile signed __int32 *v14; // rdx
  char *v15; // rsi
  char *v16; // rdx
  char *v17; // rsi
  __int64 *v18; // rbp
  __int64 *v19; // rbx
  void *v20; // rax
  __int64 *v21; // rbp
  __int64 *v22; // rbx
  void *v23; // rax
  __int64 v24; // rdx
  int v25; // ecx
  __int64 v26; // rdx
  int v27; // ecx
  int v28; // eax
  int v29; // eax
  __int64 v31; // [rsp+0h] [rbp-98h]
  void *v32; // [rsp+0h] [rbp-98h]
  void *v33; // [rsp+0h] [rbp-98h]
  void *v34; // [rsp+0h] [rbp-98h]
  void *v35; // [rsp+0h] [rbp-98h]
  volatile signed __int32 *v36; // [rsp+18h] [rbp-80h] BYREF
  void *v37[2]; // [rsp+20h] [rbp-78h] BYREF
  void *v38; // [rsp+30h] [rbp-68h]
  void *v39[2]; // [rsp+40h] [rbp-58h] BYREF
  void *v40; // [rsp+50h] [rbp-48h]

  v3 = a2;
  v4 = *a1;
  v38 = nullptr;
  *(_OWORD *)v37 = 0;
  v5 = *(_DWORD *)(v4 + 104);
  std::vector<std::string>::reserve(v37, v5);
  if ( v5 > 0 )
  {
    v6 = a2 + 8LL * (unsigned int)(v5 - 1) + 8;
    if ( !&_pthread_key_create )
    {
      while ( 1 )
      {
        std::string::string();
        v10 = (char *)v37[1];
        if ( v37[1] == v38 )
        {
          std::vector<std::string>::_M_realloc_insert<std::string>(v37, v37[1], v39);
          v9 = (char *)v39[0];
          if ( (char *)v39[0] - 24 != (char *)&std::string::_Rep::_S_empty_rep_storage )
            goto LABEL_63;
        }
        else
        {
          if ( v37[1] )
          {
            *(_QWORD *)v37[1] = v39[0];
            v9 = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
            v39[0] = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
          }
          else
          {
            v9 = (char *)v39[0];
          }
          v37[1] = v10 + 8;
          if ( v9 - 24 != (char *)&std::string::_Rep::_S_empty_rep_storage )
          {
LABEL_63:
            v28 = *((_DWORD *)v9 - 2);
            *((_DWORD *)v9 - 2) = v28 - 1;
            if ( v28 <= 0 )
              std::string::_Rep::_M_destroy();
          }
        }
        v3 += 8;
        if ( v6 == v3 )
          goto LABEL_16;
      }
    }
    do
    {
      std::string::string();
      v8 = (char *)v37[1];
      if ( v37[1] == v38 )
      {
        std::vector<std::string>::_M_realloc_insert<std::string>(v37, v37[1], v39);
        v7 = (volatile signed __int32 *)v39[0];
        if ( (char *)v39[0] - 24 != (char *)&std::string::_Rep::_S_empty_rep_storage )
          goto LABEL_60;
      }
      else
      {
        if ( v37[1] )
        {
          *(_QWORD *)v37[1] = v39[0];
          v7 = (volatile signed __int32 *)((char *)&std::string::_Rep::_S_empty_rep_storage + 24);
          v39[0] = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
        }
        else
        {
          v7 = (volatile signed __int32 *)v39[0];
        }
        v37[1] = v8 + 8;
        if ( v7 - 6 != (volatile signed __int32 *)&std::string::_Rep::_S_empty_rep_storage )
        {
LABEL_60:
          if ( _InterlockedExchangeAdd(v7 - 2, 0xFFFFFFFF) <= 0 )
            std::string::_Rep::_M_destroy();
        }
      }
      v3 += 8;
    }
    while ( v6 != v3 );
  }
LABEL_16:
  v11 = *a1;
  v40 = nullptr;
  *(_OWORD *)v39 = 0;
  v12 = *(_DWORD *)(v11 + 108);
  std::vector<std::string>::reserve(v39, v12);
  if ( v12 > 0 )
  {
    v13 = a3;
    v31 = a3 + 8LL * (unsigned int)(v12 - 1) + 8;
    if ( !&_pthread_key_create )
    {
      while ( 1 )
      {
        std::string::string();
        v17 = (char *)v39[1];
        if ( v40 == v39[1] )
        {
          std::vector<std::string>::_M_realloc_insert<std::string>(v39, v39[1], &v36);
          v16 = (char *)v36;
          if ( v36 - 6 != (volatile signed __int32 *)&std::string::_Rep::_S_empty_rep_storage )
            goto LABEL_66;
        }
        else
        {
          if ( v39[1] )
          {
            *(_QWORD *)v39[1] = v36;
            v16 = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
            v36 = (volatile signed __int32 *)((char *)&std::string::_Rep::_S_empty_rep_storage + 24);
          }
          else
          {
            v16 = (char *)v36;
          }
          v39[1] = v17 + 8;
          if ( v16 - 24 != (char *)&std::string::_Rep::_S_empty_rep_storage )
          {
LABEL_66:
            v29 = *((_DWORD *)v16 - 2);
            *((_DWORD *)v16 - 2) = v29 - 1;
            if ( v29 <= 0 )
              std::string::_Rep::_M_destroy();
          }
        }
        v13 += 8;
        if ( v13 == v31 )
          goto LABEL_31;
      }
    }
    do
    {
      std::string::string();
      v15 = (char *)v39[1];
      if ( v39[1] == v40 )
      {
        std::vector<std::string>::_M_realloc_insert<std::string>(v39, v39[1], &v36);
        v14 = v36;
        if ( v36 - 6 != (volatile signed __int32 *)&std::string::_Rep::_S_empty_rep_storage )
          goto LABEL_57;
      }
      else
      {
        if ( v39[1] )
        {
          *(_QWORD *)v39[1] = v36;
          v14 = (volatile signed __int32 *)((char *)&std::string::_Rep::_S_empty_rep_storage + 24);
          v36 = (volatile signed __int32 *)((char *)&std::string::_Rep::_S_empty_rep_storage + 24);
        }
        else
        {
          v14 = v36;
        }
        v39[1] = v15 + 8;
        if ( v14 - 6 != (volatile signed __int32 *)&std::string::_Rep::_S_empty_rep_storage )
        {
LABEL_57:
          if ( _InterlockedExchangeAdd(v14 - 2, 0xFFFFFFFF) <= 0 )
            std::string::_Rep::_M_destroy();
        }
      }
      v13 += 8;
    }
    while ( v13 != v31 );
  }
LABEL_31:
  ClpModel::copyNames(*a1, v37, v39);
  v18 = (__int64 *)v39[1];
  v19 = (__int64 *)v39[0];
  if ( v39[1] != v39[0] )
  {
    v20 = &std::string::_Rep::_S_empty_rep_storage;
    if ( &_pthread_key_create )
    {
      do
      {
        if ( (void *)(*v19 - 24) != v20
          && _InterlockedExchangeAdd((volatile signed __int32 *)(*v19 - 8), 0xFFFFFFFF) <= 0 )
        {
          v35 = v20;
          std::string::_Rep::_M_destroy();
          v20 = v35;
        }
        ++v19;
      }
      while ( v18 != v19 );
    }
    else
    {
      v24 = *(_QWORD *)v39[0];
      if ( (_UNKNOWN *)(*(_QWORD *)v39[0] - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
        goto LABEL_49;
      while ( ++v19 != v18 )
      {
        v24 = *v19;
        if ( (void *)(*v19 - 24) != v20 )
        {
LABEL_49:
          v25 = *(_DWORD *)(v24 - 8);
          *(_DWORD *)(v24 - 8) = v25 - 1;
          if ( v25 <= 0 )
          {
            v32 = v20;
            std::string::_Rep::_M_destroy();
            v20 = v32;
          }
        }
      }
    }
    v19 = (__int64 *)v39[0];
  }
  if ( v19 )
    operator delete(v19);
  v21 = (__int64 *)v37[1];
  v22 = (__int64 *)v37[0];
  if ( v37[1] != v37[0] )
  {
    v23 = &std::string::_Rep::_S_empty_rep_storage;
    if ( &_pthread_key_create )
    {
      do
      {
        if ( (void *)(*v22 - 24) != v23
          && _InterlockedExchangeAdd((volatile signed __int32 *)(*v22 - 8), 0xFFFFFFFF) <= 0 )
        {
          v34 = v23;
          std::string::_Rep::_M_destroy();
          v23 = v34;
        }
        ++v22;
      }
      while ( v21 != v22 );
    }
    else
    {
      v26 = *(_QWORD *)v37[0];
      if ( (_UNKNOWN *)(*(_QWORD *)v37[0] - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
        goto LABEL_54;
      while ( v21 != ++v22 )
      {
        v26 = *v22;
        if ( (void *)(*v22 - 24) != v23 )
        {
LABEL_54:
          v27 = *(_DWORD *)(v26 - 8);
          *(_DWORD *)(v26 - 8) = v27 - 1;
          if ( v27 <= 0 )
          {
            v33 = v23;
            std::string::_Rep::_M_destroy();
            v23 = v33;
          }
        }
      }
    }
    v22 = (__int64 *)v37[0];
  }
  if ( v22 )
    operator delete(v22);
}

