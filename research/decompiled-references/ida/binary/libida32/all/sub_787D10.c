__int64 __fastcall sub_787D10(__int64 a1, const char *a2)
{
  size_t v2; // rbx
  __int64 v3; // rax
  __int64 v4; // r13
  unsigned __int64 *v5; // rcx
  __int64 *v6; // rbx
  _QWORD *v7; // rax
  _QWORD *v8; // rbp
  size_t v9; // r13
  void *v10; // r12
  __int64 v11; // rax
  __int16 v12; // bp
  __int64 v13; // rsi
  __int64 v14; // rsi
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rsi
  __int64 v19; // rax
  int v20; // edx
  __int64 v21; // rax
  const void *v22[7]; // [rsp+10h] [rbp-38h] BYREF

  v22[1] = (const void *)__readfsqword(0x28u);
  if ( !a2 )
    std::__throw_logic_error("basic_string::_S_construct null not valid");
  v2 = strlen(a2);
  if ( v2 )
  {
    v3 = std::string::_Rep::_S_create();
    v4 = v3;
    v5 = (unsigned __int64 *)(v3 + 24);
    if ( v2 == 1 )
      *(_BYTE *)(v3 + 24) = *a2;
    else
      v5 = (unsigned __int64 *)memcpy((void *)(v3 + 24), a2, v2);
    if ( (unsigned __int64 *)v4 != std::string::_Rep::_S_empty_rep_storage )
    {
      *(_DWORD *)(v4 + 16) = 0;
      *(_QWORD *)v4 = v2;
      *(_BYTE *)(v4 + v2 + 24) = 0;
    }
  }
  else
  {
    v5 = &std::string::_Rep::_S_empty_rep_storage[3];
  }
  v22[0] = v5;
  v6 = sub_787AC0((__int64 *)(a1 + 592), v22);
  if ( (char *)v22[0] - 24 != (char *)std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v20 = _InterlockedExchangeAdd((volatile signed __int32 *)v22[0] - 2, 0xFFFFFFFF);
    }
    else
    {
      v20 = *((_DWORD *)v22[0] - 2);
      *((_DWORD *)v22[0] - 2) = v20 - 1;
    }
    if ( v20 <= 0 )
      std::string::_Rep::_M_destroy();
  }
  v7 = sub_780B30(a1, a2);
  v8 = v7;
  if ( v7 )
  {
    v9 = v7[1];
    v10 = nullptr;
    if ( v9 )
    {
      v10 = (void *)qalloc_or_throw(v7[1], a2);
      memcpy(v10, (const void *)*v8, v9);
    }
    v11 = v6[1];
    v12 = *((_WORD *)v8 + 12);
    v13 = *v6;
    if ( v6[2] < (unsigned __int64)(v11 + 1) )
    {
      v19 = qvector_reserve(v6, v13, v11 + 1, 32);
      *v6 = v19;
      v13 = v19;
      v11 = v6[1];
    }
    v14 = 32 * v11 + v13;
    *(_QWORD *)v14 = v10;
    *(_WORD *)(v14 + 24) = v12;
    *(__m128i *)(v14 + 8) = _mm_unpacklo_epi64((__m128i)v9, (__m128i)v9);
    ++v6[1];
  }
  else
  {
    v16 = v6[1];
    v17 = *v6;
    if ( v6[2] < (unsigned __int64)(v16 + 1) )
    {
      v21 = qvector_reserve(v6, v17, v16 + 1, 32);
      *v6 = v21;
      v17 = v21;
      v16 = v6[1];
    }
    v18 = 32 * v16 + v17;
    *(_QWORD *)v18 = 0;
    *(_WORD *)(v18 + 24) = 0;
    *(_OWORD *)(v18 + 8) = 0;
    ++v6[1];
  }
  return 0;
}

