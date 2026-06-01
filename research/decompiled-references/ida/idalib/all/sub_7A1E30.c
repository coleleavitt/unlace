__int64 __fastcall sub_7A1E30(__int64 a1, const char *a2, _BYTE *a3, unsigned int a4, char a5, bool *a6)
{
  __int64 *v8; // rbx
  size_t v9; // rax
  __int64 v10; // rbp
  size_t v11; // r12
  __int64 v12; // rax
  __int64 v13; // r14
  char *v14; // rcx
  __int64 *v15; // r12
  char *v16; // rdi
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
  char v44; // [rsp+2Eh] [rbp-4Ah] BYREF
  char v45; // [rsp+2Fh] [rbp-49h] BYREF
  const void *v46[9]; // [rsp+30h] [rbp-48h] BYREF

  v46[1] = (const void *)__readfsqword(0x28u);
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
          sub_2EBC5E(56, a2, v33, v19, v20);
        std::__throw_bad_alloc();
      }
      v26 = 8 * v23;
      v43 = (__m128i *)operator new(8 * v23);
      memset(v43, 0, v26);
    }
    v22->m128i_i64[0] = (__int64)v43;
    v27 = (_QWORD *)v21[1].m128i_i64[0];
    if ( v27 )
    {
      v28 = sub_79EBC0((__int64)(v27 + 1));
      v28[6] = v27[6];
      v22[1].m128i_i64[0] = (__int64)v28;
      if ( v28 )
        *(_QWORD *)(v22->m128i_i64[0] + 8 * (v28[6] % v22->m128i_i64[1])) = v22 + 1;
      while ( 1 )
      {
        v27 = (_QWORD *)*v27;
        if ( !v27 )
          break;
        while ( 1 )
        {
          v29 = v28;
          v30 = sub_79EBC0((__int64)(v27 + 1));
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
  if ( !a2 || !*a2 || a4 > 0x7F )
    return set_qerrno(38);
  v8 = *(__int64 **)(a1 + 584);
  v9 = strlen(a2);
  v10 = v8[3];
  v11 = v9;
  if ( v9 )
  {
    v12 = std::string::_Rep::_S_create(v9, 0, &v44);
    v13 = v12;
    v14 = (char *)(v12 + 24);
    if ( v11 == 1 )
      *(_BYTE *)(v12 + 24) = *a2;
    else
      v14 = (char *)memcpy((void *)(v12 + 24), a2, v11);
    if ( (_UNKNOWN *)v13 != &std::string::_Rep::_S_empty_rep_storage )
    {
      *(_DWORD *)(v13 + 16) = 0;
      *(_QWORD *)v13 = v11;
      *(_BYTE *)(v13 + v11 + 24) = 0;
    }
  }
  else
  {
    v14 = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
  }
  v46[0] = v14;
  v15 = sub_7A1B30(v8, v46);
  v16 = (char *)v46[0] - 24;
  if ( (char *)v46[0] - 24 != (char *)&std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v38 = _InterlockedExchangeAdd((volatile signed __int32 *)v46[0] - 2, 0xFFFFFFFF);
    }
    else
    {
      v38 = *((_DWORD *)v46[0] - 2);
      *((_DWORD *)v46[0] - 2) = v38 - 1;
    }
    if ( v38 <= 0 )
      std::string::_Rep::_M_destroy(v16, &v45);
  }
  v17 = v8[3];
  if ( a3 && *a3 && (v34 = strlen(a3), (v35 = v34) != 0) )
  {
    v36 = (void *)*v15;
    v37 = v34 + 1;
    if ( v15[2] < v34 + 1 )
    {
      v39 = qvector_reserve(v15, *v15, v34 + 1, 1);
      *v15 = v39;
      v36 = (void *)v39;
    }
    v15[1] = v37;
    memmove(v36, a3, v35);
    *(_BYTE *)(*v15 + v35) = 0;
  }
  else
  {
    v15[1] = 0;
  }
  *((_BYTE *)v15 + 24) = a4;
  *((_BYTE *)v15 + 25) = a5;
  if ( a6 )
    *a6 = v10 != v17;
  return 0;
}
