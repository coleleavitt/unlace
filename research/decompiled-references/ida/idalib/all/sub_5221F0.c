__int64 __fastcall sub_5221F0(__int64 **a1, __int64 a2, __int64 a3)
{
  __int64 *v4; // rbx
  __int64 v6; // rbp
  size_t v7; // r12
  _QWORD *v8; // rbp
  __int64 v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rax
  char v12; // r15
  __int64 v13; // rsi
  __int64 v14; // rax
  char *v15; // r9
  void *v16; // rax
  __m128i v17; // xmm0
  void *v18; // rax
  __m128i v19; // xmm0
  __int64 v20; // rax
  __int64 (__fastcall *v21)(); // rax
  __int64 *v22; // rbx
  _QWORD *v23; // rdi
  __int64 v24; // rsi
  __int64 v26; // rbp
  __int64 v27; // rsi
  __int64 v28; // rax
  void *v29; // rax
  const void *v30; // rsi
  void *v31; // rax
  const void *v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rbp
  __int64 v35; // rsi
  __int64 n; // [rsp+8h] [rbp-90h]
  void *ptr; // [rsp+10h] [rbp-88h] BYREF
  __m128i v38; // [rsp+18h] [rbp-80h] BYREF
  __int64 v39; // [rsp+28h] [rbp-70h]
  void *v40; // [rsp+30h] [rbp-68h]
  __m128i v41; // [rsp+38h] [rbp-60h] BYREF
  __int64 v42; // [rsp+48h] [rbp-50h]
  char v43; // [rsp+50h] [rbp-48h]
  unsigned __int64 v44; // [rsp+58h] [rbp-40h]

  v4 = a1[1];
  v44 = __readfsqword(0x28u);
  if ( *((_DWORD *)v4 + 16) == 3 )
  {
    v34 = sub_5216C0(v4[2], *v4);
    if ( v4[1] == -1 )
      sub_7BF040(v4 + 1, *v4, "$ scriptsnippets", 0);
    v35 = *v4;
    ptr = (void *)(v34 + 1);
    sub_7BE7C0(v4 + 1, v35, 0, &ptr, 8, 65);
    *((_DWORD *)v4 + 16) = 1;
  }
  v6 = v4[2];
  v7 = *(_QWORD *)(a3 + 8);
  v38 = 0;
  v8 = (_QWORD *)(72 * a2 + v6);
  ptr = nullptr;
  if ( v7 )
  {
    v31 = (void *)qalloc_or_throw(v7);
    v32 = *(const void **)a3;
    v38.m128i_i64[1] = v7;
    ptr = v31;
    memcpy(v31, v32, v7);
    v38.m128i_i64[0] = v7;
  }
  v9 = *(_QWORD *)(a3 + 24);
  v39 = v9;
  if ( v9 )
    ++*(_DWORD *)(v9 + 12);
  v10 = *(_QWORD *)(a3 + 40);
  v40 = nullptr;
  v41 = 0;
  if ( v10 )
  {
    n = v10;
    v29 = (void *)qalloc_or_throw(v10);
    v30 = *(const void **)(a3 + 32);
    v40 = v29;
    v41.m128i_i64[1] = n;
    memcpy(v29, v30, n);
    v41.m128i_i64[0] = n;
  }
  v11 = *(_QWORD *)(a3 + 56);
  v12 = *(_BYTE *)(a3 + 64);
  v42 = v11;
  v43 = v12;
  v13 = v4[2];
  v14 = v4[3];
  v15 = (char *)v8 - v13;
  if ( v4[4] < (unsigned __int64)(v14 + 1) )
  {
    v28 = qvector_reserve(v4 + 2, v13, v14 + 1, 72);
    v15 = (char *)v8 - v13;
    v4[2] = v28;
    v8 = (_QWORD *)((char *)v8 + v28 - v13);
    v14 = v4[3];
  }
  memmove(v8 + 9, v8, 72 * v14 - (_QWORD)v15);
  v16 = ptr;
  v17 = _mm_loadu_si128(&v38);
  v8[3] = v9;
  *v8 = v16;
  *(__m128i *)(v8 + 1) = v17;
  v18 = v40;
  v19 = _mm_loadu_si128(&v41);
  if ( v9 )
  {
    ++*(_DWORD *)(v9 + 12);
    v8[4] = v18;
    *(__m128i *)(v8 + 5) = v19;
    v20 = v42;
    *((_BYTE *)v8 + 64) = v12;
    v8[7] = v20;
    ++v4[3];
    --*(_DWORD *)(v9 + 12);
  }
  else
  {
    v8[4] = v40;
    *(__m128i *)(v8 + 5) = v19;
    v33 = v42;
    *((_BYTE *)v8 + 64) = v12;
    v8[7] = v33;
    ++v4[3];
  }
  if ( (unsigned __int8)sub_7AF760(*v4) )
  {
    v26 = sub_5216C0(v4[2] + 72 * a2, *v4);
    if ( v4[1] == -1 )
      sub_7BF040(v4 + 1, *v4, "$ scriptsnippets", 0);
    sub_7BED70(v4 + 1, *v4, a2, a2 + 1, v4[3] + ~a2, 65);
    v27 = *v4;
    ptr = (void *)(v26 + 1);
    sub_7BE7C0(v4 + 1, v27, a2, &ptr, 8, 65);
  }
  *a1[2] = a2;
  v21 = (__int64 (__fastcall *)())(*a1)[8];
  if ( v21 != sub_522900 )
    return ((__int64 (__fastcall *)(__int64 **, __int64))v21)(a1, 2);
  v22 = a1[1];
  if ( (unsigned __int8)sub_7AF760(*v22) )
  {
    v23 = v22 + 1;
    if ( v22[1] == -1 )
    {
      sub_7BF040(v23, *v22, "$ scriptsnippets", 0);
      v23 = v22 + 1;
    }
    v24 = *v22;
    ptr = (void *)v22[9];
    sub_7BE7C0(v23, v24, 1, &ptr, 8, 89);
  }
  return v44 - __readfsqword(0x28u);
}
