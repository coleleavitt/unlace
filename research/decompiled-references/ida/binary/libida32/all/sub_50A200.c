__int64 __fastcall sub_50A200(__int64 **a1, const char *a2, __int64 a3)
{
  const char *v3; // r14
  __int64 *v5; // rbx
  __int64 v7; // rbp
  size_t v8; // r12
  _QWORD *v9; // rbp
  __int64 v10; // r12
  __int64 v11; // rdx
  int v12; // eax
  char v13; // r15
  __int64 v14; // rsi
  __int64 v15; // rdx
  char *v16; // r9
  void *v17; // rax
  __m128i v18; // xmm0
  void *v19; // rax
  __m128i v20; // xmm0
  int v21; // eax
  __int64 (__fastcall *v22)(); // rax
  __int64 *v23; // rbx
  _QWORD *v24; // rdi
  __int64 v25; // rsi
  _QWORD *v27; // rdi
  int v28; // ebp
  __int64 v29; // rsi
  __int64 v30; // rax
  void *v31; // rax
  const void *v32; // rsi
  void *v33; // rax
  int v34; // eax
  _QWORD *v35; // rdi
  int v36; // ebp
  __int64 n; // [rsp+8h] [rbp-90h]
  void *ptr; // [rsp+10h] [rbp-88h] BYREF
  __m128i v39; // [rsp+18h] [rbp-80h] BYREF
  __int64 v40; // [rsp+28h] [rbp-70h]
  void *v41; // [rsp+30h] [rbp-68h]
  __m128i v42; // [rsp+38h] [rbp-60h] BYREF
  int v43; // [rsp+48h] [rbp-50h]
  char v44; // [rsp+4Ch] [rbp-4Ch]
  unsigned __int64 v45; // [rsp+58h] [rbp-40h]

  v3 = a2;
  v5 = a1[1];
  v45 = __readfsqword(0x28u);
  if ( *((_DWORD *)v5 + 16) == 3 )
  {
    v35 = v5 + 1;
    v36 = sub_5096E0(v5[2], *v5);
    if ( *((_DWORD *)v5 + 2) == -1 )
    {
      sub_79BC40(v35, *v5, "$ scriptsnippets", 0);
      v35 = v5 + 1;
    }
    a2 = (const char *)*v5;
    LODWORD(ptr) = v36 + 1;
    sub_79B440(v35, a2, 0, &ptr, 4, 65);
    *((_DWORD *)v5 + 16) = 1;
  }
  v7 = v5[2];
  v8 = *(_QWORD *)(a3 + 8);
  v39 = 0;
  v9 = (_QWORD *)(((_QWORD)v3 << 6) + v7);
  ptr = nullptr;
  if ( v8 )
  {
    v33 = (void *)qalloc_or_throw(v8, a2);
    a2 = *(const char **)a3;
    v39.m128i_i64[1] = v8;
    ptr = v33;
    memcpy(v33, a2, v8);
    v39.m128i_i64[0] = v8;
  }
  v10 = *(_QWORD *)(a3 + 24);
  v40 = v10;
  if ( v10 )
    ++*(_DWORD *)(v10 + 12);
  v11 = *(_QWORD *)(a3 + 40);
  v41 = nullptr;
  v42 = 0;
  if ( v11 )
  {
    n = v11;
    v31 = (void *)qalloc_or_throw(v11, a2);
    v32 = *(const void **)(a3 + 32);
    v41 = v31;
    v42.m128i_i64[1] = n;
    memcpy(v31, v32, n);
    v42.m128i_i64[0] = n;
  }
  v12 = *(_DWORD *)(a3 + 56);
  v13 = *(_BYTE *)(a3 + 60);
  v43 = v12;
  v44 = v13;
  v14 = v5[2];
  v15 = v5[3];
  v16 = (char *)v9 - v14;
  if ( v5[4] < (unsigned __int64)(v15 + 1) )
  {
    v30 = qvector_reserve(v5 + 2, v14, v15 + 1, 64);
    v16 = (char *)v9 - v14;
    v15 = v5[3];
    v5[2] = v30;
    v9 = (_QWORD *)((char *)v9 + v30 - v14);
  }
  memmove(v9 + 8, v9, (v15 << 6) - (_QWORD)v16);
  v17 = ptr;
  v18 = _mm_loadu_si128(&v39);
  v9[3] = v10;
  *v9 = v17;
  *(__m128i *)(v9 + 1) = v18;
  v19 = v41;
  v20 = _mm_loadu_si128(&v42);
  if ( v10 )
  {
    ++*(_DWORD *)(v10 + 12);
    v9[4] = v19;
    *(__m128i *)(v9 + 5) = v20;
    v21 = v43;
    *((_BYTE *)v9 + 60) = v13;
    *((_DWORD *)v9 + 14) = v21;
    ++v5[3];
    --*(_DWORD *)(v10 + 12);
  }
  else
  {
    v9[4] = v41;
    *(__m128i *)(v9 + 5) = v20;
    v34 = v43;
    *((_BYTE *)v9 + 60) = v13;
    *((_DWORD *)v9 + 14) = v34;
    ++v5[3];
  }
  if ( (unsigned __int8)sub_78EE60(*v5) )
  {
    v27 = v5 + 1;
    v28 = sub_5096E0(v5[2] + ((_QWORD)v3 << 6), *v5);
    if ( *((_DWORD *)v5 + 2) == -1 )
    {
      sub_79BC40(v27, *v5, "$ scriptsnippets", 0);
      v27 = v5 + 1;
    }
    sub_79B990(
      v27,
      *v5,
      (unsigned int)v3,
      (unsigned int)((_DWORD)v3 + 1),
      (unsigned int)(*((_DWORD *)v5 + 6) + ~(_DWORD)v3),
      65);
    v29 = *v5;
    LODWORD(ptr) = v28 + 1;
    sub_79B440(v27, v29, (unsigned int)v3, &ptr, 4, 65);
  }
  *a1[2] = (__int64)v3;
  v22 = (__int64 (__fastcall *)())(*a1)[8];
  if ( v22 != sub_50A8F0 )
    return ((__int64 (__fastcall *)(__int64 **, __int64))v22)(a1, 2);
  v23 = a1[1];
  if ( (unsigned __int8)sub_78EE60(*v23) )
  {
    v24 = v23 + 1;
    if ( *((_DWORD *)v23 + 2) == -1 )
    {
      sub_79BC40(v24, *v23, "$ scriptsnippets", 0);
      v24 = v23 + 1;
    }
    v25 = *v23;
    LODWORD(ptr) = v23[9];
    sub_79B440(v24, v25, 1, &ptr, 4, 89);
  }
  return v45 - __readfsqword(0x28u);
}

