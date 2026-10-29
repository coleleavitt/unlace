__int64 __fastcall sub_781B30(__int64 a1, const char *m128i_i8, _BYTE *a3, unsigned int a4, char a5, bool *a6)
{
  const char *v7; // r13
  __int64 *v9; // rbx
  size_t v10; // rax
  __int64 v11; // rbp
  size_t v12; // r12
  __int64 v13; // rax
  __int64 v14; // r14
  char *v15; // rcx
  __int64 *v16; // r12
  __int64 v17; // rbx
  __m128i *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  const __m128i *v21; // rbp
  __m128i *v22; // rbx
  unsigned __int64 v23; // rdx
  __m128i v24; // xmm0
  __int64 v25; // rax
  size_t v26; // r14
  _QWORD *v27; // rbp
  _QWORD *v28; // rcx
  _QWORD *v29; // r14
  _QWORD *v30; // rax
  unsigned __int64 v31; // rax
  _QWORD *v32; // rax
  unsigned __int64 v33; // rdx
  size_t v34; // rax
  size_t v35; // r13
  void *v36; // rdi
  size_t v37; // r14
  int v38; // edx
  __int64 v39; // rax
  __m128i *v43; // [rsp+18h] [rbp-60h]
  const void *v44[9]; // [rsp+30h] [rbp-48h] BYREF

  v7 = m128i_i8;
  v44[1] = (const void *)__readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 648) )
  {
    *(_BYTE *)(a1 + 648) = 0;
    v18 = (__m128i *)operator new(0x38u);
    v21 = *(const __m128i **)(a1 + 584);
    v18->m128i_i64[0] = 0;
    v22 = v18;
    v23 = v21->m128i_u64[1];
    v18[1].m128i_i64[0] = 0;
    v24 = _mm_loadu_si128(v21 + 2);
    v18->m128i_i64[1] = v23;
    v25 = v21[1].m128i_i64[1];
    v22[3].m128i_i64[0] = 0;
    v22[1].m128i_i64[1] = v25;
    v22[2] = v24;
    if ( v23 == 1 )
    {
      v43 = v22 + 3;
    }
    else
    {
      if ( v23 >> 60 )
      {
        v33 = v23 >> 61;
        if ( v33 )
          sub_2E883E(56, m128i_i8, v33, v19, v20);
        std::__throw_bad_alloc();
      }
      v26 = 8 * v23;
      m128i_i8 = nullptr;
      v43 = (__m128i *)operator new(8 * v23);
      memset(v43, 0, v26);
    }
    v22->m128i_i64[0] = (__int64)v43;
    v27 = (_QWORD *)v21[1].m128i_i64[0];
    if ( v27 )
    {
      v28 = sub_77E8B0((__int64)(v27 + 1), m128i_i8);
      v28[6] = v27[6];
      v22[1].m128i_i64[0] = (__int64)v28;
      if ( v28 )
      {
        m128i_i8 = v22[1].m128i_i8;
        *(_QWORD *)(v22->m128i_i64[0] + 8 * (v28[6] % v22->m128i_i64[1])) = v22 + 1;
      }
      while ( 1 )
      {
        v27 = (_QWORD *)*v27;
        if ( !v27 )
          break;
        while ( 1 )
        {
          v29 = v28;
          v30 = sub_77E8B0((__int64)(v27 + 1), m128i_i8);
          *v29 = v30;
          v28 = v30;
          v31 = v27[6];
          v28[6] = v31;
          v32 = (_QWORD *)(v22->m128i_i64[0] + 8 * (v31 % v22->m128i_i64[1]));
          if ( *v32 )
            break;
          *v32 = v29;
          v27 = (_QWORD *)*v27;
          if ( !v27 )
            goto LABEL_27;
        }
      }
    }
LABEL_27:
    *(_QWORD *)(a1 + 584) = v22;
  }
  if ( !v7 || !*v7 || a4 > 0x7F )
    return set_qerrno(38, m128i_i8);
  v9 = *(__int64 **)(a1 + 584);
  v10 = strlen(v7);
  v11 = v9[3];
  v12 = v10;
  if ( v10 )
  {
    v13 = std::string::_Rep::_S_create();
    v14 = v13;
    v15 = (char *)(v13 + 24);
    if ( v12 == 1 )
      *(_BYTE *)(v13 + 24) = *v7;
    else
      v15 = (char *)memcpy((void *)(v13 + 24), v7, v12);
    if ( (_UNKNOWN *)v14 != &std::string::_Rep::_S_empty_rep_storage )
    {
      *(_DWORD *)(v14 + 16) = 0;
      *(_QWORD *)v14 = v12;
      *(_BYTE *)(v14 + v12 + 24) = 0;
    }
  }
  else
  {
    v15 = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
  }
  v44[0] = v15;
  v16 = sub_781830(v9, v44);
  if ( (char *)v44[0] - 24 != (char *)&std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v38 = _InterlockedExchangeAdd((volatile signed __int32 *)v44[0] - 2, 0xFFFFFFFF);
    }
    else
    {
      v38 = *((_DWORD *)v44[0] - 2);
      *((_DWORD *)v44[0] - 2) = v38 - 1;
    }
    if ( v38 <= 0 )
      std::string::_Rep::_M_destroy();
  }
  v17 = v9[3];
  if ( a3 && *a3 && (v34 = strlen(a3), (v35 = v34) != 0) )
  {
    v36 = (void *)*v16;
    v37 = v34 + 1;
    if ( v16[2] < v34 + 1 )
    {
      v39 = qvector_reserve(v16, *v16, v34 + 1, 1);
      *v16 = v39;
      v36 = (void *)v39;
    }
    v16[1] = v37;
    memmove(v36, a3, v35);
    *(_BYTE *)(*v16 + v35) = 0;
  }
  else
  {
    v16[1] = 0;
  }
  *((_BYTE *)v16 + 24) = a4;
  *((_BYTE *)v16 + 25) = a5;
  if ( a6 )
    *a6 = v11 != v17;
  return 0;
}

