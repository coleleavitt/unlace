unsigned __int64 __fastcall sub_52DB80(__int64 a1, __int64 a2, __int64 a3, const char *a4, int a5)
{
  __m128i *v9; // rax
  _BYTE *v10; // rsi
  size_t v11; // rax
  size_t v12; // r8
  size_t v13; // r9
  size_t v14; // r10
  size_t v15; // rdx
  size_t v16; // r15
  char *v17; // rbp
  __int64 v18; // rdx
  char *v19; // r12
  void *v20; // rax
  size_t v22; // [rsp+0h] [rbp-78h]
  __int64 v23; // [rsp+0h] [rbp-78h]
  size_t v24; // [rsp+0h] [rbp-78h]
  size_t v25; // [rsp+8h] [rbp-70h]
  size_t v26; // [rsp+10h] [rbp-68h]
  size_t v27; // [rsp+18h] [rbp-60h]
  void *src; // [rsp+20h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+28h] [rbp-50h]
  unsigned __int64 v30; // [rsp+38h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  *(_OWORD *)n = 0;
  src = nullptr;
  v9 = (__m128i *)qvector_reserve(&src, 0, 21, 1);
  src = v9;
  n[0] = 21;
  *v9 = _mm_load_si128((const __m128i *)&xmmword_23A7B40);
  v10 = src;
  v9[1].m128i_i32[0] = 1601399666;
  v10[20] = 0;
  if ( a4 )
  {
    v22 = n[0];
    v11 = strlen(a4);
    v12 = v22;
    v13 = v11;
    v14 = v11;
    if ( v22 )
    {
      v12 = v22 - 1;
      v14 = v11 + v22 - 1;
    }
    v15 = v14 + 1;
    if ( n[1] < v14 + 1 )
    {
      v27 = v11;
      v26 = v14;
      v25 = v12;
      v24 = v14 + 1;
      src = (void *)qvector_reserve(&src, v10, v15, 1);
      v13 = v27;
      v10 = src;
      v14 = v26;
      v12 = v25;
      v15 = v24;
    }
    n[0] = v15;
    v10[v14] = 0;
    memmove((char *)src + v12, a4, v13);
  }
  v16 = n[0];
  if ( n[0] )
  {
    v17 = (char *)qalloc_or_throw(n[0]);
    memcpy(v17, src, v16);
    if ( src )
    {
      n[0] = 0;
      qfree(src);
    }
    *(_DWORD *)(a1 + 8) = a5;
    *(_QWORD *)a1 = &unk_2BFA3E8;
    *(_QWORD *)(a1 + 16) = 0;
    *(_OWORD *)(a1 + 24) = 0;
    if ( v17 )
    {
      v19 = v17;
      v16 = strlen(v17);
      v18 = v16 + 1;
LABEL_12:
      v23 = v18;
      v20 = (void *)qvector_reserve(a1 + 16, 0, v18, 1);
      *(_QWORD *)(a1 + 16) = v20;
      *(_QWORD *)(a1 + 24) = v23;
      memmove(v20, v17, v16);
      *(_BYTE *)(*(_QWORD *)(a1 + 16) + v16) = 0;
      if ( v19 )
        qfree(v19);
    }
  }
  else
  {
    if ( src )
      qfree(src);
    *(_DWORD *)(a1 + 8) = a5;
    v17 = (char *)haystack;
    *(_QWORD *)a1 = &unk_2BFA3E8;
    *(_QWORD *)(a1 + 16) = 0;
    *(_OWORD *)(a1 + 24) = 0;
    if ( haystack )
    {
      v18 = 1;
      v19 = nullptr;
      goto LABEL_12;
    }
  }
  *(_QWORD *)(a1 + 40) = a2;
  *(_QWORD *)a1 = &off_2B2DF18;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = a3;
  return v30 - __readfsqword(0x28u);
}
