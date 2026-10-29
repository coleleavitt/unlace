__int64 __fastcall sub_2DBB0(__int64 a1, _BYTE *a2)
{
  char *v4; // r12
  char *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  char *v8; // rcx
  __int64 v9; // rax
  std::string *v10; // r12
  std::string *v11; // r12
  _BYTE *v12; // r14
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rax
  const char *v17; // r8
  __int64 v18; // r15
  __int64 v19; // rax
  const char *v20; // rdi
  __int64 *v21; // r12
  __int64 v22; // r14
  __int64 v23; // rax
  _QWORD *v24; // rdx
  _BYTE *v25; // r13
  size_t v26; // r14
  __int64 v27; // rax
  __int64 v28; // r15
  int v29; // edx
  char v30; // [rsp+Fh] [rbp-49h] BYREF
  const char *v31; // [rsp+10h] [rbp-48h]
  unsigned __int64 v32; // [rsp+18h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  if ( **(_BYTE **)a1 )
  {
    v11 = *(std::string **)(a1 + 8);
    v12 = ***(_BYTE ****)(a1 + 16);
    v13 = **(unsigned int **)(a1 + 24);
    v14 = sub_BFF0((__int64)v12);
    v15 = 0;
    if ( v13 < v14 )
      v15 = *(_QWORD *)&sub_C020(v12)[8 * v13];
    if ( *(_WORD *)(v15 + 16) == 98 )
    {
      v25 = *(_BYTE **)v15;
      v26 = *(_QWORD *)(v15 + 8);
      if ( *(_QWORD *)v15 && v26 )
      {
        v27 = std::string::_Rep::_S_create(*(_QWORD *)(v15 + 8), 0, &v30);
        v28 = v27;
        v17 = (const char *)(v27 + 24);
        if ( v26 == 1 )
          *(_BYTE *)(v27 + 24) = *v25;
        else
          v17 = (const char *)memcpy((void *)(v27 + 24), v25, v26);
        if ( (_QWORD *)v28 != &std::string::_Rep::_S_empty_rep_storage )
        {
          *(_DWORD *)(v28 + 16) = 0;
          *(_QWORD *)v28 = v26;
          *(_BYTE *)(v28 + v26 + 24) = 0;
        }
      }
      else
      {
        v17 = (const char *)(&std::string::_Rep::_S_empty_rep_storage + 3);
      }
    }
    else
    {
      v16 = std::string::_Rep::_S_create(1, 0, &v30);
      *(_BYTE *)(v16 + 24) = 95;
      v17 = (const char *)(v16 + 24);
      if ( (_QWORD *)v16 != &std::string::_Rep::_S_empty_rep_storage )
      {
        *(_DWORD *)(v16 + 16) = 0;
        *(_QWORD *)v16 = 1;
        *(_BYTE *)(v16 + 25) = 0;
      }
    }
    v31 = v17;
    std::string::append(v11, v17, *((_QWORD *)v17 - 3));
    v18 = *(_QWORD *)(*(_QWORD *)v11 - 24LL);
    if ( (unsigned __int64)(v18 + 1) > *(_QWORD *)(*(_QWORD *)v11 - 16LL) || *(int *)(*(_QWORD *)v11 - 8LL) > 0 )
      std::string::reserve(v11, v18 + 1);
    *(_BYTE *)(*(_QWORD *)v11 + *(_QWORD *)(*(_QWORD *)v11 - 24LL)) = 58;
    v19 = *(_QWORD *)v11;
    if ( (_QWORD *)(*(_QWORD *)v11 - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
    {
      *(_DWORD *)(v19 - 8) = 0;
      *(_QWORD *)(v19 - 24) = v18 + 1;
      *(_BYTE *)(v19 + v18 + 1) = 0;
    }
    v20 = v31 - 24;
    if ( v31 - 24 != (const char *)&std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        v29 = _InterlockedExchangeAdd((volatile signed __int32 *)v31 - 2, 0xFFFFFFFF);
      }
      else
      {
        v29 = *((_DWORD *)v31 - 2);
        *((_DWORD *)v31 - 2) = v29 - 1;
      }
      if ( v29 <= 0 )
        std::string::_Rep::_M_destroy(v20, &v30);
    }
    goto LABEL_26;
  }
  if ( **(_BYTE **)(a1 + 32) )
    goto LABEL_3;
  v4 = (char *)sub_C050((__int64)a2);
  v5 = sub_C020(a2);
  v6 = (v4 - v5) >> 5;
  v7 = (v4 - v5) >> 3;
  if ( v6 > 0 )
  {
    v8 = &v5[32 * v6];
    while ( *(_WORD *)(*(_QWORD *)v5 + 16LL) != 214 )
    {
      if ( *(_WORD *)(*((_QWORD *)v5 + 1) + 16LL) == 214 )
      {
        v4 = v5 + 8;
        goto LABEL_13;
      }
      if ( *(_WORD *)(*((_QWORD *)v5 + 2) + 16LL) == 214 )
      {
        v4 = v5 + 16;
        goto LABEL_13;
      }
      if ( *(_WORD *)(*((_QWORD *)v5 + 3) + 16LL) == 214 )
      {
        v4 = v5 + 24;
        goto LABEL_13;
      }
      v5 += 32;
      if ( v8 == v5 )
      {
        v7 = (v4 - v5) >> 3;
        goto LABEL_46;
      }
    }
    goto LABEL_12;
  }
LABEL_46:
  if ( v7 != 2 )
  {
    if ( v7 != 3 )
    {
      if ( v7 != 1 )
        goto LABEL_13;
      goto LABEL_49;
    }
    if ( *(_WORD *)(*(_QWORD *)v5 + 16LL) == 214 )
    {
LABEL_12:
      v4 = v5;
      goto LABEL_13;
    }
    v5 += 8;
  }
  if ( *(_WORD *)(*(_QWORD *)v5 + 16LL) == 214 )
    goto LABEL_12;
  v5 += 8;
LABEL_49:
  if ( *(_WORD *)(*(_QWORD *)v5 + 16LL) == 214 )
    v4 = v5;
LABEL_13:
  if ( v4 == (char *)sub_C050((__int64)a2) )
  {
    v10 = *(std::string **)(a1 + 8);
    goto LABEL_44;
  }
  v9 = *(_QWORD *)v4;
  v10 = *(std::string **)(a1 + 8);
  if ( !v9 )
  {
LABEL_44:
    std::string::append(v10, "_:", 2u);
    goto LABEL_26;
  }
  std::string::append(*(std::string **)(a1 + 8), *(const char **)v9, *(_QWORD *)(v9 + 8));
  std::string::append(v10, ":", 1u);
LABEL_26:
  if ( **(_BYTE **)a1 && **(_BYTE **)(a1 + 32) )
  {
    v21 = *(__int64 **)(a1 + 8);
    v22 = *(_QWORD *)(*v21 - 24);
    if ( (unsigned __int64)(v22 + 1) > *(_QWORD *)(*v21 - 16) || *(int *)(*v21 - 8) > 0 )
      std::string::reserve(*(std::string **)(a1 + 8), v22 + 1);
    *(_BYTE *)(*v21 + *(_QWORD *)(*v21 - 24)) = 32;
    v23 = *v21;
    v24 = (_QWORD *)(*v21 - 24);
    if ( v24 != &std::string::_Rep::_S_empty_rep_storage )
    {
      *(_DWORD *)(v23 - 8) = 0;
      *(_QWORD *)(v23 - 24) = v22 + 1;
      *((_BYTE *)v24 + v22 + 25) = 0;
    }
  }
LABEL_3:
  ++**(_DWORD **)(a1 + 24);
  if ( **(_BYTE **)(a1 + 32) )
    return sub_24010(*(std::string **)(a1 + 8));
  else
    return v32 - __readfsqword(0x28u);
}

