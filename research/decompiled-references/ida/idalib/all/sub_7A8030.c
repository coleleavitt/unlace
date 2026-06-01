__int64 __fastcall sub_7A8030(__int64 a1, const char *a2)
{
  size_t v3; // rax
  size_t v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r13
  unsigned __int64 *v7; // rcx
  __int64 *v8; // rbx
  char *v9; // rdi
  _QWORD *v10; // rax
  _QWORD *v11; // rbp
  size_t v12; // r13
  void *v13; // r12
  __int64 v14; // rax
  __int16 v15; // bp
  __int64 v16; // rsi
  __int64 v17; // rsi
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rsi
  __int64 v22; // rax
  int v23; // edx
  __int64 v24; // rax
  char v25; // [rsp+Eh] [rbp-3Ah] BYREF
  char v26; // [rsp+Fh] [rbp-39h] BYREF
  const void *v27[7]; // [rsp+10h] [rbp-38h] BYREF

  v27[1] = (const void *)__readfsqword(0x28u);
  if ( !a2 )
    std::__throw_logic_error("basic_string::_S_construct null not valid");
  v3 = strlen(a2);
  v4 = v3;
  if ( v3 )
  {
    v5 = std::string::_Rep::_S_create(v3, 0, &v25);
    v6 = v5;
    v7 = (unsigned __int64 *)(v5 + 24);
    if ( v4 == 1 )
      *(_BYTE *)(v5 + 24) = *a2;
    else
      v7 = (unsigned __int64 *)memcpy((void *)(v5 + 24), a2, v4);
    if ( (unsigned __int64 *)v6 != std::string::_Rep::_S_empty_rep_storage )
    {
      *(_DWORD *)(v6 + 16) = 0;
      *(_QWORD *)v6 = v4;
      *(_BYTE *)(v6 + v4 + 24) = 0;
    }
  }
  else
  {
    v7 = &std::string::_Rep::_S_empty_rep_storage[3];
  }
  v27[0] = v7;
  v8 = sub_7A7DE0((__int64 *)(a1 + 592), v27);
  v9 = (char *)v27[0] - 24;
  if ( (char *)v27[0] - 24 != (char *)std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v23 = _InterlockedExchangeAdd((volatile signed __int32 *)v27[0] - 2, 0xFFFFFFFF);
    }
    else
    {
      v23 = *((_DWORD *)v27[0] - 2);
      *((_DWORD *)v27[0] - 2) = v23 - 1;
    }
    if ( v23 <= 0 )
      std::string::_Rep::_M_destroy(v9, &v26);
  }
  v10 = sub_7A0E30(a1, a2);
  v11 = v10;
  if ( v10 )
  {
    v12 = v10[1];
    v13 = nullptr;
    if ( v12 )
    {
      v13 = (void *)qalloc_or_throw(v10[1]);
      memcpy(v13, (const void *)*v11, v12);
    }
    v14 = v8[1];
    v15 = *((_WORD *)v11 + 12);
    v16 = *v8;
    if ( v8[2] < (unsigned __int64)(v14 + 1) )
    {
      v22 = qvector_reserve(v8, v16, v14 + 1, 32);
      *v8 = v22;
      v16 = v22;
      v14 = v8[1];
    }
    v17 = 32 * v14 + v16;
    *(_QWORD *)v17 = v13;
    *(_WORD *)(v17 + 24) = v15;
    *(__m128i *)(v17 + 8) = _mm_unpacklo_epi64((__m128i)v12, (__m128i)v12);
    ++v8[1];
  }
  else
  {
    v19 = v8[1];
    v20 = *v8;
    if ( v8[2] < (unsigned __int64)(v19 + 1) )
    {
      v24 = qvector_reserve(v8, v20, v19 + 1, 32);
      *v8 = v24;
      v20 = v24;
      v19 = v8[1];
    }
    v21 = 32 * v19 + v20;
    *(_QWORD *)v21 = 0;
    *(_WORD *)(v21 + 24) = 0;
    *(_OWORD *)(v21 + 8) = 0;
    ++v8[1];
  }
  return 0;
}
