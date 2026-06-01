__int64 __fastcall sub_521DF0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // r12
  void *v6; // rdi
  __int64 v7; // rax
  void *v8; // rdi
  __int64 v10; // rbp
  void *v11; // r13
  __m128i v12; // xmm0
  void *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  void *v16; // r13
  __m128i v17; // xmm0
  void *v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rbp
  __int64 v21; // rsi
  __int64 v22; // rsi
  __m128i v23; // [rsp+0h] [rbp-88h] BYREF
  void *v24; // [rsp+10h] [rbp-78h] BYREF
  __m128i v25; // [rsp+18h] [rbp-70h] BYREF
  __int64 v26; // [rsp+28h] [rbp-60h]
  void *ptr; // [rsp+30h] [rbp-58h]
  __m128i v28; // [rsp+38h] [rbp-50h] BYREF
  __int64 v29; // [rsp+48h] [rbp-40h]
  char v30; // [rsp+50h] [rbp-38h]
  unsigned __int64 v31; // [rsp+58h] [rbp-30h]

  v3 = *a1;
  v31 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_7AF760(v3) )
  {
    v4 = a1[2] + 72 * a2;
    if ( *(_QWORD *)(v4 + 56) != -1 )
      sub_7BF0F0(v4 + 56);
  }
  if ( (unsigned __int64)a1[3] <= 1 )
  {
    sub_521230((__int64)&v24, "Default snippet", 0);
    v10 = a1[2];
    v11 = v24;
    v24 = nullptr;
    v12 = _mm_loadu_si128(&v25);
    v25 = 0;
    v13 = *(void **)v10;
    if ( *(_QWORD *)v10 )
    {
      *(_QWORD *)(v10 + 8) = 0;
      v23 = v12;
      qfree(v13);
      v12 = _mm_load_si128(&v23);
    }
    v14 = *(_QWORD *)(v10 + 24);
    *(_QWORD *)v10 = v11;
    *(__m128i *)(v10 + 8) = v12;
    if ( v14 )
      --*(_DWORD *)(v14 + 12);
    v15 = v26;
    *(_QWORD *)(v10 + 24) = v26;
    if ( v15 )
      ++*(_DWORD *)(v15 + 12);
    v16 = ptr;
    v17 = _mm_loadu_si128(&v28);
    ptr = nullptr;
    v28 = 0;
    v18 = *(void **)(v10 + 32);
    if ( v18 )
    {
      *(_QWORD *)(v10 + 40) = 0;
      v23 = v17;
      qfree(v18);
      v17 = _mm_load_si128(&v23);
    }
    *(_QWORD *)(v10 + 32) = v16;
    *(__m128i *)(v10 + 40) = v17;
    *(_QWORD *)(v10 + 56) = v29;
    *(_BYTE *)(v10 + 64) = v30;
    if ( ptr )
    {
      v28.m128i_i64[0] = 0;
      qfree(ptr);
    }
    if ( v26 )
      --*(_DWORD *)(v26 + 12);
    if ( v24 )
    {
      v25.m128i_i64[0] = 0;
      qfree(v24);
    }
    if ( (unsigned __int8)sub_7AF760(*a1) )
    {
      v19 = (__int64)(a1 + 1);
      v20 = sub_5216C0(a1[2], *a1);
      if ( a1[1] == -1 )
      {
        v22 = *a1;
        v23.m128i_i64[0] = (__int64)(a1 + 1);
        sub_7BF040(v19, v22, "$ scriptsnippets", 0);
        v19 = v23.m128i_i64[0];
      }
      v21 = *a1;
      v24 = (void *)(v20 + 1);
      sub_7BE7C0(v19, v21, 0, &v24, 8, 65);
      *((_DWORD *)a1 + 16) = 1;
    }
    return v31 - __readfsqword(0x28u);
  }
  v5 = a1[2] + 72 * a2;
  v6 = *(void **)(v5 + 32);
  if ( v6 )
  {
    *(_QWORD *)(v5 + 40) = 0;
    qfree(v6);
  }
  v7 = *(_QWORD *)(v5 + 24);
  if ( v7 )
    --*(_DWORD *)(v7 + 12);
  v8 = *(void **)v5;
  if ( *(_QWORD *)v5 )
  {
    *(_QWORD *)(v5 + 8) = 0;
    qfree(v8);
  }
  memmove((void *)v5, (const void *)(v5 + 72), a1[2] + 72 * a1[3]-- - v5 - 72);
  if ( !(unsigned __int8)sub_7AF760(*a1) )
    return v31 - __readfsqword(0x28u);
  if ( a1[1] == -1 )
    sub_7BF040(a1 + 1, *a1, "$ scriptsnippets", 0);
  return sub_7BED70(a1 + 1, *a1, a2 + 1, a2, a1[3] - a2, 65);
}
