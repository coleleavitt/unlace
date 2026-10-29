void __fastcall ClpModel::deleteColumns(ClpModel *this, int a2, const int *a3)
{
  _QWORD *v6; // rax
  int v7; // esi
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdi
  _DWORD *v14; // r13
  int v15; // eax
  const int *v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // r8
  _BYTE *v19; // rdi
  void *v20; // r13
  __int64 v21; // r14
  void *v22; // rdi
  _BYTE *v23; // r14
  int v24; // r15d
  _BYTE *v25; // rax
  _BYTE *v26; // r13
  __int64 v27; // rdx
  int v28; // ecx
  __int64 v29; // rax
  _BYTE *v30; // rax
  int v31; // eax
  unsigned __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rdx
  int v35; // ecx
  __int64 v36; // rdi
  int v37; // eax
  void *v38; // rdi
  _BYTE *v39; // rax
  int v40; // esi
  _BYTE *v41; // r13
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rbp
  int v46; // r15d
  __int64 i; // rax
  __int64 v48; // r12
  __int64 v49; // r14
  int v50; // ecx
  __int64 *v51; // r12
  __int64 *v52; // rbp
  char *v53; // rdx
  int v54; // eax
  char *v55; // rcx
  __int64 v56; // rax
  int v57; // edx
  _BYTE *v58; // [rsp+0h] [rbp-50h]
  char *v59; // [rsp+0h] [rbp-50h]
  char *v60; // [rsp+0h] [rbp-50h]
  char v61; // [rsp+13h] [rbp-3Dh] BYREF
  int v62[15]; // [rsp+14h] [rbp-3Ch] BYREF

  if ( !a2 )
    return;
  v6 = *((_QWORD **)this + 15);
  *((_DWORD *)this + 79) &= 0xFFFFFE30;
  v62[0] = 0;
  v7 = *((_DWORD *)this + 27);
  if ( v6 )
  {
    v6 = (_QWORD *)sub_8F730(v6, v7, a2, (__int64)a3, v62);
    v7 = *((_DWORD *)this + 27);
  }
  *((_QWORD *)this + 15) = v6;
  v8 = *((_QWORD *)this + 17);
  if ( v8 )
    v8 = sub_8F730(*((_QWORD **)this + 17), v7, a2, (__int64)a3, v62);
  v9 = *((_QWORD *)this + 20);
  *((_QWORD *)this + 17) = v8;
  (*(void (__fastcall **)(__int64, _QWORD, const int *))(*(_QWORD *)v9 + 40LL))(v9, (unsigned int)a2, a3);
  v10 = *((_QWORD *)this + 22);
  v11 = *((unsigned int *)this + 27);
  if ( v10 )
  {
    v10 = sub_8F730(*((_QWORD **)this + 22), v11, a2, (__int64)a3, v62);
    v11 = *((unsigned int *)this + 27);
  }
  *((_QWORD *)this + 22) = v10;
  v12 = *((_QWORD *)this + 23);
  if ( v12 )
    v12 = sub_8F730(*((_QWORD **)this + 23), v11, a2, (__int64)a3, v62);
  v13 = *((_QWORD *)this + 24);
  *((_QWORD *)this + 23) = v12;
  if ( (*(int (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 24LL))(v13, v11) >= *((_DWORD *)this + 27) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, const int *))(**((_QWORD **)this + 24) + 80LL))(
      *((_QWORD *)this + 24),
      (unsigned int)a2,
      a3);
  }
  else
  {
    if ( (unsigned __int64)a2 > 0x1FFFFFFFFFFFFFFELL )
      __cxa_throw_bad_array_new_length();
    v14 = (_DWORD *)operator new[](4LL * a2);
    v15 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 24) + 24LL))(*((_QWORD *)this + 24));
    if ( a2 <= 0 )
    {
      v17 = 0;
    }
    else
    {
      v16 = a3;
      v17 = 0;
      do
      {
        if ( v15 > *v16 )
        {
          v18 = (int)v17;
          v17 = (unsigned int)(v17 + 1);
          v14[v18] = *v16;
        }
        ++v16;
      }
      while ( &a3[a2 - 1 + 1] != v16 );
    }
    (*(void (__fastcall **)(_QWORD, __int64, _DWORD *))(**((_QWORD **)this + 24) + 80LL))(
      *((_QWORD *)this + 24),
      v17,
      v14);
    operator delete[](v14);
  }
  v19 = *((_BYTE **)this + 33);
  if ( v19 )
  {
    if ( *((_DWORD *)this + 26) + v62[0] )
    {
      v20 = (void *)sub_8F870(v19, *((_DWORD *)this + 27), a2, (__int64)a3, v62, 0);
      v21 = operator new[](*((_DWORD *)this + 26) + v62[0]);
      CoinMemcpyN<unsigned char>(v20, (unsigned int)v62[0], v21);
      CoinMemcpyN<unsigned char>(
        *((_QWORD *)this + 33) + *((int *)this + 27),
        *((unsigned int *)this + 26),
        v21 + v62[0]);
      if ( v20 )
        operator delete[](v20);
      v22 = *((void **)this + 33);
      if ( v22 )
        operator delete[](v22);
      *((_QWORD *)this + 33) = v21;
    }
    else
    {
      operator delete[](v19);
      *((_QWORD *)this + 33) = 0;
    }
  }
  v23 = *((_BYTE **)this + 34);
  if ( v23 )
  {
    v24 = *((_DWORD *)this + 27);
    v25 = (_BYTE *)operator new[](v24);
    v26 = v25;
    if ( v24 )
    {
      sub_8F680(v25, v24);
      v32 = v24;
      if ( a2 <= 0 )
      {
        v31 = v24;
LABEL_35:
        v62[0] = v31;
        v33 = operator new[](v32);
        if ( v24 > 0 )
        {
          v34 = 0;
          v35 = 0;
          do
          {
            if ( !v26[v34] )
            {
              v36 = v35++;
              *(_BYTE *)(v33 + v36) = v23[v34];
            }
            ++v34;
          }
          while ( (unsigned int)(v24 - 1) + 1LL != v34 );
        }
        goto LABEL_40;
      }
    }
    else if ( a2 <= 0 )
    {
      v62[0] = 0;
      v33 = operator new[](0);
LABEL_40:
      v58 = (_BYTE *)v33;
      operator delete[](v23);
      operator delete[](v26);
      v23 = v58;
      goto LABEL_41;
    }
    v27 = 0;
    v28 = 0;
    do
    {
      v29 = a3[v27];
      if ( (int)v29 >= 0 && v24 > (int)v29 )
      {
        v30 = &v26[v29];
        if ( !*v30 )
        {
          ++v28;
          *v30 = 1;
        }
      }
      ++v27;
    }
    while ( a2 > (int)v27 );
    v31 = v24 - v28;
    v32 = v24 - v28;
    goto LABEL_35;
  }
LABEL_41:
  v37 = *((_DWORD *)this + 82);
  *((_QWORD *)this + 34) = v23;
  if ( v37 )
  {
    v39 = (_BYTE *)operator new[](*((int *)this + 27));
    v40 = *((_DWORD *)this + 27);
    v41 = v39;
    if ( v40 )
    {
      sub_8F680(v39, v40);
      v40 = *((_DWORD *)this + 27);
      v42 = *((_QWORD *)this + 49);
      if ( a2 <= 0 )
        goto LABEL_54;
    }
    else
    {
      v42 = *((_QWORD *)this + 49);
      if ( a2 <= 0 )
        goto LABEL_72;
    }
    v43 = 0;
    do
    {
      v44 = a3[v43++];
      v41[v44] = 1;
    }
    while ( a2 > (int)v43 );
LABEL_54:
    if ( v40 > 0 )
    {
      v45 = 1;
      v46 = 0;
      for ( i = 0; ; i = v46 )
      {
        while ( 1 )
        {
          v48 = 8 * i;
          v49 = v42 + 8 * i;
          if ( !v41[v45 - 1] )
            break;
          v50 = v45++;
          if ( v50 >= v40 )
            goto LABEL_58;
        }
        ++v46;
        std::string::assign((std::string *)(v42 + 8 * i), (const std::string *)(v42 + 8 * v45 - 8));
        v40 = *((_DWORD *)this + 27);
        v42 = *((_QWORD *)this + 49);
        v54 = v45++;
        v49 = v42 + v48 + 8;
        if ( v54 >= v40 )
          break;
      }
      goto LABEL_58;
    }
LABEL_72:
    v49 = v42;
LABEL_58:
    v51 = *((__int64 **)this + 50);
    if ( v51 != (__int64 *)v49 )
    {
      v52 = (__int64 *)v49;
      v53 = &v61;
      if ( &_pthread_key_create )
      {
        do
        {
          if ( (_UNKNOWN *)(*v52 - 24) != &std::string::_Rep::_S_empty_rep_storage
            && _InterlockedExchangeAdd((volatile signed __int32 *)(*v52 - 8), 0xFFFFFFFF) <= 0 )
          {
            v59 = v53;
            std::string::_Rep::_M_destroy();
            v53 = v59;
          }
          ++v52;
        }
        while ( v51 != v52 );
      }
      else
      {
        v55 = &v61;
        do
        {
          v56 = *v52;
          if ( (_UNKNOWN *)(*v52 - 24) != &std::string::_Rep::_S_empty_rep_storage )
          {
            v57 = *(_DWORD *)(v56 - 8);
            *(_DWORD *)(v56 - 8) = v57 - 1;
            if ( v57 <= 0 )
            {
              v60 = v55;
              std::string::_Rep::_M_destroy();
              v55 = v60;
            }
          }
          ++v52;
        }
        while ( v51 != v52 );
      }
      *((_QWORD *)this + 50) = v49;
    }
    operator delete[](v41);
  }
  v38 = *((void **)this + 27);
  *((_DWORD *)this + 27) = v62[0];
  *((_QWORD *)this + 40) = 0xFFFFFFFFLL;
  if ( v38 )
    operator delete[](v38);
  *((_QWORD *)this + 27) = 0;
  ClpModel::setRowScale(this, nullptr);
  ClpModel::setColumnScale(this, nullptr);
}

