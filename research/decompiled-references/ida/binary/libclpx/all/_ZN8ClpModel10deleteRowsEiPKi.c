void __fastcall ClpModel::deleteRows(ClpModel *this, int a2, const int *a3)
{
  __int64 v3; // r10
  int v4; // r11d
  __int64 v5; // r10
  const int *v6; // rax
  int v7; // r9d
  int v8; // ecx
  __int64 v9; // rax
  bool v10; // cl
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdi
  char *v20; // rdi
  int v21; // edx
  char *v22; // rdi
  void *v23; // r14
  __int64 v24; // r13
  void *v25; // rdi
  void *v26; // rdi
  void *v27; // rdi
  bool v28; // zf
  void *v29; // rdi
  __int64 v30; // rdi
  char *v31; // rax
  int v32; // esi
  char *v33; // r13
  __int64 v34; // rdx
  __int64 v35; // rax
  char *v36; // rax
  __int64 v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rdx
  _BYTE *v40; // rax
  int v41; // esi
  _BYTE *v42; // r13
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rbp
  int v47; // r15d
  __int64 i; // rax
  __int64 v49; // r12
  __int64 v50; // r14
  int v51; // ecx
  __int64 *v52; // r12
  __int64 *v53; // rbp
  char *v54; // rcx
  int v55; // edx
  __int64 v56; // rax
  int v57; // eax
  int v58; // edx
  char *v59; // [rsp+0h] [rbp-50h]
  char *v60; // [rsp+0h] [rbp-50h]
  char v61; // [rsp+13h] [rbp-3Dh] BYREF
  int v62[15]; // [rsp+14h] [rbp-3Ch] BYREF

  if ( !a2 )
    return;
  v3 = *((_QWORD *)this + 33);
  *((_DWORD *)this + 79) &= 0xFFFFFFC0;
  v62[0] = 0;
  v4 = *((_DWORD *)this + 26);
  if ( v3 )
  {
    v5 = *((int *)this + 27) + v3;
    if ( a2 > 0 )
    {
      v6 = a3;
      v7 = 0;
      do
      {
        v8 = (*(_BYTE *)(v5 + *v6++) & 7) != 1;
        v7 += v8;
      }
      while ( &a3[a2 - 1 + 1] != v6 );
      if ( v7 && v4 > 0 )
      {
        v9 = 1;
        do
        {
          if ( (*(_BYTE *)(v5 + v9 - 1) & 7) == 1 )
          {
            if ( fabs(*(double *)(*((_QWORD *)this + 14) + 8 * v9 - 8) - *(double *)(*((_QWORD *)this + 18) + 8 * v9 - 8)) >= 0.00000001 )
            {
              if ( fabs(*(double *)(*((_QWORD *)this + 14) + 8 * v9 - 8) - *(double *)(*((_QWORD *)this + 19)
                                                                                     + 8 * v9
                                                                                     - 8)) < 0.00000001 )
              {
                *(_BYTE *)(v5 + v9 - 1) = 2;
                --v7;
                v4 = *((_DWORD *)this + 26);
              }
            }
            else
            {
              *(_BYTE *)(v5 + v9 - 1) = 3;
              --v7;
              v4 = *((_DWORD *)this + 26);
            }
          }
          v10 = v4 <= (int)v9++;
        }
        while ( !v10 && v7 != 0 );
      }
    }
  }
  if ( *((int *)this + 121) >= 0 )
  {
    v31 = (char *)operator new[](v4);
    v32 = *((_DWORD *)this + 26);
    v33 = v31;
    if ( v32 )
    {
      sub_8F680(v31, v32);
      v32 = *((_DWORD *)this + 26);
      if ( a2 <= 0 )
        goto LABEL_53;
    }
    else if ( a2 <= 0 )
    {
      goto LABEL_57;
    }
    v34 = 0;
    do
    {
      v35 = a3[v34];
      if ( (int)v35 >= 0 && (int)v35 < v32 )
      {
        v36 = &v33[v35];
        if ( !*v36 )
          *v36 = 1;
      }
      ++v34;
    }
    while ( a2 > (int)v34 );
LABEL_53:
    v37 = *((_QWORD *)this + 33) + *((int *)this + 27);
    if ( v32 > 0 )
    {
      v38 = 1;
      do
      {
        while ( !v33[v38 - 1] )
        {
          v39 = v62[0];
          *(_QWORD *)(*((_QWORD *)this + 14) + 8LL * v62[0]) = *(_QWORD *)(*((_QWORD *)this + 14) + 8 * v38 - 8);
          *(_QWORD *)(*((_QWORD *)this + 16) + 8 * v39) = *(_QWORD *)(*((_QWORD *)this + 16) + 8 * v38 - 8);
          *(_QWORD *)(*((_QWORD *)this + 18) + 8 * v39) = *(_QWORD *)(*((_QWORD *)this + 18) + 8 * v38 - 8);
          *(_QWORD *)(*((_QWORD *)this + 19) + 8 * v39) = *(_QWORD *)(*((_QWORD *)this + 19) + 8 * v38 - 8);
          *(_BYTE *)(v37 + v39) = *(_BYTE *)(v37 + v38 - 1);
          v32 = *((_DWORD *)this + 26);
          LODWORD(v39) = v38;
          ++v62[0];
          ++v38;
          if ( (int)v39 >= v32 )
            goto LABEL_57;
        }
        v55 = v38++;
      }
      while ( v55 < v32 );
    }
LABEL_57:
    if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 24) + 32LL))(*((_QWORD *)this + 24)) )
      (*(void (__fastcall **)(_QWORD, _QWORD, const int *))(**((_QWORD **)this + 24) + 88LL))(
        *((_QWORD *)this + 24),
        (unsigned int)a2,
        a3);
    operator delete[](v33);
    if ( !*((_DWORD *)this + 82) )
      goto LABEL_34;
LABEL_60:
    v40 = (_BYTE *)operator new[](*((int *)this + 26));
    v41 = *((_DWORD *)this + 26);
    v42 = v40;
    if ( v41 )
    {
      sub_8F680(v40, v41);
      v41 = *((_DWORD *)this + 26);
      v43 = *((_QWORD *)this + 46);
      if ( a2 <= 0 )
        goto LABEL_64;
    }
    else
    {
      v43 = *((_QWORD *)this + 46);
      if ( a2 <= 0 )
        goto LABEL_91;
    }
    v44 = 0;
    do
    {
      v45 = a3[v44++];
      v42[v45] = 1;
    }
    while ( a2 > (int)v44 );
LABEL_64:
    if ( v41 > 0 )
    {
      v46 = 1;
      v47 = 0;
      for ( i = 0; ; i = v47 )
      {
        while ( 1 )
        {
          v49 = 8 * i;
          v50 = v43 + 8 * i;
          if ( !v42[v46 - 1] )
            break;
          v51 = v46++;
          if ( v51 >= v41 )
            goto LABEL_68;
        }
        ++v47;
        std::string::assign((std::string *)(v43 + 8 * i), (const std::string *)(v43 + 8 * v46 - 8));
        v41 = *((_DWORD *)this + 26);
        v43 = *((_QWORD *)this + 46);
        v57 = v46++;
        v50 = v43 + v49 + 8;
        if ( v57 >= v41 )
          break;
      }
      goto LABEL_68;
    }
LABEL_91:
    v50 = v43;
LABEL_68:
    v52 = *((__int64 **)this + 47);
    if ( v52 != (__int64 *)v50 )
    {
      v53 = (__int64 *)v50;
      v54 = &v61;
      if ( &_pthread_key_create )
      {
        do
        {
          if ( (_UNKNOWN *)(*v53 - 24) != &std::string::_Rep::_S_empty_rep_storage
            && _InterlockedExchangeAdd((volatile signed __int32 *)(*v53 - 8), 0xFFFFFFFF) <= 0 )
          {
            v59 = v54;
            std::string::_Rep::_M_destroy();
            v54 = v59;
          }
          ++v53;
        }
        while ( v52 != v53 );
      }
      else
      {
        do
        {
          v56 = *v53;
          if ( (_UNKNOWN *)(*v53 - 24) != &std::string::_Rep::_S_empty_rep_storage )
          {
            v58 = *(_DWORD *)(v56 - 8);
            *(_DWORD *)(v56 - 8) = v58 - 1;
            if ( v58 <= 0 )
            {
              v60 = v54;
              std::string::_Rep::_M_destroy();
              v54 = v60;
            }
          }
          ++v53;
        }
        while ( v52 != v53 );
      }
      *((_QWORD *)this + 47) = v50;
    }
    operator delete[](v42);
    goto LABEL_34;
  }
  v14 = *((_QWORD *)this + 14);
  if ( v14 )
  {
    v14 = sub_8F730(*((_QWORD **)this + 14), v4, a2, (__int64)a3, v62);
    v4 = *((_DWORD *)this + 26);
  }
  *((_QWORD *)this + 14) = v14;
  v15 = *((_QWORD *)this + 16);
  if ( v15 )
  {
    v15 = sub_8F730(*((_QWORD **)this + 16), v4, a2, (__int64)a3, v62);
    v4 = *((_DWORD *)this + 26);
  }
  *((_QWORD *)this + 16) = v15;
  v16 = *((_QWORD *)this + 21);
  if ( v16 )
  {
    v16 = sub_8F730(*((_QWORD **)this + 21), v4, a2, (__int64)a3, v62);
    v4 = *((_DWORD *)this + 26);
  }
  *((_QWORD *)this + 21) = v16;
  v17 = *((_QWORD *)this + 18);
  if ( v17 )
  {
    v17 = sub_8F730(*((_QWORD **)this + 18), v4, a2, (__int64)a3, v62);
    v4 = *((_DWORD *)this + 26);
  }
  *((_QWORD *)this + 18) = v17;
  v18 = *((_QWORD *)this + 19);
  if ( v18 )
    v18 = sub_8F730(*((_QWORD **)this + 19), v4, a2, (__int64)a3, v62);
  v19 = *((_QWORD *)this + 24);
  *((_QWORD *)this + 19) = v18;
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v19 + 32LL))(v19) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, const int *))(**((_QWORD **)this + 24) + 88LL))(
      *((_QWORD *)this + 24),
      (unsigned int)a2,
      a3);
    v20 = *((char **)this + 33);
    if ( !v20 )
      goto LABEL_33;
  }
  else
  {
    v20 = *((char **)this + 33);
    if ( !v20 )
      goto LABEL_33;
  }
  v21 = v62[0] + *((_DWORD *)this + 27);
  if ( v21 )
  {
    v22 = &v20[*((int *)this + 27)];
    if ( v22 )
    {
      v23 = (void *)sub_8F870(v22, *((_DWORD *)this + 26), a2, (__int64)a3, v62, 0);
      v24 = operator new[](*((_DWORD *)this + 27) + v62[0]);
      CoinMemcpyN<unsigned char>(*((_QWORD *)this + 33), *((unsigned int *)this + 27), v24);
      CoinMemcpyN<unsigned char>(v23, (unsigned int)v62[0], v24 + *((int *)this + 27));
      if ( v23 )
        operator delete[](v23);
    }
    else
    {
      v24 = operator new[](v21);
      CoinMemcpyN<unsigned char>(*((_QWORD *)this + 33), *((unsigned int *)this + 27), v24);
      CoinMemcpyN<unsigned char>(0, (unsigned int)v62[0], v24 + *((int *)this + 27));
    }
    v25 = *((void **)this + 33);
    if ( v25 )
      operator delete[](v25);
    *((_QWORD *)this + 33) = v24;
  }
  else
  {
    operator delete[](v20);
    *((_QWORD *)this + 33) = 0;
  }
LABEL_33:
  if ( *((_DWORD *)this + 82) )
    goto LABEL_60;
LABEL_34:
  v26 = *((void **)this + 27);
  *((_DWORD *)this + 26) = v62[0];
  *((_QWORD *)this + 40) = 0xFFFFFFFFLL;
  if ( v26 )
    operator delete[](v26);
  v27 = *((void **)this + 28);
  v28 = *((_QWORD *)this + 84) == (_QWORD)v27;
  *((_QWORD *)this + 27) = 0;
  if ( !v28 )
  {
    if ( v27 )
      operator delete[](v27);
    v29 = *((void **)this + 29);
    if ( v29 )
      operator delete[](v29);
  }
  v30 = *((_QWORD *)this + 26);
  *((_QWORD *)this + 28) = 0;
  *((_QWORD *)this + 29) = 0;
  if ( v30 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 480LL))(v30);
  *((_QWORD *)this + 26) = 0;
}

