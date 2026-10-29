/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44B7D0
// Address: 0x000000000044B7D0

//----- (000000000044B7D0) ----------------------------------------------------
unsigned __int64 __fastcall sub_44B7D0(__int64 a1, const char *a2)
{
  __int64 *v2; // r14
  size_t v3; // rax
  size_t v4; // r12
  __int64 v5; // rax
  __int64 v6; // r15
  unsigned __int64 *v7; // rcx
  __int64 *v8; // rbx
  __int64 *v9; // rbp
  unsigned __int64 v10; // rsi
  __int64 v11; // r9
  unsigned __int64 v12; // rtt
  __int64 **v13; // r10
  unsigned __int64 v14; // r8
  __int64 *v15; // rax
  __int64 *v16; // rcx
  __int64 v17; // rdi
  unsigned __int64 v18; // rdx
  void *v19; // rdi
  __int64 v20; // rax
  unsigned __int64 v22; // rdx
  int v23; // eax
  int v24; // edx
  char v25; // [rsp+Eh] [rbp-4Ah] BYREF
  char v26; // [rsp+Fh] [rbp-49h] BYREF
  unsigned __int64 *v27; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v28; // [rsp+18h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 648) )
  {
    if ( !byte_4C94E1 )
      sub_481AC0(303);
    BUG();
  }
  v2 = *(__int64 **)(a1 + 584);
  if ( !a2 )
    std::__throw_logic_error("basic_string::_S_construct null not valid");
  v3 = strlen(a2);
  v4 = v3;
  if ( !v3 )
  {
    v27 = &std::string::_Rep::_S_empty_rep_storage[3];
    goto LABEL_8;
  }
  v5 = std::string::_Rep::_S_create(v3, 0, &v25);
  v6 = v5;
  v7 = (unsigned __int64 *)(v5 + 24);
  if ( v4 == 1 )
    *(_BYTE *)(v5 + 24) = *a2;
  else
    v7 = (unsigned __int64 *)memcpy((void *)(v5 + 24), a2, v4);
  if ( (unsigned __int64 *)v6 == std::string::_Rep::_S_empty_rep_storage )
  {
    v27 = v7;
LABEL_8:
    v8 = sub_44AEC0(v2, (const void **)&v27);
    goto LABEL_9;
  }
  *(_QWORD *)v6 = v4;
  *(_DWORD *)(v6 + 16) = 0;
  *(_BYTE *)(v6 + v4 + 24) = 0;
  v27 = v7;
  v8 = sub_44AEC0(v2, (const void **)&v27);
  if ( &_pthread_key_create )
  {
    v23 = _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 16), 0xFFFFFFFF);
  }
  else
  {
    v23 = *(_DWORD *)(v6 + 16);
    *(_DWORD *)(v6 + 16) = v23 - 1;
  }
  if ( v23 <= 0 )
    std::string::_Rep::_M_destroy(v6, &v26);
LABEL_9:
  if ( v8 )
  {
    v9 = *(__int64 **)(a1 + 584);
    v10 = v9[1];
    v11 = *v9;
    v12 = v8[6];
    v13 = (__int64 **)(*v9 + 8 * (v12 % v10));
    v14 = v12 % v10;
    v15 = *v13;
    do
    {
      v16 = v15;
      v15 = (__int64 *)*v15;
    }
    while ( v15 != v8 );
    v17 = *v8;
    if ( *v13 == v16 )
    {
      if ( v17 )
      {
        v22 = *(_QWORD *)(v17 + 48) % v10;
        if ( v14 != v22 )
        {
          *(_QWORD *)(v11 + 8 * v22) = v16;
          *(_QWORD *)(*v9 + 8 * v14) = 0;
          v17 = *v8;
        }
      }
      else
      {
        *v13 = nullptr;
        v17 = *v8;
      }
    }
    else if ( v17 )
    {
      v18 = *(_QWORD *)(v17 + 48) % v10;
      if ( v14 != v18 )
      {
        *(_QWORD *)(v11 + 8 * v18) = v16;
        v17 = *v8;
      }
    }
    *v16 = v17;
    v19 = (void *)v8[2];
    if ( v19 )
    {
      v8[3] = 0;
      j__free(v19);
    }
    v20 = v8[1];
    if ( (unsigned __int64 *)(v20 - 24) != std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        v24 = _InterlockedExchangeAdd((volatile signed __int32 *)(v20 - 8), 0xFFFFFFFF);
      }
      else
      {
        v24 = *(_DWORD *)(v20 - 8);
        *(_DWORD *)(v20 - 8) = v24 - 1;
      }
      if ( v24 <= 0 )
        std::string::_Rep::_M_destroy(v20 - 24, &v27);
    }
    operator delete(v8, 0x38u);
    --v9[3];
  }
  return v28 - __readfsqword(0x28u);
}
// 405510: using guessed type __int64 __fastcall std::string::_Rep::_M_destroy(_QWORD, _QWORD);
// 405D30: using guessed type __int64 __fastcall std::string::_Rep::_S_create(_QWORD, _QWORD, _QWORD);
// 4C94E1: using guessed type char byte_4C94E1;
// 4C96C0: using guessed type unsigned __int64 std::string::_Rep::_S_empty_rep_storage[4];
