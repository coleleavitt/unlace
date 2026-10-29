unsigned __int64 __fastcall lex_undefine_macro_0(__int64 a1, const char *a2)
{
  __int64 *v2; // r14
  size_t v3; // r12
  __int64 v4; // rax
  __int64 v5; // r15
  void *v6; // rcx
  __int64 *v7; // rbx
  __int64 *v8; // rbp
  unsigned __int64 v9; // rsi
  __int64 v10; // r9
  unsigned __int64 v11; // rtt
  __int64 **v12; // r10
  unsigned __int64 v13; // r8
  __int64 *v14; // rax
  __int64 *v15; // rcx
  __int64 v16; // rdi
  unsigned __int64 v17; // rdx
  void *v18; // rdi
  __int64 v19; // rax
  unsigned __int64 v21; // rdx
  int v22; // eax
  int v23; // edx
  const void *v24; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v25; // [rsp+18h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 648) )
  {
    if ( !under_debugger )
      interr(303);
    BUG();
  }
  v2 = *(__int64 **)(a1 + 584);
  if ( !a2 )
    std::__throw_logic_error("basic_string::_S_construct null not valid");
  v3 = strlen(a2);
  if ( !v3 )
  {
    v24 = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
    goto LABEL_8;
  }
  v4 = std::string::_Rep::_S_create();
  v5 = v4;
  v6 = (void *)(v4 + 24);
  if ( v3 == 1 )
    *(_BYTE *)(v4 + 24) = *a2;
  else
    v6 = memcpy((void *)(v4 + 24), a2, v3);
  if ( (_UNKNOWN *)v5 == &std::string::_Rep::_S_empty_rep_storage )
  {
    v24 = v6;
LABEL_8:
    v7 = sub_780A60(v2, &v24);
    goto LABEL_9;
  }
  *(_QWORD *)v5 = v3;
  *(_DWORD *)(v5 + 16) = 0;
  *(_BYTE *)(v5 + v3 + 24) = 0;
  v24 = v6;
  v7 = sub_780A60(v2, &v24);
  if ( &_pthread_key_create )
  {
    v22 = _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 16), 0xFFFFFFFF);
  }
  else
  {
    v22 = *(_DWORD *)(v5 + 16);
    *(_DWORD *)(v5 + 16) = v22 - 1;
  }
  if ( v22 <= 0 )
    std::string::_Rep::_M_destroy();
LABEL_9:
  if ( v7 )
  {
    v8 = *(__int64 **)(a1 + 584);
    v9 = v8[1];
    v10 = *v8;
    v11 = v7[6];
    v12 = (__int64 **)(*v8 + 8 * (v11 % v9));
    v13 = v11 % v9;
    v14 = *v12;
    do
    {
      v15 = v14;
      v14 = (__int64 *)*v14;
    }
    while ( v14 != v7 );
    v16 = *v7;
    if ( *v12 == v15 )
    {
      if ( v16 )
      {
        v21 = *(_QWORD *)(v16 + 48) % v9;
        if ( v13 != v21 )
        {
          *(_QWORD *)(v10 + 8 * v21) = v15;
          *(_QWORD *)(*v8 + 8 * v13) = 0;
          v16 = *v7;
        }
      }
      else
      {
        *v12 = nullptr;
        v16 = *v7;
      }
    }
    else if ( v16 )
    {
      v17 = *(_QWORD *)(v16 + 48) % v9;
      if ( v13 != v17 )
      {
        *(_QWORD *)(v10 + 8 * v17) = v15;
        v16 = *v7;
      }
    }
    *v15 = v16;
    v18 = (void *)v7[2];
    if ( v18 )
    {
      v7[3] = 0;
      qfree(v18);
    }
    v19 = v7[1];
    if ( (_UNKNOWN *)(v19 - 24) != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        v23 = _InterlockedExchangeAdd((volatile signed __int32 *)(v19 - 8), 0xFFFFFFFF);
      }
      else
      {
        v23 = *(_DWORD *)(v19 - 8);
        *(_DWORD *)(v19 - 8) = v23 - 1;
      }
      if ( v23 <= 0 )
        std::string::_Rep::_M_destroy();
    }
    operator delete(v7, 0x38u);
    --v8[3];
  }
  return v25 - __readfsqword(0x28u);
}

