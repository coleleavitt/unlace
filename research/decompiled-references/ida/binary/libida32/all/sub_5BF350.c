__int64 __fastcall sub_5BF350(_QWORD *a1, __int64 a2, int a3, unsigned int a4)
{
  __int64 v7; // rdi
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rsi
  int v11; // ebp
  const char *v12; // rax
  const char *v13; // rbp
  size_t v14; // rax
  size_t v15; // r13
  unsigned int v16; // ebx
  void *v18; // rdi
  size_t v19; // r14
  __int64 v20; // rax
  __m128i v21; // [rsp+0h] [rbp-58h] BYREF
  void *ptr; // [rsp+10h] [rbp-48h] BYREF
  __int128 v23; // [rsp+18h] [rbp-40h]
  unsigned __int64 v24; // [rsp+28h] [rbp-30h]

  v24 = __readfsqword(0x28u);
  v23 = 0;
  ptr = nullptr;
  v7 = (unsigned int)sub_3B90A0(a1, a3);
  v8 = a4 << 16;
  if ( a4 >= 0x10000 )
    v8 = 0xFFFFFFFFLL;
  if ( netnode_qgetblob(v7, &ptr, 1, v8, 103) <= 0 )
  {
    v16 = 0;
  }
  else
  {
    v21 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)ptr, (__m128i)(unsigned __int64)((unsigned __int64)ptr + v23));
    *(_DWORD *)(a2 + 8) = unpack_dd(&v21) - 1;
    v9 = unpack_dd(&v21) - 1;
    v10 = v21.m128i_i64[1];
    v11 = v9 + a3;
    if ( v9 != -1 )
      v9 = v11;
    *(_DWORD *)(a2 + 20) = v9;
    v12 = (const char *)unpack_ds(&v21, v10, 0);
    v13 = v12;
    if ( v12 && (v14 = strlen(v12), (v15 = v14) != 0) )
    {
      v18 = *(void **)(a2 + 24);
      v19 = v14 + 1;
      if ( *(_QWORD *)(a2 + 40) < v14 + 1 )
      {
        v20 = qvector_reserve(a2 + 24, *(_QWORD *)(a2 + 24), v19, 1);
        *(_QWORD *)(a2 + 24) = v20;
        v18 = (void *)v20;
      }
      *(_QWORD *)(a2 + 32) = v19;
      memmove(v18, v13, v15);
      *(_BYTE *)(*(_QWORD *)(a2 + 24) + v15) = 0;
    }
    else
    {
      *(_QWORD *)(a2 + 32) = 0;
    }
    *(_DWORD *)(a2 + 12) = unpack_dd(&v21) - 1;
    *(_DWORD *)(a2 + 16) = unpack_dd(&v21);
    v16 = 1;
  }
  if ( ptr )
  {
    *(_QWORD *)&v23 = 0;
    qfree(ptr);
  }
  return v16;
}

