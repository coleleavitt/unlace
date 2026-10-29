__int64 __fastcall sub_5DAE70(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned __int64 v8; // rdi
  __int64 v9; // rax
  char *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rax
  const char *v13; // rax
  const char *v14; // rbp
  size_t v15; // rax
  size_t v16; // r12
  unsigned int v17; // ebx
  void *v19; // rdi
  size_t v20; // r14
  __int64 v21; // rax
  __m128i v22; // [rsp+0h] [rbp-58h] BYREF
  void *ptr; // [rsp+10h] [rbp-48h] BYREF
  __int128 v24; // [rsp+18h] [rbp-40h]
  unsigned __int64 v25; // [rsp+28h] [rbp-30h]

  v25 = __readfsqword(0x28u);
  v24 = 0;
  ptr = nullptr;
  v8 = sub_3BDD60(a1, a3);
  v9 = -1;
  if ( a4 < (unsigned int)&stru_10000 )
    v9 = a4 << 16;
  if ( netnode_qgetblob(v8, &ptr, 1, v9, 103) <= 0 )
  {
    v17 = 0;
    goto LABEL_11;
  }
  v10 = (char *)ptr + v24;
  v22 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)ptr, (__m128i)(unsigned __int64)((unsigned __int64)ptr + v24));
  *(_DWORD *)(a2 + 8) = unpack_dd(&v22) - 1;
  if ( !(unsigned __int8)is_cvt64(&v22, v10, v11) )
  {
    v12 = unpack_dq(&v22) - 1;
    *(_QWORD *)(a2 + 24) = v12;
    if ( v12 == -1 )
      goto LABEL_7;
    goto LABEL_6;
  }
  v12 = (unsigned int)unpack_dd(&v22) - 1;
  if ( v12 != 0xFFFFFFFFLL )
  {
    *(_QWORD *)(a2 + 24) = v12;
LABEL_6:
    *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1[3] + 16LL) & (v12 + a3);
    goto LABEL_7;
  }
  *(_QWORD *)(a2 + 24) = -1;
LABEL_7:
  v13 = (const char *)unpack_ds(&v22, v22.m128i_i64[1], 0);
  v14 = v13;
  if ( v13 && (v15 = strlen(v13), (v16 = v15) != 0) )
  {
    v19 = *(void **)(a2 + 32);
    v20 = v15 + 1;
    if ( *(_QWORD *)(a2 + 48) < v15 + 1 )
    {
      v21 = qvector_reserve(a2 + 32, *(_QWORD *)(a2 + 32), v20, 1);
      *(_QWORD *)(a2 + 32) = v21;
      v19 = (void *)v21;
    }
    *(_QWORD *)(a2 + 40) = v20;
    memmove(v19, v14, v16);
    *(_BYTE *)(*(_QWORD *)(a2 + 32) + v16) = 0;
  }
  else
  {
    *(_QWORD *)(a2 + 40) = 0;
  }
  *(_DWORD *)(a2 + 12) = unpack_dd(&v22) - 1;
  *(_DWORD *)(a2 + 16) = unpack_dd(&v22);
  v17 = 1;
LABEL_11:
  if ( ptr )
  {
    *(_QWORD *)&v24 = 0;
    qfree(ptr);
  }
  return v17;
}
