__int64 __fastcall sub_7A2240(_QWORD *a1, const char *a2)
{
  size_t v4; // rax
  size_t v5; // rbx
  __int64 v6; // rax
  unsigned __int64 *v7; // r15
  char *v8; // r14
  unsigned __int64 *v9; // r9
  _QWORD *v10; // rbx
  size_t v11; // rbp
  _QWORD *v12; // rsi
  int v13; // eax
  __int64 v15; // rax
  char v16; // r8
  unsigned int v17; // edi
  unsigned __int64 v18; // rsi
  char *v19; // rdx
  unsigned int v20; // ebp
  __int64 v21; // rax
  unsigned __int64 v22; // rsi
  __int64 v23; // r10
  unsigned __int64 v24; // r9
  _QWORD **v25; // rdx
  _QWORD *v26; // rdi
  _QWORD *v27; // rcx
  __int64 v28; // r8
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rax
  void *v32; // rdi
  unsigned __int64 v33; // rax
  _QWORD *v34; // rax
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rax
  _QWORD *v37; // rax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  unsigned __int64 *v41; // [rsp+8h] [rbp-50h]
  char v42; // [rsp+16h] [rbp-42h] BYREF
  char v43; // [rsp+17h] [rbp-41h] BYREF
  unsigned __int64 v44; // [rsp+18h] [rbp-40h]

  v44 = __readfsqword(0x28u);
  if ( !a2 )
    std::__throw_logic_error("basic_string::_S_construct null not valid");
  v4 = strlen(a2);
  v5 = v4;
  if ( v4 )
  {
    v6 = std::string::_Rep::_S_create(v4, 0, &v42);
    v7 = (unsigned __int64 *)v6;
    v8 = (char *)(v6 + 24);
    if ( v5 == 1 )
      *(_BYTE *)(v6 + 24) = *a2;
    else
      memcpy((void *)(v6 + 24), a2, v5);
    v9 = std::string::_Rep::_S_empty_rep_storage;
    if ( v7 != std::string::_Rep::_S_empty_rep_storage )
    {
      *((_DWORD *)v7 + 4) = 0;
      *v7 = v5;
      *((_BYTE *)v7 + v5 + 24) = 0;
    }
    if ( a1[77] > 0x14u )
    {
      v33 = std::_Hash_bytes(v8, *v7, 0xC70F6907);
      v34 = sub_79ECC0(a1[74], a1[75], v33 % a1[75], v8, v33);
      v9 = std::string::_Rep::_S_empty_rep_storage;
      if ( v34 )
      {
        v10 = (_QWORD *)*v34;
        if ( v7 == std::string::_Rep::_S_empty_rep_storage )
          goto LABEL_45;
        if ( !&_pthread_key_create )
        {
          v38 = *((_DWORD *)v7 + 4);
          *((_DWORD *)v7 + 4) = v38 - 1;
LABEL_54:
          if ( v38 > 0 )
            goto LABEL_45;
          goto LABEL_55;
        }
LABEL_53:
        v38 = _InterlockedExchangeAdd((volatile signed __int32 *)v8 - 2, 0xFFFFFFFF);
        goto LABEL_54;
      }
    }
    else
    {
      v10 = (_QWORD *)a1[76];
      if ( v10 )
        goto LABEL_9;
    }
LABEL_17:
    if ( v7 == v9 )
      return set_qerrno(1509);
    if ( !&_pthread_key_create )
    {
      v40 = *((_DWORD *)v8 - 2);
      *((_DWORD *)v8 - 2) = v40 - 1;
      if ( v40 <= 0 )
        std::string::_Rep::_M_destroy(v7, &v43);
      return set_qerrno(1509);
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v8 - 2, 0xFFFFFFFF) > 0 )
      return set_qerrno(1509);
    v10 = nullptr;
    goto LABEL_55;
  }
  if ( a1[77] > 0x14u )
  {
    v8 = (char *)&std::string::_Rep::_S_empty_rep_storage[3];
    v36 = std::_Hash_bytes(
            &std::string::_Rep::_S_empty_rep_storage[3],
            std::string::_Rep::_S_empty_rep_storage[0],
            0xC70F6907);
    v37 = sub_79ECC0(a1[74], a1[75], v36 % a1[75], &std::string::_Rep::_S_empty_rep_storage[3], v36);
    v9 = std::string::_Rep::_S_empty_rep_storage;
    if ( v37 )
    {
      v10 = (_QWORD *)*v37;
      goto LABEL_45;
    }
    v7 = std::string::_Rep::_S_empty_rep_storage;
    goto LABEL_17;
  }
  v10 = (_QWORD *)a1[76];
  if ( !v10 )
    return set_qerrno(1509);
  v9 = std::string::_Rep::_S_empty_rep_storage;
  v8 = (char *)&std::string::_Rep::_S_empty_rep_storage[3];
  v7 = std::string::_Rep::_S_empty_rep_storage;
LABEL_9:
  v11 = *((_QWORD *)v8 - 3);
LABEL_11:
  while ( 1 )
  {
    v12 = (_QWORD *)v10[1];
    if ( v11 == *(v12 - 3) )
      break;
    v10 = (_QWORD *)*v10;
    if ( !v10 )
      goto LABEL_17;
  }
  if ( v11 )
  {
    while ( 1 )
    {
      v41 = v9;
      v13 = memcmp(v8, v12, v11);
      v9 = v41;
      if ( !v13 )
        break;
      v10 = (_QWORD *)*v10;
      if ( !v10 )
        goto LABEL_17;
      v12 = (_QWORD *)v10[1];
      if ( *(v12 - 3) != v11 )
      {
        v10 = (_QWORD *)*v10;
        if ( v10 )
          goto LABEL_11;
        goto LABEL_17;
      }
    }
  }
  if ( v7 != v9 )
  {
    if ( &_pthread_key_create )
      goto LABEL_53;
    v39 = *((_DWORD *)v8 - 2);
    *((_DWORD *)v8 - 2) = v39 - 1;
    if ( v39 > 0 )
      goto LABEL_24;
LABEL_55:
    std::string::_Rep::_M_destroy(v7, &v43);
LABEL_45:
    if ( v10 )
      goto LABEL_24;
    return set_qerrno(1509);
  }
LABEL_24:
  v15 = v10[2] + 32LL * v10[3] - 32;
  v16 = *(_BYTE *)(v15 + 25);
  v17 = *(unsigned __int8 *)(v15 + 24);
  v18 = *(_QWORD *)(v15 + 8);
  if ( v18 > 1 )
  {
LABEL_25:
    v19 = *(char **)v15;
LABEL_26:
    v20 = sub_7A1E30((__int64)a1, a2, v19, v17, v16, nullptr);
    goto LABEL_27;
  }
  if ( __PAIR16__(v16, v17) )
  {
    v17 = *(unsigned __int8 *)(v15 + 24);
    v16 = *(_BYTE *)(v15 + 25);
    v19 = (char *)haystack;
    if ( !v18 )
      goto LABEL_26;
    goto LABEL_25;
  }
  v20 = 0;
  lex_undefine_macro_0((__int64)a1, a2);
LABEL_27:
  v21 = v10[3];
  if ( !v21 )
    goto LABEL_28;
  v30 = v21 - 1;
  v10[3] = v30;
  v31 = v10[2] + 32 * v30;
  v32 = *(void **)v31;
  if ( *(_QWORD *)v31 )
  {
    *(_QWORD *)(v31 + 8) = 0;
    qfree(v32);
  }
  if ( !v10[3] )
  {
LABEL_28:
    v22 = a1[75];
    v23 = a1[74];
    v24 = v10[5] % v22;
    v25 = (_QWORD **)(v23 + 8 * v24);
    v26 = *v25;
    do
    {
      v27 = v26;
      v26 = (_QWORD *)*v26;
    }
    while ( v10 != v26 );
    v28 = *v26;
    if ( *v25 == v27 )
    {
      if ( v28 )
      {
        v35 = *(_QWORD *)(v28 + 40) % v22;
        if ( v24 != v35 )
        {
          *(_QWORD *)(v23 + 8 * v35) = v27;
          *(_QWORD *)(a1[74] + 8 * v24) = 0;
          v28 = *v26;
        }
      }
      else
      {
        *v25 = nullptr;
        v28 = *v26;
      }
    }
    else if ( v28 )
    {
      v29 = *(_QWORD *)(v28 + 40) % v22;
      if ( v24 != v29 )
      {
        *(_QWORD *)(v23 + 8 * v29) = v27;
        v28 = *v26;
      }
    }
    *v27 = v28;
    sub_79EE70(v26);
    --a1[77];
  }
  return v20;
}
