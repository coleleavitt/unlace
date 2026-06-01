/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44BF80
// Address: 0x000000000044BF80

//----- (000000000044BF80) ----------------------------------------------------
__int64 __fastcall sub_44BF80(__int64 a1, const char *a2, _BYTE *a3, unsigned int a4, char a5, bool *a6)
{
  __int64 *v8; // rbx
  size_t v9; // rax
  __int64 v10; // rbp
  size_t v11; // r12
  __int64 v12; // rax
  __int64 v13; // r14
  unsigned __int64 *v14; // rcx
  __int64 *v15; // r12
  char *v16; // rdi
  __int64 v17; // rbx
  __m128i *v18; // rax
  const __m128i *v19; // rbp
  __m128i *v20; // rbx
  unsigned __int64 v21; // rdx
  __m128i v22; // xmm0
  __int64 v23; // rax
  size_t v24; // r14
  _QWORD *v25; // rbp
  _QWORD *v26; // rcx
  _QWORD *v27; // r14
  _QWORD *v28; // rax
  unsigned __int64 v29; // rax
  _QWORD *v30; // rax
  size_t v31; // rax
  size_t v32; // r13
  void *v33; // rdi
  size_t v34; // r14
  int v35; // edx
  void *v36; // rax
  __m128i *v40; // [rsp+18h] [rbp-60h]
  char v41; // [rsp+2Eh] [rbp-4Ah] BYREF
  char v42; // [rsp+2Fh] [rbp-49h] BYREF
  const void *v43[9]; // [rsp+30h] [rbp-48h] BYREF

  v43[1] = (const void *)__readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 648) )
  {
    *(_BYTE *)(a1 + 648) = 0;
    v18 = (__m128i *)operator new(0x38u);
    v19 = *(const __m128i **)(a1 + 584);
    v18->m128i_i64[0] = 0;
    v20 = v18;
    v21 = v19->m128i_u64[1];
    v18[1].m128i_i64[0] = 0;
    v22 = _mm_loadu_si128(v19 + 2);
    v18->m128i_i64[1] = v21;
    v23 = v19[1].m128i_i64[1];
    v20[3].m128i_i64[0] = 0;
    v20[1].m128i_i64[1] = v23;
    v20[2] = v22;
    if ( v21 == 1 )
    {
      v40 = v20 + 3;
    }
    else
    {
      if ( v21 >> 60 )
      {
        if ( v21 >> 61 )
          sub_40B3F3();
        std::__throw_bad_alloc();
      }
      v24 = 8 * v21;
      v40 = (__m128i *)operator new(8 * v21);
      memset(v40, 0, v24);
    }
    v20->m128i_i64[0] = (__int64)v40;
    v25 = (_QWORD *)v19[1].m128i_i64[0];
    if ( v25 )
    {
      v26 = sub_448FA0((__int64)(v25 + 1));
      v26[6] = v25[6];
      v20[1].m128i_i64[0] = (__int64)v26;
      if ( v26 )
        *(_QWORD *)(v20->m128i_i64[0] + 8 * (v26[6] % v20->m128i_i64[1])) = v20 + 1;
      while ( 1 )
      {
        v25 = (_QWORD *)*v25;
        if ( !v25 )
          break;
        while ( 1 )
        {
          v27 = v26;
          v28 = sub_448FA0((__int64)(v25 + 1));
          *v27 = v28;
          v26 = v28;
          v29 = v25[6];
          v26[6] = v29;
          v30 = (_QWORD *)(v20->m128i_i64[0] + 8 * (v29 % v20->m128i_i64[1]));
          if ( *v30 )
            break;
          *v30 = v27;
          v25 = (_QWORD *)*v25;
          if ( !v25 )
            goto LABEL_27;
        }
      }
    }
LABEL_27:
    *(_QWORD *)(a1 + 584) = v20;
  }
  if ( !a2 || !*a2 || a4 > 0x7F )
    return sub_479EB0(0x26u);
  v8 = *(__int64 **)(a1 + 584);
  v9 = strlen(a2);
  v10 = v8[3];
  v11 = v9;
  if ( v9 )
  {
    v12 = std::string::_Rep::_S_create(v9, 0, &v41);
    v13 = v12;
    v14 = (unsigned __int64 *)(v12 + 24);
    if ( v11 == 1 )
      *(_BYTE *)(v12 + 24) = *a2;
    else
      v14 = (unsigned __int64 *)memcpy((void *)(v12 + 24), a2, v11);
    if ( (unsigned __int64 *)v13 != std::string::_Rep::_S_empty_rep_storage )
    {
      *(_DWORD *)(v13 + 16) = 0;
      *(_QWORD *)v13 = v11;
      *(_BYTE *)(v13 + v11 + 24) = 0;
    }
  }
  else
  {
    v14 = &std::string::_Rep::_S_empty_rep_storage[3];
  }
  v43[0] = v14;
  v15 = sub_44BC80(v8, v43);
  v16 = (char *)v43[0] - 24;
  if ( (char *)v43[0] - 24 != (char *)std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v35 = _InterlockedExchangeAdd((volatile signed __int32 *)v43[0] - 2, 0xFFFFFFFF);
    }
    else
    {
      v35 = *((_DWORD *)v43[0] - 2);
      *((_DWORD *)v43[0] - 2) = v35 - 1;
    }
    if ( v35 <= 0 )
      std::string::_Rep::_M_destroy(v16, &v42);
  }
  v17 = v8[3];
  if ( a3 && *a3 && (v31 = strlen(a3), (v32 = v31) != 0) )
  {
    v33 = (void *)*v15;
    v34 = v31 + 1;
    if ( v15[2] < v31 + 1 )
    {
      v36 = sub_481540((__int64)v15, (void *)*v15, v31 + 1, 1u);
      *v15 = (__int64)v36;
      v33 = v36;
    }
    v15[1] = v34;
    memmove(v33, a3, v32);
    *(_BYTE *)(*v15 + v32) = 0;
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
// 405510: using guessed type __int64 __fastcall std::string::_Rep::_M_destroy(_QWORD, _QWORD);
// 405D30: using guessed type __int64 __fastcall std::string::_Rep::_S_create(_QWORD, _QWORD, _QWORD);
// 4C96C0: using guessed type unsigned __int64 std::string::_Rep::_S_empty_rep_storage[4];
