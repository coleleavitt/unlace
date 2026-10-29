__int64 __fastcall sub_4DBAC0(__int64 a1)
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
  size_t v14; // rax
  size_t v15; // r12
  __int64 v16; // rax
  __int64 v17; // r8
  char *v18; // rcx
  char *v19; // rax
  size_t v20; // rax
  _QWORD *v21; // rcx
  size_t v22; // r12
  __int64 v23; // rax
  char *v24; // rdi
  __int64 v25; // rcx
  char *v26; // r8
  char *v27; // rax
  unsigned __int64 v28; // r14
  _QWORD *v29; // r12
  __int64 v30; // r15
  _QWORD *v31; // rbx
  _QWORD *v32; // rsi
  unsigned __int64 v33; // r12
  unsigned __int64 v34; // r14
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rsi
  _QWORD *v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // r12
  const char *v44; // rbx
  __int64 v45; // rbp
  const char *v46; // r14
  __int64 v47; // rax
  const char *v48; // rbp
  size_t v49; // rax
  size_t v50; // r12
  __int64 v51; // rax
  __int64 v52; // r14
  char *v53; // rcx
  _QWORD *v54; // rax
  const void *v55; // r14
  size_t v56; // rax
  size_t v57; // r12
  __int64 v58; // rax
  int v59; // edx
  int v60; // edx
  char *v61; // rdi
  char *v62; // rdx
  int v63; // edx
  __int64 v64; // rax
  char *s; // [rsp+8h] [rbp-C0h]
  char *v66; // [rsp+18h] [rbp-B0h]
  char *v67; // [rsp+18h] [rbp-B0h]
  char *v68; // [rsp+18h] [rbp-B0h]
  const void *v69; // [rsp+20h] [rbp-A8h]
  __int64 v70; // [rsp+20h] [rbp-A8h]
  __int64 v71; // [rsp+28h] [rbp-A0h]
  char *v72; // [rsp+30h] [rbp-98h]
  __int64 v73; // [rsp+30h] [rbp-98h]
  __int64 v74; // [rsp+30h] [rbp-98h]
  const char *v75; // [rsp+30h] [rbp-98h]
  char *v76; // [rsp+38h] [rbp-90h]
  _QWORD *v77; // [rsp+38h] [rbp-90h]
  char v78; // [rsp+4Eh] [rbp-7Ah] BYREF
  char v79; // [rsp+4Fh] [rbp-79h] BYREF
  __int64 v80; // [rsp+50h] [rbp-78h] BYREF
  __int64 *v81; // [rsp+58h] [rbp-70h]
  const void *v82; // [rsp+60h] [rbp-68h] BYREF
  char *v83; // [rsp+70h] [rbp-58h] BYREF
  __int128 v84; // [rsp+78h] [rbp-50h]
  unsigned __int64 v85; // [rsp+88h] [rbp-40h]

  v85 = __readfsqword(0x28u);
  v80 = 0;
  v81 = nullptr;
  v1 = *(__int64 **)(qword_2CCB598 + 1720);
  v2 = sub_4CF810(&v80, a1);
  if ( v2 )
    goto LABEL_2;
  if ( (_DWORD)v80 != 3 )
    sub_4C77E0();
  v4 = *v81;
  v71 = *v81 + 40 * v81[1];
  if ( *v81 == v71 )
    goto LABEL_2;
  while ( 2 )
  {
    s = (char *)haystack;
    if ( *(_QWORD *)(v4 + 8) )
      s = *(char **)v4;
    v83 = nullptr;
    v84 = 0;
    v5 = *(_DWORD *)(v4 + 24);
    if ( v5 == 2 )
    {
      v6 = *(_QWORD *)(v4 + 32);
      if ( !*(_QWORD *)(v6 + 8)
        || (v7 = *(const char **)v6) == nullptr
        || (v8 = strlen(*(const char **)v6), (v9 = v8) == 0) )
      {
        v69 = v1 + 24;
        goto LABEL_18;
      }
      v10 = v8 + 1;
      v83 = (char *)qvector_reserve(&v83, 0, v8 + 1, 1);
      *(_QWORD *)&v84 = v10;
      memmove(v83, v7, v9);
      v83[v9] = 0;
      v69 = v1 + 24;
      goto LABEL_15;
    }
    if ( v5 != 3 )
      goto LABEL_9;
    v40 = *(__int64 **)(v4 + 32);
    v41 = *v40;
    v42 = 5 * v40[1];
    if ( v41 == v41 + 8 * v42 )
      goto LABEL_9;
    v75 = nullptr;
    v43 = v41 + 8 * v42;
    v67 = nullptr;
    v70 = v4;
    v44 = nullptr;
    v45 = v41;
    do
    {
      if ( !*(_QWORD *)(v45 + 8) )
        goto LABEL_9;
      v46 = *(const char **)v45;
      if ( !strcmp(*(const char **)v45, "use") )
      {
        if ( *(_DWORD *)(v45 + 24) == 2 )
        {
          v58 = *(_QWORD *)(v45 + 32);
          v67 = (char *)haystack;
          if ( *(_QWORD *)(v58 + 8) )
            v67 = *(char **)v58;
          goto LABEL_70;
        }
        if ( !strcmp(v46, "ptn") )
          goto LABEL_9;
      }
      else if ( !strcmp(v46, "ptn") )
      {
        if ( *(_DWORD *)(v45 + 24) != 2 )
          goto LABEL_9;
        v64 = *(_QWORD *)(v45 + 32);
        v75 = haystack;
        if ( *(_QWORD *)(v64 + 8) )
          v75 = *(const char **)v64;
        goto LABEL_70;
      }
      if ( strcmp(v46, "rpl") || *(_DWORD *)(v45 + 24) != 2 )
        goto LABEL_9;
      v47 = *(_QWORD *)(v45 + 32);
      v44 = haystack;
      if ( *(_QWORD *)(v47 + 8) )
        v44 = *(const char **)v47;
LABEL_70:
      v45 += 40;
    }
    while ( v43 != v45 );
    v48 = v44;
    v4 = v70;
    if ( !v67 )
      goto LABEL_9;
    v49 = strlen(v67);
    v50 = v49;
    if ( !v49 )
    {
      v53 = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
      goto LABEL_76;
    }
    v51 = std::string::_Rep::_S_create(v49, 0, &v78);
    v52 = v51;
    v53 = (char *)(v51 + 24);
    if ( v50 == 1 )
      *(_BYTE *)(v51 + 24) = *v67;
    else
      v53 = (char *)memcpy((void *)(v51 + 24), v67, v50);
    if ( (_UNKNOWN *)v52 == &std::string::_Rep::_S_empty_rep_storage )
    {
LABEL_76:
      v82 = v53;
      v69 = v1 + 24;
      v54 = sub_4D4D80(v1 + 24, &v82);
    }
    else
    {
      *(_QWORD *)v52 = v50;
      *(_DWORD *)(v52 + 16) = 0;
      *(_BYTE *)(v52 + v50 + 24) = 0;
      v82 = v53;
      v69 = v1 + 24;
      v54 = sub_4D4D80(v1 + 24, &v82);
      if ( &_pthread_key_create )
      {
        v63 = _InterlockedExchangeAdd((volatile signed __int32 *)(v52 + 16), 0xFFFFFFFF);
      }
      else
      {
        v63 = *(_DWORD *)(v52 + 16);
        *(_DWORD *)(v52 + 16) = v63 - 1;
      }
      if ( v63 <= 0 )
      {
        v77 = v54;
        std::string::_Rep::_M_destroy(v52, &v79);
        v54 = v77;
      }
    }
    if ( !v54 )
      goto LABEL_9;
    v55 = (const void *)v54[2];
    if ( v55 )
    {
      v56 = strlen((const char *)v54[2]);
      v57 = v56;
      if ( v56 )
      {
        v61 = v83;
        v62 = (char *)(v56 + 1);
        if ( *((_QWORD *)&v84 + 1) < v56 + 1 )
        {
          v68 = (char *)(v56 + 1);
          v83 = (char *)qvector_reserve(&v83, v83, v62, 1);
          v62 = v68;
          v61 = v83;
        }
        *(_QWORD *)&v84 = v62;
        memmove(v61, v55, v57);
        v83[v57] = 0;
        if ( v75 && v48 )
          goto LABEL_82;
LABEL_15:
        if ( !(_QWORD)v84 )
          goto LABEL_18;
        v11 = v83;
        goto LABEL_19;
      }
    }
    *(_QWORD *)&v84 = 0;
    if ( v48 && v75 )
    {
LABEL_82:
      sub_4C9730((__int64)&v83, v75, v48);
      goto LABEL_15;
    }
LABEL_18:
    v11 = (char *)haystack;
LABEL_19:
    v82 = v69;
    v12 = (_QWORD *)operator new(0x20u);
    *v12 = 0;
    v13 = v12;
    if ( !s )
      std::__throw_logic_error("basic_string::_S_construct null not valid");
    v14 = strlen(s);
    v15 = v14;
    if ( v14 )
    {
      v16 = std::string::_Rep::_S_create(v14, 0, &v79);
      v17 = v16;
      v18 = (char *)(v16 + 24);
      if ( v15 == 1 )
      {
        *(_BYTE *)(v16 + 24) = *s;
      }
      else
      {
        v66 = (char *)v16;
        v19 = (char *)memcpy((void *)(v16 + 24), s, v15);
        v17 = (__int64)v66;
        v18 = v19;
      }
      if ( (_UNKNOWN *)v17 != &std::string::_Rep::_S_empty_rep_storage )
      {
        *(_DWORD *)(v17 + 16) = 0;
        *(_QWORD *)v17 = v15;
        *(_BYTE *)(v17 + v15 + 24) = 0;
      }
    }
    else
    {
      v18 = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
    }
    v13[1] = v18;
    v72 = v18;
    if ( !v11 )
      std::__throw_logic_error("basic_string::_S_construct null not valid");
    v20 = strlen(v11);
    v21 = v72;
    v22 = v20;
    if ( v20 )
    {
      v23 = std::string::_Rep::_S_create(v20, 0, &v79);
      v24 = (char *)(v23 + 24);
      v25 = v23;
      v26 = (char *)(v23 + 24);
      if ( v22 == 1 )
      {
        *(_BYTE *)(v23 + 24) = *v11;
      }
      else
      {
        v76 = (char *)(v23 + 24);
        v73 = v23;
        v27 = (char *)memcpy(v24, v11, v22);
        v26 = v76;
        v25 = v73;
        v24 = v27;
      }
      if ( (_UNKNOWN *)v25 == &std::string::_Rep::_S_empty_rep_storage )
      {
        v21 = (_QWORD *)v13[1];
        v26 = v24;
      }
      else
      {
        *(_DWORD *)(v25 + 16) = 0;
        *(_QWORD *)v25 = v22;
        *(_BYTE *)(v25 + v22 + 24) = 0;
        v21 = (_QWORD *)v13[1];
      }
    }
    else
    {
      v26 = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
    }
    v13[2] = v26;
    v28 = *(v21 - 3);
    if ( (unsigned __int64)v1[27] > 0x14 )
    {
      v35 = std::_Hash_bytes(v21, *(v21 - 3), 0xC70F6907);
      v36 = v1[25];
      v33 = v35;
      v34 = v35 % v36;
      v37 = sub_4C7E90(v1[24], v36, v35 % v36, (_QWORD *)v13[1], v35);
      if ( v37 && *v37 )
        goto LABEL_53;
LABEL_43:
      sub_4DB8F0((__int64)v69, v34, v33, v13, 1u);
      if ( (*(_DWORD *)&debug & 0x2000000) != 0 )
        sub_3879F0();
      if ( v83 )
      {
        *(_QWORD *)&v84 = 0;
        qfree(v83);
      }
      v4 += 40;
      if ( v71 == v4 )
        goto LABEL_2;
      continue;
    }
    break;
  }
  v29 = (_QWORD *)v1[26];
  if ( !v29 )
  {
LABEL_42:
    v33 = std::_Hash_bytes(v21, v28, 0xC70F6907);
    v34 = v33 % v1[25];
    goto LABEL_43;
  }
  v74 = v2;
  v30 = v4;
  v31 = v21;
LABEL_35:
  while ( 1 )
  {
    v32 = (_QWORD *)v29[1];
    if ( v28 == *(v32 - 3) )
      break;
    v29 = (_QWORD *)*v29;
    if ( !v29 )
    {
LABEL_41:
      v21 = v31;
      v4 = v30;
      v2 = v74;
      goto LABEL_42;
    }
  }
  if ( v28 )
  {
    while ( memcmp(v31, v32, v28) )
    {
      v29 = (_QWORD *)*v29;
      if ( !v29 )
        goto LABEL_41;
      v32 = (_QWORD *)v29[1];
      if ( v28 != *(v32 - 3) )
      {
        v29 = (_QWORD *)*v29;
        if ( v29 )
          goto LABEL_35;
        goto LABEL_41;
      }
    }
  }
LABEL_53:
  if ( v13 )
  {
    v38 = v13[2];
    if ( (_UNKNOWN *)(v38 - 24) != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        v60 = _InterlockedExchangeAdd((volatile signed __int32 *)(v38 - 8), 0xFFFFFFFF);
      }
      else
      {
        v60 = *(_DWORD *)(v38 - 8);
        *(_DWORD *)(v38 - 8) = v60 - 1;
      }
      if ( v60 <= 0 )
        std::string::_Rep::_M_destroy(v38 - 24, &v79);
    }
    v39 = v13[1];
    if ( (_UNKNOWN *)(v39 - 24) != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        v59 = _InterlockedExchangeAdd((volatile signed __int32 *)(v39 - 8), 0xFFFFFFFF);
      }
      else
      {
        v59 = *(_DWORD *)(v39 - 8);
        *(_DWORD *)(v39 - 8) = v59 - 1;
      }
      if ( v59 <= 0 )
        std::string::_Rep::_M_destroy(v39 - 24, &v79);
    }
    operator delete(v13, 0x20u);
  }
LABEL_9:
  v2 = (__int64)sub_4D0FB0((__int64)v1);
  if ( v83 )
  {
    *(_QWORD *)&v84 = 0;
    qfree(v83);
  }
LABEL_2:
  jvalue_t_clear(&v80);
  return v2;
}
