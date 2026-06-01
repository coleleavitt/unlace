__int64 __fastcall sub_781F40(__int64 *a1, unsigned __int64 a2)
{
  _BYTE *v3; // r13
  size_t v4; // rbx
  __int64 v5; // rax
  unsigned __int64 *v6; // r15
  char *v7; // r14
  unsigned __int64 *v8; // r9
  _QWORD *v9; // rbx
  size_t v10; // rbp
  int v11; // eax
  __int64 v13; // rax
  char v14; // r8
  unsigned int v15; // edi
  unsigned __int64 v16; // rsi
  char *v17; // rdx
  unsigned int v18; // ebp
  __int64 v19; // rax
  unsigned __int64 v20; // rsi
  __int64 v21; // r10
  unsigned __int64 v22; // r9
  _QWORD **v23; // rdx
  _QWORD *v24; // rdi
  _QWORD *v25; // rcx
  __int64 v26; // r8
  unsigned __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rax
  void *v30; // rdi
  unsigned __int64 v31; // rax
  _QWORD *v32; // rax
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rax
  _QWORD *v35; // rax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  unsigned __int64 *v39; // [rsp+8h] [rbp-50h]
  char v40; // [rsp+17h] [rbp-41h] BYREF
  unsigned __int64 v41; // [rsp+18h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  if ( !a2 )
    std::__throw_logic_error("basic_string::_S_construct null not valid");
  v3 = (_BYTE *)a2;
  v4 = strlen((const char *)a2);
  if ( v4 )
  {
    a2 = 0;
    v5 = std::string::_Rep::_S_create();
    v6 = (unsigned __int64 *)v5;
    v7 = (char *)(v5 + 24);
    if ( v4 == 1 )
    {
      *(_BYTE *)(v5 + 24) = *v3;
    }
    else
    {
      a2 = (unsigned __int64)v3;
      memcpy((void *)(v5 + 24), v3, v4);
    }
    v8 = std::string::_Rep::_S_empty_rep_storage;
    if ( v6 != std::string::_Rep::_S_empty_rep_storage )
    {
      *((_DWORD *)v6 + 4) = 0;
      *v6 = v4;
      *((_BYTE *)v6 + v4 + 24) = 0;
    }
    if ( (unsigned __int64)a1[77] > 0x14 )
    {
      v31 = std::_Hash_bytes(v7, *v6, 0xC70F6907);
      a2 = a1[75];
      v32 = sub_77E9B0(a1[74], a2, v31 % a2, v7, v31);
      v8 = std::string::_Rep::_S_empty_rep_storage;
      if ( v32 )
      {
        v9 = (_QWORD *)*v32;
        if ( v6 == std::string::_Rep::_S_empty_rep_storage )
          goto LABEL_45;
        if ( !&_pthread_key_create )
        {
          v36 = *((_DWORD *)v6 + 4);
          *((_DWORD *)v6 + 4) = v36 - 1;
LABEL_54:
          if ( v36 > 0 )
            goto LABEL_45;
          goto LABEL_55;
        }
LABEL_53:
        v36 = _InterlockedExchangeAdd((volatile signed __int32 *)v7 - 2, 0xFFFFFFFF);
        goto LABEL_54;
      }
    }
    else
    {
      v9 = (_QWORD *)a1[76];
      if ( v9 )
        goto LABEL_9;
    }
LABEL_17:
    if ( v6 == v8 )
      return set_qerrno(1509, a2);
    if ( !&_pthread_key_create )
    {
      v38 = *((_DWORD *)v7 - 2);
      *((_DWORD *)v7 - 2) = v38 - 1;
      if ( v38 <= 0 )
      {
        a2 = (unsigned __int64)&v40;
        std::string::_Rep::_M_destroy();
      }
      return set_qerrno(1509, a2);
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v7 - 2, 0xFFFFFFFF) > 0 )
      return set_qerrno(1509, a2);
    v9 = nullptr;
    goto LABEL_55;
  }
  if ( (unsigned __int64)a1[77] > 0x14 )
  {
    v7 = (char *)&std::string::_Rep::_S_empty_rep_storage[3];
    v34 = std::_Hash_bytes(
            &std::string::_Rep::_S_empty_rep_storage[3],
            std::string::_Rep::_S_empty_rep_storage[0],
            0xC70F6907);
    a2 = a1[75];
    v35 = sub_77E9B0(a1[74], a2, v34 % a2, &std::string::_Rep::_S_empty_rep_storage[3], v34);
    v8 = std::string::_Rep::_S_empty_rep_storage;
    if ( v35 )
    {
      v9 = (_QWORD *)*v35;
      goto LABEL_45;
    }
    v6 = std::string::_Rep::_S_empty_rep_storage;
    goto LABEL_17;
  }
  v9 = (_QWORD *)a1[76];
  if ( !v9 )
    return set_qerrno(1509, a2);
  v8 = std::string::_Rep::_S_empty_rep_storage;
  v7 = (char *)&std::string::_Rep::_S_empty_rep_storage[3];
  v6 = std::string::_Rep::_S_empty_rep_storage;
LABEL_9:
  v10 = *((_QWORD *)v7 - 3);
LABEL_11:
  while ( 1 )
  {
    a2 = v9[1];
    if ( v10 == *(_QWORD *)(a2 - 24) )
      break;
    v9 = (_QWORD *)*v9;
    if ( !v9 )
      goto LABEL_17;
  }
  if ( v10 )
  {
    while ( 1 )
    {
      v39 = v8;
      v11 = memcmp(v7, (const void *)a2, v10);
      v8 = v39;
      if ( !v11 )
        break;
      v9 = (_QWORD *)*v9;
      if ( !v9 )
        goto LABEL_17;
      a2 = v9[1];
      if ( *(_QWORD *)(a2 - 24) != v10 )
      {
        v9 = (_QWORD *)*v9;
        if ( v9 )
          goto LABEL_11;
        goto LABEL_17;
      }
    }
  }
  if ( v6 != v8 )
  {
    if ( &_pthread_key_create )
      goto LABEL_53;
    v37 = *((_DWORD *)v7 - 2);
    *((_DWORD *)v7 - 2) = v37 - 1;
    if ( v37 > 0 )
      goto LABEL_24;
LABEL_55:
    a2 = (unsigned __int64)&v40;
    std::string::_Rep::_M_destroy();
LABEL_45:
    if ( v9 )
      goto LABEL_24;
    return set_qerrno(1509, a2);
  }
LABEL_24:
  v13 = v9[2] + 32LL * v9[3] - 32;
  v14 = *(_BYTE *)(v13 + 25);
  v15 = *(unsigned __int8 *)(v13 + 24);
  v16 = *(_QWORD *)(v13 + 8);
  if ( v16 > 1 )
  {
LABEL_25:
    v17 = *(char **)v13;
LABEL_26:
    v18 = sub_781B30((__int64)a1, v3, v17, v15, v14, nullptr);
    goto LABEL_27;
  }
  if ( __PAIR16__(v14, v15) )
  {
    v15 = *(unsigned __int8 *)(v13 + 24);
    v14 = *(_BYTE *)(v13 + 25);
    v17 = (char *)haystack;
    if ( !v16 )
      goto LABEL_26;
    goto LABEL_25;
  }
  v18 = 0;
  lex_undefine_macro_0((__int64)a1, v3);
LABEL_27:
  v19 = v9[3];
  if ( !v19 )
    goto LABEL_28;
  v28 = v19 - 1;
  v9[3] = v28;
  v29 = v9[2] + 32 * v28;
  v30 = *(void **)v29;
  if ( *(_QWORD *)v29 )
  {
    *(_QWORD *)(v29 + 8) = 0;
    qfree(v30);
  }
  if ( !v9[3] )
  {
LABEL_28:
    v20 = a1[75];
    v21 = a1[74];
    v22 = v9[5] % v20;
    v23 = (_QWORD **)(v21 + 8 * v22);
    v24 = *v23;
    do
    {
      v25 = v24;
      v24 = (_QWORD *)*v24;
    }
    while ( v9 != v24 );
    v26 = *v24;
    if ( *v23 == v25 )
    {
      if ( v26 )
      {
        v33 = *(_QWORD *)(v26 + 40) % v20;
        if ( v22 != v33 )
        {
          *(_QWORD *)(v21 + 8 * v33) = v25;
          *(_QWORD *)(a1[74] + 8 * v22) = 0;
          v26 = *v24;
        }
      }
      else
      {
        *v23 = nullptr;
        v26 = *v24;
      }
    }
    else if ( v26 )
    {
      v27 = *(_QWORD *)(v26 + 40) % v20;
      if ( v22 != v27 )
      {
        *(_QWORD *)(v21 + 8 * v27) = v25;
        v26 = *v24;
      }
    }
    *v25 = v26;
    sub_77EB60(v24);
    --a1[77];
  }
  return v18;
}

