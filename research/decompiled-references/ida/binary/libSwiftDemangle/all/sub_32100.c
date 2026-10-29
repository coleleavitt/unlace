__int64 __fastcall sub_32100(char *a1, unsigned __int64 a2, std::string *a3)
{
  unsigned int v4; // eax
  void *v5; // rdi
  unsigned int v6; // r12d
  unsigned int *v8; // rbp
  char v9; // r14
  _BYTE *v10; // rax
  unsigned int v11; // eax
  _BYTE *v12; // rdx
  __int64 v13; // r15
  unsigned int v14; // ecx
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // r13
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  char v19; // r14
  _BYTE *v20; // rax
  _QWORD *v21; // rdx
  __int64 v22; // r15
  _BYTE *v23; // rax
  _QWORD *v24; // rdx
  __int64 v25; // r15
  __int64 v26; // r13
  _BYTE *v27; // rax
  _QWORD *v28; // rdx
  char v29; // r14
  _BYTE *v30; // rax
  _QWORD *v31; // rdx
  char v32; // r14
  _BYTE *v33; // rax
  _QWORD *v34; // rdx
  _BYTE *v35; // rax
  int v36; // edx
  unsigned int *v37; // [rsp+8h] [rbp-80h]
  char v38; // [rsp+15h] [rbp-73h]
  char v39; // [rsp+16h] [rbp-72h]
  char v40; // [rsp+17h] [rbp-71h]
  char v41; // [rsp+2Fh] [rbp-59h] BYREF
  void *v42; // [rsp+30h] [rbp-58h] BYREF
  unsigned int *v43; // [rsp+38h] [rbp-50h]
  __int64 v44; // [rsp+40h] [rbp-48h]
  unsigned __int64 v45; // [rsp+48h] [rbp-40h]

  v45 = __readfsqword(0x28u);
  v42 = nullptr;
  v43 = nullptr;
  v44 = 0;
  v4 = sub_31DC0(a1, a2, &v42);
  v5 = v42;
  v6 = v4;
  if ( !(_BYTE)v4 )
    goto LABEL_2;
  v37 = v43;
  if ( v43 == v42 )
    goto LABEL_2;
  v8 = (unsigned int *)v42;
  while ( 1 )
  {
    v11 = *v8;
    v12 = *(_BYTE **)a3;
    LOBYTE(v6) = v11 <= 0xD87F || v11 - 57344 <= 0x101FFF;
    if ( !(_BYTE)v6 )
      break;
    v13 = *((_QWORD *)v12 - 3);
    LOBYTE(v14) = *v8;
    v15 = *((_QWORD *)v12 - 2);
    v16 = v13 + 1;
    if ( v11 - 55296 <= 0x7F )
      goto LABEL_7;
    if ( v11 <= 0x7F )
    {
      v14 = *v8;
LABEL_7:
      v9 = v14;
      if ( v16 > v15 || *((int *)v12 - 2) > 0 )
        std::string::reserve(a3, v13 + 1);
      *(_BYTE *)(*(_QWORD *)a3 + *(_QWORD *)(*(_QWORD *)a3 - 24LL)) = v9;
      v10 = *(_BYTE **)a3;
      if ( (_QWORD *)(*(_QWORD *)a3 - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
        goto LABEL_35;
      goto LABEL_11;
    }
    v38 = v11 & 0x3F | 0x80;
    v17 = v11 >> 6;
    if ( v11 <= 0x7FF )
    {
      v32 = v17 | 0xC0;
      if ( v16 > v15 || *((int *)v12 - 2) > 0 )
        std::string::reserve(a3, v13 + 1);
      *(_BYTE *)(*(_QWORD *)a3 + *(_QWORD *)(*(_QWORD *)a3 - 24LL)) = v32;
      v33 = *(_BYTE **)a3;
      v34 = (_QWORD *)(*(_QWORD *)a3 - 24LL);
      if ( v34 != &std::string::_Rep::_S_empty_rep_storage )
      {
        *((_DWORD *)v33 - 2) = 0;
        *((_QWORD *)v33 - 3) = v16;
        *((_BYTE *)v34 + v13 + 25) = 0;
        v33 = *(_BYTE **)a3;
      }
      v13 = *((_QWORD *)v33 - 3);
      v16 = v13 + 1;
      if ( (unsigned __int64)(v13 + 1) > *((_QWORD *)v33 - 2) || *((int *)v33 - 2) > 0 )
        std::string::reserve(a3, v13 + 1);
      *(_BYTE *)(*(_QWORD *)a3 + *(_QWORD *)(*(_QWORD *)a3 - 24LL)) = v38;
      v10 = *(_BYTE **)a3;
      if ( (_QWORD *)(*(_QWORD *)a3 - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
        goto LABEL_35;
LABEL_11:
      if ( v37 == ++v8 )
        goto LABEL_36;
    }
    else
    {
      v39 = v17 & 0x3F | 0x80;
      v18 = v11 >> 12;
      if ( v11 <= 0xFFFF )
      {
        v29 = v18 | 0xE0;
        if ( v16 > v15 || *((int *)v12 - 2) > 0 )
          std::string::reserve(a3, v13 + 1);
        *(_BYTE *)(*(_QWORD *)a3 + *(_QWORD *)(*(_QWORD *)a3 - 24LL)) = v29;
        v30 = *(_BYTE **)a3;
        v31 = (_QWORD *)(*(_QWORD *)a3 - 24LL);
        if ( v31 != &std::string::_Rep::_S_empty_rep_storage )
        {
          *((_DWORD *)v30 - 2) = 0;
          *((_QWORD *)v30 - 3) = v16;
          *((_BYTE *)v31 + v13 + 25) = 0;
          v30 = *(_BYTE **)a3;
        }
        v25 = *((_QWORD *)v30 - 3);
        v26 = v25 + 1;
        if ( (unsigned __int64)(v25 + 1) > *((_QWORD *)v30 - 2) || *((int *)v30 - 2) > 0 )
          std::string::reserve(a3, v25 + 1);
        *(_BYTE *)(*(_QWORD *)a3 + *(_QWORD *)(*(_QWORD *)a3 - 24LL)) = v39;
        v27 = *(_BYTE **)a3;
        v28 = (_QWORD *)(*(_QWORD *)a3 - 24LL);
        if ( v28 != &std::string::_Rep::_S_empty_rep_storage )
        {
LABEL_46:
          *((_DWORD *)v27 - 2) = 0;
          *((_QWORD *)v27 - 3) = v26;
          *((_BYTE *)v28 + v25 + 25) = 0;
          v27 = *(_BYTE **)a3;
        }
      }
      else
      {
        v40 = v18 & 0x3F | 0x80;
        v19 = (v11 >> 18) | 0xF0;
        if ( v16 > v15 || *((int *)v12 - 2) > 0 )
          std::string::reserve(a3, v13 + 1);
        *(_BYTE *)(*(_QWORD *)a3 + *(_QWORD *)(*(_QWORD *)a3 - 24LL)) = v19;
        v20 = *(_BYTE **)a3;
        v21 = (_QWORD *)(*(_QWORD *)a3 - 24LL);
        if ( v21 != &std::string::_Rep::_S_empty_rep_storage )
        {
          *((_DWORD *)v20 - 2) = 0;
          *((_QWORD *)v20 - 3) = v16;
          *((_BYTE *)v21 + v13 + 25) = 0;
          v20 = *(_BYTE **)a3;
        }
        v22 = *((_QWORD *)v20 - 3);
        if ( (unsigned __int64)(v22 + 1) > *((_QWORD *)v20 - 2) || *((int *)v20 - 2) > 0 )
          std::string::reserve(a3, v22 + 1);
        *(_BYTE *)(*(_QWORD *)a3 + *(_QWORD *)(*(_QWORD *)a3 - 24LL)) = v40;
        v23 = *(_BYTE **)a3;
        v24 = (_QWORD *)(*(_QWORD *)a3 - 24LL);
        if ( v24 != &std::string::_Rep::_S_empty_rep_storage )
        {
          *((_DWORD *)v23 - 2) = 0;
          *((_QWORD *)v23 - 3) = v22 + 1;
          *((_BYTE *)v24 + v22 + 25) = 0;
          v23 = *(_BYTE **)a3;
        }
        v25 = *((_QWORD *)v23 - 3);
        v26 = v25 + 1;
        if ( (unsigned __int64)(v25 + 1) > *((_QWORD *)v23 - 2) || *((int *)v23 - 2) > 0 )
          std::string::reserve(a3, v25 + 1);
        *(_BYTE *)(*(_QWORD *)a3 + *(_QWORD *)(*(_QWORD *)a3 - 24LL)) = v39;
        v27 = *(_BYTE **)a3;
        v28 = (_QWORD *)(*(_QWORD *)a3 - 24LL);
        if ( v28 != &std::string::_Rep::_S_empty_rep_storage )
          goto LABEL_46;
      }
      v13 = *((_QWORD *)v27 - 3);
      v16 = v13 + 1;
      if ( (unsigned __int64)(v13 + 1) > *((_QWORD *)v27 - 2) || *((int *)v27 - 2) > 0 )
        std::string::reserve(a3, v13 + 1);
      *(_BYTE *)(*(_QWORD *)a3 + *(_QWORD *)(*(_QWORD *)a3 - 24LL)) = v38;
      v10 = *(_BYTE **)a3;
      if ( (_QWORD *)(*(_QWORD *)a3 - 24LL) == &std::string::_Rep::_S_empty_rep_storage )
        goto LABEL_11;
LABEL_35:
      *((_DWORD *)v10 - 2) = 0;
      ++v8;
      *((_QWORD *)v10 - 3) = v16;
      v10[v13 + 1] = 0;
      if ( v37 == v8 )
        goto LABEL_36;
    }
  }
  v35 = *(_BYTE **)a3;
  if ( *((int *)v12 - 2) <= 0 )
  {
    if ( v35 - 24 == (_BYTE *)&std::string::_Rep::_S_empty_rep_storage )
    {
LABEL_36:
      v5 = v42;
      goto LABEL_2;
    }
    *((_DWORD *)v35 - 2) = 0;
    v5 = v42;
    *((_QWORD *)v35 - 3) = 0;
    *v35 = 0;
  }
  else
  {
    if ( v35 - 24 != (_BYTE *)&std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        v36 = _InterlockedExchangeAdd((volatile signed __int32 *)v35 - 2, 0xFFFFFFFF);
      }
      else
      {
        v36 = *((_DWORD *)v35 - 2);
        *((_DWORD *)v35 - 2) = v36 - 1;
      }
      if ( v36 <= 0 )
        std::string::_Rep::_M_destroy(v35 - 24, &v41);
    }
    v5 = v42;
    *(_QWORD *)a3 = &std::string::_Rep::_S_empty_rep_storage + 3;
  }
LABEL_2:
  if ( v5 )
    operator delete(v5, v44 - (_QWORD)v5);
  return v6;
}

