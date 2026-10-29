__int64 __fastcall sub_6B9E00(__int64 *a1, __int64 a2, void *a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rdi
  void *v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rax
  void *v12; // rdi
  char *v13; // rbx
  size_t v14; // rax
  void *v15; // r14
  size_t v16; // rbp
  void *v17; // rdi
  void *v18; // rax
  void *v19; // rdx
  __m128i v20; // xmm0
  unsigned int v21; // ebx
  void *v23; // [rsp+0h] [rbp-68h] BYREF
  __int128 v24; // [rsp+8h] [rbp-60h]
  void *ptr[9]; // [rsp+20h] [rbp-48h] BYREF

  v7 = *a1;
  ptr[3] = (void *)__readfsqword(0x28u);
  v23 = nullptr;
  v24 = 0;
  *(_OWORD *)ptr = 0;
  sub_630CA0(v7, 26, ptr, 0x10u, a5);
  if ( a3 < ptr[0] || a3 >= ptr[1] )
  {
    v12 = v23;
LABEL_13:
    v21 = 0;
    goto LABEL_14;
  }
  v9 = (void *)sub_3BDD60(a1, (__int64)a3);
  v10 = *a1;
  ptr[0] = v9;
  v11 = sub_7BF130(ptr, v10, &v23);
  v12 = v23;
  if ( v11 <= 0
    || (unsigned __int64)v24 <= 3
    || *(_BYTE *)v23 != 36
    || *((_BYTE *)v23 + 1) != 36
    || *((_BYTE *)v23 + 2) != 32 )
  {
    goto LABEL_13;
  }
  if ( a2 )
  {
    v13 = (char *)v23 + 3;
    memset(ptr, 0, 24);
    v14 = strlen((const char *)v23 + 3);
    v15 = (void *)(v14 + 1);
    v16 = v14;
    ptr[0] = (void *)qvector_reserve(ptr, 0, v14 + 1, 1);
    ptr[1] = v15;
    memmove(ptr[0], v13, v16);
    *((_BYTE *)ptr[0] + v16) = 0;
    v18 = *(void **)(a2 + 16);
    v19 = ptr[0];
    v20 = _mm_loadu_si128((const __m128i *)&ptr[1]);
    ptr[0] = *(void **)a2;
    v17 = ptr[0];
    *(_QWORD *)a2 = v19;
    ptr[2] = v18;
    *(__m128i *)(a2 + 8) = v20;
    if ( v17 )
    {
      ptr[1] = nullptr;
      qfree(v17);
    }
    v12 = v23;
    v21 = 1;
  }
  else
  {
    v21 = 1;
  }
LABEL_14:
  if ( v12 )
  {
    *(_QWORD *)&v24 = 0;
    qfree(v12);
  }
  return v21;
}
