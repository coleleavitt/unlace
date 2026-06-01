__int64 __fastcall sub_4C4960(__int64 a1)
{
  __int64 *v1; // r13
  __int64 v2; // r15
  __int64 v4; // rbx
  int v5; // eax
  __int64 v6; // rax
  const char *v7; // r12
  size_t v8; // rax
  size_t v9; // rbp
  size_t v10; // r14
  char *v11; // r14
  _QWORD *v12; // rax
  _QWORD *v13; // rbp
  size_t v14; // r12
  __int64 v15; // rax
  __int64 v16; // r8
  char *v17; // rcx
  char *v18; // rax
  size_t v19; // rax
  _QWORD *v20; // rcx
  size_t v21; // r12
  __int64 v22; // rax
  char *v23; // rdi
  __int64 v24; // rcx
  char *v25; // r8
  char *v26; // rax
  unsigned __int64 v27; // r14
  _QWORD *v28; // r12
  __int64 v29; // r15
  _QWORD *v30; // rbx
  _QWORD *v31; // rsi
  unsigned __int64 v32; // r12
  unsigned __int64 v33; // r14
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rsi
  _QWORD *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // r12
  const char *v43; // rbx
  __int64 v44; // rbp
  const char *v45; // r14
  __int64 v46; // rax
  const char *v47; // rbp
  size_t v48; // r12
  __int64 v49; // rax
  __int64 v50; // r14
  char *v51; // rcx
  _QWORD *v52; // rax
  const void *v53; // r14
  size_t v54; // rax
  size_t v55; // r12
  __int64 v56; // rax
  int v57; // edx
  int v58; // edx
  char *v59; // rdi
  char *v60; // rdx
  int v61; // edx
  __int64 v62; // rax
  char *s; // [rsp+8h] [rbp-C0h]
  char *v64; // [rsp+18h] [rbp-B0h]
  char *v65; // [rsp+18h] [rbp-B0h]
  char *v66; // [rsp+18h] [rbp-B0h]
  const void *v67; // [rsp+20h] [rbp-A8h]
  __int64 v68; // [rsp+20h] [rbp-A8h]
  __int64 v69; // [rsp+28h] [rbp-A0h]
  char *v70; // [rsp+30h] [rbp-98h]
  __int64 v71; // [rsp+30h] [rbp-98h]
  __int64 v72; // [rsp+30h] [rbp-98h]
  const char *v73; // [rsp+30h] [rbp-98h]
  char *v74; // [rsp+38h] [rbp-90h]
  _QWORD *v75; // [rsp+38h] [rbp-90h]
  __int64 v76; // [rsp+50h] [rbp-78h] BYREF
  __int64 *v77; // [rsp+58h] [rbp-70h]
  const void *v78; // [rsp+60h] [rbp-68h] BYREF
  char *v79; // [rsp+70h] [rbp-58h] BYREF
  __int128 v80; // [rsp+78h] [rbp-50h]
  unsigned __int64 v81; // [rsp+88h] [rbp-40h]

  v81 = __readfsqword(0x28u);
  v76 = 0;
  v77 = nullptr;
  v1 = *(__int64 **)(qword_2CA1698 + 1528);
  v2 = sub_4B89E0(&v76, a1);
  if ( v2 )
    goto LABEL_2;
  if ( (_DWORD)v76 != 3 )
    sub_4B0B70();
  v4 = *v77;
  v69 = *v77 + 40 * v77[1];
  if ( *v77 == v69 )
    goto LABEL_2;
  while ( 2 )
  {
    s = (char *)haystack;
    if ( *(_QWORD *)(v4 + 8) )
      s = *(char **)v4;
    v79 = nullptr;
    v80 = 0;
    v5 = *(_DWORD *)(v4 + 24);
    if ( v5 == 2 )
    {
      v6 = *(_QWORD *)(v4 + 32);
      if ( !*(_QWORD *)(v6 + 8)
        || (v7 = *(const char **)v6) == nullptr
        || (v8 = strlen(*(const char **)v6), (v9 = v8) == 0) )
      {
        v67 = v1 + 23;
        goto LABEL_18;
      }
      v10 = v8 + 1;
      v79 = (char *)qvector_reserve(&v79, 0, v8 + 1, 1);
      *(_QWORD *)&v80 = v10;
      memmove(v79, v7, v9);
      v79[v9] = 0;
      v67 = v1 + 23;
      goto LABEL_15;
    }
    if ( v5 != 3 )
      goto LABEL_9;
    v39 = *(__int64 **)(v4 + 32);
    v40 = *v39;
    v41 = 5 * v39[1];
    if ( v40 == v40 + 8 * v41 )
      goto LABEL_9;
    v73 = nullptr;
    v42 = v40 + 8 * v41;
    v65 = nullptr;
    v68 = v4;
    v43 = nullptr;
    v44 = v40;
    do
    {
      if ( !*(_QWORD *)(v44 + 8) )
        goto LABEL_9;
      v45 = *(const char **)v44;
      if ( !strcmp(*(const char **)v44, "use") )
      {
        if ( *(_DWORD *)(v44 + 24) == 2 )
        {
          v56 = *(_QWORD *)(v44 + 32);
          v65 = (char *)haystack;
          if ( *(_QWORD *)(v56 + 8) )
            v65 = *(char **)v56;
          goto LABEL_70;
        }
        if ( !strcmp(v45, "ptn") )
          goto LABEL_9;
      }
      else if ( !strcmp(v45, "ptn") )
      {
        if ( *(_DWORD *)(v44 + 24) != 2 )
          goto LABEL_9;
        v62 = *(_QWORD *)(v44 + 32);
        v73 = haystack;
        if ( *(_QWORD *)(v62 + 8) )
          v73 = *(const char **)v62;
        goto LABEL_70;
      }
      if ( strcmp(v45, "rpl") || *(_DWORD *)(v44 + 24) != 2 )
        goto LABEL_9;
      v46 = *(_QWORD *)(v44 + 32);
      v43 = haystack;
      if ( *(_QWORD *)(v46 + 8) )
        v43 = *(const char **)v46;
LABEL_70:
      v44 += 40;
    }
    while ( v42 != v44 );
    v47 = v43;
    v4 = v68;
    if ( !v65 )
      goto LABEL_9;
    v48 = strlen(v65);
    if ( !v48 )
    {
      v51 = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
      goto LABEL_76;
    }
    v49 = std::string::_Rep::_S_create();
    v50 = v49;
    v51 = (char *)(v49 + 24);
    if ( v48 == 1 )
      *(_BYTE *)(v49 + 24) = *v65;
    else
      v51 = (char *)memcpy((void *)(v49 + 24), v65, v48);
    if ( (_UNKNOWN *)v50 == &std::string::_Rep::_S_empty_rep_storage )
    {
LABEL_76:
      v78 = v51;
      v67 = v1 + 23;
      v52 = sub_4BDCE0(v1 + 23, &v78);
    }
    else
    {
      *(_QWORD *)v50 = v48;
      *(_DWORD *)(v50 + 16) = 0;
      *(_BYTE *)(v50 + v48 + 24) = 0;
      v78 = v51;
      v67 = v1 + 23;
      v52 = sub_4BDCE0(v1 + 23, &v78);
      if ( &_pthread_key_create )
      {
        v61 = _InterlockedExchangeAdd((volatile signed __int32 *)(v50 + 16), 0xFFFFFFFF);
      }
      else
      {
        v61 = *(_DWORD *)(v50 + 16);
        *(_DWORD *)(v50 + 16) = v61 - 1;
      }
      if ( v61 <= 0 )
      {
        v75 = v52;
        std::string::_Rep::_M_destroy();
        v52 = v75;
      }
    }
    if ( !v52 )
      goto LABEL_9;
    v53 = (const void *)v52[2];
    if ( v53 )
    {
      v54 = strlen((const char *)v52[2]);
      v55 = v54;
      if ( v54 )
      {
        v59 = v79;
        v60 = (char *)(v54 + 1);
        if ( *((_QWORD *)&v80 + 1) < v54 + 1 )
        {
          v66 = (char *)(v54 + 1);
          v79 = (char *)qvector_reserve(&v79, v79, v60, 1);
          v60 = v66;
          v59 = v79;
        }
        *(_QWORD *)&v80 = v60;
        memmove(v59, v53, v55);
        v79[v55] = 0;
        if ( v73 && v47 )
          goto LABEL_82;
LABEL_15:
        if ( !(_QWORD)v80 )
          goto LABEL_18;
        v11 = v79;
        goto LABEL_19;
      }
    }
    *(_QWORD *)&v80 = 0;
    if ( v47 && v73 )
    {
LABEL_82:
      sub_4B2A70((__int64)&v79, v73, v47);
      goto LABEL_15;
    }
LABEL_18:
    v11 = (char *)haystack;
LABEL_19:
    v78 = v67;
    v12 = (_QWORD *)operator new(0x20u);
    *v12 = 0;
    v13 = v12;
    if ( !s )
      std::__throw_logic_error("basic_string::_S_construct null not valid");
    v14 = strlen(s);
    if ( v14 )
    {
      v15 = std::string::_Rep::_S_create();
      v16 = v15;
      v17 = (char *)(v15 + 24);
      if ( v14 == 1 )
      {
        *(_BYTE *)(v15 + 24) = *s;
      }
      else
      {
        v64 = (char *)v15;
        v18 = (char *)memcpy((void *)(v15 + 24), s, v14);
        v16 = (__int64)v64;
        v17 = v18;
      }
      if ( (_UNKNOWN *)v16 != &std::string::_Rep::_S_empty_rep_storage )
      {
        *(_DWORD *)(v16 + 16) = 0;
        *(_QWORD *)v16 = v14;
        *(_BYTE *)(v16 + v14 + 24) = 0;
      }
    }
    else
    {
      v17 = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
    }
    v13[1] = v17;
    v70 = v17;
    if ( !v11 )
      std::__throw_logic_error("basic_string::_S_construct null not valid");
    v19 = strlen(v11);
    v20 = v70;
    v21 = v19;
    if ( v19 )
    {
      v22 = std::string::_Rep::_S_create();
      v23 = (char *)(v22 + 24);
      v24 = v22;
      v25 = (char *)(v22 + 24);
      if ( v21 == 1 )
      {
        *(_BYTE *)(v22 + 24) = *v11;
      }
      else
      {
        v74 = (char *)(v22 + 24);
        v71 = v22;
        v26 = (char *)memcpy(v23, v11, v21);
        v25 = v74;
        v24 = v71;
        v23 = v26;
      }
      if ( (_UNKNOWN *)v24 == &std::string::_Rep::_S_empty_rep_storage )
      {
        v20 = (_QWORD *)v13[1];
        v25 = v23;
      }
      else
      {
        *(_DWORD *)(v24 + 16) = 0;
        *(_QWORD *)v24 = v21;
        *(_BYTE *)(v24 + v21 + 24) = 0;
        v20 = (_QWORD *)v13[1];
      }
    }
    else
    {
      v25 = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
    }
    v13[2] = v25;
    v27 = *(v20 - 3);
    if ( (unsigned __int64)v1[26] > 0x14 )
    {
      v34 = std::_Hash_bytes(v20, *(v20 - 3), 0xC70F6907);
      v35 = v1[24];
      v32 = v34;
      v33 = v34 % v35;
      v36 = sub_4B1200(v1[23], v35, v34 % v35, (_QWORD *)v13[1], v34);
      if ( v36 && *v36 )
        goto LABEL_53;
LABEL_43:
      sub_4C47A0((__int64)v67, v33, v32, v13, 1u);
      if ( (*(_DWORD *)&debug & 0x2000000) != 0 )
        sub_383DA0();
      if ( v79 )
      {
        *(_QWORD *)&v80 = 0;
        qfree(v79);
      }
      v4 += 40;
      if ( v69 == v4 )
        goto LABEL_2;
      continue;
    }
    break;
  }
  v28 = (_QWORD *)v1[25];
  if ( !v28 )
  {
LABEL_42:
    v32 = std::_Hash_bytes(v20, v27, 0xC70F6907);
    v33 = v32 % v1[24];
    goto LABEL_43;
  }
  v72 = v2;
  v29 = v4;
  v30 = v20;
LABEL_35:
  while ( 1 )
  {
    v31 = (_QWORD *)v28[1];
    if ( v27 == *(v31 - 3) )
      break;
    v28 = (_QWORD *)*v28;
    if ( !v28 )
    {
LABEL_41:
      v20 = v30;
      v4 = v29;
      v2 = v72;
      goto LABEL_42;
    }
  }
  if ( v27 )
  {
    while ( memcmp(v30, v31, v27) )
    {
      v28 = (_QWORD *)*v28;
      if ( !v28 )
        goto LABEL_41;
      v31 = (_QWORD *)v28[1];
      if ( v27 != *(v31 - 3) )
      {
        v28 = (_QWORD *)*v28;
        if ( v28 )
          goto LABEL_35;
        goto LABEL_41;
      }
    }
  }
LABEL_53:
  if ( v13 )
  {
    v37 = v13[2];
    if ( (_UNKNOWN *)(v37 - 24) != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        v58 = _InterlockedExchangeAdd((volatile signed __int32 *)(v37 - 8), 0xFFFFFFFF);
      }
      else
      {
        v58 = *(_DWORD *)(v37 - 8);
        *(_DWORD *)(v37 - 8) = v58 - 1;
      }
      if ( v58 <= 0 )
        std::string::_Rep::_M_destroy();
    }
    v38 = v13[1];
    if ( (_UNKNOWN *)(v38 - 24) != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        v57 = _InterlockedExchangeAdd((volatile signed __int32 *)(v38 - 8), 0xFFFFFFFF);
      }
      else
      {
        v57 = *(_DWORD *)(v38 - 8);
        *(_DWORD *)(v38 - 8) = v57 - 1;
      }
      if ( v57 <= 0 )
        std::string::_Rep::_M_destroy();
    }
    operator delete(v13, 0x20u);
  }
LABEL_9:
  v2 = (__int64)sub_4BA180((__int64)v1);
  if ( v79 )
  {
    *(_QWORD *)&v80 = 0;
    qfree(v79);
  }
LABEL_2:
  jvalue_t_clear(&v76);
  return v2;
}

