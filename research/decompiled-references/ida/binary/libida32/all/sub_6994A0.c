__int64 __fastcall sub_6994A0(__int64 *a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rdi
  int v9; // eax
  __int64 v10; // rsi
  __int64 v11; // rax
  void *v12; // rdi
  char *v13; // rbx
  size_t v14; // rax
  __int64 v15; // r14
  size_t v16; // rbp
  void *v17; // rdi
  __int64 v18; // rax
  void *v19; // rdx
  __m128i v20; // xmm0
  unsigned int v21; // ebx
  void *v23; // [rsp+0h] [rbp-68h] BYREF
  __int128 v24; // [rsp+8h] [rbp-60h]
  void *ptr; // [rsp+20h] [rbp-48h] BYREF
  __m128i v26; // [rsp+28h] [rbp-40h] BYREF
  unsigned __int64 v27; // [rsp+38h] [rbp-30h]

  v7 = *a1;
  v27 = __readfsqword(0x28u);
  v23 = nullptr;
  v24 = 0;
  ptr = nullptr;
  sub_6141A0(v7, 26, &ptr, 8u, a5);
  if ( a3 < (unsigned int)ptr || a3 >= HIDWORD(ptr) )
  {
    v12 = v23;
LABEL_13:
    v21 = 0;
    goto LABEL_14;
  }
  v9 = sub_3B90A0(a1, a3);
  v10 = *a1;
  LODWORD(ptr) = v9;
  v11 = sub_79BD30(&ptr, v10, &v23);
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
    ptr = nullptr;
    v26 = 0;
    v14 = strlen((const char *)v23 + 3);
    v15 = v14 + 1;
    v16 = v14;
    ptr = (void *)qvector_reserve(&ptr, 0, v14 + 1, 1);
    v26.m128i_i64[0] = v15;
    memmove(ptr, v13, v16);
    *((_BYTE *)ptr + v16) = 0;
    v18 = *(_QWORD *)(a2 + 16);
    v19 = ptr;
    v20 = _mm_loadu_si128(&v26);
    ptr = *(void **)a2;
    v17 = ptr;
    *(_QWORD *)a2 = v19;
    v26.m128i_i64[1] = v18;
    *(__m128i *)(a2 + 8) = v20;
    if ( v17 )
    {
      v26.m128i_i64[0] = 0;
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

